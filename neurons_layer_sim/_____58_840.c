#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_48047720;

Block __47885720;

Block __47885560;

Block __47884820;

void code__47884820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47669260(),_58137_47886100___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47884820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47884820 = block;
   block->owner = (Object)__47885560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47884820;

   return block;
};

void code__47885560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47669340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47884820();
   }
      }
   }
}

Block make__47885560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47885560 = block;
   block->owner = (Object)__47885720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47885560;

   return block;
};

Block __47884100;

Block __47883420;

void code__47883420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48037700(),_5875_47886940___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47883420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47883420 = block;
   block->owner = (Object)__47884100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47883420;

   return block;
};

void code__47884100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48037780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47883420();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48037640(),_5874_47887080___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47884100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47884100 = block;
   block->owner = (Object)__47885720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47884100;

   return block;
};

Block __47938760;

Block __47938080;

void code__47938080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48037480(),_5846_47887380___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47938080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47938080 = block;
   block->owner = (Object)__47938760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47938080;

   return block;
};

void code__47938760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48037560();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47938080();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48037420(),_5845_47887820___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47938760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47938760 = block;
   block->owner = (Object)__47885720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47938760;

   return block;
};

Block __47937040;

Block __47936420;

void code__47936420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48037260(),_5817_47888260___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47936420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47936420 = block;
   block->owner = (Object)__47937040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47936420;

   return block;
};

void code__47937040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48037340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47936420();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48037200(),_5816_47888460___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47937040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47937040 = block;
   block->owner = (Object)__47885720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47937040;

   return block;
};

Block __47935680;

Block __47935040;

void code__47935040() {
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
                  src0 = _5817_47888260___42515000______58_840_48047720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48036980();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5817_47888260___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48036880(),_5816_47888460___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_47885900___42515000______58_840_48047720->c_value,_5818_47887880___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47935040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47935040 = block;
   block->owner = (Object)__47935680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47935040;

   return block;
};

void code__47935680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48037120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47935040();
   }
      }
   }
}

Block make__47935680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47935680 = block;
   block->owner = (Object)__47885720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47935680;

   return block;
};

Block __47932880;

Block __47932300;

void code__47932300() {
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
                  src0 = _5846_47887380___42515000______58_840_48047720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48036580();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5846_47887380___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48036480(),_5845_47887820___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_47885900___42515000______58_840_48047720->c_value,_5847_47887280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47932300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47932300 = block;
   block->owner = (Object)__47932880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47932300;

   return block;
};

void code__47932880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48036720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47932300();
   }
      }
   }
}

Block make__47932880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47932880 = block;
   block->owner = (Object)__47885720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47932880;

   return block;
};

Block __47988120;

Block __47987800;

void code__47987800() {
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
                  src0 = _5875_47886940___42515000______58_840_48047720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48036180();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5875_47886940___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48036080(),_5874_47887080___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_47885900___42515000______58_840_48047720->c_value,_5876_47886660___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47987800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47987800 = block;
   block->owner = (Object)__47988120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47987800;

   return block;
};

void code__47988120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48036320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47987800();
   }
      }
   }
}

Block make__47988120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47988120 = block;
   block->owner = (Object)__47885720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47988120;

   return block;
};

Block __47986720;

Block __47986400;

Block __47985940;

void code__47985940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = make__48035560();
      src1 = make__48035540();
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58135_47886480___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47985940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47985940 = block;
   block->owner = (Object)__47986400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47985940;

   return block;
};

Block __47984980;

void code__47984980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = make__48035280();
      src1 = make__48035260();
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58136_47886180___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47984980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47984980 = block;
   block->owner = (Object)__47986400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47984980;

   return block;
};

void code__47986400() {
{
      Value value = _58137_47886100___42515000______58_840_48047720->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__48035800())) {
    code__47985940();
         }
         else if (value2integer(value) == value2integer(make__48035480())) {
    code__47984980();
         }
      }
   }
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
                  src0 = _58137_47886100___42515000______58_840_48047720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48034640();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58137_47886100___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47986400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47986400 = block;
   block->owner = (Object)__47986720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47986400;

   return block;
};

void code__47986720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48035920();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47986400();
   }
      }
   }
}

Block make__47986720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47986720 = block;
   block->owner = (Object)__47885720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47986720;

   return block;
};

void code__47885720() {
 code__47885560();
 code__47884100();
 code__47938760();
 code__47937040();
 code__47935680();
 code__47932880();
 code__47988120();
 code__47986720();
}

Block make__47885720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47885720 = block;
   block->owner = (Object)__47983180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47885720;

   return block;
};

Block __47983060;

void code__47983060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48034040(),req_47855160___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48033680(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48033180(),rst_47855180___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48033120(),val_47885900___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48032640(),rst_47855180___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48032580(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48032060(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48031700(),rst_47855180___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48029880(),val_47885900___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48005040(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004980(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004920(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004860(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004800(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004740(),req_47855160___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004680(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004620(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004560(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004500(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004440(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004380(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004320(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004260(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004200(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004100(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48004040(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48003980(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48003920(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48003820(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48003680(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48003620(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48003560(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48003420(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48003360(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48003300(),clk_47855200___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__48047840);
}

Block make__47983060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47983060 = block;
   block->owner = (Object)__48047840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47983060;

   return block;
};

Block __41731360;

Block __40396640;

void code__40396640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_42012820___42513800___42515000______58_840_48047720->c_value,make_ref_rangeS(mem_42008820___42513800___42515000______58_840_48047720,value2integer(abus__w_42010360___42513800___42515000______58_840_48047720->c_value),value2integer(abus__w_42010360___42513800___42515000______58_840_48047720->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__40396640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __40396640 = block;
   block->owner = (Object)__41731360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__40396640;

   return block;
};

void code__41731360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_42008820___42513800___42515000______58_840_48047720->c_value;
            idx = value2integer(abus__r_42011980___42513800___42515000______58_840_48047720->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_42013560___42513800___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_42015480___42513800___42515000______58_840_48047720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__40396640();
   }
      }
   }
}

Block make__41731360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __41731360 = block;
   block->owner = (Object)__39988940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__41731360;

   return block;
};

Block __48142160;

void code__48142160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_42013560___42513800___42515000______58_840_48047720->c_value,_5814_47855020___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48142160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48142160 = block;
   block->owner = (Object)__48141960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48142160;

   return block;
};

Block __48141900;

void code__48141900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_47855020___42515000______58_840_48047720->c_value,dbus__r_42013560___42513800___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48141900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48141900 = block;
   block->owner = (Object)__48141580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48141900;

   return block;
};

Block __48141240;

void code__48141240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_42015820___42513800___42515000______58_840_48047720->c_value,_5812_47855000___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48141240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48141240 = block;
   block->owner = (Object)__48141080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48141240;

   return block;
};

Block __48141040;

void code__48141040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5812_47855000___42515000______58_840_48047720->c_value,trig__r_42015820___42513800___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48141040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48141040 = block;
   block->owner = (Object)__48140880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48141040;

   return block;
};

Block __48140580;

void code__48140580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_42011980___42513800___42515000______58_840_48047720->c_value,_5813_47854880___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48140580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48140580 = block;
   block->owner = (Object)__48140420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48140580;

   return block;
};

Block __48140380;

void code__48140380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_47854880___42515000______58_840_48047720->c_value,abus__r_42011980___42513800___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48140380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48140380 = block;
   block->owner = (Object)__48140220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48140380;

   return block;
};

Block __48139920;

void code__48139920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_42015480___42513800___42515000______58_840_48047720->c_value,_5816_47888460___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48139920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48139920 = block;
   block->owner = (Object)__48139760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48139920;

   return block;
};

Block __48139720;

void code__48139720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5816_47888460___42515000______58_840_48047720->c_value,trig__w_42015480___42513800___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48139720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48139720 = block;
   block->owner = (Object)__48139560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48139720;

   return block;
};

Block __48139260;

void code__48139260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_42010360___42513800___42515000______58_840_48047720->c_value,_5817_47888260___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48139260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48139260 = block;
   block->owner = (Object)__48139100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48139260;

   return block;
};

Block __48139060;

void code__48139060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_47888260___42515000______58_840_48047720->c_value,abus__w_42010360___42513800___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48139060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48139060 = block;
   block->owner = (Object)__48138900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48139060;

   return block;
};

Block __48138560;

void code__48138560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_42012820___42513800___42515000______58_840_48047720->c_value,_5818_47887880___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48138560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48138560 = block;
   block->owner = (Object)__48138400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48138560;

   return block;
};

Block __48138360;

void code__48138360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_47887880___42515000______58_840_48047720->c_value,dbus__w_42012820___42513800___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48138360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48138360 = block;
   block->owner = (Object)__48138200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48138360;

   return block;
};

Block __48238120;

Block __48237380;

void code__48237380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48240420___39952620___42515000______58_840_48047720->c_value,make_ref_rangeS(mem_48240000___39952620___42515000______58_840_48047720,value2integer(abus__w_48240200___39952620___42515000______58_840_48047720->c_value),value2integer(abus__w_48240200___39952620___42515000______58_840_48047720->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48237380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48237380 = block;
   block->owner = (Object)__48238120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48237380;

   return block;
};

void code__48238120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48240000___39952620___42515000______58_840_48047720->c_value;
            idx = value2integer(abus__r_48240300___39952620___42515000______58_840_48047720->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48240580___39952620___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48240660___39952620___42515000______58_840_48047720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48237380();
   }
      }
   }
}

Block make__48238120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48238120 = block;
   block->owner = (Object)__39991820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48238120;

   return block;
};

Block __48136400;

void code__48136400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48240580___39952620___42515000______58_840_48047720->c_value,_5843_47854720___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48136400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48136400 = block;
   block->owner = (Object)__48177080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48136400;

   return block;
};

Block __48177040;

void code__48177040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_47854720___42515000______58_840_48047720->c_value,dbus__r_48240580___39952620___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48177040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48177040 = block;
   block->owner = (Object)__48176840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48177040;

   return block;
};

Block __48176140;

void code__48176140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48240680___39952620___42515000______58_840_48047720->c_value,_5841_47854700___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48176140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48176140 = block;
   block->owner = (Object)__48175940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48176140;

   return block;
};

Block __48175900;

void code__48175900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5841_47854700___42515000______58_840_48047720->c_value,trig__r_48240680___39952620___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48175900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48175900 = block;
   block->owner = (Object)__48175660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48175900;

   return block;
};

Block __48175200;

void code__48175200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48240300___39952620___42515000______58_840_48047720->c_value,_5842_47849980___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48175200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48175200 = block;
   block->owner = (Object)__48175040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48175200;

   return block;
};

Block __48175000;

void code__48175000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5842_47849980___42515000______58_840_48047720->c_value,abus__r_48240300___39952620___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48175000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48175000 = block;
   block->owner = (Object)__48174840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48175000;

   return block;
};

Block __48174540;

void code__48174540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48240660___39952620___42515000______58_840_48047720->c_value,_5845_47887820___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48174540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48174540 = block;
   block->owner = (Object)__48174380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48174540;

   return block;
};

Block __48174340;

void code__48174340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_47887820___42515000______58_840_48047720->c_value,trig__w_48240660___39952620___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48174340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48174340 = block;
   block->owner = (Object)__48174180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48174340;

   return block;
};

Block __48173840;

void code__48173840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48240200___39952620___42515000______58_840_48047720->c_value,_5846_47887380___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48173840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48173840 = block;
   block->owner = (Object)__48173680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48173840;

   return block;
};

Block __48173640;

void code__48173640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5846_47887380___42515000______58_840_48047720->c_value,abus__w_48240200___39952620___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48173640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48173640 = block;
   block->owner = (Object)__48173480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48173640;

   return block;
};

Block __48173180;

void code__48173180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48240420___39952620___42515000______58_840_48047720->c_value,_5847_47887280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48173180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48173180 = block;
   block->owner = (Object)__48173020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48173180;

   return block;
};

Block __48172980;

void code__48172980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5847_47887280___42515000______58_840_48047720->c_value,dbus__w_48240420___39952620___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48172980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48172980 = block;
   block->owner = (Object)__48172820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48172980;

   return block;
};

Block __42809660;

Block __43469940;

void code__43469940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_42710800___40382900___42515000______58_840_48047720->c_value,make_ref_rangeS(mem_42708480___40382900___42515000______58_840_48047720,value2integer(abus__w_42709860___40382900___42515000______58_840_48047720->c_value),value2integer(abus__w_42709860___40382900___42515000______58_840_48047720->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__43469940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43469940 = block;
   block->owner = (Object)__42809660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43469940;

   return block;
};

void code__42809660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_42708480___40382900___42515000______58_840_48047720->c_value;
            idx = value2integer(abus__r_42710620___40382900___42515000______58_840_48047720->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_42710940___40382900___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_42711340___40382900___42515000______58_840_48047720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__43469940();
   }
      }
   }
}

Block make__42809660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42809660 = block;
   block->owner = (Object)__43530600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42809660;

   return block;
};

Block __48170940;

void code__48170940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_42710940___40382900___42515000______58_840_48047720->c_value,_5872_47890160___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48170940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48170940 = block;
   block->owner = (Object)__48170780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48170940;

   return block;
};

Block __48170740;

void code__48170740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5872_47890160___42515000______58_840_48047720->c_value,dbus__r_42710940___40382900___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48170740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48170740 = block;
   block->owner = (Object)__48170580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48170740;

   return block;
};

Block __48170280;

void code__48170280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_42711440___40382900___42515000______58_840_48047720->c_value,_5870_47890140___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48170280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48170280 = block;
   block->owner = (Object)__48170120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48170280;

   return block;
};

Block __48170080;

void code__48170080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5870_47890140___42515000______58_840_48047720->c_value,trig__r_42711440___40382900___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48170080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48170080 = block;
   block->owner = (Object)__48169920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48170080;

   return block;
};

Block __48169620;

void code__48169620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_42710620___40382900___42515000______58_840_48047720->c_value,_5871_47889960___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48169620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48169620 = block;
   block->owner = (Object)__48169460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48169620;

   return block;
};

Block __48169420;

void code__48169420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5871_47889960___42515000______58_840_48047720->c_value,abus__r_42710620___40382900___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48169420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48169420 = block;
   block->owner = (Object)__48169260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48169420;

   return block;
};

Block __48209880;

void code__48209880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_42711340___40382900___42515000______58_840_48047720->c_value,_5874_47887080___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48209880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48209880 = block;
   block->owner = (Object)__48209720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48209880;

   return block;
};

Block __48209680;

void code__48209680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5874_47887080___42515000______58_840_48047720->c_value,trig__w_42711340___40382900___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48209680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48209680 = block;
   block->owner = (Object)__48209520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48209680;

   return block;
};

Block __48209180;

void code__48209180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_42709860___40382900___42515000______58_840_48047720->c_value,_5875_47886940___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48209180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48209180 = block;
   block->owner = (Object)__48208800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48209180;

   return block;
};

Block __48208760;

void code__48208760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5875_47886940___42515000______58_840_48047720->c_value,abus__w_42709860___40382900___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48208760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48208760 = block;
   block->owner = (Object)__48208480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48208760;

   return block;
};

Block __48208060;

void code__48208060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_42710800___40382900___42515000______58_840_48047720->c_value,_5876_47886660___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48208060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48208060 = block;
   block->owner = (Object)__48207900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48208060;

   return block;
};

Block __48207860;

void code__48207860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5876_47886660___42515000______58_840_48047720->c_value,dbus__w_42710800___40382900___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48207860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48207860 = block;
   block->owner = (Object)__48207700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48207860;

   return block;
};

Block __48205900;

void code__48205900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_43895940___43529800___42515000______58_840_48047720->c_value,_5889_47889660___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48205900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48205900 = block;
   block->owner = (Object)__48205740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48205900;

   return block;
};

Block __48205700;

void code__48205700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5889_47889660___42515000______58_840_48047720->c_value,reg__0_43895940___43529800___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48205700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48205700 = block;
   block->owner = (Object)__48205540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48205700;

   return block;
};

Block __48205240;

void code__48205240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_43895160___43529800___42515000______58_840_48047720->c_value,_5890_47889580___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48205240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48205240 = block;
   block->owner = (Object)__48205080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48205240;

   return block;
};

Block __48205040;

void code__48205040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_47889580___42515000______58_840_48047720->c_value,reg__1_43895160___43529800___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48205040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48205040 = block;
   block->owner = (Object)__48204880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48205040;

   return block;
};

Block __44076180;

Block __45562900;

Block __45559660;

void code__45559660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47916600(),_5842_47849980___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__45559660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45559660 = block;
   block->owner = (Object)__45562900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45559660;

   return block;
};

void code__45562900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47920600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45559660();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47915840(),_5841_47854700___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__45562900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45562900 = block;
   block->owner = (Object)__44076180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45562900;

   return block;
};

Block __45595300;

Block __45458160;

void code__45458160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47873780(),_5813_47854880___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__45458160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45458160 = block;
   block->owner = (Object)__45595300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45458160;

   return block;
};

void code__45595300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47915700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45458160();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47873660(),_5812_47855000___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__45595300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45595300 = block;
   block->owner = (Object)__44076180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45595300;

   return block;
};

Block __45643620;

Block __45641040;

void code__45641040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47873300(),_5871_47889960___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__45641040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45641040 = block;
   block->owner = (Object)__45643620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45641040;

   return block;
};

void code__45643620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47873380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45641040();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47873140(),_5870_47890140___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__45643620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45643620 = block;
   block->owner = (Object)__44076180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45643620;

   return block;
};

Block __45817000;

Block __45816440;

Block __45814920;

Block __45945360;

void code__45945360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5872_47890160___42515000______58_840_48047720->c_value,rv_44077740___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47871780(),rvok_44077440___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__45945360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45945360 = block;
   block->owner = (Object)__45814920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45945360;

   return block;
};

void code__45814920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5870_47890140___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47872200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45945360();
   }
      }
   }
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
                  src0 = _5871_47889960___42515000______58_840_48047720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47871500();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5871_47889960___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47871180(),_5870_47890140___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__45814920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45814920 = block;
   block->owner = (Object)__45816440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45814920;

   return block;
};

void code__45816440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47872380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45814920();
   }
      }
   }
}

Block make__45816440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45816440 = block;
   block->owner = (Object)__45817000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45816440;

   return block;
};

Block __45940840;

Block __45986380;

Block __45985060;

void code__45985060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_47855020___42515000______58_840_48047720->c_value,lv0_44080260___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47870580(),lvok0_44077640___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__45985060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45985060 = block;
   block->owner = (Object)__45986380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45985060;

   return block;
};

void code__45986380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5812_47855000___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47870820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45985060();
   }
      }
   }
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
                  src0 = _5813_47854880___42515000______58_840_48047720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47870440();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5813_47854880___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47870340(),_5812_47855000___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__45986380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45986380 = block;
   block->owner = (Object)__45940840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45986380;

   return block;
};

void code__45940840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47871040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45986380();
   }
      }
   }
}

Block make__45940840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45940840 = block;
   block->owner = (Object)__45817000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45940840;

   return block;
};

Block __46106800;

Block __46187080;

Block __47423220;

void code__47423220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_44079740___42948440___42515000______58_840_48047720->c_value,_5889_47889660___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47423220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47423220 = block;
   block->owner = (Object)__46187080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47423220;

   return block;
};

void code__46187080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_44079740___42948440___42515000______58_840_48047720->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = lv0_44080260___42948440___42515000______58_840_48047720->c_value;
            src1 = rv_44077740___42948440___42515000______58_840_48047720->c_value;
            dst = mul_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_44079740___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
 code__47423220();
}

Block make__46187080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46187080 = block;
   block->owner = (Object)__46106800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46187080;

   return block;
};

void code__46106800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47869820(),ack_65_47889440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47869500(),run_44077380___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
 code__46187080();
}

Block make__46106800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46106800 = block;
   block->owner = (Object)__45817000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46106800;

   return block;
};

Block __47422640;

Block __47422100;

Block __47420620;

void code__47420620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_47854720___42515000______58_840_48047720->c_value,lv1_44079940___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47868240(),lvok1_44077560___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47420620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47420620 = block;
   block->owner = (Object)__47422100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47420620;

   return block;
};

void code__47422100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5841_47854700___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47868640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47420620();
   }
      }
   }
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
                  src0 = _5842_47849980___42515000______58_840_48047720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47868120();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5842_47849980___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47868020(),_5841_47854700___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47422100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47422100 = block;
   block->owner = (Object)__47422640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47422100;

   return block;
};

void code__47422640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47855180___42515000______58_840_48047720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47868820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47422100();
   }
      }
   }
}

Block make__47422640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47422640 = block;
   block->owner = (Object)__45817000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47422640;

   return block;
};

Block __47418360;

Block __47417680;

Block __47416760;

void code__47416760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_44078400___42948440___42515000______58_840_48047720->c_value,_5890_47889580___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47416760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47416760 = block;
   block->owner = (Object)__47417680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47416760;

   return block;
};

void code__47417680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_44078400___42948440___42515000______58_840_48047720->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = lv1_44079940___42948440___42515000______58_840_48047720->c_value;
            src1 = rv_44077740___42948440___42515000______58_840_48047720->c_value;
            dst = mul_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_44078400___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
 code__47416760();
}

Block make__47417680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47417680 = block;
   block->owner = (Object)__47418360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47417680;

   return block;
};

void code__47418360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47867780(),ack_65_47889440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47867660(),run_44077380___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
 code__47417680();
}

Block make__47418360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47418360 = block;
   block->owner = (Object)__45817000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47418360;

   return block;
};

void code__45817000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47872460(),run_44077380___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
 code__45816440();
 code__45940840();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_44077640___42948440___42515000______58_840_48047720->c_value;
         src1 = rvok_44077440___42948440___42515000______58_840_48047720->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46106800();
   }
      }
   }
 code__47422640();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_44077560___42948440___42515000______58_840_48047720->c_value;
         src1 = rvok_44077440___42948440___42515000______58_840_48047720->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47418360();
   }
      }
   }
}

Block make__45817000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45817000 = block;
   block->owner = (Object)__44076180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45817000;

   return block;
};

Block __45700580;

void code__45700580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47867100(),rvok_44077440___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47866980(),lvok0_44077640___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47866900(),av0_44079740___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47866780(),lvok1_44077560___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47866700(),av1_44078400___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__45700580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45700580 = block;
   block->owner = (Object)__44076180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45700580;

   return block;
};

void code__44076180() {
 code__45562900();
 code__45595300();
 code__45643620();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47872860(),ack_65_47889440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47872800(),run_44077380___42948440___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_47855160___42515000______58_840_48047720->c_value;
         src1 = run_44077380___42948440___42515000______58_840_48047720->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45817000();
   }
   else {
  code__45700580();
   }
      }
   }
}

Block make__44076180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44076180 = block;
   block->owner = (Object)__47415580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44076180;

   return block;
};

Block __48202840;

void code__48202840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_46970360___47415400___42515000______58_840_48047720->c_value,_58120_47889300___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48202840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48202840 = block;
   block->owner = (Object)__48202680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48202840;

   return block;
};

Block __48202640;

void code__48202640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58120_47889300___42515000______58_840_48047720->c_value,reg__0_46970360___47415400___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48202640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48202640 = block;
   block->owner = (Object)__48202480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48202640;

   return block;
};

Block __48202180;

void code__48202180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_46969800___47415400___42515000______58_840_48047720->c_value,_58121_47889020___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48202180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48202180 = block;
   block->owner = (Object)__48201980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48202180;

   return block;
};

Block __48201940;

void code__48201940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58121_47889020___42515000______58_840_48047720->c_value,reg__1_46969800___47415400___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__48201940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48201940 = block;
   block->owner = (Object)__48201780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48201940;

   return block;
};

Block __43489360;

void code__43489360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_46970360___47415400___42515000______58_840_48047720->c_value,_58135_47886480___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__43489360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43489360 = block;
   block->owner = (Object)__43488740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43489360;

   return block;
};

Block __43488300;

void code__43488300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58135_47886480___42515000______58_840_48047720->c_value,reg__0_46970360___47415400___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__43488300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43488300 = block;
   block->owner = (Object)__43487500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43488300;

   return block;
};

Block __43486860;

void code__43486860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_46969800___47415400___42515000______58_840_48047720->c_value,_58136_47886180___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__43486860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43486860 = block;
   block->owner = (Object)__43485800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43486860;

   return block;
};

Block __43485080;

void code__43485080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58136_47886180___42515000______58_840_48047720->c_value,reg__1_46969800___47415400___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__43485080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43485080 = block;
   block->owner = (Object)__43305740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43485080;

   return block;
};

Block __42734180;

void code__42734180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47753380___47753900___47415400___42515000______58_840_48047720->c_value,_58137_47886100___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__42734180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42734180 = block;
   block->owner = (Object)__42730120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42734180;

   return block;
};

Block __42729980;

void code__42729980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58137_47886100___42515000______58_840_48047720->c_value,abus__w_47753380___47753900___47415400___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__42729980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42729980 = block;
   block->owner = (Object)__42687680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42729980;

   return block;
};

Block __42681840;

void code__42681840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47591280___46967260___42515000______58_840_48047720->c_value,_58150_47888800___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__42681840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42681840 = block;
   block->owner = (Object)__42681480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42681840;

   return block;
};

Block __42681340;

void code__42681340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58150_47888800___42515000______58_840_48047720->c_value,reg__0_47591280___46967260___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__42681340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42681340 = block;
   block->owner = (Object)__42680580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42681340;

   return block;
};

Block __42620360;

void code__42620360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47591200___46967260___42515000______58_840_48047720->c_value,_58151_47888500___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__42620360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42620360 = block;
   block->owner = (Object)__42619400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42620360;

   return block;
};

Block __42619040;

void code__42619040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58151_47888500___42515000______58_840_48047720->c_value,reg__1_47591200___46967260___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__42619040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42619040 = block;
   block->owner = (Object)__42618440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42619040;

   return block;
};

Block __47589180;

Block __47587380;

Block __47660340;

void code__47660340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5889_47889660___42515000______58_840_48047720->c_value,lv0_47589780___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47672440(),lvok0_47589440___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47660340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47660340 = block;
   block->owner = (Object)__47587380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47660340;

   return block;
};

Block __47659480;

void code__47659480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58120_47889300___42515000______58_840_48047720->c_value,rv0_47589560___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47672180(),rvok0_47589380___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47659480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47659480 = block;
   block->owner = (Object)__47587380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47659480;

   return block;
};

Block __47658360;

Block __47657280;

void code__47657280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_47589780___47590280___42515000______58_840_48047720->c_value;
      src1 = rv0_47589560___47590280___42515000______58_840_48047720->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58150_47888800___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47657280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47657280 = block;
   block->owner = (Object)__47658360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47657280;

   return block;
};

void code__47658360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47671880(),run_47589320___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47671820(),ack_66_47888480___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
 code__47657280();
}

Block make__47658360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47658360 = block;
   block->owner = (Object)__47587380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47658360;

   return block;
};

Block __47656440;

void code__47656440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_47889580___42515000______58_840_48047720->c_value,lv1_47589680___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47671120(),lvok1_47589400___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47656440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47656440 = block;
   block->owner = (Object)__47587380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47656440;

   return block;
};

Block __47655340;

void code__47655340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58121_47889020___42515000______58_840_48047720->c_value,rv1_47589460___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47670760(),rvok1_47589360___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47655340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47655340 = block;
   block->owner = (Object)__47587380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47655340;

   return block;
};

Block __47653000;

Block __47856980;

void code__47856980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_47589680___47590280___42515000______58_840_48047720->c_value;
      src1 = rv1_47589460___47590280___42515000______58_840_48047720->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58151_47888500___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47856980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47856980 = block;
   block->owner = (Object)__47653000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47856980;

   return block;
};

void code__47653000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47670180(),run_47589320___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47670120(),ack_66_47888480___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
 code__47856980();
}

Block make__47653000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47653000 = block;
   block->owner = (Object)__47587380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47653000;

   return block;
};

void code__47587380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47672920(),run_47589320___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
 code__47660340();
 code__47659480();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47589440___47590280___42515000______58_840_48047720->c_value;
         src1 = rvok0_47589380___47590280___42515000______58_840_48047720->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47658360();
   }
      }
   }
 code__47656440();
 code__47655340();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_47589400___47590280___42515000______58_840_48047720->c_value;
         src1 = rvok1_47589360___47590280___42515000______58_840_48047720->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47653000();
   }
      }
   }
}

Block make__47587380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47587380 = block;
   block->owner = (Object)__47589180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47587380;

   return block;
};

Block __47588660;

void code__47588660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47669600(),lvok0_47589440___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47669540(),rvok0_47589380___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47669480(),lvok1_47589400___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47669420(),rvok1_47589360___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
}

Block make__47588660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47588660 = block;
   block->owner = (Object)__47589180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47588660;

   return block;
};

void code__47589180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47673340(),ack_66_47888480___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47673280(),run_47589320___47590280___42515000______58_840_48047720);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack_65_47889440___42515000______58_840_48047720->c_value;
         src1 = run_47589320___47590280___42515000______58_840_48047720->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47587380();
   }
   else {
  code__47588660();
   }
      }
   }
}

Block make__47589180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47589180 = block;
   block->owner = (Object)__47855400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47589180;

   return block;
};

Value make__47920600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47916600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47915840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47915700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47873780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47873660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47873380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47873300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47873140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47872860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47872800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47872460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47872380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47872200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47871780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47871500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47871180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47871040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47870820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47870580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47870440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47870340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47869820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47869500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47868820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47868640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47868240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47868120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47868020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47867780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47867660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47867100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47866980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47866900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47866780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47866700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47673340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47673280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47672920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47672440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47672180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47671880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47671820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47671120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47670760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47670180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47670120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47669600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47669540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47669480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47669420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47669340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47669260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48037780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48037700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48037640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48037560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48037480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48037420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48037340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48037260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48037200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48037120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48036980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48036880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48036720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48036580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48036480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48036320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48036180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48036080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48035920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48035800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48035560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48035540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48035480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48035280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48035260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48034640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48034040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48033680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48033180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48033120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48032640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48032580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48032060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48031700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48029880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48005040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48004040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48003980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48003920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48003820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48003680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48003620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48003560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48003420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48003360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48003300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope __42515000;

SignalI clk_47855200___42515000______58_840_48047720;

SignalI makeclk_47855200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_47855200___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
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

SignalI rst_47855180___42515000______58_840_48047720;

SignalI makerst_47855180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_47855180___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
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

SignalI req_47855160___42515000______58_840_48047720;

SignalI makereq_47855160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_47855160___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
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

SignalI _5814_47855020___42515000______58_840_48047720;

SignalI make_5814_47855020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_47855020___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":14";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5812_47855000___42515000______58_840_48047720;

SignalI make_5812_47855000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5812_47855000___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":12";
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

SignalI _5813_47854880___42515000______58_840_48047720;

SignalI make_5813_47854880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_47854880___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":13";
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

SignalI _5843_47854720___42515000______58_840_48047720;

SignalI make_5843_47854720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_47854720___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":43";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5841_47854700___42515000______58_840_48047720;

SignalI make_5841_47854700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5841_47854700___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":41";
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

SignalI _5842_47849980___42515000______58_840_48047720;

SignalI make_5842_47849980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5842_47849980___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":42";
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

SignalI _5872_47890160___42515000______58_840_48047720;

SignalI make_5872_47890160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5872_47890160___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":72";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5870_47890140___42515000______58_840_48047720;

SignalI make_5870_47890140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5870_47890140___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":70";
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

SignalI _5871_47889960___42515000______58_840_48047720;

SignalI make_5871_47889960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5871_47889960___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":71";
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

SignalI _5889_47889660___42515000______58_840_48047720;

SignalI make_5889_47889660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5889_47889660___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":89";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5890_47889580___42515000______58_840_48047720;

SignalI make_5890_47889580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5890_47889580___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":90";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack_65_47889440___42515000______58_840_48047720;

SignalI makeack_65_47889440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_65_47889440___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = "ackA";
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

SignalI _58120_47889300___42515000______58_840_48047720;

SignalI make_58120_47889300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58120_47889300___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":120";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58121_47889020___42515000______58_840_48047720;

SignalI make_58121_47889020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58121_47889020___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":121";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58150_47888800___42515000______58_840_48047720;

SignalI make_58150_47888800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58150_47888800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":150";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58151_47888500___42515000______58_840_48047720;

SignalI make_58151_47888500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58151_47888500___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":151";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack_66_47888480___42515000______58_840_48047720;

SignalI makeack_66_47888480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_66_47888480___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = "ackB";
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

SignalI _5816_47888460___42515000______58_840_48047720;

SignalI make_5816_47888460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5816_47888460___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":16";
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

SignalI _5817_47888260___42515000______58_840_48047720;

SignalI make_5817_47888260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_47888260___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":17";
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

SignalI _5818_47887880___42515000______58_840_48047720;

SignalI make_5818_47887880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_47887880___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":18";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5845_47887820___42515000______58_840_48047720;

SignalI make_5845_47887820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_47887820___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":45";
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

SignalI _5846_47887380___42515000______58_840_48047720;

SignalI make_5846_47887380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5846_47887380___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":46";
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

SignalI _5847_47887280___42515000______58_840_48047720;

SignalI make_5847_47887280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5847_47887280___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":47";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5874_47887080___42515000______58_840_48047720;

SignalI make_5874_47887080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5874_47887080___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":74";
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

SignalI _5875_47886940___42515000______58_840_48047720;

SignalI make_5875_47886940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5875_47886940___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":75";
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

SignalI _5876_47886660___42515000______58_840_48047720;

SignalI make_5876_47886660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5876_47886660___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":76";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58135_47886480___42515000______58_840_48047720;

SignalI make_58135_47886480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58135_47886480___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":135";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58136_47886180___42515000______58_840_48047720;

SignalI make_58136_47886180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58136_47886180___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":136";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58137_47886100___42515000______58_840_48047720;

SignalI make_58137_47886100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58137_47886100___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = ":137";
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

SignalI val_47885900___42515000______58_840_48047720;

SignalI makeval_47885900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   val_47885900___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42515000;
   signalI->name = "val";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope __42513800;

SignalI trig__r_42015820___42513800___42515000______58_840_48047720;

SignalI maketrig__r_42015820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_42015820___42513800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42513800;
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

SignalI trig__w_42015480___42513800___42515000______58_840_48047720;

SignalI maketrig__w_42015480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_42015480___42513800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42513800;
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

SignalI dbus__r_42013560___42513800___42515000______58_840_48047720;

SignalI makedbus__r_42013560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_42013560___42513800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42513800;
   signalI->name = "dbus_r";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__w_42012820___42513800___42515000______58_840_48047720;

SignalI makedbus__w_42012820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_42012820___42513800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42513800;
   signalI->name = "dbus_w";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__r_42011980___42513800___42515000______58_840_48047720;

SignalI makeabus__r_42011980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_42011980___42513800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42513800;
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

SignalI abus__w_42010360___42513800___42515000______58_840_48047720;

SignalI makeabus__w_42010360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_42010360___42513800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42513800;
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

SignalI mem_42008820___42513800___42515000______58_840_48047720;

SignalI makemem_42008820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_42008820___42513800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42513800;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope __42512340;

Scope make__42512340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42512340 = scope;
   scope->owner = (Object)__42513800;
   scope->name = "";
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

Scope __42510740;

Scope make__42510740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42510740 = scope;
   scope->owner = (Object)__42513800;
   scope->name = "";
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

Scope __42509180;

Scope make__42509180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42509180 = scope;
   scope->owner = (Object)__42513800;
   scope->name = "";
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

Scope __42486420;

Scope make__42486420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42486420 = scope;
   scope->owner = (Object)__42513800;
   scope->name = "";
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

Scope __42471380;

Scope make__42471380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42471380 = scope;
   scope->owner = (Object)__42513800;
   scope->name = "";
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

Scope __42468480;

Scope make__42468480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42468480 = scope;
   scope->owner = (Object)__42513800;
   scope->name = "";
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

Behavior __39988940;

Behavior make__39988940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __39988940 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47855200___42515000______58_840_48047720);
   clk_47855200___42515000______58_840_48047720->num_neg += 1;
   clk_47855200___42515000______58_840_48047720->neg = realloc(clk_47855200___42515000______58_840_48047720->neg,clk_47855200___42515000______58_840_48047720->num_neg*sizeof(Object));
clk_47855200___42515000______58_840_48047720->neg[clk_47855200___42515000______58_840_48047720->num_neg-1] = (Object)behavior;
   behavior->block = make__41731360();

   return behavior;
}

Behavior __48141960;

Behavior make__48141960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48141960 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_42013560___42513800___42515000______58_840_48047720);
   dbus__r_42013560___42513800___42515000______58_840_48047720->num_any += 1;
   dbus__r_42013560___42513800___42515000______58_840_48047720->any = realloc(dbus__r_42013560___42513800___42515000______58_840_48047720->any,dbus__r_42013560___42513800___42515000______58_840_48047720->num_any*sizeof(Object));
dbus__r_42013560___42513800___42515000______58_840_48047720->any[dbus__r_42013560___42513800___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48142160();

   return behavior;
}

Behavior __48141580;

Behavior make__48141580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48141580 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_47855020___42515000______58_840_48047720);
   _5814_47855020___42515000______58_840_48047720->num_any += 1;
   _5814_47855020___42515000______58_840_48047720->any = realloc(_5814_47855020___42515000______58_840_48047720->any,_5814_47855020___42515000______58_840_48047720->num_any*sizeof(Object));
_5814_47855020___42515000______58_840_48047720->any[_5814_47855020___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48141900();

   return behavior;
}

Behavior __48141080;

Behavior make__48141080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48141080 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_42015820___42513800___42515000______58_840_48047720);
   trig__r_42015820___42513800___42515000______58_840_48047720->num_any += 1;
   trig__r_42015820___42513800___42515000______58_840_48047720->any = realloc(trig__r_42015820___42513800___42515000______58_840_48047720->any,trig__r_42015820___42513800___42515000______58_840_48047720->num_any*sizeof(Object));
trig__r_42015820___42513800___42515000______58_840_48047720->any[trig__r_42015820___42513800___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48141240();

   return behavior;
}

Behavior __48140880;

Behavior make__48140880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48140880 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5812_47855000___42515000______58_840_48047720);
   _5812_47855000___42515000______58_840_48047720->num_any += 1;
   _5812_47855000___42515000______58_840_48047720->any = realloc(_5812_47855000___42515000______58_840_48047720->any,_5812_47855000___42515000______58_840_48047720->num_any*sizeof(Object));
_5812_47855000___42515000______58_840_48047720->any[_5812_47855000___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48141040();

   return behavior;
}

Behavior __48140420;

Behavior make__48140420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48140420 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_42011980___42513800___42515000______58_840_48047720);
   abus__r_42011980___42513800___42515000______58_840_48047720->num_any += 1;
   abus__r_42011980___42513800___42515000______58_840_48047720->any = realloc(abus__r_42011980___42513800___42515000______58_840_48047720->any,abus__r_42011980___42513800___42515000______58_840_48047720->num_any*sizeof(Object));
abus__r_42011980___42513800___42515000______58_840_48047720->any[abus__r_42011980___42513800___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48140580();

   return behavior;
}

Behavior __48140220;

Behavior make__48140220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48140220 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_47854880___42515000______58_840_48047720);
   _5813_47854880___42515000______58_840_48047720->num_any += 1;
   _5813_47854880___42515000______58_840_48047720->any = realloc(_5813_47854880___42515000______58_840_48047720->any,_5813_47854880___42515000______58_840_48047720->num_any*sizeof(Object));
_5813_47854880___42515000______58_840_48047720->any[_5813_47854880___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48140380();

   return behavior;
}

Behavior __48139760;

Behavior make__48139760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48139760 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_42015480___42513800___42515000______58_840_48047720);
   trig__w_42015480___42513800___42515000______58_840_48047720->num_any += 1;
   trig__w_42015480___42513800___42515000______58_840_48047720->any = realloc(trig__w_42015480___42513800___42515000______58_840_48047720->any,trig__w_42015480___42513800___42515000______58_840_48047720->num_any*sizeof(Object));
trig__w_42015480___42513800___42515000______58_840_48047720->any[trig__w_42015480___42513800___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48139920();

   return behavior;
}

Behavior __48139560;

Behavior make__48139560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48139560 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5816_47888460___42515000______58_840_48047720);
   _5816_47888460___42515000______58_840_48047720->num_any += 1;
   _5816_47888460___42515000______58_840_48047720->any = realloc(_5816_47888460___42515000______58_840_48047720->any,_5816_47888460___42515000______58_840_48047720->num_any*sizeof(Object));
_5816_47888460___42515000______58_840_48047720->any[_5816_47888460___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48139720();

   return behavior;
}

Behavior __48139100;

Behavior make__48139100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48139100 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_42010360___42513800___42515000______58_840_48047720);
   abus__w_42010360___42513800___42515000______58_840_48047720->num_any += 1;
   abus__w_42010360___42513800___42515000______58_840_48047720->any = realloc(abus__w_42010360___42513800___42515000______58_840_48047720->any,abus__w_42010360___42513800___42515000______58_840_48047720->num_any*sizeof(Object));
abus__w_42010360___42513800___42515000______58_840_48047720->any[abus__w_42010360___42513800___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48139260();

   return behavior;
}

Behavior __48138900;

Behavior make__48138900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48138900 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_47888260___42515000______58_840_48047720);
   _5817_47888260___42515000______58_840_48047720->num_any += 1;
   _5817_47888260___42515000______58_840_48047720->any = realloc(_5817_47888260___42515000______58_840_48047720->any,_5817_47888260___42515000______58_840_48047720->num_any*sizeof(Object));
_5817_47888260___42515000______58_840_48047720->any[_5817_47888260___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48139060();

   return behavior;
}

Behavior __48138400;

Behavior make__48138400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48138400 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_42012820___42513800___42515000______58_840_48047720);
   dbus__w_42012820___42513800___42515000______58_840_48047720->num_any += 1;
   dbus__w_42012820___42513800___42515000______58_840_48047720->any = realloc(dbus__w_42012820___42513800___42515000______58_840_48047720->any,dbus__w_42012820___42513800___42515000______58_840_48047720->num_any*sizeof(Object));
dbus__w_42012820___42513800___42515000______58_840_48047720->any[dbus__w_42012820___42513800___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48138560();

   return behavior;
}

Behavior __48138200;

Behavior make__48138200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48138200 = behavior;
   behavior->owner = (Object)__42513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_47887880___42515000______58_840_48047720);
   _5818_47887880___42515000______58_840_48047720->num_any += 1;
   _5818_47887880___42515000______58_840_48047720->any = realloc(_5818_47887880___42515000______58_840_48047720->any,_5818_47887880___42515000______58_840_48047720->num_any*sizeof(Object));
_5818_47887880___42515000______58_840_48047720->any[_5818_47887880___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48138360();

   return behavior;
}

Scope make__42513800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42513800 = scope;
   scope->owner = (Object)__42515000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_42015820();
   scope->inners[1] = maketrig__w_42015480();
   scope->inners[2] = makedbus__r_42013560();
   scope->inners[3] = makedbus__w_42012820();
   scope->inners[4] = makeabus__r_42011980();
   scope->inners[5] = makeabus__w_42010360();
   scope->inners[6] = makemem_42008820();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__42512340();
   scope->scopes[1] = make__42510740();
   scope->scopes[2] = make__42509180();
   scope->scopes[3] = make__42486420();
   scope->scopes[4] = make__42471380();
   scope->scopes[5] = make__42468480();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__39988940();
   scope->behaviors[1] = make__48141960();
   scope->behaviors[2] = make__48141580();
   scope->behaviors[3] = make__48141080();
   scope->behaviors[4] = make__48140880();
   scope->behaviors[5] = make__48140420();
   scope->behaviors[6] = make__48140220();
   scope->behaviors[7] = make__48139760();
   scope->behaviors[8] = make__48139560();
   scope->behaviors[9] = make__48139100();
   scope->behaviors[10] = make__48138900();
   scope->behaviors[11] = make__48138400();
   scope->behaviors[12] = make__48138200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __39952620;

SignalI trig__r_48240680___39952620___42515000______58_840_48047720;

SignalI maketrig__r_48240680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48240680___39952620___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__39952620;
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

SignalI trig__w_48240660___39952620___42515000______58_840_48047720;

SignalI maketrig__w_48240660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48240660___39952620___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__39952620;
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

SignalI dbus__r_48240580___39952620___42515000______58_840_48047720;

SignalI makedbus__r_48240580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48240580___39952620___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__39952620;
   signalI->name = "dbus_r";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__w_48240420___39952620___42515000______58_840_48047720;

SignalI makedbus__w_48240420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48240420___39952620___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__39952620;
   signalI->name = "dbus_w";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__r_48240300___39952620___42515000______58_840_48047720;

SignalI makeabus__r_48240300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48240300___39952620___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__39952620;
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

SignalI abus__w_48240200___39952620___42515000______58_840_48047720;

SignalI makeabus__w_48240200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48240200___39952620___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__39952620;
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

SignalI mem_48240000___39952620___42515000______58_840_48047720;

SignalI makemem_48240000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48240000___39952620___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__39952620;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope __21690980;

Scope make__21690980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __21690980 = scope;
   scope->owner = (Object)__39952620;
   scope->name = "";
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

Scope __21656940;

Scope make__21656940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __21656940 = scope;
   scope->owner = (Object)__39952620;
   scope->name = "";
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

Scope __48242500;

Scope make__48242500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48242500 = scope;
   scope->owner = (Object)__39952620;
   scope->name = "";
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

Scope __48242080;

Scope make__48242080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48242080 = scope;
   scope->owner = (Object)__39952620;
   scope->name = "";
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

Scope __48241660;

Scope make__48241660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48241660 = scope;
   scope->owner = (Object)__39952620;
   scope->name = "";
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

Scope __48241200;

Scope make__48241200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48241200 = scope;
   scope->owner = (Object)__39952620;
   scope->name = "";
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

Behavior __39991820;

Behavior make__39991820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __39991820 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47855200___42515000______58_840_48047720);
   clk_47855200___42515000______58_840_48047720->num_neg += 1;
   clk_47855200___42515000______58_840_48047720->neg = realloc(clk_47855200___42515000______58_840_48047720->neg,clk_47855200___42515000______58_840_48047720->num_neg*sizeof(Object));
clk_47855200___42515000______58_840_48047720->neg[clk_47855200___42515000______58_840_48047720->num_neg-1] = (Object)behavior;
   behavior->block = make__48238120();

   return behavior;
}

Behavior __48177080;

Behavior make__48177080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48177080 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48240580___39952620___42515000______58_840_48047720);
   dbus__r_48240580___39952620___42515000______58_840_48047720->num_any += 1;
   dbus__r_48240580___39952620___42515000______58_840_48047720->any = realloc(dbus__r_48240580___39952620___42515000______58_840_48047720->any,dbus__r_48240580___39952620___42515000______58_840_48047720->num_any*sizeof(Object));
dbus__r_48240580___39952620___42515000______58_840_48047720->any[dbus__r_48240580___39952620___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48136400();

   return behavior;
}

Behavior __48176840;

Behavior make__48176840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48176840 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_47854720___42515000______58_840_48047720);
   _5843_47854720___42515000______58_840_48047720->num_any += 1;
   _5843_47854720___42515000______58_840_48047720->any = realloc(_5843_47854720___42515000______58_840_48047720->any,_5843_47854720___42515000______58_840_48047720->num_any*sizeof(Object));
_5843_47854720___42515000______58_840_48047720->any[_5843_47854720___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48177040();

   return behavior;
}

Behavior __48175940;

Behavior make__48175940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48175940 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48240680___39952620___42515000______58_840_48047720);
   trig__r_48240680___39952620___42515000______58_840_48047720->num_any += 1;
   trig__r_48240680___39952620___42515000______58_840_48047720->any = realloc(trig__r_48240680___39952620___42515000______58_840_48047720->any,trig__r_48240680___39952620___42515000______58_840_48047720->num_any*sizeof(Object));
trig__r_48240680___39952620___42515000______58_840_48047720->any[trig__r_48240680___39952620___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48176140();

   return behavior;
}

Behavior __48175660;

Behavior make__48175660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48175660 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5841_47854700___42515000______58_840_48047720);
   _5841_47854700___42515000______58_840_48047720->num_any += 1;
   _5841_47854700___42515000______58_840_48047720->any = realloc(_5841_47854700___42515000______58_840_48047720->any,_5841_47854700___42515000______58_840_48047720->num_any*sizeof(Object));
_5841_47854700___42515000______58_840_48047720->any[_5841_47854700___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48175900();

   return behavior;
}

Behavior __48175040;

Behavior make__48175040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48175040 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48240300___39952620___42515000______58_840_48047720);
   abus__r_48240300___39952620___42515000______58_840_48047720->num_any += 1;
   abus__r_48240300___39952620___42515000______58_840_48047720->any = realloc(abus__r_48240300___39952620___42515000______58_840_48047720->any,abus__r_48240300___39952620___42515000______58_840_48047720->num_any*sizeof(Object));
abus__r_48240300___39952620___42515000______58_840_48047720->any[abus__r_48240300___39952620___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48175200();

   return behavior;
}

Behavior __48174840;

Behavior make__48174840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48174840 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5842_47849980___42515000______58_840_48047720);
   _5842_47849980___42515000______58_840_48047720->num_any += 1;
   _5842_47849980___42515000______58_840_48047720->any = realloc(_5842_47849980___42515000______58_840_48047720->any,_5842_47849980___42515000______58_840_48047720->num_any*sizeof(Object));
_5842_47849980___42515000______58_840_48047720->any[_5842_47849980___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48175000();

   return behavior;
}

Behavior __48174380;

Behavior make__48174380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48174380 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48240660___39952620___42515000______58_840_48047720);
   trig__w_48240660___39952620___42515000______58_840_48047720->num_any += 1;
   trig__w_48240660___39952620___42515000______58_840_48047720->any = realloc(trig__w_48240660___39952620___42515000______58_840_48047720->any,trig__w_48240660___39952620___42515000______58_840_48047720->num_any*sizeof(Object));
trig__w_48240660___39952620___42515000______58_840_48047720->any[trig__w_48240660___39952620___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48174540();

   return behavior;
}

Behavior __48174180;

Behavior make__48174180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48174180 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_47887820___42515000______58_840_48047720);
   _5845_47887820___42515000______58_840_48047720->num_any += 1;
   _5845_47887820___42515000______58_840_48047720->any = realloc(_5845_47887820___42515000______58_840_48047720->any,_5845_47887820___42515000______58_840_48047720->num_any*sizeof(Object));
_5845_47887820___42515000______58_840_48047720->any[_5845_47887820___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48174340();

   return behavior;
}

Behavior __48173680;

Behavior make__48173680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48173680 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48240200___39952620___42515000______58_840_48047720);
   abus__w_48240200___39952620___42515000______58_840_48047720->num_any += 1;
   abus__w_48240200___39952620___42515000______58_840_48047720->any = realloc(abus__w_48240200___39952620___42515000______58_840_48047720->any,abus__w_48240200___39952620___42515000______58_840_48047720->num_any*sizeof(Object));
abus__w_48240200___39952620___42515000______58_840_48047720->any[abus__w_48240200___39952620___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48173840();

   return behavior;
}

Behavior __48173480;

Behavior make__48173480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48173480 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5846_47887380___42515000______58_840_48047720);
   _5846_47887380___42515000______58_840_48047720->num_any += 1;
   _5846_47887380___42515000______58_840_48047720->any = realloc(_5846_47887380___42515000______58_840_48047720->any,_5846_47887380___42515000______58_840_48047720->num_any*sizeof(Object));
_5846_47887380___42515000______58_840_48047720->any[_5846_47887380___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48173640();

   return behavior;
}

Behavior __48173020;

Behavior make__48173020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48173020 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48240420___39952620___42515000______58_840_48047720);
   dbus__w_48240420___39952620___42515000______58_840_48047720->num_any += 1;
   dbus__w_48240420___39952620___42515000______58_840_48047720->any = realloc(dbus__w_48240420___39952620___42515000______58_840_48047720->any,dbus__w_48240420___39952620___42515000______58_840_48047720->num_any*sizeof(Object));
dbus__w_48240420___39952620___42515000______58_840_48047720->any[dbus__w_48240420___39952620___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48173180();

   return behavior;
}

Behavior __48172820;

Behavior make__48172820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48172820 = behavior;
   behavior->owner = (Object)__39952620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5847_47887280___42515000______58_840_48047720);
   _5847_47887280___42515000______58_840_48047720->num_any += 1;
   _5847_47887280___42515000______58_840_48047720->any = realloc(_5847_47887280___42515000______58_840_48047720->any,_5847_47887280___42515000______58_840_48047720->num_any*sizeof(Object));
_5847_47887280___42515000______58_840_48047720->any[_5847_47887280___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48172980();

   return behavior;
}

Scope make__39952620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __39952620 = scope;
   scope->owner = (Object)__42515000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48240680();
   scope->inners[1] = maketrig__w_48240660();
   scope->inners[2] = makedbus__r_48240580();
   scope->inners[3] = makedbus__w_48240420();
   scope->inners[4] = makeabus__r_48240300();
   scope->inners[5] = makeabus__w_48240200();
   scope->inners[6] = makemem_48240000();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__21690980();
   scope->scopes[1] = make__21656940();
   scope->scopes[2] = make__48242500();
   scope->scopes[3] = make__48242080();
   scope->scopes[4] = make__48241660();
   scope->scopes[5] = make__48241200();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__39991820();
   scope->behaviors[1] = make__48177080();
   scope->behaviors[2] = make__48176840();
   scope->behaviors[3] = make__48175940();
   scope->behaviors[4] = make__48175660();
   scope->behaviors[5] = make__48175040();
   scope->behaviors[6] = make__48174840();
   scope->behaviors[7] = make__48174380();
   scope->behaviors[8] = make__48174180();
   scope->behaviors[9] = make__48173680();
   scope->behaviors[10] = make__48173480();
   scope->behaviors[11] = make__48173020();
   scope->behaviors[12] = make__48172820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __40382900;

SignalI trig__r_42711440___40382900___42515000______58_840_48047720;

SignalI maketrig__r_42711440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_42711440___40382900___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__40382900;
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

SignalI trig__w_42711340___40382900___42515000______58_840_48047720;

SignalI maketrig__w_42711340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_42711340___40382900___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__40382900;
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

SignalI dbus__r_42710940___40382900___42515000______58_840_48047720;

SignalI makedbus__r_42710940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_42710940___40382900___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__40382900;
   signalI->name = "dbus_r";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__w_42710800___40382900___42515000______58_840_48047720;

SignalI makedbus__w_42710800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_42710800___40382900___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__40382900;
   signalI->name = "dbus_w";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__r_42710620___40382900___42515000______58_840_48047720;

SignalI makeabus__r_42710620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_42710620___40382900___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__40382900;
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

SignalI abus__w_42709860___40382900___42515000______58_840_48047720;

SignalI makeabus__w_42709860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_42709860___40382900___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__40382900;
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

SignalI mem_42708480___40382900___42515000______58_840_48047720;

SignalI makemem_42708480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_42708480___40382900___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__40382900;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope __41730340;

Scope make__41730340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __41730340 = scope;
   scope->owner = (Object)__40382900;
   scope->name = "";
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

Scope __42486900;

Scope make__42486900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42486900 = scope;
   scope->owner = (Object)__40382900;
   scope->name = "";
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

Scope __42595140;

Scope make__42595140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42595140 = scope;
   scope->owner = (Object)__40382900;
   scope->name = "";
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

Scope __42592380;

Scope make__42592380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42592380 = scope;
   scope->owner = (Object)__40382900;
   scope->name = "";
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

Scope __42650060;

Scope make__42650060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42650060 = scope;
   scope->owner = (Object)__40382900;
   scope->name = "";
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

Scope __42648700;

Scope make__42648700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42648700 = scope;
   scope->owner = (Object)__40382900;
   scope->name = "";
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

Behavior __43530600;

Behavior make__43530600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43530600 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47855200___42515000______58_840_48047720);
   clk_47855200___42515000______58_840_48047720->num_neg += 1;
   clk_47855200___42515000______58_840_48047720->neg = realloc(clk_47855200___42515000______58_840_48047720->neg,clk_47855200___42515000______58_840_48047720->num_neg*sizeof(Object));
clk_47855200___42515000______58_840_48047720->neg[clk_47855200___42515000______58_840_48047720->num_neg-1] = (Object)behavior;
   behavior->block = make__42809660();

   return behavior;
}

Behavior __48170780;

Behavior make__48170780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48170780 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_42710940___40382900___42515000______58_840_48047720);
   dbus__r_42710940___40382900___42515000______58_840_48047720->num_any += 1;
   dbus__r_42710940___40382900___42515000______58_840_48047720->any = realloc(dbus__r_42710940___40382900___42515000______58_840_48047720->any,dbus__r_42710940___40382900___42515000______58_840_48047720->num_any*sizeof(Object));
dbus__r_42710940___40382900___42515000______58_840_48047720->any[dbus__r_42710940___40382900___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48170940();

   return behavior;
}

Behavior __48170580;

Behavior make__48170580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48170580 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5872_47890160___42515000______58_840_48047720);
   _5872_47890160___42515000______58_840_48047720->num_any += 1;
   _5872_47890160___42515000______58_840_48047720->any = realloc(_5872_47890160___42515000______58_840_48047720->any,_5872_47890160___42515000______58_840_48047720->num_any*sizeof(Object));
_5872_47890160___42515000______58_840_48047720->any[_5872_47890160___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48170740();

   return behavior;
}

Behavior __48170120;

Behavior make__48170120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48170120 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_42711440___40382900___42515000______58_840_48047720);
   trig__r_42711440___40382900___42515000______58_840_48047720->num_any += 1;
   trig__r_42711440___40382900___42515000______58_840_48047720->any = realloc(trig__r_42711440___40382900___42515000______58_840_48047720->any,trig__r_42711440___40382900___42515000______58_840_48047720->num_any*sizeof(Object));
trig__r_42711440___40382900___42515000______58_840_48047720->any[trig__r_42711440___40382900___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48170280();

   return behavior;
}

Behavior __48169920;

Behavior make__48169920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48169920 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5870_47890140___42515000______58_840_48047720);
   _5870_47890140___42515000______58_840_48047720->num_any += 1;
   _5870_47890140___42515000______58_840_48047720->any = realloc(_5870_47890140___42515000______58_840_48047720->any,_5870_47890140___42515000______58_840_48047720->num_any*sizeof(Object));
_5870_47890140___42515000______58_840_48047720->any[_5870_47890140___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48170080();

   return behavior;
}

Behavior __48169460;

Behavior make__48169460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48169460 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_42710620___40382900___42515000______58_840_48047720);
   abus__r_42710620___40382900___42515000______58_840_48047720->num_any += 1;
   abus__r_42710620___40382900___42515000______58_840_48047720->any = realloc(abus__r_42710620___40382900___42515000______58_840_48047720->any,abus__r_42710620___40382900___42515000______58_840_48047720->num_any*sizeof(Object));
abus__r_42710620___40382900___42515000______58_840_48047720->any[abus__r_42710620___40382900___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48169620();

   return behavior;
}

Behavior __48169260;

Behavior make__48169260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48169260 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5871_47889960___42515000______58_840_48047720);
   _5871_47889960___42515000______58_840_48047720->num_any += 1;
   _5871_47889960___42515000______58_840_48047720->any = realloc(_5871_47889960___42515000______58_840_48047720->any,_5871_47889960___42515000______58_840_48047720->num_any*sizeof(Object));
_5871_47889960___42515000______58_840_48047720->any[_5871_47889960___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48169420();

   return behavior;
}

Behavior __48209720;

Behavior make__48209720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48209720 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_42711340___40382900___42515000______58_840_48047720);
   trig__w_42711340___40382900___42515000______58_840_48047720->num_any += 1;
   trig__w_42711340___40382900___42515000______58_840_48047720->any = realloc(trig__w_42711340___40382900___42515000______58_840_48047720->any,trig__w_42711340___40382900___42515000______58_840_48047720->num_any*sizeof(Object));
trig__w_42711340___40382900___42515000______58_840_48047720->any[trig__w_42711340___40382900___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48209880();

   return behavior;
}

Behavior __48209520;

Behavior make__48209520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48209520 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5874_47887080___42515000______58_840_48047720);
   _5874_47887080___42515000______58_840_48047720->num_any += 1;
   _5874_47887080___42515000______58_840_48047720->any = realloc(_5874_47887080___42515000______58_840_48047720->any,_5874_47887080___42515000______58_840_48047720->num_any*sizeof(Object));
_5874_47887080___42515000______58_840_48047720->any[_5874_47887080___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48209680();

   return behavior;
}

Behavior __48208800;

Behavior make__48208800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48208800 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_42709860___40382900___42515000______58_840_48047720);
   abus__w_42709860___40382900___42515000______58_840_48047720->num_any += 1;
   abus__w_42709860___40382900___42515000______58_840_48047720->any = realloc(abus__w_42709860___40382900___42515000______58_840_48047720->any,abus__w_42709860___40382900___42515000______58_840_48047720->num_any*sizeof(Object));
abus__w_42709860___40382900___42515000______58_840_48047720->any[abus__w_42709860___40382900___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48209180();

   return behavior;
}

Behavior __48208480;

Behavior make__48208480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48208480 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5875_47886940___42515000______58_840_48047720);
   _5875_47886940___42515000______58_840_48047720->num_any += 1;
   _5875_47886940___42515000______58_840_48047720->any = realloc(_5875_47886940___42515000______58_840_48047720->any,_5875_47886940___42515000______58_840_48047720->num_any*sizeof(Object));
_5875_47886940___42515000______58_840_48047720->any[_5875_47886940___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48208760();

   return behavior;
}

Behavior __48207900;

Behavior make__48207900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48207900 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_42710800___40382900___42515000______58_840_48047720);
   dbus__w_42710800___40382900___42515000______58_840_48047720->num_any += 1;
   dbus__w_42710800___40382900___42515000______58_840_48047720->any = realloc(dbus__w_42710800___40382900___42515000______58_840_48047720->any,dbus__w_42710800___40382900___42515000______58_840_48047720->num_any*sizeof(Object));
dbus__w_42710800___40382900___42515000______58_840_48047720->any[dbus__w_42710800___40382900___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48208060();

   return behavior;
}

Behavior __48207700;

Behavior make__48207700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48207700 = behavior;
   behavior->owner = (Object)__40382900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5876_47886660___42515000______58_840_48047720);
   _5876_47886660___42515000______58_840_48047720->num_any += 1;
   _5876_47886660___42515000______58_840_48047720->any = realloc(_5876_47886660___42515000______58_840_48047720->any,_5876_47886660___42515000______58_840_48047720->num_any*sizeof(Object));
_5876_47886660___42515000______58_840_48047720->any[_5876_47886660___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48207860();

   return behavior;
}

Scope make__40382900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __40382900 = scope;
   scope->owner = (Object)__42515000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_42711440();
   scope->inners[1] = maketrig__w_42711340();
   scope->inners[2] = makedbus__r_42710940();
   scope->inners[3] = makedbus__w_42710800();
   scope->inners[4] = makeabus__r_42710620();
   scope->inners[5] = makeabus__w_42709860();
   scope->inners[6] = makemem_42708480();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__41730340();
   scope->scopes[1] = make__42486900();
   scope->scopes[2] = make__42595140();
   scope->scopes[3] = make__42592380();
   scope->scopes[4] = make__42650060();
   scope->scopes[5] = make__42648700();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__43530600();
   scope->behaviors[1] = make__48170780();
   scope->behaviors[2] = make__48170580();
   scope->behaviors[3] = make__48170120();
   scope->behaviors[4] = make__48169920();
   scope->behaviors[5] = make__48169460();
   scope->behaviors[6] = make__48169260();
   scope->behaviors[7] = make__48209720();
   scope->behaviors[8] = make__48209520();
   scope->behaviors[9] = make__48208800();
   scope->behaviors[10] = make__48208480();
   scope->behaviors[11] = make__48207900();
   scope->behaviors[12] = make__48207700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __43529800;

SignalI reg__0_43895940___43529800___42515000______58_840_48047720;

SignalI makereg__0_43895940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_43895940___43529800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__43529800;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI reg__1_43895160___43529800___42515000______58_840_48047720;

SignalI makereg__1_43895160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_43895160___43529800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__43529800;
   signalI->name = "reg_1";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope __43529140;

Scope make__43529140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43529140 = scope;
   scope->owner = (Object)__43529800;
   scope->name = "";
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

Scope __43595220;

Scope make__43595220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43595220 = scope;
   scope->owner = (Object)__43529800;
   scope->name = "";
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

Scope __43593780;

Scope make__43593780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43593780 = scope;
   scope->owner = (Object)__43529800;
   scope->name = "";
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

Scope __43592780;

SignalI abus__r_43591860___43592780___43529800___42515000______58_840_48047720;

SignalI makeabus__r_43591860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_43591860___43592780___43529800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__43592780;
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

Scope make__43592780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43592780 = scope;
   scope->owner = (Object)__43529800;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_43591860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __43591580;

SignalI abus__w_43654840___43591580___43529800___42515000______58_840_48047720;

SignalI makeabus__w_43654840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_43654840___43591580___43529800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__43591580;
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

Scope make__43591580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43591580 = scope;
   scope->owner = (Object)__43529800;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_43654840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __43794160;

SignalI abus__r_43824700___43794160___43529800___42515000______58_840_48047720;

SignalI makeabus__r_43824700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_43824700___43794160___43529800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__43794160;
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

Scope make__43794160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43794160 = scope;
   scope->owner = (Object)__43529800;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_43824700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __43822080;

SignalI abus__w_43897640___43822080___43529800___42515000______58_840_48047720;

SignalI makeabus__w_43897640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_43897640___43822080___43529800___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__43822080;
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

Scope make__43822080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43822080 = scope;
   scope->owner = (Object)__43529800;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_43897640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48205740;

Behavior make__48205740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48205740 = behavior;
   behavior->owner = (Object)__43529800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_43895940___43529800___42515000______58_840_48047720);
   reg__0_43895940___43529800___42515000______58_840_48047720->num_any += 1;
   reg__0_43895940___43529800___42515000______58_840_48047720->any = realloc(reg__0_43895940___43529800___42515000______58_840_48047720->any,reg__0_43895940___43529800___42515000______58_840_48047720->num_any*sizeof(Object));
reg__0_43895940___43529800___42515000______58_840_48047720->any[reg__0_43895940___43529800___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48205900();

   return behavior;
}

Behavior __48205540;

Behavior make__48205540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48205540 = behavior;
   behavior->owner = (Object)__43529800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5889_47889660___42515000______58_840_48047720);
   _5889_47889660___42515000______58_840_48047720->num_any += 1;
   _5889_47889660___42515000______58_840_48047720->any = realloc(_5889_47889660___42515000______58_840_48047720->any,_5889_47889660___42515000______58_840_48047720->num_any*sizeof(Object));
_5889_47889660___42515000______58_840_48047720->any[_5889_47889660___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48205700();

   return behavior;
}

Behavior __48205080;

Behavior make__48205080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48205080 = behavior;
   behavior->owner = (Object)__43529800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_43895160___43529800___42515000______58_840_48047720);
   reg__1_43895160___43529800___42515000______58_840_48047720->num_any += 1;
   reg__1_43895160___43529800___42515000______58_840_48047720->any = realloc(reg__1_43895160___43529800___42515000______58_840_48047720->any,reg__1_43895160___43529800___42515000______58_840_48047720->num_any*sizeof(Object));
reg__1_43895160___43529800___42515000______58_840_48047720->any[reg__1_43895160___43529800___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48205240();

   return behavior;
}

Behavior __48204880;

Behavior make__48204880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48204880 = behavior;
   behavior->owner = (Object)__43529800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5890_47889580___42515000______58_840_48047720);
   _5890_47889580___42515000______58_840_48047720->num_any += 1;
   _5890_47889580___42515000______58_840_48047720->any = realloc(_5890_47889580___42515000______58_840_48047720->any,_5890_47889580___42515000______58_840_48047720->num_any*sizeof(Object));
_5890_47889580___42515000______58_840_48047720->any[_5890_47889580___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48205040();

   return behavior;
}

Scope make__43529800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43529800 = scope;
   scope->owner = (Object)__42515000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_43895940();
   scope->inners[1] = makereg__1_43895160();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__43529140();
   scope->scopes[1] = make__43595220();
   scope->scopes[2] = make__43593780();
   scope->scopes[3] = make__43592780();
   scope->scopes[4] = make__43591580();
   scope->scopes[5] = make__43794160();
   scope->scopes[6] = make__43822080();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48205740();
   scope->behaviors[1] = make__48205540();
   scope->behaviors[2] = make__48205080();
   scope->behaviors[3] = make__48204880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __42948440;

SignalI lv0_44080260___42948440___42515000______58_840_48047720;

SignalI makelv0_44080260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_44080260___42948440___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42948440;
   signalI->name = "lv0";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI lv1_44079940___42948440___42515000______58_840_48047720;

SignalI makelv1_44079940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_44079940___42948440___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42948440;
   signalI->name = "lv1";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI av0_44079740___42948440___42515000______58_840_48047720;

SignalI makeav0_44079740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_44079740___42948440___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42948440;
   signalI->name = "av0";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI av1_44078400___42948440___42515000______58_840_48047720;

SignalI makeav1_44078400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_44078400___42948440___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42948440;
   signalI->name = "av1";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rv_44077740___42948440___42515000______58_840_48047720;

SignalI makerv_44077740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_44077740___42948440___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42948440;
   signalI->name = "rv";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI lvok0_44077640___42948440___42515000______58_840_48047720;

SignalI makelvok0_44077640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_44077640___42948440___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42948440;
   signalI->name = "lvok0";
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

SignalI lvok1_44077560___42948440___42515000______58_840_48047720;

SignalI makelvok1_44077560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_44077560___42948440___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42948440;
   signalI->name = "lvok1";
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

SignalI rvok_44077440___42948440___42515000______58_840_48047720;

SignalI makervok_44077440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_44077440___42948440___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42948440;
   signalI->name = "rvok";
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

SignalI run_44077380___42948440___42515000______58_840_48047720;

SignalI makerun_44077380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_44077380___42948440___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__42948440;
   signalI->name = "run";
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

Behavior __47415580;

Behavior make__47415580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47415580 = behavior;
   behavior->owner = (Object)__42948440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_47855200___42515000______58_840_48047720);
   clk_47855200___42515000______58_840_48047720->num_pos += 1;
   clk_47855200___42515000______58_840_48047720->pos = realloc(clk_47855200___42515000______58_840_48047720->pos,clk_47855200___42515000______58_840_48047720->num_pos*sizeof(Object));
clk_47855200___42515000______58_840_48047720->pos[clk_47855200___42515000______58_840_48047720->num_pos-1] = (Object)behavior;
   behavior->block = make__44076180();

   return behavior;
}

Scope make__42948440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42948440 = scope;
   scope->owner = (Object)__42515000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_44080260();
   scope->inners[1] = makelv1_44079940();
   scope->inners[2] = makeav0_44079740();
   scope->inners[3] = makeav1_44078400();
   scope->inners[4] = makerv_44077740();
   scope->inners[5] = makelvok0_44077640();
   scope->inners[6] = makelvok1_44077560();
   scope->inners[7] = makervok_44077440();
   scope->inners[8] = makerun_44077380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47415580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47415400;

SignalI reg__0_46970360___47415400___42515000______58_840_48047720;

SignalI makereg__0_46970360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_46970360___47415400___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47415400;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI reg__1_46969800___47415400___42515000______58_840_48047720;

SignalI makereg__1_46969800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_46969800___47415400___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47415400;
   signalI->name = "reg_1";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope __47759040;

Scope make__47759040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47759040 = scope;
   scope->owner = (Object)__47415400;
   scope->name = "";
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

Scope __47755680;

Scope make__47755680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47755680 = scope;
   scope->owner = (Object)__47415400;
   scope->name = "";
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

Scope __47755060;

Scope make__47755060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47755060 = scope;
   scope->owner = (Object)__47415400;
   scope->name = "";
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

Scope __47754520;

SignalI abus__r_47754060___47754520___47415400___42515000______58_840_48047720;

SignalI makeabus__r_47754060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47754060___47754520___47415400___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47754520;
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

Scope make__47754520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47754520 = scope;
   scope->owner = (Object)__47415400;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47754060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47753900;

SignalI abus__w_47753380___47753900___47415400___42515000______58_840_48047720;

SignalI makeabus__w_47753380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47753380___47753900___47415400___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47753900;
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

Behavior __42730120;

Behavior make__42730120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42730120 = behavior;
   behavior->owner = (Object)__47753900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47753380___47753900___47415400___42515000______58_840_48047720);
   abus__w_47753380___47753900___47415400___42515000______58_840_48047720->num_any += 1;
   abus__w_47753380___47753900___47415400___42515000______58_840_48047720->any = realloc(abus__w_47753380___47753900___47415400___42515000______58_840_48047720->any,abus__w_47753380___47753900___47415400___42515000______58_840_48047720->num_any*sizeof(Object));
abus__w_47753380___47753900___47415400___42515000______58_840_48047720->any[abus__w_47753380___47753900___47415400___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__42734180();

   return behavior;
}

Behavior __42687680;

Behavior make__42687680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42687680 = behavior;
   behavior->owner = (Object)__47753900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58137_47886100___42515000______58_840_48047720);
   _58137_47886100___42515000______58_840_48047720->num_any += 1;
   _58137_47886100___42515000______58_840_48047720->any = realloc(_58137_47886100___42515000______58_840_48047720->any,_58137_47886100___42515000______58_840_48047720->num_any*sizeof(Object));
_58137_47886100___42515000______58_840_48047720->any[_58137_47886100___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__42729980();

   return behavior;
}

Scope make__47753900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47753900 = scope;
   scope->owner = (Object)__47415400;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47753380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__42730120();
   scope->behaviors[1] = make__42687680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47752780;

SignalI abus__r_46971660___47752780___47415400___42515000______58_840_48047720;

SignalI makeabus__r_46971660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46971660___47752780___47415400___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47752780;
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

Scope make__47752780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47752780 = scope;
   scope->owner = (Object)__47415400;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_46971660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __46971460;

SignalI abus__w_46970960___46971460___47415400___42515000______58_840_48047720;

SignalI makeabus__w_46970960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46970960___46971460___47415400___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__46971460;
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

Scope make__46971460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46971460 = scope;
   scope->owner = (Object)__47415400;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_46970960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48202680;

Behavior make__48202680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48202680 = behavior;
   behavior->owner = (Object)__47415400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_46970360___47415400___42515000______58_840_48047720);
   reg__0_46970360___47415400___42515000______58_840_48047720->num_any += 1;
   reg__0_46970360___47415400___42515000______58_840_48047720->any = realloc(reg__0_46970360___47415400___42515000______58_840_48047720->any,reg__0_46970360___47415400___42515000______58_840_48047720->num_any*sizeof(Object));
reg__0_46970360___47415400___42515000______58_840_48047720->any[reg__0_46970360___47415400___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48202840();

   return behavior;
}

Behavior __48202480;

Behavior make__48202480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48202480 = behavior;
   behavior->owner = (Object)__47415400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58120_47889300___42515000______58_840_48047720);
   _58120_47889300___42515000______58_840_48047720->num_any += 1;
   _58120_47889300___42515000______58_840_48047720->any = realloc(_58120_47889300___42515000______58_840_48047720->any,_58120_47889300___42515000______58_840_48047720->num_any*sizeof(Object));
_58120_47889300___42515000______58_840_48047720->any[_58120_47889300___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48202640();

   return behavior;
}

Behavior __48201980;

Behavior make__48201980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48201980 = behavior;
   behavior->owner = (Object)__47415400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_46969800___47415400___42515000______58_840_48047720);
   reg__1_46969800___47415400___42515000______58_840_48047720->num_any += 1;
   reg__1_46969800___47415400___42515000______58_840_48047720->any = realloc(reg__1_46969800___47415400___42515000______58_840_48047720->any,reg__1_46969800___47415400___42515000______58_840_48047720->num_any*sizeof(Object));
reg__1_46969800___47415400___42515000______58_840_48047720->any[reg__1_46969800___47415400___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48202180();

   return behavior;
}

Behavior __48201780;

Behavior make__48201780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48201780 = behavior;
   behavior->owner = (Object)__47415400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58121_47889020___42515000______58_840_48047720);
   _58121_47889020___42515000______58_840_48047720->num_any += 1;
   _58121_47889020___42515000______58_840_48047720->any = realloc(_58121_47889020___42515000______58_840_48047720->any,_58121_47889020___42515000______58_840_48047720->num_any*sizeof(Object));
_58121_47889020___42515000______58_840_48047720->any[_58121_47889020___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__48201940();

   return behavior;
}

Behavior __43488740;

Behavior make__43488740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43488740 = behavior;
   behavior->owner = (Object)__47415400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_46970360___47415400___42515000______58_840_48047720);
   reg__0_46970360___47415400___42515000______58_840_48047720->num_any += 1;
   reg__0_46970360___47415400___42515000______58_840_48047720->any = realloc(reg__0_46970360___47415400___42515000______58_840_48047720->any,reg__0_46970360___47415400___42515000______58_840_48047720->num_any*sizeof(Object));
reg__0_46970360___47415400___42515000______58_840_48047720->any[reg__0_46970360___47415400___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__43489360();

   return behavior;
}

Behavior __43487500;

Behavior make__43487500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43487500 = behavior;
   behavior->owner = (Object)__47415400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58135_47886480___42515000______58_840_48047720);
   _58135_47886480___42515000______58_840_48047720->num_any += 1;
   _58135_47886480___42515000______58_840_48047720->any = realloc(_58135_47886480___42515000______58_840_48047720->any,_58135_47886480___42515000______58_840_48047720->num_any*sizeof(Object));
_58135_47886480___42515000______58_840_48047720->any[_58135_47886480___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__43488300();

   return behavior;
}

Behavior __43485800;

Behavior make__43485800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43485800 = behavior;
   behavior->owner = (Object)__47415400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_46969800___47415400___42515000______58_840_48047720);
   reg__1_46969800___47415400___42515000______58_840_48047720->num_any += 1;
   reg__1_46969800___47415400___42515000______58_840_48047720->any = realloc(reg__1_46969800___47415400___42515000______58_840_48047720->any,reg__1_46969800___47415400___42515000______58_840_48047720->num_any*sizeof(Object));
reg__1_46969800___47415400___42515000______58_840_48047720->any[reg__1_46969800___47415400___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__43486860();

   return behavior;
}

Behavior __43305740;

Behavior make__43305740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43305740 = behavior;
   behavior->owner = (Object)__47415400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58136_47886180___42515000______58_840_48047720);
   _58136_47886180___42515000______58_840_48047720->num_any += 1;
   _58136_47886180___42515000______58_840_48047720->any = realloc(_58136_47886180___42515000______58_840_48047720->any,_58136_47886180___42515000______58_840_48047720->num_any*sizeof(Object));
_58136_47886180___42515000______58_840_48047720->any[_58136_47886180___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__43485080();

   return behavior;
}

Scope make__47415400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47415400 = scope;
   scope->owner = (Object)__42515000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_46970360();
   scope->inners[1] = makereg__1_46969800();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47759040();
   scope->scopes[1] = make__47755680();
   scope->scopes[2] = make__47755060();
   scope->scopes[3] = make__47754520();
   scope->scopes[4] = make__47753900();
   scope->scopes[5] = make__47752780();
   scope->scopes[6] = make__46971460();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48202680();
   scope->behaviors[1] = make__48202480();
   scope->behaviors[2] = make__48201980();
   scope->behaviors[3] = make__48201780();
   scope->behaviors[4] = make__43488740();
   scope->behaviors[5] = make__43487500();
   scope->behaviors[6] = make__43485800();
   scope->behaviors[7] = make__43305740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __46967260;

SignalI reg__0_47591280___46967260___42515000______58_840_48047720;

SignalI makereg__0_47591280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47591280___46967260___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__46967260;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI reg__1_47591200___46967260___42515000______58_840_48047720;

SignalI makereg__1_47591200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47591200___46967260___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__46967260;
   signalI->name = "reg_1";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope __46966840;

Scope make__46966840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46966840 = scope;
   scope->owner = (Object)__46967260;
   scope->name = "";
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

Scope __46966300;

Scope make__46966300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46966300 = scope;
   scope->owner = (Object)__46967260;
   scope->name = "";
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

Scope __46965800;

Scope make__46965800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46965800 = scope;
   scope->owner = (Object)__46967260;
   scope->name = "";
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

Scope __46965280;

SignalI abus__r_47594020___46965280___46967260___42515000______58_840_48047720;

SignalI makeabus__r_47594020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47594020___46965280___46967260___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__46965280;
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

Scope make__46965280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46965280 = scope;
   scope->owner = (Object)__46967260;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47594020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47593400;

SignalI abus__w_47592880___47593400___46967260___42515000______58_840_48047720;

SignalI makeabus__w_47592880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47592880___47593400___46967260___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47593400;
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

Scope make__47593400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47593400 = scope;
   scope->owner = (Object)__46967260;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47592880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47592760;

SignalI abus__r_47592240___47592760___46967260___42515000______58_840_48047720;

SignalI makeabus__r_47592240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47592240___47592760___46967260___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47592760;
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

Scope make__47592760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47592760 = scope;
   scope->owner = (Object)__46967260;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47592240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47592040;

SignalI abus__w_47591580___47592040___46967260___42515000______58_840_48047720;

SignalI makeabus__w_47591580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47591580___47592040___46967260___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47592040;
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

Scope make__47592040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47592040 = scope;
   scope->owner = (Object)__46967260;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47591580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __42681480;

Behavior make__42681480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42681480 = behavior;
   behavior->owner = (Object)__46967260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47591280___46967260___42515000______58_840_48047720);
   reg__0_47591280___46967260___42515000______58_840_48047720->num_any += 1;
   reg__0_47591280___46967260___42515000______58_840_48047720->any = realloc(reg__0_47591280___46967260___42515000______58_840_48047720->any,reg__0_47591280___46967260___42515000______58_840_48047720->num_any*sizeof(Object));
reg__0_47591280___46967260___42515000______58_840_48047720->any[reg__0_47591280___46967260___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__42681840();

   return behavior;
}

Behavior __42680580;

Behavior make__42680580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42680580 = behavior;
   behavior->owner = (Object)__46967260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58150_47888800___42515000______58_840_48047720);
   _58150_47888800___42515000______58_840_48047720->num_any += 1;
   _58150_47888800___42515000______58_840_48047720->any = realloc(_58150_47888800___42515000______58_840_48047720->any,_58150_47888800___42515000______58_840_48047720->num_any*sizeof(Object));
_58150_47888800___42515000______58_840_48047720->any[_58150_47888800___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__42681340();

   return behavior;
}

Behavior __42619400;

Behavior make__42619400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42619400 = behavior;
   behavior->owner = (Object)__46967260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47591200___46967260___42515000______58_840_48047720);
   reg__1_47591200___46967260___42515000______58_840_48047720->num_any += 1;
   reg__1_47591200___46967260___42515000______58_840_48047720->any = realloc(reg__1_47591200___46967260___42515000______58_840_48047720->any,reg__1_47591200___46967260___42515000______58_840_48047720->num_any*sizeof(Object));
reg__1_47591200___46967260___42515000______58_840_48047720->any[reg__1_47591200___46967260___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__42620360();

   return behavior;
}

Behavior __42618440;

Behavior make__42618440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42618440 = behavior;
   behavior->owner = (Object)__46967260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58151_47888500___42515000______58_840_48047720);
   _58151_47888500___42515000______58_840_48047720->num_any += 1;
   _58151_47888500___42515000______58_840_48047720->any = realloc(_58151_47888500___42515000______58_840_48047720->any,_58151_47888500___42515000______58_840_48047720->num_any*sizeof(Object));
_58151_47888500___42515000______58_840_48047720->any[_58151_47888500___42515000______58_840_48047720->num_any-1] = (Object)behavior;
   behavior->block = make__42619040();

   return behavior;
}

Scope make__46967260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46967260 = scope;
   scope->owner = (Object)__42515000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47591280();
   scope->inners[1] = makereg__1_47591200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__46966840();
   scope->scopes[1] = make__46966300();
   scope->scopes[2] = make__46965800();
   scope->scopes[3] = make__46965280();
   scope->scopes[4] = make__47593400();
   scope->scopes[5] = make__47592760();
   scope->scopes[6] = make__47592040();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__42681480();
   scope->behaviors[1] = make__42680580();
   scope->behaviors[2] = make__42619400();
   scope->behaviors[3] = make__42618440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47590280;

SignalI lv0_47589780___47590280___42515000______58_840_48047720;

SignalI makelv0_47589780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47589780___47590280___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47590280;
   signalI->name = "lv0";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI lv1_47589680___47590280___42515000______58_840_48047720;

SignalI makelv1_47589680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47589680___47590280___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47590280;
   signalI->name = "lv1";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rv0_47589560___47590280___42515000______58_840_48047720;

SignalI makerv0_47589560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_47589560___47590280___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47590280;
   signalI->name = "rv0";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rv1_47589460___47590280___42515000______58_840_48047720;

SignalI makerv1_47589460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_47589460___47590280___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47590280;
   signalI->name = "rv1";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI lvok0_47589440___47590280___42515000______58_840_48047720;

SignalI makelvok0_47589440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47589440___47590280___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47590280;
   signalI->name = "lvok0";
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

SignalI lvok1_47589400___47590280___42515000______58_840_48047720;

SignalI makelvok1_47589400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_47589400___47590280___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47590280;
   signalI->name = "lvok1";
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

SignalI rvok0_47589380___47590280___42515000______58_840_48047720;

SignalI makervok0_47589380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_47589380___47590280___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47590280;
   signalI->name = "rvok0";
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

SignalI rvok1_47589360___47590280___42515000______58_840_48047720;

SignalI makervok1_47589360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_47589360___47590280___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47590280;
   signalI->name = "rvok1";
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

SignalI run_47589320___47590280___42515000______58_840_48047720;

SignalI makerun_47589320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47589320___47590280___42515000______58_840_48047720 = signalI;
   signalI->owner = (Object)__47590280;
   signalI->name = "run";
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

Behavior __47855400;

Behavior make__47855400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47855400 = behavior;
   behavior->owner = (Object)__47590280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_47855200___42515000______58_840_48047720);
   clk_47855200___42515000______58_840_48047720->num_pos += 1;
   clk_47855200___42515000______58_840_48047720->pos = realloc(clk_47855200___42515000______58_840_48047720->pos,clk_47855200___42515000______58_840_48047720->num_pos*sizeof(Object));
clk_47855200___42515000______58_840_48047720->pos[clk_47855200___42515000______58_840_48047720->num_pos-1] = (Object)behavior;
   behavior->block = make__47589180();

   return behavior;
}

Scope make__47590280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47590280 = scope;
   scope->owner = (Object)__42515000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47589780();
   scope->inners[1] = makelv1_47589680();
   scope->inners[2] = makerv0_47589560();
   scope->inners[3] = makerv1_47589460();
   scope->inners[4] = makelvok0_47589440();
   scope->inners[5] = makelvok1_47589400();
   scope->inners[6] = makervok0_47589380();
   scope->inners[7] = makervok1_47589360();
   scope->inners[8] = makerun_47589320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47855400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47983180;

Behavior make__47983180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47983180 = behavior;
   behavior->owner = (Object)__42515000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_47855200___42515000______58_840_48047720);
   clk_47855200___42515000______58_840_48047720->num_pos += 1;
   clk_47855200___42515000______58_840_48047720->pos = realloc(clk_47855200___42515000______58_840_48047720->pos,clk_47855200___42515000______58_840_48047720->num_pos*sizeof(Object));
clk_47855200___42515000______58_840_48047720->pos[clk_47855200___42515000______58_840_48047720->num_pos-1] = (Object)behavior;
   behavior->block = make__47885720();

   return behavior;
}

Behavior __48047840;

Behavior make__48047840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48047840 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__42515000;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47983060();

   return behavior;
}

Scope make__42515000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42515000 = scope;
   scope->owner = (Object)_____58_840_48047720;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 33;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_47855200();
   scope->inners[1] = makerst_47855180();
   scope->inners[2] = makereq_47855160();
   scope->inners[3] = make_5814_47855020();
   scope->inners[4] = make_5812_47855000();
   scope->inners[5] = make_5813_47854880();
   scope->inners[6] = make_5843_47854720();
   scope->inners[7] = make_5841_47854700();
   scope->inners[8] = make_5842_47849980();
   scope->inners[9] = make_5872_47890160();
   scope->inners[10] = make_5870_47890140();
   scope->inners[11] = make_5871_47889960();
   scope->inners[12] = make_5889_47889660();
   scope->inners[13] = make_5890_47889580();
   scope->inners[14] = makeack_65_47889440();
   scope->inners[15] = make_58120_47889300();
   scope->inners[16] = make_58121_47889020();
   scope->inners[17] = make_58150_47888800();
   scope->inners[18] = make_58151_47888500();
   scope->inners[19] = makeack_66_47888480();
   scope->inners[20] = make_5816_47888460();
   scope->inners[21] = make_5817_47888260();
   scope->inners[22] = make_5818_47887880();
   scope->inners[23] = make_5845_47887820();
   scope->inners[24] = make_5846_47887380();
   scope->inners[25] = make_5847_47887280();
   scope->inners[26] = make_5874_47887080();
   scope->inners[27] = make_5875_47886940();
   scope->inners[28] = make_5876_47886660();
   scope->inners[29] = make_58135_47886480();
   scope->inners[30] = make_58136_47886180();
   scope->inners[31] = make_58137_47886100();
   scope->inners[32] = makeval_47885900();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__42513800();
   scope->scopes[1] = make__39952620();
   scope->scopes[2] = make__40382900();
   scope->scopes[3] = make__43529800();
   scope->scopes[4] = make__42948440();
   scope->scopes[5] = make__47415400();
   scope->scopes[6] = make__46967260();
   scope->scopes[7] = make__47590280();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47983180();
   scope->behaviors[1] = make__48047840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_48047720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_48047720 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__42515000();

   return systemT;
}