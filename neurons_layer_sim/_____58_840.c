#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_45854540;

Block __45710240;

Block __45709960;

Block __45709560;

void code__45709560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47283740(),_58137_45710460___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45709560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45709560 = block;
   block->owner = (Object)__45709960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45709560;

   return block;
};

void code__45709960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47259880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45709560();
   }
      }
   }
}

Block make__45709960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45709960 = block;
   block->owner = (Object)__45710240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45709960;

   return block;
};

Block __45709080;

Block __45708560;

void code__45708560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47283580(),_5875_45710900___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45708560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45708560 = block;
   block->owner = (Object)__45709080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45708560;

   return block;
};

void code__45709080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47283660();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45708560();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47283520(),_5874_45711000___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45709080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45709080 = block;
   block->owner = (Object)__45710240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45709080;

   return block;
};

Block __45706440;

Block __45705260;

void code__45705260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47283360(),_5846_45711100___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45705260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45705260 = block;
   block->owner = (Object)__45706440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45705260;

   return block;
};

void code__45706440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47283440();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45705260();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47283300(),_5845_45711180___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45706440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45706440 = block;
   block->owner = (Object)__45710240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45706440;

   return block;
};

Block __45703220;

Block __45792620;

void code__45792620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47283140(),_5817_45711300___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45792620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45792620 = block;
   block->owner = (Object)__45703220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45792620;

   return block;
};

void code__45703220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47283220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45792620();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47283040(),_5816_45588540___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45703220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45703220 = block;
   block->owner = (Object)__45710240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45703220;

   return block;
};

Block __45791200;

Block __45789980;

void code__45789980() {
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
                  src0 = _5817_45711300___43550680______58_840_45854540->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47282820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5817_45711300___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47282720(),_5816_45588540___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_45710380___43550680______58_840_45854540->c_value,_5818_45711200___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45789980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45789980 = block;
   block->owner = (Object)__45791200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45789980;

   return block;
};

void code__45791200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47282960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45789980();
   }
      }
   }
}

Block make__45791200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45791200 = block;
   block->owner = (Object)__45710240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45791200;

   return block;
};

Block __45555280;

Block __45554800;

void code__45554800() {
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
                  src0 = _5846_45711100___43550680______58_840_45854540->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47282420();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5846_45711100___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47282320(),_5845_45711180___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_45710380___43550680______58_840_45854540->c_value,_5847_45711020___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45554800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45554800 = block;
   block->owner = (Object)__45555280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45554800;

   return block;
};

void code__45555280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47282560();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45554800();
   }
      }
   }
}

Block make__45555280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45555280 = block;
   block->owner = (Object)__45710240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45555280;

   return block;
};

Block __45553260;

Block __45552640;

void code__45552640() {
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
                  src0 = _5875_45710900___43550680______58_840_45854540->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47282020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5875_45710900___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47281920(),_5874_45711000___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_45710380___43550680______58_840_45854540->c_value,_5876_45710700___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45552640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45552640 = block;
   block->owner = (Object)__45553260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45552640;

   return block;
};

void code__45553260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47282160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45552640();
   }
      }
   }
}

Block make__45553260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45553260 = block;
   block->owner = (Object)__45710240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45553260;

   return block;
};

Block __45550800;

Block __45550360;

Block __45549720;

void code__45549720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_45710380___43550680______58_840_45854540->c_value,_58135_45710620___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45549720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45549720 = block;
   block->owner = (Object)__45550360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45549720;

   return block;
};

Block __45548600;

void code__45548600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_45710380___43550680______58_840_45854540->c_value,_58136_45710540___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45548600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45548600 = block;
   block->owner = (Object)__45550360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45548600;

   return block;
};

void code__45550360() {
{
      Value value = _58137_45710460___43550680______58_840_45854540->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__47281640())) {
    code__45549720();
         }
         else if (value2integer(value) == value2integer(make__47281540())) {
    code__45548600();
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
                  src0 = _58137_45710460___43550680______58_840_45854540->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47281340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58137_45710460___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45550360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45550360 = block;
   block->owner = (Object)__45550800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45550360;

   return block;
};

void code__45550800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47281760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45550360();
   }
      }
   }
}

Block make__45550800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45550800 = block;
   block->owner = (Object)__45710240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45550800;

   return block;
};

void code__45710240() {
 code__45709960();
 code__45709080();
 code__45706440();
 code__45703220();
 code__45791200();
 code__45555280();
 code__45553260();
 code__45550800();
}

Block make__45710240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45710240 = block;
   block->owner = (Object)__45684640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45710240;

   return block;
};

Block __45684400;

void code__45684400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47281200(),req_45589740___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47281140(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47281080(),rst_45589780___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47280980(),val_45710380___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47280880(),rst_45589780___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47280780(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47280460(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47280100(),rst_45589780___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47279740(),val_45710380___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47279380(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47279080(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47279020(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278960(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278900(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278840(),req_45589740___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278760(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278700(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278560(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278460(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278400(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278340(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278280(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278180(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278120(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278060(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47278000(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47277940(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47277880(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47277820(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47277760(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47277700(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47277640(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47277580(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47277520(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47277460(),clk_45589800___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45854840);
}

Block make__45684400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45684400 = block;
   block->owner = (Object)__45854840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45684400;

   return block;
};

Block __44930700;

Block __44927820;

void code__44927820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_43606040___43550300___43550680______58_840_45854540->c_value,make_ref_rangeS(mem_44318760___43550300___43550680______58_840_45854540,value2integer(abus__w_44325180___43550300___43550680______58_840_45854540->c_value),value2integer(abus__w_44325180___43550300___43550680______58_840_45854540->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__44927820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44927820 = block;
   block->owner = (Object)__44930700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44927820;

   return block;
};

void code__44930700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_44318760___43550300___43550680______58_840_45854540->c_value;
            idx = value2integer(abus__r_44326720___43550300___43550680______58_840_45854540->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_43606200___43550300___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_43606420___43550300___43550680______58_840_45854540->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__44927820();
   }
      }
   }
}

Block make__44930700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44930700 = block;
   block->owner = (Object)__44926080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44930700;

   return block;
};

Block __46713840;

void code__46713840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_43606200___43550300___43550680______58_840_45854540->c_value,_5814_45589640___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46713840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46713840 = block;
   block->owner = (Object)__46713420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46713840;

   return block;
};

Block __46713380;

void code__46713380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_45589640___43550680______58_840_45854540->c_value,dbus__r_43606200___43550300___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46713380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46713380 = block;
   block->owner = (Object)__46713220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46713380;

   return block;
};

Block __46712680;

void code__46712680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_43606440___43550300___43550680______58_840_45854540->c_value,_5812_45589620___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46712680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46712680 = block;
   block->owner = (Object)__46712520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46712680;

   return block;
};

Block __46712480;

void code__46712480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5812_45589620___43550680______58_840_45854540->c_value,trig__r_43606440___43550300___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46712480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46712480 = block;
   block->owner = (Object)__46712180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46712480;

   return block;
};

Block __46711680;

void code__46711680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_44326720___43550300___43550680______58_840_45854540->c_value,_5813_45589540___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46711680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46711680 = block;
   block->owner = (Object)__46711440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46711680;

   return block;
};

Block __46711380;

void code__46711380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_45589540___43550680______58_840_45854540->c_value,abus__r_44326720___43550300___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46711380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46711380 = block;
   block->owner = (Object)__46711080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46711380;

   return block;
};

Block __46833500;

void code__46833500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_43606420___43550300___43550680______58_840_45854540->c_value,_5816_45588540___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46833500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46833500 = block;
   block->owner = (Object)__46833340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46833500;

   return block;
};

Block __46833300;

void code__46833300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5816_45588540___43550680______58_840_45854540->c_value,trig__w_43606420___43550300___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46833300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46833300 = block;
   block->owner = (Object)__46833140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46833300;

   return block;
};

Block __46832840;

void code__46832840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_44325180___43550300___43550680______58_840_45854540->c_value,_5817_45711300___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46832840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46832840 = block;
   block->owner = (Object)__46832680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46832840;

   return block;
};

Block __46832640;

void code__46832640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_45711300___43550680______58_840_45854540->c_value,abus__w_44325180___43550300___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46832640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46832640 = block;
   block->owner = (Object)__46832480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46832640;

   return block;
};

Block __46832180;

void code__46832180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_43606040___43550300___43550680______58_840_45854540->c_value,_5818_45711200___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46832180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46832180 = block;
   block->owner = (Object)__46832020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46832180;

   return block;
};

Block __46831940;

void code__46831940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_45711200___43550680______58_840_45854540->c_value,dbus__w_43606040___43550300___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46831940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46831940 = block;
   block->owner = (Object)__46831780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46831940;

   return block;
};

Block __44992200;

Block __44990540;

void code__44990540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_44976260___44925920___43550680______58_840_45854540->c_value,make_ref_rangeS(mem_44975500___44925920___43550680______58_840_45854540,value2integer(abus__w_44975900___44925920___43550680______58_840_45854540->c_value),value2integer(abus__w_44975900___44925920___43550680______58_840_45854540->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__44990540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44990540 = block;
   block->owner = (Object)__44992200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44990540;

   return block;
};

void code__44992200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_44975500___44925920___43550680______58_840_45854540->c_value;
            idx = value2integer(abus__r_44976100___44925920___43550680______58_840_45854540->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_44976480___44925920___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_44976620___44925920___43550680______58_840_45854540->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__44990540();
   }
      }
   }
}

Block make__44992200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44992200 = block;
   block->owner = (Object)__45030040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44992200;

   return block;
};

Block __46830340;

void code__46830340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_44976480___44925920___43550680______58_840_45854540->c_value,_5843_45589460___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46830340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46830340 = block;
   block->owner = (Object)__46830180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46830340;

   return block;
};

Block __46830140;

void code__46830140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_45589460___43550680______58_840_45854540->c_value,dbus__r_44976480___44925920___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46830140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46830140 = block;
   block->owner = (Object)__46829980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46830140;

   return block;
};

Block __46829680;

void code__46829680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_44976640___44925920___43550680______58_840_45854540->c_value,_5841_45589440___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46829680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46829680 = block;
   block->owner = (Object)__46829520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46829680;

   return block;
};

Block __46829480;

void code__46829480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5841_45589440___43550680______58_840_45854540->c_value,trig__r_44976640___44925920___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46829480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46829480 = block;
   block->owner = (Object)__46829320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46829480;

   return block;
};

Block __46829020;

void code__46829020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_44976100___44925920___43550680______58_840_45854540->c_value,_5842_45589360___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46829020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46829020 = block;
   block->owner = (Object)__46828860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46829020;

   return block;
};

Block __46828820;

void code__46828820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5842_45589360___43550680______58_840_45854540->c_value,abus__r_44976100___44925920___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46828820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46828820 = block;
   block->owner = (Object)__46828660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46828820;

   return block;
};

Block __46828360;

void code__46828360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_44976620___44925920___43550680______58_840_45854540->c_value,_5845_45711180___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46828360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46828360 = block;
   block->owner = (Object)__46828200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46828360;

   return block;
};

Block __46828160;

void code__46828160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_45711180___43550680______58_840_45854540->c_value,trig__w_44976620___44925920___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46828160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46828160 = block;
   block->owner = (Object)__46828000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46828160;

   return block;
};

Block __46827700;

void code__46827700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_44975900___44925920___43550680______58_840_45854540->c_value,_5846_45711100___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46827700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46827700 = block;
   block->owner = (Object)__46827540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46827700;

   return block;
};

Block __46827500;

void code__46827500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5846_45711100___43550680______58_840_45854540->c_value,abus__w_44975900___44925920___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46827500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46827500 = block;
   block->owner = (Object)__46827340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46827500;

   return block;
};

Block __46827040;

void code__46827040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_44976260___44925920___43550680______58_840_45854540->c_value,_5847_45711020___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46827040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46827040 = block;
   block->owner = (Object)__46826880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46827040;

   return block;
};

Block __46826840;

void code__46826840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5847_45711020___43550680______58_840_45854540->c_value,dbus__w_44976260___44925920___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46826840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46826840 = block;
   block->owner = (Object)__46826680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46826840;

   return block;
};

Block __45107380;

Block __45162220;

void code__45162220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_45110560___45027740___43550680______58_840_45854540->c_value,make_ref_rangeS(mem_45110040___45027740___43550680______58_840_45854540,value2integer(abus__w_45110280___45027740___43550680______58_840_45854540->c_value),value2integer(abus__w_45110280___45027740___43550680______58_840_45854540->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__45162220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45162220 = block;
   block->owner = (Object)__45107380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45162220;

   return block;
};

void code__45107380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_45110040___45027740___43550680______58_840_45854540->c_value;
            idx = value2integer(abus__r_45110360___45027740___43550680______58_840_45854540->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_45110780___45027740___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_45110920___45027740___43550680______58_840_45854540->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45162220();
   }
      }
   }
}

Block make__45107380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45107380 = block;
   block->owner = (Object)__45158120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45107380;

   return block;
};

Block __46849440;

void code__46849440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_45110780___45027740___43550680______58_840_45854540->c_value,_5872_45589260___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46849440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46849440 = block;
   block->owner = (Object)__46849200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46849440;

   return block;
};

Block __46849140;

void code__46849140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5872_45589260___43550680______58_840_45854540->c_value,dbus__r_45110780___45027740___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46849140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46849140 = block;
   block->owner = (Object)__46848920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46849140;

   return block;
};

Block __46848620;

void code__46848620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_45110940___45027740___43550680______58_840_45854540->c_value,_5870_45589240___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46848620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46848620 = block;
   block->owner = (Object)__46848460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46848620;

   return block;
};

Block __46848420;

void code__46848420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5870_45589240___43550680______58_840_45854540->c_value,trig__r_45110940___45027740___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46848420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46848420 = block;
   block->owner = (Object)__46848260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46848420;

   return block;
};

Block __46847920;

void code__46847920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_45110360___45027740___43550680______58_840_45854540->c_value,_5871_45589140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46847920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46847920 = block;
   block->owner = (Object)__46847700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46847920;

   return block;
};

Block __46847640;

void code__46847640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5871_45589140___43550680______58_840_45854540->c_value,abus__r_45110360___45027740___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46847640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46847640 = block;
   block->owner = (Object)__46847340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46847640;

   return block;
};

Block __46847040;

void code__46847040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_45110920___45027740___43550680______58_840_45854540->c_value,_5874_45711000___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46847040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46847040 = block;
   block->owner = (Object)__46846880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46847040;

   return block;
};

Block __46846840;

void code__46846840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5874_45711000___43550680______58_840_45854540->c_value,trig__w_45110920___45027740___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46846840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46846840 = block;
   block->owner = (Object)__46846680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46846840;

   return block;
};

Block __46846380;

void code__46846380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_45110280___45027740___43550680______58_840_45854540->c_value,_5875_45710900___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46846380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46846380 = block;
   block->owner = (Object)__46846220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46846380;

   return block;
};

Block __46846180;

void code__46846180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5875_45710900___43550680______58_840_45854540->c_value,abus__w_45110280___45027740___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46846180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46846180 = block;
   block->owner = (Object)__46846020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46846180;

   return block;
};

Block __46845720;

void code__46845720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_45110560___45027740___43550680______58_840_45854540->c_value,_5876_45710700___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46845720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46845720 = block;
   block->owner = (Object)__46845560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46845720;

   return block;
};

Block __46845520;

void code__46845520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5876_45710700___43550680______58_840_45854540->c_value,dbus__w_45110560___45027740___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46845520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46845520 = block;
   block->owner = (Object)__46845360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46845520;

   return block;
};

Block __46844000;

void code__46844000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45182800___45157960___43550680______58_840_45854540->c_value,_5889_45589040___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46844000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46844000 = block;
   block->owner = (Object)__46843840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46844000;

   return block;
};

Block __46843800;

void code__46843800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5889_45589040___43550680______58_840_45854540->c_value,reg__0_45182800___45157960___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46843800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46843800 = block;
   block->owner = (Object)__46843640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46843800;

   return block;
};

Block __46843340;

void code__46843340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45182640___45157960___43550680______58_840_45854540->c_value,_5890_45588960___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46843340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46843340 = block;
   block->owner = (Object)__46843180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46843340;

   return block;
};

Block __46843140;

void code__46843140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_45588960___43550680______58_840_45854540->c_value,reg__1_45182640___45157960___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46843140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46843140 = block;
   block->owner = (Object)__46842980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46843140;

   return block;
};

Block __45179980;

Block __45179660;

Block __45179140;

void code__45179140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46984300(),_5842_45589360___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45179140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45179140 = block;
   block->owner = (Object)__45179660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45179140;

   return block;
};

void code__45179660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__46984380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45179140();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46984240(),_5841_45589440___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45179660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45179660 = block;
   block->owner = (Object)__45179980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45179660;

   return block;
};

Block __45235300;

Block __45234860;

void code__45234860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46984080(),_5813_45589540___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45234860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45234860 = block;
   block->owner = (Object)__45235300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45234860;

   return block;
};

void code__45235300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__46984160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45234860();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46984020(),_5812_45589620___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45235300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45235300 = block;
   block->owner = (Object)__45179980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45235300;

   return block;
};

Block __45234020;

Block __45233580;

void code__45233580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46983860(),_5871_45589140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45233580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45233580 = block;
   block->owner = (Object)__45234020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45233580;

   return block;
};

void code__45234020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__46983940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45233580();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46983800(),_5870_45589240___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45234020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45234020 = block;
   block->owner = (Object)__45179980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45234020;

   return block;
};

Block __45228500;

Block __45278160;

Block __45301380;

Block __45300920;

void code__45300920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5872_45589260___43550680______58_840_45854540->c_value,rv_45180340___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46983180(),rvok_45180160___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45300920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45300920 = block;
   block->owner = (Object)__45301380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45300920;

   return block;
};

void code__45301380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5870_45589240___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__46983340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45300920();
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
                  src0 = _5871_45589140___43550680______58_840_45854540->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__46983020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5871_45589140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46982920(),_5870_45589240___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45301380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45301380 = block;
   block->owner = (Object)__45278160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45301380;

   return block;
};

void code__45278160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__46983440();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45301380();
   }
      }
   }
}

Block make__45278160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45278160 = block;
   block->owner = (Object)__45228500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45278160;

   return block;
};

Block __45298500;

Block __45298000;

Block __45297600;

void code__45297600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_45589640___43550680______58_840_45854540->c_value,lv0_45180920___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46982580(),lvok0_45180320___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45297600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45297600 = block;
   block->owner = (Object)__45298000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45297600;

   return block;
};

void code__45298000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5812_45589620___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__46982740();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45297600();
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
                  src0 = _5813_45589540___43550680______58_840_45854540->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__46982460();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5813_45589540___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46982360(),_5812_45589620___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45298000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45298000 = block;
   block->owner = (Object)__45298500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45298000;

   return block;
};

void code__45298500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__46982840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45298000();
   }
      }
   }
}

Block make__45298500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45298500 = block;
   block->owner = (Object)__45228500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45298500;

   return block;
};

Block __45294660;

Block __45293960;

Block __45358200;

void code__45358200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_45180660___45181660___43550680______58_840_45854540->c_value,_5889_45589040___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45358200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45358200 = block;
   block->owner = (Object)__45293960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45358200;

   return block;
};

void code__45293960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_45180660___45181660___43550680______58_840_45854540->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = lv0_45180920___45181660___43550680______58_840_45854540->c_value;
            src1 = rv_45180340___45181660___43550680______58_840_45854540->c_value;
            dst = mul_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_45180660___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
 code__45358200();
}

Block make__45293960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45293960 = block;
   block->owner = (Object)__45294660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45293960;

   return block;
};

void code__45294660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46982200(),ack_65_45588940___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46982140(),run_45180140___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
 code__45293960();
}

Block make__45294660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45294660 = block;
   block->owner = (Object)__45228500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45294660;

   return block;
};

Block __45357400;

Block __45356920;

Block __45355720;

void code__45355720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_45589460___43550680______58_840_45854540->c_value,lv1_45180800___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46981520(),lvok1_45180180___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45355720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45355720 = block;
   block->owner = (Object)__45356920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45355720;

   return block;
};

void code__45356920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5841_45589440___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__46981680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45355720();
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
                  src0 = _5842_45589360___43550680______58_840_45854540->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__46981400();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5842_45589360___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46981300(),_5841_45589440___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45356920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45356920 = block;
   block->owner = (Object)__45357400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45356920;

   return block;
};

void code__45357400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45589780___43550680______58_840_45854540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__46981780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45356920();
   }
      }
   }
}

Block make__45357400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45357400 = block;
   block->owner = (Object)__45228500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45357400;

   return block;
};

Block __45387440;

Block __45385460;

Block __45384620;

void code__45384620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_45180520___45181660___43550680______58_840_45854540->c_value,_5890_45588960___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45384620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45384620 = block;
   block->owner = (Object)__45385460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45384620;

   return block;
};

void code__45385460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_45180520___45181660___43550680______58_840_45854540->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = lv1_45180800___45181660___43550680______58_840_45854540->c_value;
            src1 = rv_45180340___45181660___43550680______58_840_45854540->c_value;
            dst = mul_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_45180520___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
 code__45384620();
}

Block make__45385460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45385460 = block;
   block->owner = (Object)__45387440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45385460;

   return block;
};

void code__45387440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47267060(),ack_65_45588940___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47266700(),run_45180140___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
 code__45385460();
}

Block make__45387440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45387440 = block;
   block->owner = (Object)__45228500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45387440;

   return block;
};

void code__45228500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46983520(),run_45180140___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
 code__45278160();
 code__45298500();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_45180320___45181660___43550680______58_840_45854540->c_value;
         src1 = rvok_45180160___45181660___43550680______58_840_45854540->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45294660();
   }
      }
   }
 code__45357400();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_45180180___45181660___43550680______58_840_45854540->c_value;
         src1 = rvok_45180160___45181660___43550680______58_840_45854540->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45387440();
   }
      }
   }
}

Block make__45228500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45228500 = block;
   block->owner = (Object)__45179980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45228500;

   return block;
};

Block __45232060;

void code__45232060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47265340(),rvok_45180160___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47265280(),lvok0_45180320___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47265220(),av0_45180660___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47265160(),lvok1_45180180___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47265100(),av1_45180520___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45232060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45232060 = block;
   block->owner = (Object)__45179980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45232060;

   return block;
};

void code__45179980() {
 code__45179660();
 code__45235300();
 code__45234020();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46983740(),ack_65_45588940___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46983680(),run_45180140___45181660___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_45589740___43550680______58_840_45854540->c_value;
         src1 = run_45180140___45181660___43550680______58_840_45854540->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45228500();
   }
   else {
  code__45232060();
   }
      }
   }
}

Block make__45179980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45179980 = block;
   block->owner = (Object)__45432300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45179980;

   return block;
};

Block __46865960;

void code__46865960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45460420___45432160___43550680______58_840_45854540->c_value,_58120_45588860___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46865960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46865960 = block;
   block->owner = (Object)__46865800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46865960;

   return block;
};

Block __46865760;

void code__46865760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58120_45588860___43550680______58_840_45854540->c_value,reg__0_45460420___45432160___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46865760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46865760 = block;
   block->owner = (Object)__46865600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46865760;

   return block;
};

Block __46865300;

void code__46865300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45460300___45432160___43550680______58_840_45854540->c_value,_58121_45588760___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46865300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46865300 = block;
   block->owner = (Object)__46865140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46865300;

   return block;
};

Block __46865100;

void code__46865100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58121_45588760___43550680______58_840_45854540->c_value,reg__1_45460300___45432160___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46865100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46865100 = block;
   block->owner = (Object)__46864940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46865100;

   return block;
};

Block __46864640;

void code__46864640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45460420___45432160___43550680______58_840_45854540->c_value,_58135_45710620___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46864640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46864640 = block;
   block->owner = (Object)__46864480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46864640;

   return block;
};

Block __46864440;

void code__46864440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58135_45710620___43550680______58_840_45854540->c_value,reg__0_45460420___45432160___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46864440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46864440 = block;
   block->owner = (Object)__46864280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46864440;

   return block;
};

Block __46863980;

void code__46863980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45460300___45432160___43550680______58_840_45854540->c_value,_58136_45710540___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46863980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46863980 = block;
   block->owner = (Object)__46863820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46863980;

   return block;
};

Block __46863780;

void code__46863780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58136_45710540___43550680______58_840_45854540->c_value,reg__1_45460300___45432160___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46863780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46863780 = block;
   block->owner = (Object)__46863620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46863780;

   return block;
};

Block __46862200;

void code__46862200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_45425760___45429060___45432160___43550680______58_840_45854540->c_value,_58137_45710460___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46862200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46862200 = block;
   block->owner = (Object)__46862040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46862200;

   return block;
};

Block __46862000;

void code__46862000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58137_45710460___43550680______58_840_45854540->c_value,abus__w_45425760___45429060___45432160___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46862000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46862000 = block;
   block->owner = (Object)__46861840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46862000;

   return block;
};

Block __46860840;

void code__46860840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45538620___45458160___43550680______58_840_45854540->c_value,_58150_45588680___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46860840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46860840 = block;
   block->owner = (Object)__46860680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46860840;

   return block;
};

Block __46860640;

void code__46860640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58150_45588680___43550680______58_840_45854540->c_value,reg__0_45538620___45458160___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46860640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46860640 = block;
   block->owner = (Object)__46860480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46860640;

   return block;
};

Block __46860180;

void code__46860180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45538460___45458160___43550680______58_840_45854540->c_value,_58151_45588600___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46860180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46860180 = block;
   block->owner = (Object)__46860020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46860180;

   return block;
};

Block __46859980;

void code__46859980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58151_45588600___43550680______58_840_45854540->c_value,reg__1_45538460___45458160___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__46859980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46859980 = block;
   block->owner = (Object)__46859820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46859980;

   return block;
};

Block __45535780;

Block __45532960;

Block __45532400;

void code__45532400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5889_45589040___43550680______58_840_45854540->c_value,lv0_45536500___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47263000(),lvok0_45536100___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45532400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45532400 = block;
   block->owner = (Object)__45532960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45532400;

   return block;
};

Block __45531440;

void code__45531440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58120_45588860___43550680______58_840_45854540->c_value,rv0_45536260___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47262860(),rvok0_45536040___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45531440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45531440 = block;
   block->owner = (Object)__45532960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45531440;

   return block;
};

Block __45595300;

Block __45594640;

void code__45594640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_45536500___45537140___43550680______58_840_45854540->c_value;
      src1 = rv0_45536260___45537140___43550680______58_840_45854540->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58150_45588680___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45594640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45594640 = block;
   block->owner = (Object)__45595300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45594640;

   return block;
};

void code__45595300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47262700(),run_45535940___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47262640(),ack_66_45588560___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
 code__45594640();
}

Block make__45595300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45595300 = block;
   block->owner = (Object)__45532960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45595300;

   return block;
};

Block __45593640;

void code__45593640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_45588960___43550680______58_840_45854540->c_value,lv1_45536360___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47262360(),lvok1_45536060___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45593640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45593640 = block;
   block->owner = (Object)__45532960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45593640;

   return block;
};

Block __45592980;

void code__45592980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58121_45588760___43550680______58_840_45854540->c_value,rv1_45536120___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47262220(),rvok1_45536000___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45592980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45592980 = block;
   block->owner = (Object)__45532960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45592980;

   return block;
};

Block __45592100;

Block __45591000;

void code__45591000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_45536360___45537140___43550680______58_840_45854540->c_value;
      src1 = rv1_45536120___45537140___43550680______58_840_45854540->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58151_45588600___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45591000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45591000 = block;
   block->owner = (Object)__45592100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45591000;

   return block;
};

void code__45592100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47262060(),run_45535940___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47262000(),ack_66_45588560___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
 code__45591000();
}

Block make__45592100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45592100 = block;
   block->owner = (Object)__45532960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45592100;

   return block;
};

void code__45532960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47263140(),run_45535940___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
 code__45532400();
 code__45531440();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_45536100___45537140___43550680______58_840_45854540->c_value;
         src1 = rvok0_45536040___45537140___43550680______58_840_45854540->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45595300();
   }
      }
   }
 code__45593640();
 code__45592980();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_45536060___45537140___43550680______58_840_45854540->c_value;
         src1 = rvok1_45536000___45537140___43550680______58_840_45854540->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45592100();
   }
      }
   }
}

Block make__45532960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45532960 = block;
   block->owner = (Object)__45535780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45532960;

   return block;
};

Block __45535040;

void code__45535040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47261340(),lvok0_45536100___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47260980(),rvok0_45536040___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47260620(),lvok1_45536060___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47260260(),rvok1_45536000___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
}

Block make__45535040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45535040 = block;
   block->owner = (Object)__45535780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45535040;

   return block;
};

void code__45535780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47263360(),ack_66_45588560___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47263300(),run_45535940___45537140___43550680______58_840_45854540);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack_65_45588940___43550680______58_840_45854540->c_value;
         src1 = run_45535940___45537140___43550680______58_840_45854540->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45532960();
   }
   else {
  code__45535040();
   }
      }
   }
}

Block make__45535780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45535780 = block;
   block->owner = (Object)__45589980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45535780;

   return block;
};

Value make__46984380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46984300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__46984240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46984160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46984080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__46984020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46983940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46983860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__46983800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46983740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46983680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46983520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46983440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46983340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46983180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46983020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46982920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46982840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46982740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46982580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46982460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46982360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46982200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46982140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46981780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46981680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46981520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46981400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46981300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47267060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47266700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47265340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47265280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47265220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47265160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47265100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47263360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47263300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47263140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47263000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47262860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47262700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47262640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47262360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47262220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47262060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47262000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47261340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47260980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47260620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47260260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47259880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47283740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47283660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47283580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47283520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47283440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47283360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47283300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47283220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47283140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47283040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47282960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47282820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47282720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47282560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47282420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47282320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47282160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47282020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47281920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47281760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47281640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47281540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47281340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47281200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47281140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47281080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47280980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47280880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47280780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47280460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47280100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47279740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47279380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47279080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47279020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47278000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47277940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47277880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47277820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47277760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47277700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47277640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47277580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47277520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47277460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope __43550680;

SignalI clk_45589800___43550680______58_840_45854540;

SignalI makeclk_45589800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_45589800___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI rst_45589780___43550680______58_840_45854540;

SignalI makerst_45589780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_45589780___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI req_45589740___43550680______58_840_45854540;

SignalI makereq_45589740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_45589740___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5814_45589640___43550680______58_840_45854540;

SignalI make_5814_45589640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_45589640___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5812_45589620___43550680______58_840_45854540;

SignalI make_5812_45589620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5812_45589620___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5813_45589540___43550680______58_840_45854540;

SignalI make_5813_45589540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_45589540___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5843_45589460___43550680______58_840_45854540;

SignalI make_5843_45589460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_45589460___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5841_45589440___43550680______58_840_45854540;

SignalI make_5841_45589440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5841_45589440___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5842_45589360___43550680______58_840_45854540;

SignalI make_5842_45589360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5842_45589360___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5872_45589260___43550680______58_840_45854540;

SignalI make_5872_45589260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5872_45589260___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5870_45589240___43550680______58_840_45854540;

SignalI make_5870_45589240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5870_45589240___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5871_45589140___43550680______58_840_45854540;

SignalI make_5871_45589140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5871_45589140___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5889_45589040___43550680______58_840_45854540;

SignalI make_5889_45589040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5889_45589040___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5890_45588960___43550680______58_840_45854540;

SignalI make_5890_45588960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5890_45588960___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI ack_65_45588940___43550680______58_840_45854540;

SignalI makeack_65_45588940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_65_45588940___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _58120_45588860___43550680______58_840_45854540;

SignalI make_58120_45588860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58120_45588860___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _58121_45588760___43550680______58_840_45854540;

SignalI make_58121_45588760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58121_45588760___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _58150_45588680___43550680______58_840_45854540;

SignalI make_58150_45588680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58150_45588680___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _58151_45588600___43550680______58_840_45854540;

SignalI make_58151_45588600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58151_45588600___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI ack_66_45588560___43550680______58_840_45854540;

SignalI makeack_66_45588560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_66_45588560___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5816_45588540___43550680______58_840_45854540;

SignalI make_5816_45588540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5816_45588540___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5817_45711300___43550680______58_840_45854540;

SignalI make_5817_45711300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_45711300___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5818_45711200___43550680______58_840_45854540;

SignalI make_5818_45711200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_45711200___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5845_45711180___43550680______58_840_45854540;

SignalI make_5845_45711180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_45711180___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5846_45711100___43550680______58_840_45854540;

SignalI make_5846_45711100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5846_45711100___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5847_45711020___43550680______58_840_45854540;

SignalI make_5847_45711020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5847_45711020___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5874_45711000___43550680______58_840_45854540;

SignalI make_5874_45711000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5874_45711000___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5875_45710900___43550680______58_840_45854540;

SignalI make_5875_45710900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5875_45710900___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _5876_45710700___43550680______58_840_45854540;

SignalI make_5876_45710700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5876_45710700___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _58135_45710620___43550680______58_840_45854540;

SignalI make_58135_45710620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58135_45710620___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _58136_45710540___43550680______58_840_45854540;

SignalI make_58136_45710540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58136_45710540___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI _58137_45710460___43550680______58_840_45854540;

SignalI make_58137_45710460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58137_45710460___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

SignalI val_45710380___43550680______58_840_45854540;

SignalI makeval_45710380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   val_45710380___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550680;
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

Scope __43550300;

SignalI trig__r_43606440___43550300___43550680______58_840_45854540;

SignalI maketrig__r_43606440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_43606440___43550300___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550300;
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

SignalI trig__w_43606420___43550300___43550680______58_840_45854540;

SignalI maketrig__w_43606420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_43606420___43550300___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550300;
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

SignalI dbus__r_43606200___43550300___43550680______58_840_45854540;

SignalI makedbus__r_43606200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_43606200___43550300___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550300;
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

SignalI dbus__w_43606040___43550300___43550680______58_840_45854540;

SignalI makedbus__w_43606040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_43606040___43550300___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550300;
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

SignalI abus__r_44326720___43550300___43550680______58_840_45854540;

SignalI makeabus__r_44326720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_44326720___43550300___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550300;
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

SignalI abus__w_44325180___43550300___43550680______58_840_45854540;

SignalI makeabus__w_44325180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_44325180___43550300___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550300;
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

SignalI mem_44318760___43550300___43550680______58_840_45854540;

SignalI makemem_44318760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_44318760___43550300___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__43550300;
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

Scope __43549700;

Scope make__43549700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43549700 = scope;
   scope->owner = (Object)__43550300;
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

Scope __43572980;

Scope make__43572980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43572980 = scope;
   scope->owner = (Object)__43550300;
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

Scope __43567880;

Scope make__43567880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43567880 = scope;
   scope->owner = (Object)__43550300;
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

Scope __43609040;

Scope make__43609040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43609040 = scope;
   scope->owner = (Object)__43550300;
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

Scope __43608200;

Scope make__43608200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43608200 = scope;
   scope->owner = (Object)__43550300;
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

Scope __43607200;

Scope make__43607200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43607200 = scope;
   scope->owner = (Object)__43550300;
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

Behavior __44926080;

Behavior make__44926080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44926080 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_45589800___43550680______58_840_45854540);
   clk_45589800___43550680______58_840_45854540->num_neg += 1;
   clk_45589800___43550680______58_840_45854540->neg = realloc(clk_45589800___43550680______58_840_45854540->neg,clk_45589800___43550680______58_840_45854540->num_neg*sizeof(Object));
clk_45589800___43550680______58_840_45854540->neg[clk_45589800___43550680______58_840_45854540->num_neg-1] = (Object)behavior;
   behavior->block = make__44930700();

   return behavior;
}

Behavior __46713420;

Behavior make__46713420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46713420 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_43606200___43550300___43550680______58_840_45854540);
   dbus__r_43606200___43550300___43550680______58_840_45854540->num_any += 1;
   dbus__r_43606200___43550300___43550680______58_840_45854540->any = realloc(dbus__r_43606200___43550300___43550680______58_840_45854540->any,dbus__r_43606200___43550300___43550680______58_840_45854540->num_any*sizeof(Object));
dbus__r_43606200___43550300___43550680______58_840_45854540->any[dbus__r_43606200___43550300___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46713840();

   return behavior;
}

Behavior __46713220;

Behavior make__46713220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46713220 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_45589640___43550680______58_840_45854540);
   _5814_45589640___43550680______58_840_45854540->num_any += 1;
   _5814_45589640___43550680______58_840_45854540->any = realloc(_5814_45589640___43550680______58_840_45854540->any,_5814_45589640___43550680______58_840_45854540->num_any*sizeof(Object));
_5814_45589640___43550680______58_840_45854540->any[_5814_45589640___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46713380();

   return behavior;
}

Behavior __46712520;

Behavior make__46712520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46712520 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_43606440___43550300___43550680______58_840_45854540);
   trig__r_43606440___43550300___43550680______58_840_45854540->num_any += 1;
   trig__r_43606440___43550300___43550680______58_840_45854540->any = realloc(trig__r_43606440___43550300___43550680______58_840_45854540->any,trig__r_43606440___43550300___43550680______58_840_45854540->num_any*sizeof(Object));
trig__r_43606440___43550300___43550680______58_840_45854540->any[trig__r_43606440___43550300___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46712680();

   return behavior;
}

Behavior __46712180;

Behavior make__46712180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46712180 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5812_45589620___43550680______58_840_45854540);
   _5812_45589620___43550680______58_840_45854540->num_any += 1;
   _5812_45589620___43550680______58_840_45854540->any = realloc(_5812_45589620___43550680______58_840_45854540->any,_5812_45589620___43550680______58_840_45854540->num_any*sizeof(Object));
_5812_45589620___43550680______58_840_45854540->any[_5812_45589620___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46712480();

   return behavior;
}

Behavior __46711440;

Behavior make__46711440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46711440 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_44326720___43550300___43550680______58_840_45854540);
   abus__r_44326720___43550300___43550680______58_840_45854540->num_any += 1;
   abus__r_44326720___43550300___43550680______58_840_45854540->any = realloc(abus__r_44326720___43550300___43550680______58_840_45854540->any,abus__r_44326720___43550300___43550680______58_840_45854540->num_any*sizeof(Object));
abus__r_44326720___43550300___43550680______58_840_45854540->any[abus__r_44326720___43550300___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46711680();

   return behavior;
}

Behavior __46711080;

Behavior make__46711080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46711080 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_45589540___43550680______58_840_45854540);
   _5813_45589540___43550680______58_840_45854540->num_any += 1;
   _5813_45589540___43550680______58_840_45854540->any = realloc(_5813_45589540___43550680______58_840_45854540->any,_5813_45589540___43550680______58_840_45854540->num_any*sizeof(Object));
_5813_45589540___43550680______58_840_45854540->any[_5813_45589540___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46711380();

   return behavior;
}

Behavior __46833340;

Behavior make__46833340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46833340 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_43606420___43550300___43550680______58_840_45854540);
   trig__w_43606420___43550300___43550680______58_840_45854540->num_any += 1;
   trig__w_43606420___43550300___43550680______58_840_45854540->any = realloc(trig__w_43606420___43550300___43550680______58_840_45854540->any,trig__w_43606420___43550300___43550680______58_840_45854540->num_any*sizeof(Object));
trig__w_43606420___43550300___43550680______58_840_45854540->any[trig__w_43606420___43550300___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46833500();

   return behavior;
}

Behavior __46833140;

Behavior make__46833140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46833140 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5816_45588540___43550680______58_840_45854540);
   _5816_45588540___43550680______58_840_45854540->num_any += 1;
   _5816_45588540___43550680______58_840_45854540->any = realloc(_5816_45588540___43550680______58_840_45854540->any,_5816_45588540___43550680______58_840_45854540->num_any*sizeof(Object));
_5816_45588540___43550680______58_840_45854540->any[_5816_45588540___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46833300();

   return behavior;
}

Behavior __46832680;

Behavior make__46832680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46832680 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_44325180___43550300___43550680______58_840_45854540);
   abus__w_44325180___43550300___43550680______58_840_45854540->num_any += 1;
   abus__w_44325180___43550300___43550680______58_840_45854540->any = realloc(abus__w_44325180___43550300___43550680______58_840_45854540->any,abus__w_44325180___43550300___43550680______58_840_45854540->num_any*sizeof(Object));
abus__w_44325180___43550300___43550680______58_840_45854540->any[abus__w_44325180___43550300___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46832840();

   return behavior;
}

Behavior __46832480;

Behavior make__46832480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46832480 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_45711300___43550680______58_840_45854540);
   _5817_45711300___43550680______58_840_45854540->num_any += 1;
   _5817_45711300___43550680______58_840_45854540->any = realloc(_5817_45711300___43550680______58_840_45854540->any,_5817_45711300___43550680______58_840_45854540->num_any*sizeof(Object));
_5817_45711300___43550680______58_840_45854540->any[_5817_45711300___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46832640();

   return behavior;
}

Behavior __46832020;

Behavior make__46832020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46832020 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_43606040___43550300___43550680______58_840_45854540);
   dbus__w_43606040___43550300___43550680______58_840_45854540->num_any += 1;
   dbus__w_43606040___43550300___43550680______58_840_45854540->any = realloc(dbus__w_43606040___43550300___43550680______58_840_45854540->any,dbus__w_43606040___43550300___43550680______58_840_45854540->num_any*sizeof(Object));
dbus__w_43606040___43550300___43550680______58_840_45854540->any[dbus__w_43606040___43550300___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46832180();

   return behavior;
}

Behavior __46831780;

Behavior make__46831780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46831780 = behavior;
   behavior->owner = (Object)__43550300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_45711200___43550680______58_840_45854540);
   _5818_45711200___43550680______58_840_45854540->num_any += 1;
   _5818_45711200___43550680______58_840_45854540->any = realloc(_5818_45711200___43550680______58_840_45854540->any,_5818_45711200___43550680______58_840_45854540->num_any*sizeof(Object));
_5818_45711200___43550680______58_840_45854540->any[_5818_45711200___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46831940();

   return behavior;
}

Scope make__43550300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43550300 = scope;
   scope->owner = (Object)__43550680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_43606440();
   scope->inners[1] = maketrig__w_43606420();
   scope->inners[2] = makedbus__r_43606200();
   scope->inners[3] = makedbus__w_43606040();
   scope->inners[4] = makeabus__r_44326720();
   scope->inners[5] = makeabus__w_44325180();
   scope->inners[6] = makemem_44318760();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__43549700();
   scope->scopes[1] = make__43572980();
   scope->scopes[2] = make__43567880();
   scope->scopes[3] = make__43609040();
   scope->scopes[4] = make__43608200();
   scope->scopes[5] = make__43607200();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__44926080();
   scope->behaviors[1] = make__46713420();
   scope->behaviors[2] = make__46713220();
   scope->behaviors[3] = make__46712520();
   scope->behaviors[4] = make__46712180();
   scope->behaviors[5] = make__46711440();
   scope->behaviors[6] = make__46711080();
   scope->behaviors[7] = make__46833340();
   scope->behaviors[8] = make__46833140();
   scope->behaviors[9] = make__46832680();
   scope->behaviors[10] = make__46832480();
   scope->behaviors[11] = make__46832020();
   scope->behaviors[12] = make__46831780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __44925920;

SignalI trig__r_44976640___44925920___43550680______58_840_45854540;

SignalI maketrig__r_44976640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_44976640___44925920___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__44925920;
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

SignalI trig__w_44976620___44925920___43550680______58_840_45854540;

SignalI maketrig__w_44976620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_44976620___44925920___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__44925920;
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

SignalI dbus__r_44976480___44925920___43550680______58_840_45854540;

SignalI makedbus__r_44976480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_44976480___44925920___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__44925920;
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

SignalI dbus__w_44976260___44925920___43550680______58_840_45854540;

SignalI makedbus__w_44976260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_44976260___44925920___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__44925920;
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

SignalI abus__r_44976100___44925920___43550680______58_840_45854540;

SignalI makeabus__r_44976100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_44976100___44925920___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__44925920;
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

SignalI abus__w_44975900___44925920___43550680______58_840_45854540;

SignalI makeabus__w_44975900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_44975900___44925920___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__44925920;
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

SignalI mem_44975500___44925920___43550680______58_840_45854540;

SignalI makemem_44975500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_44975500___44925920___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__44925920;
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

Scope __44925440;

Scope make__44925440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __44925440 = scope;
   scope->owner = (Object)__44925920;
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

Scope __44981380;

Scope make__44981380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __44981380 = scope;
   scope->owner = (Object)__44925920;
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

Scope __44980560;

Scope make__44980560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __44980560 = scope;
   scope->owner = (Object)__44925920;
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

Scope __44979580;

Scope make__44979580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __44979580 = scope;
   scope->owner = (Object)__44925920;
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

Scope __44978400;

Scope make__44978400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __44978400 = scope;
   scope->owner = (Object)__44925920;
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

Scope __44977600;

Scope make__44977600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __44977600 = scope;
   scope->owner = (Object)__44925920;
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

Behavior __45030040;

Behavior make__45030040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45030040 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_45589800___43550680______58_840_45854540);
   clk_45589800___43550680______58_840_45854540->num_neg += 1;
   clk_45589800___43550680______58_840_45854540->neg = realloc(clk_45589800___43550680______58_840_45854540->neg,clk_45589800___43550680______58_840_45854540->num_neg*sizeof(Object));
clk_45589800___43550680______58_840_45854540->neg[clk_45589800___43550680______58_840_45854540->num_neg-1] = (Object)behavior;
   behavior->block = make__44992200();

   return behavior;
}

Behavior __46830180;

Behavior make__46830180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46830180 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_44976480___44925920___43550680______58_840_45854540);
   dbus__r_44976480___44925920___43550680______58_840_45854540->num_any += 1;
   dbus__r_44976480___44925920___43550680______58_840_45854540->any = realloc(dbus__r_44976480___44925920___43550680______58_840_45854540->any,dbus__r_44976480___44925920___43550680______58_840_45854540->num_any*sizeof(Object));
dbus__r_44976480___44925920___43550680______58_840_45854540->any[dbus__r_44976480___44925920___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46830340();

   return behavior;
}

Behavior __46829980;

Behavior make__46829980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46829980 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_45589460___43550680______58_840_45854540);
   _5843_45589460___43550680______58_840_45854540->num_any += 1;
   _5843_45589460___43550680______58_840_45854540->any = realloc(_5843_45589460___43550680______58_840_45854540->any,_5843_45589460___43550680______58_840_45854540->num_any*sizeof(Object));
_5843_45589460___43550680______58_840_45854540->any[_5843_45589460___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46830140();

   return behavior;
}

Behavior __46829520;

Behavior make__46829520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46829520 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_44976640___44925920___43550680______58_840_45854540);
   trig__r_44976640___44925920___43550680______58_840_45854540->num_any += 1;
   trig__r_44976640___44925920___43550680______58_840_45854540->any = realloc(trig__r_44976640___44925920___43550680______58_840_45854540->any,trig__r_44976640___44925920___43550680______58_840_45854540->num_any*sizeof(Object));
trig__r_44976640___44925920___43550680______58_840_45854540->any[trig__r_44976640___44925920___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46829680();

   return behavior;
}

Behavior __46829320;

Behavior make__46829320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46829320 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5841_45589440___43550680______58_840_45854540);
   _5841_45589440___43550680______58_840_45854540->num_any += 1;
   _5841_45589440___43550680______58_840_45854540->any = realloc(_5841_45589440___43550680______58_840_45854540->any,_5841_45589440___43550680______58_840_45854540->num_any*sizeof(Object));
_5841_45589440___43550680______58_840_45854540->any[_5841_45589440___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46829480();

   return behavior;
}

Behavior __46828860;

Behavior make__46828860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46828860 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_44976100___44925920___43550680______58_840_45854540);
   abus__r_44976100___44925920___43550680______58_840_45854540->num_any += 1;
   abus__r_44976100___44925920___43550680______58_840_45854540->any = realloc(abus__r_44976100___44925920___43550680______58_840_45854540->any,abus__r_44976100___44925920___43550680______58_840_45854540->num_any*sizeof(Object));
abus__r_44976100___44925920___43550680______58_840_45854540->any[abus__r_44976100___44925920___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46829020();

   return behavior;
}

Behavior __46828660;

Behavior make__46828660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46828660 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5842_45589360___43550680______58_840_45854540);
   _5842_45589360___43550680______58_840_45854540->num_any += 1;
   _5842_45589360___43550680______58_840_45854540->any = realloc(_5842_45589360___43550680______58_840_45854540->any,_5842_45589360___43550680______58_840_45854540->num_any*sizeof(Object));
_5842_45589360___43550680______58_840_45854540->any[_5842_45589360___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46828820();

   return behavior;
}

Behavior __46828200;

Behavior make__46828200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46828200 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_44976620___44925920___43550680______58_840_45854540);
   trig__w_44976620___44925920___43550680______58_840_45854540->num_any += 1;
   trig__w_44976620___44925920___43550680______58_840_45854540->any = realloc(trig__w_44976620___44925920___43550680______58_840_45854540->any,trig__w_44976620___44925920___43550680______58_840_45854540->num_any*sizeof(Object));
trig__w_44976620___44925920___43550680______58_840_45854540->any[trig__w_44976620___44925920___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46828360();

   return behavior;
}

Behavior __46828000;

Behavior make__46828000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46828000 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_45711180___43550680______58_840_45854540);
   _5845_45711180___43550680______58_840_45854540->num_any += 1;
   _5845_45711180___43550680______58_840_45854540->any = realloc(_5845_45711180___43550680______58_840_45854540->any,_5845_45711180___43550680______58_840_45854540->num_any*sizeof(Object));
_5845_45711180___43550680______58_840_45854540->any[_5845_45711180___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46828160();

   return behavior;
}

Behavior __46827540;

Behavior make__46827540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46827540 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_44975900___44925920___43550680______58_840_45854540);
   abus__w_44975900___44925920___43550680______58_840_45854540->num_any += 1;
   abus__w_44975900___44925920___43550680______58_840_45854540->any = realloc(abus__w_44975900___44925920___43550680______58_840_45854540->any,abus__w_44975900___44925920___43550680______58_840_45854540->num_any*sizeof(Object));
abus__w_44975900___44925920___43550680______58_840_45854540->any[abus__w_44975900___44925920___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46827700();

   return behavior;
}

Behavior __46827340;

Behavior make__46827340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46827340 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5846_45711100___43550680______58_840_45854540);
   _5846_45711100___43550680______58_840_45854540->num_any += 1;
   _5846_45711100___43550680______58_840_45854540->any = realloc(_5846_45711100___43550680______58_840_45854540->any,_5846_45711100___43550680______58_840_45854540->num_any*sizeof(Object));
_5846_45711100___43550680______58_840_45854540->any[_5846_45711100___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46827500();

   return behavior;
}

Behavior __46826880;

Behavior make__46826880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46826880 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_44976260___44925920___43550680______58_840_45854540);
   dbus__w_44976260___44925920___43550680______58_840_45854540->num_any += 1;
   dbus__w_44976260___44925920___43550680______58_840_45854540->any = realloc(dbus__w_44976260___44925920___43550680______58_840_45854540->any,dbus__w_44976260___44925920___43550680______58_840_45854540->num_any*sizeof(Object));
dbus__w_44976260___44925920___43550680______58_840_45854540->any[dbus__w_44976260___44925920___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46827040();

   return behavior;
}

Behavior __46826680;

Behavior make__46826680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46826680 = behavior;
   behavior->owner = (Object)__44925920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5847_45711020___43550680______58_840_45854540);
   _5847_45711020___43550680______58_840_45854540->num_any += 1;
   _5847_45711020___43550680______58_840_45854540->any = realloc(_5847_45711020___43550680______58_840_45854540->any,_5847_45711020___43550680______58_840_45854540->num_any*sizeof(Object));
_5847_45711020___43550680______58_840_45854540->any[_5847_45711020___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46826840();

   return behavior;
}

Scope make__44925920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __44925920 = scope;
   scope->owner = (Object)__43550680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_44976640();
   scope->inners[1] = maketrig__w_44976620();
   scope->inners[2] = makedbus__r_44976480();
   scope->inners[3] = makedbus__w_44976260();
   scope->inners[4] = makeabus__r_44976100();
   scope->inners[5] = makeabus__w_44975900();
   scope->inners[6] = makemem_44975500();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__44925440();
   scope->scopes[1] = make__44981380();
   scope->scopes[2] = make__44980560();
   scope->scopes[3] = make__44979580();
   scope->scopes[4] = make__44978400();
   scope->scopes[5] = make__44977600();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45030040();
   scope->behaviors[1] = make__46830180();
   scope->behaviors[2] = make__46829980();
   scope->behaviors[3] = make__46829520();
   scope->behaviors[4] = make__46829320();
   scope->behaviors[5] = make__46828860();
   scope->behaviors[6] = make__46828660();
   scope->behaviors[7] = make__46828200();
   scope->behaviors[8] = make__46828000();
   scope->behaviors[9] = make__46827540();
   scope->behaviors[10] = make__46827340();
   scope->behaviors[11] = make__46826880();
   scope->behaviors[12] = make__46826680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45027740;

SignalI trig__r_45110940___45027740___43550680______58_840_45854540;

SignalI maketrig__r_45110940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_45110940___45027740___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45027740;
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

SignalI trig__w_45110920___45027740___43550680______58_840_45854540;

SignalI maketrig__w_45110920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_45110920___45027740___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45027740;
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

SignalI dbus__r_45110780___45027740___43550680______58_840_45854540;

SignalI makedbus__r_45110780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_45110780___45027740___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45027740;
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

SignalI dbus__w_45110560___45027740___43550680______58_840_45854540;

SignalI makedbus__w_45110560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_45110560___45027740___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45027740;
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

SignalI abus__r_45110360___45027740___43550680______58_840_45854540;

SignalI makeabus__r_45110360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45110360___45027740___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45027740;
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

SignalI abus__w_45110280___45027740___43550680______58_840_45854540;

SignalI makeabus__w_45110280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45110280___45027740___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45027740;
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

SignalI mem_45110040___45027740___43550680______58_840_45854540;

SignalI makemem_45110040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_45110040___45027740___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45027740;
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

Scope __45025140;

Scope make__45025140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45025140 = scope;
   scope->owner = (Object)__45027740;
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

Scope __45095320;

Scope make__45095320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45095320 = scope;
   scope->owner = (Object)__45027740;
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

Scope __45094080;

Scope make__45094080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45094080 = scope;
   scope->owner = (Object)__45027740;
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

Scope __45092540;

Scope make__45092540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45092540 = scope;
   scope->owner = (Object)__45027740;
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

Scope __45090680;

Scope make__45090680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45090680 = scope;
   scope->owner = (Object)__45027740;
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

Scope __45111520;

Scope make__45111520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45111520 = scope;
   scope->owner = (Object)__45027740;
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

Behavior __45158120;

Behavior make__45158120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45158120 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_45589800___43550680______58_840_45854540);
   clk_45589800___43550680______58_840_45854540->num_neg += 1;
   clk_45589800___43550680______58_840_45854540->neg = realloc(clk_45589800___43550680______58_840_45854540->neg,clk_45589800___43550680______58_840_45854540->num_neg*sizeof(Object));
clk_45589800___43550680______58_840_45854540->neg[clk_45589800___43550680______58_840_45854540->num_neg-1] = (Object)behavior;
   behavior->block = make__45107380();

   return behavior;
}

Behavior __46849200;

Behavior make__46849200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46849200 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_45110780___45027740___43550680______58_840_45854540);
   dbus__r_45110780___45027740___43550680______58_840_45854540->num_any += 1;
   dbus__r_45110780___45027740___43550680______58_840_45854540->any = realloc(dbus__r_45110780___45027740___43550680______58_840_45854540->any,dbus__r_45110780___45027740___43550680______58_840_45854540->num_any*sizeof(Object));
dbus__r_45110780___45027740___43550680______58_840_45854540->any[dbus__r_45110780___45027740___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46849440();

   return behavior;
}

Behavior __46848920;

Behavior make__46848920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46848920 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5872_45589260___43550680______58_840_45854540);
   _5872_45589260___43550680______58_840_45854540->num_any += 1;
   _5872_45589260___43550680______58_840_45854540->any = realloc(_5872_45589260___43550680______58_840_45854540->any,_5872_45589260___43550680______58_840_45854540->num_any*sizeof(Object));
_5872_45589260___43550680______58_840_45854540->any[_5872_45589260___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46849140();

   return behavior;
}

Behavior __46848460;

Behavior make__46848460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46848460 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_45110940___45027740___43550680______58_840_45854540);
   trig__r_45110940___45027740___43550680______58_840_45854540->num_any += 1;
   trig__r_45110940___45027740___43550680______58_840_45854540->any = realloc(trig__r_45110940___45027740___43550680______58_840_45854540->any,trig__r_45110940___45027740___43550680______58_840_45854540->num_any*sizeof(Object));
trig__r_45110940___45027740___43550680______58_840_45854540->any[trig__r_45110940___45027740___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46848620();

   return behavior;
}

Behavior __46848260;

Behavior make__46848260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46848260 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5870_45589240___43550680______58_840_45854540);
   _5870_45589240___43550680______58_840_45854540->num_any += 1;
   _5870_45589240___43550680______58_840_45854540->any = realloc(_5870_45589240___43550680______58_840_45854540->any,_5870_45589240___43550680______58_840_45854540->num_any*sizeof(Object));
_5870_45589240___43550680______58_840_45854540->any[_5870_45589240___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46848420();

   return behavior;
}

Behavior __46847700;

Behavior make__46847700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46847700 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_45110360___45027740___43550680______58_840_45854540);
   abus__r_45110360___45027740___43550680______58_840_45854540->num_any += 1;
   abus__r_45110360___45027740___43550680______58_840_45854540->any = realloc(abus__r_45110360___45027740___43550680______58_840_45854540->any,abus__r_45110360___45027740___43550680______58_840_45854540->num_any*sizeof(Object));
abus__r_45110360___45027740___43550680______58_840_45854540->any[abus__r_45110360___45027740___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46847920();

   return behavior;
}

Behavior __46847340;

Behavior make__46847340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46847340 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5871_45589140___43550680______58_840_45854540);
   _5871_45589140___43550680______58_840_45854540->num_any += 1;
   _5871_45589140___43550680______58_840_45854540->any = realloc(_5871_45589140___43550680______58_840_45854540->any,_5871_45589140___43550680______58_840_45854540->num_any*sizeof(Object));
_5871_45589140___43550680______58_840_45854540->any[_5871_45589140___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46847640();

   return behavior;
}

Behavior __46846880;

Behavior make__46846880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46846880 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_45110920___45027740___43550680______58_840_45854540);
   trig__w_45110920___45027740___43550680______58_840_45854540->num_any += 1;
   trig__w_45110920___45027740___43550680______58_840_45854540->any = realloc(trig__w_45110920___45027740___43550680______58_840_45854540->any,trig__w_45110920___45027740___43550680______58_840_45854540->num_any*sizeof(Object));
trig__w_45110920___45027740___43550680______58_840_45854540->any[trig__w_45110920___45027740___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46847040();

   return behavior;
}

Behavior __46846680;

Behavior make__46846680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46846680 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5874_45711000___43550680______58_840_45854540);
   _5874_45711000___43550680______58_840_45854540->num_any += 1;
   _5874_45711000___43550680______58_840_45854540->any = realloc(_5874_45711000___43550680______58_840_45854540->any,_5874_45711000___43550680______58_840_45854540->num_any*sizeof(Object));
_5874_45711000___43550680______58_840_45854540->any[_5874_45711000___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46846840();

   return behavior;
}

Behavior __46846220;

Behavior make__46846220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46846220 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_45110280___45027740___43550680______58_840_45854540);
   abus__w_45110280___45027740___43550680______58_840_45854540->num_any += 1;
   abus__w_45110280___45027740___43550680______58_840_45854540->any = realloc(abus__w_45110280___45027740___43550680______58_840_45854540->any,abus__w_45110280___45027740___43550680______58_840_45854540->num_any*sizeof(Object));
abus__w_45110280___45027740___43550680______58_840_45854540->any[abus__w_45110280___45027740___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46846380();

   return behavior;
}

Behavior __46846020;

Behavior make__46846020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46846020 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5875_45710900___43550680______58_840_45854540);
   _5875_45710900___43550680______58_840_45854540->num_any += 1;
   _5875_45710900___43550680______58_840_45854540->any = realloc(_5875_45710900___43550680______58_840_45854540->any,_5875_45710900___43550680______58_840_45854540->num_any*sizeof(Object));
_5875_45710900___43550680______58_840_45854540->any[_5875_45710900___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46846180();

   return behavior;
}

Behavior __46845560;

Behavior make__46845560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46845560 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_45110560___45027740___43550680______58_840_45854540);
   dbus__w_45110560___45027740___43550680______58_840_45854540->num_any += 1;
   dbus__w_45110560___45027740___43550680______58_840_45854540->any = realloc(dbus__w_45110560___45027740___43550680______58_840_45854540->any,dbus__w_45110560___45027740___43550680______58_840_45854540->num_any*sizeof(Object));
dbus__w_45110560___45027740___43550680______58_840_45854540->any[dbus__w_45110560___45027740___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46845720();

   return behavior;
}

Behavior __46845360;

Behavior make__46845360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46845360 = behavior;
   behavior->owner = (Object)__45027740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5876_45710700___43550680______58_840_45854540);
   _5876_45710700___43550680______58_840_45854540->num_any += 1;
   _5876_45710700___43550680______58_840_45854540->any = realloc(_5876_45710700___43550680______58_840_45854540->any,_5876_45710700___43550680______58_840_45854540->num_any*sizeof(Object));
_5876_45710700___43550680______58_840_45854540->any[_5876_45710700___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46845520();

   return behavior;
}

Scope make__45027740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45027740 = scope;
   scope->owner = (Object)__43550680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_45110940();
   scope->inners[1] = maketrig__w_45110920();
   scope->inners[2] = makedbus__r_45110780();
   scope->inners[3] = makedbus__w_45110560();
   scope->inners[4] = makeabus__r_45110360();
   scope->inners[5] = makeabus__w_45110280();
   scope->inners[6] = makemem_45110040();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__45025140();
   scope->scopes[1] = make__45095320();
   scope->scopes[2] = make__45094080();
   scope->scopes[3] = make__45092540();
   scope->scopes[4] = make__45090680();
   scope->scopes[5] = make__45111520();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45158120();
   scope->behaviors[1] = make__46849200();
   scope->behaviors[2] = make__46848920();
   scope->behaviors[3] = make__46848460();
   scope->behaviors[4] = make__46848260();
   scope->behaviors[5] = make__46847700();
   scope->behaviors[6] = make__46847340();
   scope->behaviors[7] = make__46846880();
   scope->behaviors[8] = make__46846680();
   scope->behaviors[9] = make__46846220();
   scope->behaviors[10] = make__46846020();
   scope->behaviors[11] = make__46845560();
   scope->behaviors[12] = make__46845360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45157960;

SignalI reg__0_45182800___45157960___43550680______58_840_45854540;

SignalI makereg__0_45182800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_45182800___45157960___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45157960;
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

SignalI reg__1_45182640___45157960___43550680______58_840_45854540;

SignalI makereg__1_45182640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_45182640___45157960___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45157960;
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

Scope __45157100;

Scope make__45157100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45157100 = scope;
   scope->owner = (Object)__45157960;
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

Scope __45156080;

Scope make__45156080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45156080 = scope;
   scope->owner = (Object)__45157960;
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

Scope __45155480;

Scope make__45155480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45155480 = scope;
   scope->owner = (Object)__45157960;
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

Scope __45154960;

SignalI abus__r_45154400___45154960___45157960___43550680______58_840_45854540;

SignalI makeabus__r_45154400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45154400___45154960___45157960___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45154960;
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

Scope make__45154960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45154960 = scope;
   scope->owner = (Object)__45157960;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45154400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45186980;

SignalI abus__w_45186280___45186980___45157960___43550680______58_840_45854540;

SignalI makeabus__w_45186280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45186280___45186980___45157960___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45186980;
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

Scope make__45186980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45186980 = scope;
   scope->owner = (Object)__45157960;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45186280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45186140;

SignalI abus__r_45184780___45186140___45157960___43550680______58_840_45854540;

SignalI makeabus__r_45184780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45184780___45186140___45157960___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45186140;
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

Scope make__45186140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45186140 = scope;
   scope->owner = (Object)__45157960;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45184780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45184200;

SignalI abus__w_45183360___45184200___45157960___43550680______58_840_45854540;

SignalI makeabus__w_45183360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45183360___45184200___45157960___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45184200;
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

Scope make__45184200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45184200 = scope;
   scope->owner = (Object)__45157960;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45183360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __46843840;

Behavior make__46843840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46843840 = behavior;
   behavior->owner = (Object)__45157960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45182800___45157960___43550680______58_840_45854540);
   reg__0_45182800___45157960___43550680______58_840_45854540->num_any += 1;
   reg__0_45182800___45157960___43550680______58_840_45854540->any = realloc(reg__0_45182800___45157960___43550680______58_840_45854540->any,reg__0_45182800___45157960___43550680______58_840_45854540->num_any*sizeof(Object));
reg__0_45182800___45157960___43550680______58_840_45854540->any[reg__0_45182800___45157960___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46844000();

   return behavior;
}

Behavior __46843640;

Behavior make__46843640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46843640 = behavior;
   behavior->owner = (Object)__45157960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5889_45589040___43550680______58_840_45854540);
   _5889_45589040___43550680______58_840_45854540->num_any += 1;
   _5889_45589040___43550680______58_840_45854540->any = realloc(_5889_45589040___43550680______58_840_45854540->any,_5889_45589040___43550680______58_840_45854540->num_any*sizeof(Object));
_5889_45589040___43550680______58_840_45854540->any[_5889_45589040___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46843800();

   return behavior;
}

Behavior __46843180;

Behavior make__46843180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46843180 = behavior;
   behavior->owner = (Object)__45157960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_45182640___45157960___43550680______58_840_45854540);
   reg__1_45182640___45157960___43550680______58_840_45854540->num_any += 1;
   reg__1_45182640___45157960___43550680______58_840_45854540->any = realloc(reg__1_45182640___45157960___43550680______58_840_45854540->any,reg__1_45182640___45157960___43550680______58_840_45854540->num_any*sizeof(Object));
reg__1_45182640___45157960___43550680______58_840_45854540->any[reg__1_45182640___45157960___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46843340();

   return behavior;
}

Behavior __46842980;

Behavior make__46842980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46842980 = behavior;
   behavior->owner = (Object)__45157960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5890_45588960___43550680______58_840_45854540);
   _5890_45588960___43550680______58_840_45854540->num_any += 1;
   _5890_45588960___43550680______58_840_45854540->any = realloc(_5890_45588960___43550680______58_840_45854540->any,_5890_45588960___43550680______58_840_45854540->num_any*sizeof(Object));
_5890_45588960___43550680______58_840_45854540->any[_5890_45588960___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46843140();

   return behavior;
}

Scope make__45157960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45157960 = scope;
   scope->owner = (Object)__43550680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_45182800();
   scope->inners[1] = makereg__1_45182640();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__45157100();
   scope->scopes[1] = make__45156080();
   scope->scopes[2] = make__45155480();
   scope->scopes[3] = make__45154960();
   scope->scopes[4] = make__45186980();
   scope->scopes[5] = make__45186140();
   scope->scopes[6] = make__45184200();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46843840();
   scope->behaviors[1] = make__46843640();
   scope->behaviors[2] = make__46843180();
   scope->behaviors[3] = make__46842980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45181660;

SignalI lv0_45180920___45181660___43550680______58_840_45854540;

SignalI makelv0_45180920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_45180920___45181660___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45181660;
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

SignalI lv1_45180800___45181660___43550680______58_840_45854540;

SignalI makelv1_45180800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_45180800___45181660___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45181660;
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

SignalI av0_45180660___45181660___43550680______58_840_45854540;

SignalI makeav0_45180660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_45180660___45181660___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45181660;
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

SignalI av1_45180520___45181660___43550680______58_840_45854540;

SignalI makeav1_45180520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_45180520___45181660___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45181660;
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

SignalI rv_45180340___45181660___43550680______58_840_45854540;

SignalI makerv_45180340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_45180340___45181660___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45181660;
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

SignalI lvok0_45180320___45181660___43550680______58_840_45854540;

SignalI makelvok0_45180320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_45180320___45181660___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45181660;
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

SignalI lvok1_45180180___45181660___43550680______58_840_45854540;

SignalI makelvok1_45180180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_45180180___45181660___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45181660;
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

SignalI rvok_45180160___45181660___43550680______58_840_45854540;

SignalI makervok_45180160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_45180160___45181660___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45181660;
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

SignalI run_45180140___45181660___43550680______58_840_45854540;

SignalI makerun_45180140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_45180140___45181660___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45181660;
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

Behavior __45432300;

Behavior make__45432300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45432300 = behavior;
   behavior->owner = (Object)__45181660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_45589800___43550680______58_840_45854540);
   clk_45589800___43550680______58_840_45854540->num_pos += 1;
   clk_45589800___43550680______58_840_45854540->pos = realloc(clk_45589800___43550680______58_840_45854540->pos,clk_45589800___43550680______58_840_45854540->num_pos*sizeof(Object));
clk_45589800___43550680______58_840_45854540->pos[clk_45589800___43550680______58_840_45854540->num_pos-1] = (Object)behavior;
   behavior->block = make__45179980();

   return behavior;
}

Scope make__45181660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45181660 = scope;
   scope->owner = (Object)__43550680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_45180920();
   scope->inners[1] = makelv1_45180800();
   scope->inners[2] = makeav0_45180660();
   scope->inners[3] = makeav1_45180520();
   scope->inners[4] = makerv_45180340();
   scope->inners[5] = makelvok0_45180320();
   scope->inners[6] = makelvok1_45180180();
   scope->inners[7] = makervok_45180160();
   scope->inners[8] = makerun_45180140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45432300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45432160;

SignalI reg__0_45460420___45432160___43550680______58_840_45854540;

SignalI makereg__0_45460420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_45460420___45432160___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45432160;
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

SignalI reg__1_45460300___45432160___43550680______58_840_45854540;

SignalI makereg__1_45460300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_45460300___45432160___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45432160;
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

Scope __45431740;

Scope make__45431740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45431740 = scope;
   scope->owner = (Object)__45432160;
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

Scope __45431060;

Scope make__45431060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45431060 = scope;
   scope->owner = (Object)__45432160;
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

Scope __45430360;

Scope make__45430360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45430360 = scope;
   scope->owner = (Object)__45432160;
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

Scope __45429800;

SignalI abus__r_45429200___45429800___45432160___43550680______58_840_45854540;

SignalI makeabus__r_45429200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45429200___45429800___45432160___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45429800;
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

Scope make__45429800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45429800 = scope;
   scope->owner = (Object)__45432160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45429200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45429060;

SignalI abus__w_45425760___45429060___45432160___43550680______58_840_45854540;

SignalI makeabus__w_45425760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45425760___45429060___45432160___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45429060;
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

Behavior __46862040;

Behavior make__46862040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46862040 = behavior;
   behavior->owner = (Object)__45429060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_45425760___45429060___45432160___43550680______58_840_45854540);
   abus__w_45425760___45429060___45432160___43550680______58_840_45854540->num_any += 1;
   abus__w_45425760___45429060___45432160___43550680______58_840_45854540->any = realloc(abus__w_45425760___45429060___45432160___43550680______58_840_45854540->any,abus__w_45425760___45429060___45432160___43550680______58_840_45854540->num_any*sizeof(Object));
abus__w_45425760___45429060___45432160___43550680______58_840_45854540->any[abus__w_45425760___45429060___45432160___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46862200();

   return behavior;
}

Behavior __46861840;

Behavior make__46861840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46861840 = behavior;
   behavior->owner = (Object)__45429060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58137_45710460___43550680______58_840_45854540);
   _58137_45710460___43550680______58_840_45854540->num_any += 1;
   _58137_45710460___43550680______58_840_45854540->any = realloc(_58137_45710460___43550680______58_840_45854540->any,_58137_45710460___43550680______58_840_45854540->num_any*sizeof(Object));
_58137_45710460___43550680______58_840_45854540->any[_58137_45710460___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46862000();

   return behavior;
}

Scope make__45429060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45429060 = scope;
   scope->owner = (Object)__45432160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45425760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46862040();
   scope->behaviors[1] = make__46861840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45425000;

SignalI abus__r_45465380___45425000___45432160___43550680______58_840_45854540;

SignalI makeabus__r_45465380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45465380___45425000___45432160___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45425000;
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

Scope make__45425000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45425000 = scope;
   scope->owner = (Object)__45432160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45465380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45465260;

SignalI abus__w_45461600___45465260___45432160___43550680______58_840_45854540;

SignalI makeabus__w_45461600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45461600___45465260___45432160___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45465260;
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

Scope make__45465260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45465260 = scope;
   scope->owner = (Object)__45432160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45461600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __46865800;

Behavior make__46865800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46865800 = behavior;
   behavior->owner = (Object)__45432160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45460420___45432160___43550680______58_840_45854540);
   reg__0_45460420___45432160___43550680______58_840_45854540->num_any += 1;
   reg__0_45460420___45432160___43550680______58_840_45854540->any = realloc(reg__0_45460420___45432160___43550680______58_840_45854540->any,reg__0_45460420___45432160___43550680______58_840_45854540->num_any*sizeof(Object));
reg__0_45460420___45432160___43550680______58_840_45854540->any[reg__0_45460420___45432160___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46865960();

   return behavior;
}

Behavior __46865600;

Behavior make__46865600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46865600 = behavior;
   behavior->owner = (Object)__45432160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58120_45588860___43550680______58_840_45854540);
   _58120_45588860___43550680______58_840_45854540->num_any += 1;
   _58120_45588860___43550680______58_840_45854540->any = realloc(_58120_45588860___43550680______58_840_45854540->any,_58120_45588860___43550680______58_840_45854540->num_any*sizeof(Object));
_58120_45588860___43550680______58_840_45854540->any[_58120_45588860___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46865760();

   return behavior;
}

Behavior __46865140;

Behavior make__46865140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46865140 = behavior;
   behavior->owner = (Object)__45432160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_45460300___45432160___43550680______58_840_45854540);
   reg__1_45460300___45432160___43550680______58_840_45854540->num_any += 1;
   reg__1_45460300___45432160___43550680______58_840_45854540->any = realloc(reg__1_45460300___45432160___43550680______58_840_45854540->any,reg__1_45460300___45432160___43550680______58_840_45854540->num_any*sizeof(Object));
reg__1_45460300___45432160___43550680______58_840_45854540->any[reg__1_45460300___45432160___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46865300();

   return behavior;
}

Behavior __46864940;

Behavior make__46864940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46864940 = behavior;
   behavior->owner = (Object)__45432160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58121_45588760___43550680______58_840_45854540);
   _58121_45588760___43550680______58_840_45854540->num_any += 1;
   _58121_45588760___43550680______58_840_45854540->any = realloc(_58121_45588760___43550680______58_840_45854540->any,_58121_45588760___43550680______58_840_45854540->num_any*sizeof(Object));
_58121_45588760___43550680______58_840_45854540->any[_58121_45588760___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46865100();

   return behavior;
}

Behavior __46864480;

Behavior make__46864480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46864480 = behavior;
   behavior->owner = (Object)__45432160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45460420___45432160___43550680______58_840_45854540);
   reg__0_45460420___45432160___43550680______58_840_45854540->num_any += 1;
   reg__0_45460420___45432160___43550680______58_840_45854540->any = realloc(reg__0_45460420___45432160___43550680______58_840_45854540->any,reg__0_45460420___45432160___43550680______58_840_45854540->num_any*sizeof(Object));
reg__0_45460420___45432160___43550680______58_840_45854540->any[reg__0_45460420___45432160___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46864640();

   return behavior;
}

Behavior __46864280;

Behavior make__46864280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46864280 = behavior;
   behavior->owner = (Object)__45432160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58135_45710620___43550680______58_840_45854540);
   _58135_45710620___43550680______58_840_45854540->num_any += 1;
   _58135_45710620___43550680______58_840_45854540->any = realloc(_58135_45710620___43550680______58_840_45854540->any,_58135_45710620___43550680______58_840_45854540->num_any*sizeof(Object));
_58135_45710620___43550680______58_840_45854540->any[_58135_45710620___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46864440();

   return behavior;
}

Behavior __46863820;

Behavior make__46863820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46863820 = behavior;
   behavior->owner = (Object)__45432160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_45460300___45432160___43550680______58_840_45854540);
   reg__1_45460300___45432160___43550680______58_840_45854540->num_any += 1;
   reg__1_45460300___45432160___43550680______58_840_45854540->any = realloc(reg__1_45460300___45432160___43550680______58_840_45854540->any,reg__1_45460300___45432160___43550680______58_840_45854540->num_any*sizeof(Object));
reg__1_45460300___45432160___43550680______58_840_45854540->any[reg__1_45460300___45432160___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46863980();

   return behavior;
}

Behavior __46863620;

Behavior make__46863620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46863620 = behavior;
   behavior->owner = (Object)__45432160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58136_45710540___43550680______58_840_45854540);
   _58136_45710540___43550680______58_840_45854540->num_any += 1;
   _58136_45710540___43550680______58_840_45854540->any = realloc(_58136_45710540___43550680______58_840_45854540->any,_58136_45710540___43550680______58_840_45854540->num_any*sizeof(Object));
_58136_45710540___43550680______58_840_45854540->any[_58136_45710540___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46863780();

   return behavior;
}

Scope make__45432160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45432160 = scope;
   scope->owner = (Object)__43550680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_45460420();
   scope->inners[1] = makereg__1_45460300();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__45431740();
   scope->scopes[1] = make__45431060();
   scope->scopes[2] = make__45430360();
   scope->scopes[3] = make__45429800();
   scope->scopes[4] = make__45429060();
   scope->scopes[5] = make__45425000();
   scope->scopes[6] = make__45465260();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46865800();
   scope->behaviors[1] = make__46865600();
   scope->behaviors[2] = make__46865140();
   scope->behaviors[3] = make__46864940();
   scope->behaviors[4] = make__46864480();
   scope->behaviors[5] = make__46864280();
   scope->behaviors[6] = make__46863820();
   scope->behaviors[7] = make__46863620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45458160;

SignalI reg__0_45538620___45458160___43550680______58_840_45854540;

SignalI makereg__0_45538620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_45538620___45458160___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45458160;
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

SignalI reg__1_45538460___45458160___43550680______58_840_45854540;

SignalI makereg__1_45538460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_45538460___45458160___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45458160;
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

Scope __45503780;

Scope make__45503780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45503780 = scope;
   scope->owner = (Object)__45458160;
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

Scope __45502160;

Scope make__45502160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45502160 = scope;
   scope->owner = (Object)__45458160;
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

Scope __45501360;

Scope make__45501360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45501360 = scope;
   scope->owner = (Object)__45458160;
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

Scope __45477880;

SignalI abus__r_45476880___45477880___45458160___43550680______58_840_45854540;

SignalI makeabus__r_45476880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45476880___45477880___45458160___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45477880;
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

Scope make__45477880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45477880 = scope;
   scope->owner = (Object)__45458160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45476880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45476660;

SignalI abus__w_45475360___45476660___45458160___43550680______58_840_45854540;

SignalI makeabus__w_45475360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45475360___45476660___45458160___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45476660;
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

Scope make__45476660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45476660 = scope;
   scope->owner = (Object)__45458160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45475360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45475140;

SignalI abus__r_45474380___45475140___45458160___43550680______58_840_45854540;

SignalI makeabus__r_45474380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45474380___45475140___45458160___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45475140;
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

Scope make__45475140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45475140 = scope;
   scope->owner = (Object)__45458160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45474380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45474240;

SignalI abus__w_45539060___45474240___45458160___43550680______58_840_45854540;

SignalI makeabus__w_45539060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45539060___45474240___45458160___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45474240;
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

Scope make__45474240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45474240 = scope;
   scope->owner = (Object)__45458160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45539060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __46860680;

Behavior make__46860680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46860680 = behavior;
   behavior->owner = (Object)__45458160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45538620___45458160___43550680______58_840_45854540);
   reg__0_45538620___45458160___43550680______58_840_45854540->num_any += 1;
   reg__0_45538620___45458160___43550680______58_840_45854540->any = realloc(reg__0_45538620___45458160___43550680______58_840_45854540->any,reg__0_45538620___45458160___43550680______58_840_45854540->num_any*sizeof(Object));
reg__0_45538620___45458160___43550680______58_840_45854540->any[reg__0_45538620___45458160___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46860840();

   return behavior;
}

Behavior __46860480;

Behavior make__46860480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46860480 = behavior;
   behavior->owner = (Object)__45458160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58150_45588680___43550680______58_840_45854540);
   _58150_45588680___43550680______58_840_45854540->num_any += 1;
   _58150_45588680___43550680______58_840_45854540->any = realloc(_58150_45588680___43550680______58_840_45854540->any,_58150_45588680___43550680______58_840_45854540->num_any*sizeof(Object));
_58150_45588680___43550680______58_840_45854540->any[_58150_45588680___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46860640();

   return behavior;
}

Behavior __46860020;

Behavior make__46860020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46860020 = behavior;
   behavior->owner = (Object)__45458160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_45538460___45458160___43550680______58_840_45854540);
   reg__1_45538460___45458160___43550680______58_840_45854540->num_any += 1;
   reg__1_45538460___45458160___43550680______58_840_45854540->any = realloc(reg__1_45538460___45458160___43550680______58_840_45854540->any,reg__1_45538460___45458160___43550680______58_840_45854540->num_any*sizeof(Object));
reg__1_45538460___45458160___43550680______58_840_45854540->any[reg__1_45538460___45458160___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46860180();

   return behavior;
}

Behavior __46859820;

Behavior make__46859820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46859820 = behavior;
   behavior->owner = (Object)__45458160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58151_45588600___43550680______58_840_45854540);
   _58151_45588600___43550680______58_840_45854540->num_any += 1;
   _58151_45588600___43550680______58_840_45854540->any = realloc(_58151_45588600___43550680______58_840_45854540->any,_58151_45588600___43550680______58_840_45854540->num_any*sizeof(Object));
_58151_45588600___43550680______58_840_45854540->any[_58151_45588600___43550680______58_840_45854540->num_any-1] = (Object)behavior;
   behavior->block = make__46859980();

   return behavior;
}

Scope make__45458160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45458160 = scope;
   scope->owner = (Object)__43550680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_45538620();
   scope->inners[1] = makereg__1_45538460();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__45503780();
   scope->scopes[1] = make__45502160();
   scope->scopes[2] = make__45501360();
   scope->scopes[3] = make__45477880();
   scope->scopes[4] = make__45476660();
   scope->scopes[5] = make__45475140();
   scope->scopes[6] = make__45474240();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46860680();
   scope->behaviors[1] = make__46860480();
   scope->behaviors[2] = make__46860020();
   scope->behaviors[3] = make__46859820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45537140;

SignalI lv0_45536500___45537140___43550680______58_840_45854540;

SignalI makelv0_45536500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_45536500___45537140___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45537140;
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

SignalI lv1_45536360___45537140___43550680______58_840_45854540;

SignalI makelv1_45536360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_45536360___45537140___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45537140;
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

SignalI rv0_45536260___45537140___43550680______58_840_45854540;

SignalI makerv0_45536260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_45536260___45537140___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45537140;
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

SignalI rv1_45536120___45537140___43550680______58_840_45854540;

SignalI makerv1_45536120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_45536120___45537140___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45537140;
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

SignalI lvok0_45536100___45537140___43550680______58_840_45854540;

SignalI makelvok0_45536100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_45536100___45537140___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45537140;
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

SignalI lvok1_45536060___45537140___43550680______58_840_45854540;

SignalI makelvok1_45536060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_45536060___45537140___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45537140;
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

SignalI rvok0_45536040___45537140___43550680______58_840_45854540;

SignalI makervok0_45536040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_45536040___45537140___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45537140;
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

SignalI rvok1_45536000___45537140___43550680______58_840_45854540;

SignalI makervok1_45536000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_45536000___45537140___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45537140;
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

SignalI run_45535940___45537140___43550680______58_840_45854540;

SignalI makerun_45535940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_45535940___45537140___43550680______58_840_45854540 = signalI;
   signalI->owner = (Object)__45537140;
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

Behavior __45589980;

Behavior make__45589980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45589980 = behavior;
   behavior->owner = (Object)__45537140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_45589800___43550680______58_840_45854540);
   clk_45589800___43550680______58_840_45854540->num_pos += 1;
   clk_45589800___43550680______58_840_45854540->pos = realloc(clk_45589800___43550680______58_840_45854540->pos,clk_45589800___43550680______58_840_45854540->num_pos*sizeof(Object));
clk_45589800___43550680______58_840_45854540->pos[clk_45589800___43550680______58_840_45854540->num_pos-1] = (Object)behavior;
   behavior->block = make__45535780();

   return behavior;
}

Scope make__45537140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45537140 = scope;
   scope->owner = (Object)__43550680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_45536500();
   scope->inners[1] = makelv1_45536360();
   scope->inners[2] = makerv0_45536260();
   scope->inners[3] = makerv1_45536120();
   scope->inners[4] = makelvok0_45536100();
   scope->inners[5] = makelvok1_45536060();
   scope->inners[6] = makervok0_45536040();
   scope->inners[7] = makervok1_45536000();
   scope->inners[8] = makerun_45535940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45589980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __45684640;

Behavior make__45684640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45684640 = behavior;
   behavior->owner = (Object)__43550680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_45589800___43550680______58_840_45854540);
   clk_45589800___43550680______58_840_45854540->num_pos += 1;
   clk_45589800___43550680______58_840_45854540->pos = realloc(clk_45589800___43550680______58_840_45854540->pos,clk_45589800___43550680______58_840_45854540->num_pos*sizeof(Object));
clk_45589800___43550680______58_840_45854540->pos[clk_45589800___43550680______58_840_45854540->num_pos-1] = (Object)behavior;
   behavior->block = make__45710240();

   return behavior;
}

Behavior __45854840;

Behavior make__45854840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45854840 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__43550680;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__45684400();

   return behavior;
}

Scope make__43550680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43550680 = scope;
   scope->owner = (Object)_____58_840_45854540;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 33;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_45589800();
   scope->inners[1] = makerst_45589780();
   scope->inners[2] = makereq_45589740();
   scope->inners[3] = make_5814_45589640();
   scope->inners[4] = make_5812_45589620();
   scope->inners[5] = make_5813_45589540();
   scope->inners[6] = make_5843_45589460();
   scope->inners[7] = make_5841_45589440();
   scope->inners[8] = make_5842_45589360();
   scope->inners[9] = make_5872_45589260();
   scope->inners[10] = make_5870_45589240();
   scope->inners[11] = make_5871_45589140();
   scope->inners[12] = make_5889_45589040();
   scope->inners[13] = make_5890_45588960();
   scope->inners[14] = makeack_65_45588940();
   scope->inners[15] = make_58120_45588860();
   scope->inners[16] = make_58121_45588760();
   scope->inners[17] = make_58150_45588680();
   scope->inners[18] = make_58151_45588600();
   scope->inners[19] = makeack_66_45588560();
   scope->inners[20] = make_5816_45588540();
   scope->inners[21] = make_5817_45711300();
   scope->inners[22] = make_5818_45711200();
   scope->inners[23] = make_5845_45711180();
   scope->inners[24] = make_5846_45711100();
   scope->inners[25] = make_5847_45711020();
   scope->inners[26] = make_5874_45711000();
   scope->inners[27] = make_5875_45710900();
   scope->inners[28] = make_5876_45710700();
   scope->inners[29] = make_58135_45710620();
   scope->inners[30] = make_58136_45710540();
   scope->inners[31] = make_58137_45710460();
   scope->inners[32] = makeval_45710380();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__43550300();
   scope->scopes[1] = make__44925920();
   scope->scopes[2] = make__45027740();
   scope->scopes[3] = make__45157960();
   scope->scopes[4] = make__45181660();
   scope->scopes[5] = make__45432160();
   scope->scopes[6] = make__45458160();
   scope->scopes[7] = make__45537140();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45684640();
   scope->behaviors[1] = make__45854840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_45854540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_45854540 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__43550680();

   return systemT;
}