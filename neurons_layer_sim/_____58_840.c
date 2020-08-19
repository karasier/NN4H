#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_50470040;

Block __55958060;

Block __55957340;

Block __55957140;

void code__55957140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58151_51028020___46257580______58_840_50470040->c_value,z0__val_51778500___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51597480(),z0__flag_47720620___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__55957140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55957140 = block;
   block->owner = (Object)__55957340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55957140;

   return block;
};

Block __56161000;

void code__56161000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58152_51321440___46257580______58_840_50470040->c_value,z1__val_45713040___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51597260(),z1__flag_47720600___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__56161000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56161000 = block;
   block->owner = (Object)__55957340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56161000;

   return block;
};

void code__55957340() {
 code__55957140();
 code__56161000();
}

Block make__55957340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55957340 = block;
   block->owner = (Object)__55958060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55957340;

   return block;
};

Block __55957900;

void code__55957900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51597180(),z0__flag_47720620___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51597100(),z1__flag_47720600___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__55957900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55957900 = block;
   block->owner = (Object)__55958060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55957900;

   return block;
};

void code__55958060() {
   {
      Value cond = ack_66_49933340___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55957340();
   }
   else {
  code__55957900();
   }
      }
   }
}

Block make__55958060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55958060 = block;
   block->owner = (Object)__56395700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55958060;

   return block;
};

Block __56395580;

Block __56395280;

Block __56395120;

void code__56395120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a0__val_47569900___46257580______58_840_50470040->c_value,_58182_51463480___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51596500(),a0__ack_47720580___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__56395120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56395120 = block;
   block->owner = (Object)__56395280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56395120;

   return block;
};

Block __56787240;

void code__56787240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a1__val_47720640___46257580______58_840_50470040->c_value,_58183_51633040___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51596140(),a1__ack_47720560___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__56787240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56787240 = block;
   block->owner = (Object)__56395280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56787240;

   return block;
};

void code__56395280() {
 code__56395120();
 code__56787240();
}

Block make__56395280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56395280 = block;
   block->owner = (Object)__56395580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56395280;

   return block;
};

void code__56395580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = z0__flag_47720620___46257580______58_840_50470040->c_value;
         src1 = z1__flag_47720600___46257580______58_840_50470040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56395280();
   }
      }
   }
}

Block make__56395580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56395580 = block;
   block->owner = (Object)__56941360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56395580;

   return block;
};

Block __56941240;

Block __56941040;

Block __56940660;

void code__56940660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51595900(),_58138_49979560___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__56940660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56940660 = block;
   block->owner = (Object)__56941040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56940660;

   return block;
};

void code__56941040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51596060();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56940660();
   }
      }
   }
}

Block make__56941040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56941040 = block;
   block->owner = (Object)__56941240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56941040;

   return block;
};

Block __56940200;

Block __56939880;

void code__56939880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51595680(),_5876_47978540___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__56939880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56939880 = block;
   block->owner = (Object)__56940200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56939880;

   return block;
};

void code__56940200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51595800();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56939880();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51595520(),_5875_47978760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__56940200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56940200 = block;
   block->owner = (Object)__56941240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56940200;

   return block;
};

Block __56939260;

Block __56938900;

void code__56938900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51595220(),_5847_47852860___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__56938900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56938900 = block;
   block->owner = (Object)__56939260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56938900;

   return block;
};

void code__56939260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51595360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56938900();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51595120(),_5846_47853000___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__56939260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56939260 = block;
   block->owner = (Object)__56941240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56939260;

   return block;
};

Block __56938220;

Block __56937900;

void code__56937900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51594780(),_5818_47720360___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__56937900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56937900 = block;
   block->owner = (Object)__56938220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56937900;

   return block;
};

void code__56938220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51594980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56937900();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51594300(),_5817_47720480___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__56938220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56938220 = block;
   block->owner = (Object)__56941240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56938220;

   return block;
};

Block __56937220;

Block __56937060;

Block __56936640;

void code__56936640() {
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
                  src0 = _5818_47720360___46257580______58_840_50470040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51593520();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_47720360___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51593400(),_5817_47720480___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_50194720___46257580______58_840_50470040->c_value,_5819_47853040___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__56936640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56936640 = block;
   block->owner = (Object)__56937060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56936640;

   return block;
};

void code__56937060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51594040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56936640();
   }
      }
   }
}

Block make__56937060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56937060 = block;
   block->owner = (Object)__56937220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56937060;

   return block;
};

Block __57253380;

Block __57253060;

void code__57253060() {
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
                  src0 = _5847_47852860___46257580______58_840_50470040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51617340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5847_47852860___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51617080(),_5846_47853000___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_50194720___46257580______58_840_50470040->c_value,_5848_47978780___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__57253060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57253060 = block;
   block->owner = (Object)__57253380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57253060;

   return block;
};

void code__57253380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51617580();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57253060();
   }
      }
   }
}

Block make__57253380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57253380 = block;
   block->owner = (Object)__56937220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57253380;

   return block;
};

Block __57480900;

Block __57480580;

void code__57480580() {
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
                  src0 = _5876_47978540___46257580______58_840_50470040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51616380();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5876_47978540___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51616220(),_5875_47978760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_50194720___46257580______58_840_50470040->c_value,_5877_48187340___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__57480580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57480580 = block;
   block->owner = (Object)__57480900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57480580;

   return block;
};

void code__57480900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51616640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57480580();
   }
      }
   }
}

Block make__57480900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57480900 = block;
   block->owner = (Object)__56937220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57480900;

   return block;
};

Block __57741200;

Block __57740880;

Block __57740320;

void code__57740320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_50194720___46257580______58_840_50470040->c_value,_58136_49854600___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__57740320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57740320 = block;
   block->owner = (Object)__57740880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57740320;

   return block;
};

Block __47751800;

void code__47751800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_50194720___46257580______58_840_50470040->c_value,_58137_49979680___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__47751800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47751800 = block;
   block->owner = (Object)__57740880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47751800;

   return block;
};

void code__57740880() {
{
      Value value = _58138_49979560___46257580______58_840_50470040->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__51615620())) {
    code__57740320();
         }
         else if (value2integer(value) == value2integer(make__51615460())) {
    code__47751800();
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
                  src0 = _58138_49979560___46257580______58_840_50470040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51615160();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58138_49979560___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__57740880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57740880 = block;
   block->owner = (Object)__57741200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57740880;

   return block;
};

void code__57741200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51615820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57740880();
   }
      }
   }
}

Block make__57741200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57741200 = block;
   block->owner = (Object)__56937220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57741200;

   return block;
};

void code__56937220() {
 code__56937060();
 code__57253380();
 code__57480900();
 code__57741200();
}

Block make__56937220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56937220 = block;
   block->owner = (Object)__56941240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56937220;

   return block;
};

void code__56941240() {
 code__56941040();
 code__56940200();
 code__56939260();
 code__56938220();
   {
      Value cond = fill_49933280___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56937220();
   }
      }
   }
}

Block make__56941240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56941240 = block;
   block->owner = (Object)__49833320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56941240;

   return block;
};

Block __49833020;

Block __50402740;

void code__50402740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51611000(),req_49933380___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50402740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50402740 = block;
   block->owner = (Object)__49833020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50402740;

   return block;
};

Block __50400700;

void code__50400700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51610300(),req_49933380___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50400700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50400700 = block;
   block->owner = (Object)__49833020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50400700;

   return block;
};

Block __50399580;

void code__50399580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51609940(),req_49933380___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50399580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50399580 = block;
   block->owner = (Object)__49833020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50399580;

   return block;
};

Block __50429360;

void code__50429360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51634020(),req_49933380___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50429360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50429360 = block;
   block->owner = (Object)__49833020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50429360;

   return block;
};

Block __50427920;

void code__50427920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51633660(),req_49933380___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50427920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50427920 = block;
   block->owner = (Object)__49833020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50427920;

   return block;
};

Block __50425800;

void code__50425800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51632820(),req_49933380___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50425800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50425800 = block;
   block->owner = (Object)__49833020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50425800;

   return block;
};

Block __50424380;

void code__50424380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51632460(),req_49933380___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50424380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50424380 = block;
   block->owner = (Object)__49833020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50424380;

   return block;
};

Block __50422140;

void code__50422140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51632020(),req_49933380___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50422140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50422140 = block;
   block->owner = (Object)__49833020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50422140;

   return block;
};

Block __50448520;

void code__50448520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51631480(),req_49933380___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50448520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50448520 = block;
   block->owner = (Object)__49833020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50448520;

   return block;
};

Block __50446560;

void code__50446560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51631060(),req_49933380___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50446560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50446560 = block;
   block->owner = (Object)__49833020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50446560;

   return block;
};

void code__49833020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51614600(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51614360(),rst_49933400___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51614260(),req_49933380___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51614060(),val_50194720___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51613580(),fill_49933280___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51613460(),rst_49933400___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51613400(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51613320(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51613200(),rst_49933400___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51613100(),fill_49933280___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51613020(),val_50194720___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51612940(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51612780(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51612720(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51612660(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51612600(),fill_49933280___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51612520(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51612420(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51612320(),req_49933380___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51612140(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51611320(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ack_66_49933340___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50402740();
   }
      }
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51610880(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51610720(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ack_66_49933340___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50400700();
   }
      }
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51610240(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51610100(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ack_66_49933340___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50399580();
   }
      }
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51609840(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51609760(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ack_66_49933340___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50429360();
   }
      }
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51633900(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51633820(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ack_66_49933340___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50427920();
   }
      }
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51633560(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51633400(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ack_66_49933340___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50425800();
   }
      }
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51632760(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51632660(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ack_66_49933340___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50424380();
   }
      }
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51632400(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51632220(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ack_66_49933340___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50422140();
   }
      }
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51631900(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51631800(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ack_66_49933340___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50448520();
   }
      }
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51631360(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50470280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51631260(),clk_49933420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ack_66_49933340___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50446560();
   }
      }
   }
   hw_wait(make_delay(10,NS),__50470280);
}

Block make__49833020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49833020 = block;
   block->owner = (Object)__50470280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49833020;

   return block;
};

Block __50584320;

void code__50584320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = a0__ack_47720580___46257580______58_840_50470040->c_value;
      src1 = a1__ack_47720560___46257580______58_840_50470040->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),layer__ack_47720500___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50584320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50584320 = block;
   block->owner = (Object)__50583260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50584320;

   return block;
};

Block __50540540;

void code__50540540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z0__val_51778500___46257580______58_840_50470040->c_value,z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z1__val_45713040___46257580______58_840_50470040->c_value,z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50540540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50540540 = block;
   block->owner = (Object)__50582960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50540540;

   return block;
};

Block __50540380;

void code__50540380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49851100_func0_58_840_47898220___46257580______58_840_50470040->c_value,a0__val_47569900___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_51649920_func1_58_840_50998640___46257580______58_840_50470040->c_value,a1__val_47720640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50540380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50540380 = block;
   block->owner = (Object)__50582760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50540380;

   return block;
};

Block __48208460;

Block __47752980;

void code__47752980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47673100___46256840___46257580______58_840_50470040->c_value,make_ref_rangeS(mem_47773680___46256840___46257580______58_840_50470040,value2integer(abus__w_47672860___46256840___46257580______58_840_50470040->c_value),value2integer(abus__w_47672860___46256840___46257580______58_840_50470040->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47752980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47752980 = block;
   block->owner = (Object)__48208460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47752980;

   return block;
};

void code__48208460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47773680___46256840___46257580______58_840_50470040->c_value;
            idx = value2integer(abus__r_47673020___46256840___46257580______58_840_50470040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47570680___46256840___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47208280___46256840___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47752980();
   }
      }
   }
}

Block make__48208460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48208460 = block;
   block->owner = (Object)__47516320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48208460;

   return block;
};

Block __50581860;

void code__50581860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47570680___46256840___46257580______58_840_50470040->c_value,_5815_50149820___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50581860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50581860 = block;
   block->owner = (Object)__50580860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50581860;

   return block;
};

Block __50580800;

void code__50580800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_50149820___46257580______58_840_50470040->c_value,dbus__r_47570680___46256840___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50580800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50580800 = block;
   block->owner = (Object)__50580360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50580800;

   return block;
};

Block __50579680;

void code__50579680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_47208300___46256840___46257580______58_840_50470040->c_value,_5813_50149800___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50579680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50579680 = block;
   block->owner = (Object)__50579200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50579680;

   return block;
};

Block __50579140;

void code__50579140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_50149800___46257580______58_840_50470040->c_value,trig__r_47208300___46256840___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50579140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50579140 = block;
   block->owner = (Object)__50578680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50579140;

   return block;
};

Block __50578180;

void code__50578180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47673020___46256840___46257580______58_840_50470040->c_value,_5814_50149700___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50578180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50578180 = block;
   block->owner = (Object)__50577900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50578180;

   return block;
};

Block __50577840;

void code__50577840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_50149700___46257580______58_840_50470040->c_value,abus__r_47673020___46256840___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50577840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50577840 = block;
   block->owner = (Object)__50618280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50577840;

   return block;
};

Block __50617680;

void code__50617680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_47208280___46256840___46257580______58_840_50470040->c_value,_5817_47720480___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50617680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50617680 = block;
   block->owner = (Object)__50617420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50617680;

   return block;
};

Block __50617340;

void code__50617340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_47720480___46257580______58_840_50470040->c_value,trig__w_47208280___46256840___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50617340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50617340 = block;
   block->owner = (Object)__50617000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50617340;

   return block;
};

Block __50616520;

void code__50616520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47672860___46256840___46257580______58_840_50470040->c_value,_5818_47720360___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50616520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50616520 = block;
   block->owner = (Object)__50616020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50616520;

   return block;
};

Block __50615920;

void code__50615920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_47720360___46257580______58_840_50470040->c_value,abus__w_47672860___46256840___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50615920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50615920 = block;
   block->owner = (Object)__50615220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50615920;

   return block;
};

Block __50614680;

void code__50614680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47673100___46256840___46257580______58_840_50470040->c_value,_5819_47853040___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50614680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50614680 = block;
   block->owner = (Object)__50614520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50614680;

   return block;
};

Block __50614460;

void code__50614460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_47853040___46257580______58_840_50470040->c_value,dbus__w_47673100___46256840___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50614460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50614460 = block;
   block->owner = (Object)__50614240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50614460;

   return block;
};

Block __47671020;

Block __47962060;

void code__47962060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47863820___47516140___46257580______58_840_50470040->c_value,make_ref_rangeS(mem_48191320___47516140___46257580______58_840_50470040,value2integer(abus__w_47863660___47516140___46257580______58_840_50470040->c_value),value2integer(abus__w_47863660___47516140___46257580______58_840_50470040->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47962060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47962060 = block;
   block->owner = (Object)__47671020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47962060;

   return block;
};

void code__47671020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48191320___47516140___46257580______58_840_50470040->c_value;
            idx = value2integer(abus__r_47863740___47516140___46257580______58_840_50470040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47654880___47516140___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47487400___47516140___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47962060();
   }
      }
   }
}

Block make__47671020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47671020 = block;
   block->owner = (Object)__49906560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47671020;

   return block;
};

Block __50610580;

void code__50610580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47654880___47516140___46257580______58_840_50470040->c_value,_5844_50269780___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50610580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50610580 = block;
   block->owner = (Object)__50610200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50610580;

   return block;
};

Block __50675540;

void code__50675540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_50269780___46257580______58_840_50470040->c_value,dbus__r_47654880___47516140___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50675540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50675540 = block;
   block->owner = (Object)__50675280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50675540;

   return block;
};

Block __50674880;

void code__50674880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_47487460___47516140___46257580______58_840_50470040->c_value,_5842_50269760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50674880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50674880 = block;
   block->owner = (Object)__50674520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50674880;

   return block;
};

Block __50674480;

void code__50674480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5842_50269760___46257580______58_840_50470040->c_value,trig__r_47487460___47516140___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50674480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50674480 = block;
   block->owner = (Object)__50674240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50674480;

   return block;
};

Block __50673740;

void code__50673740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47863740___47516140___46257580______58_840_50470040->c_value,_5843_50269600___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50673740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50673740 = block;
   block->owner = (Object)__50672960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50673740;

   return block;
};

Block __50672900;

void code__50672900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_50269600___46257580______58_840_50470040->c_value,abus__r_47863740___47516140___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50672900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50672900 = block;
   block->owner = (Object)__50672260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50672900;

   return block;
};

Block __50671760;

void code__50671760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_47487400___47516140___46257580______58_840_50470040->c_value,_5846_47853000___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50671760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50671760 = block;
   block->owner = (Object)__50671560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50671760;

   return block;
};

Block __50671520;

void code__50671520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5846_47853000___46257580______58_840_50470040->c_value,trig__w_47487400___47516140___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50671520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50671520 = block;
   block->owner = (Object)__50671200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50671520;

   return block;
};

Block __50670060;

void code__50670060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47863660___47516140___46257580______58_840_50470040->c_value,_5847_47852860___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50670060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50670060 = block;
   block->owner = (Object)__50669760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50670060;

   return block;
};

Block __50669720;

void code__50669720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5847_47852860___46257580______58_840_50470040->c_value,abus__w_47863660___47516140___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50669720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50669720 = block;
   block->owner = (Object)__50669560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50669720;

   return block;
};

Block __50668660;

void code__50668660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47863820___47516140___46257580______58_840_50470040->c_value,_5848_47978780___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50668660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50668660 = block;
   block->owner = (Object)__50668340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50668660;

   return block;
};

Block __50668300;

void code__50668300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5848_47978780___46257580______58_840_50470040->c_value,dbus__w_47863820___47516140___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50668300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50668300 = block;
   block->owner = (Object)__50667820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50668300;

   return block;
};

Block __50669040;

Block __50995980;

void code__50995980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50143720___49906440___46257580______58_840_50470040->c_value,make_ref_rangeS(mem_50271720___49906440___46257580______58_840_50470040,value2integer(abus__w_50143560___49906440___46257580______58_840_50470040->c_value),value2integer(abus__w_50143560___49906440___46257580______58_840_50470040->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50995980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50995980 = block;
   block->owner = (Object)__50669040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50995980;

   return block;
};

void code__50669040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50271720___49906440___46257580______58_840_50470040->c_value;
            idx = value2integer(abus__r_50143640___49906440___46257580______58_840_50470040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49990860___49906440___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49928120___49906440___46257580______58_840_50470040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50995980();
   }
      }
   }
}

Block make__50669040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50669040 = block;
   block->owner = (Object)__51470100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50669040;

   return block;
};

Block __50689460;

void code__50689460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49990860___49906440___46257580______58_840_50470040->c_value,_5873_50374180___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50689460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50689460 = block;
   block->owner = (Object)__50688840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50689460;

   return block;
};

Block __50688780;

void code__50688780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5873_50374180___46257580______58_840_50470040->c_value,dbus__r_49990860___49906440___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50688780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50688780 = block;
   block->owner = (Object)__50688060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50688780;

   return block;
};

Block __50687040;

void code__50687040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49928140___49906440___46257580______58_840_50470040->c_value,_5871_50374160___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50687040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50687040 = block;
   block->owner = (Object)__50686800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50687040;

   return block;
};

Block __50686720;

void code__50686720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5871_50374160___46257580______58_840_50470040->c_value,trig__r_49928140___49906440___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50686720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50686720 = block;
   block->owner = (Object)__50686440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50686720;

   return block;
};

Block __50685880;

void code__50685880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50143640___49906440___46257580______58_840_50470040->c_value,_5872_50374080___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50685880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50685880 = block;
   block->owner = (Object)__50685400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50685880;

   return block;
};

Block __50685220;

void code__50685220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5872_50374080___46257580______58_840_50470040->c_value,abus__r_50143640___49906440___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50685220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50685220 = block;
   block->owner = (Object)__50684780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50685220;

   return block;
};

Block __50684380;

void code__50684380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49928120___49906440___46257580______58_840_50470040->c_value,_5875_47978760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50684380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50684380 = block;
   block->owner = (Object)__50684140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50684380;

   return block;
};

Block __50683980;

void code__50683980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5875_47978760___46257580______58_840_50470040->c_value,trig__w_49928120___49906440___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50683980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50683980 = block;
   block->owner = (Object)__50724460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50683980;

   return block;
};

Block __50723900;

void code__50723900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50143560___49906440___46257580______58_840_50470040->c_value,_5876_47978540___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50723900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50723900 = block;
   block->owner = (Object)__50723540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50723900;

   return block;
};

Block __50723240;

void code__50723240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5876_47978540___46257580______58_840_50470040->c_value,abus__w_50143560___49906440___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50723240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50723240 = block;
   block->owner = (Object)__50722840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50723240;

   return block;
};

Block __50722400;

void code__50722400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50143720___49906440___46257580______58_840_50470040->c_value,_5877_48187340___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50722400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50722400 = block;
   block->owner = (Object)__50722160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50722400;

   return block;
};

Block __50722060;

void code__50722060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5877_48187340___46257580______58_840_50470040->c_value,dbus__w_50143720___49906440___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50722060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50722060 = block;
   block->owner = (Object)__50721740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50722060;

   return block;
};

Block __50718260;

void code__50718260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51594700___51469980___46257580______58_840_50470040->c_value,_5890_50493700___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50718260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50718260 = block;
   block->owner = (Object)__50718040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50718260;

   return block;
};

Block __50717960;

void code__50717960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_50493700___46257580______58_840_50470040->c_value,reg__0_51594700___51469980___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50717960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50717960 = block;
   block->owner = (Object)__50717580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50717960;

   return block;
};

Block __50716920;

void code__50716920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51673780___51469980___46257580______58_840_50470040->c_value,_5891_50672700___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50716920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50716920 = block;
   block->owner = (Object)__50749260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50716920;

   return block;
};

Block __50749160;

void code__50749160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5891_50672700___46257580______58_840_50470040->c_value,reg__1_51673780___51469980___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50749160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50749160 = block;
   block->owner = (Object)__50748540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50749160;

   return block;
};

Block __48319340;

Block __48318980;

Block __48317800;

void code__48317800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51462640(),_5843_50269600___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__48317800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48317800 = block;
   block->owner = (Object)__48318980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48317800;

   return block;
};

void code__48318980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51462980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48317800();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51462500(),_5842_50269760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__48318980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48318980 = block;
   block->owner = (Object)__48319340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48318980;

   return block;
};

Block __48336920;

Block __48335200;

void code__48335200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51462180(),_5814_50149700___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__48335200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48335200 = block;
   block->owner = (Object)__48336920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48335200;

   return block;
};

void code__48336920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51462300();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48335200();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51494740(),_5813_50149800___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__48336920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48336920 = block;
   block->owner = (Object)__48319340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48336920;

   return block;
};

Block __48371900;

Block __48370860;

void code__48370860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51494580(),_5872_50374080___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__48370860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48370860 = block;
   block->owner = (Object)__48371900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48370860;

   return block;
};

void code__48371900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51494660();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48370860();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51494520(),_5871_50374160___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__48371900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48371900 = block;
   block->owner = (Object)__48319340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48371900;

   return block;
};

Block __49982820;

Block __49982500;

Block __49982180;

Block __49981860;

void code__49981860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5873_50374180___46257580______58_840_50470040->c_value,rv_48319700___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51493280(),rvok_48319560___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__49981860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49981860 = block;
   block->owner = (Object)__49982180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49981860;

   return block;
};

void code__49982180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5871_50374160___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51494020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49981860();
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
                  src0 = _5872_50374080___46257580______58_840_50470040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51492000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5872_50374080___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51491840(),_5871_50374160___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__49982180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49982180 = block;
   block->owner = (Object)__49982500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49982180;

   return block;
};

void code__49982500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51494160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49982180();
   }
      }
   }
}

Block make__49982500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49982500 = block;
   block->owner = (Object)__49982820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49982500;

   return block;
};

Block __50233960;

Block __50233640;

Block __50274240;

void code__50274240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_50149820___46257580______58_840_50470040->c_value,lv0_47736860___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51491500(),lvok0_48319680___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50274240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50274240 = block;
   block->owner = (Object)__50233640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50274240;

   return block;
};

void code__50233640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_50149800___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51491660();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50274240();
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
                  src0 = _5814_50149700___46257580______58_840_50470040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51491340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_50149700___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51491200(),_5813_50149800___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50233640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50233640 = block;
   block->owner = (Object)__50233960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50233640;

   return block;
};

void code__50233960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51491760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50233640();
   }
      }
   }
}

Block make__50233960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50233960 = block;
   block->owner = (Object)__49982820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50233960;

   return block;
};

Block __50451800;

Block __50451220;

Block __50451060;

void code__50451060() {
}

Block make__50451060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50451060 = block;
   block->owner = (Object)__50451220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50451060;

   return block;
};

Block __51361680;

void code__51361680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_47923340___47633460___46257580______58_840_50470040->c_value,_5890_50493700___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51361680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51361680 = block;
   block->owner = (Object)__50451220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51361680;

   return block;
};

void code__50451220() {
 code__50451060();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_47923340___47633460___46257580______58_840_50470040->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = lv0_47736860___47633460___46257580______58_840_50470040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48319700___47633460___46257580______58_840_50470040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51489020();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_47923340___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
 code__51361680();
}

Block make__50451220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50451220 = block;
   block->owner = (Object)__50451800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50451220;

   return block;
};

void code__50451800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51490400(),ack_65_49933360___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51490020(),run_48319540___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
 code__50451220();
}

Block make__50451800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50451800 = block;
   block->owner = (Object)__49982820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50451800;

   return block;
};

Block __51629380;

Block __51628960;

Block __51628640;

void code__51628640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_50269780___46257580______58_840_50470040->c_value,lv1_47856180___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51487840(),lvok1_48319580___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51628640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51628640 = block;
   block->owner = (Object)__51628960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51628640;

   return block;
};

void code__51628960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5842_50269760___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51488160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51628640();
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
                  src0 = _5843_50269600___46257580______58_840_50470040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51487660();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5843_50269600___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51487500(),_5842_50269760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51628960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51628960 = block;
   block->owner = (Object)__51629380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51628960;

   return block;
};

void code__51629380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49933400___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51488360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51628960();
   }
      }
   }
}

Block make__51629380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51629380 = block;
   block->owner = (Object)__49982820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51629380;

   return block;
};

Block __45541340;

Block __45619800;

Block __45618880;

void code__45618880() {
}

Block make__45618880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45618880 = block;
   block->owner = (Object)__45619800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45618880;

   return block;
};

Block __49630720;

void code__49630720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_48094400___47633460___46257580______58_840_50470040->c_value,_5891_50672700___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__49630720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49630720 = block;
   block->owner = (Object)__45619800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49630720;

   return block;
};

void code__45619800() {
 code__45618880();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_48094400___47633460___46257580______58_840_50470040->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = lv1_47856180___47633460___46257580______58_840_50470040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48319700___47633460___46257580______58_840_50470040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51584380();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_48094400___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
 code__49630720();
}

Block make__45619800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45619800 = block;
   block->owner = (Object)__45541340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45619800;

   return block;
};

void code__45541340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51487120(),ack_65_49933360___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51487060(),run_48319540___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
 code__45619800();
}

Block make__45541340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45541340 = block;
   block->owner = (Object)__49982820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45541340;

   return block;
};

void code__49982820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51494240(),run_48319540___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
 code__49982500();
 code__50233960();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_48319680___47633460___46257580______58_840_50470040->c_value;
         src1 = rvok_48319560___47633460___46257580______58_840_50470040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50451800();
   }
      }
   }
 code__51629380();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_48319580___47633460___46257580______58_840_50470040->c_value;
         src1 = rvok_48319560___47633460___46257580______58_840_50470040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45541340();
   }
      }
   }
}

Block make__49982820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49982820 = block;
   block->owner = (Object)__48319340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49982820;

   return block;
};

Block __48369340;

void code__48369340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51584020(),rvok_48319560___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51583900(),lvok0_48319680___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51583660(),av0_47923340___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51583580(),lvok1_48319580___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51583500(),av1_48094400___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__48369340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48369340 = block;
   block->owner = (Object)__48319340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48369340;

   return block;
};

void code__48319340() {
 code__48318980();
 code__48336920();
 code__48371900();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51494460(),ack_65_49933360___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51494400(),run_48319540___47633460___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_49933380___46257580______58_840_50470040->c_value;
         src1 = run_48319540___47633460___46257580______58_840_50470040->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49982820();
   }
   else {
  code__48369340();
   }
      }
   }
}

Block make__48319340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48319340 = block;
   block->owner = (Object)__50065960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48319340;

   return block;
};

Block __50745200;

void code__50745200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50219420___50065840___46257580______58_840_50470040->c_value,_58121_50793980___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50745200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50745200 = block;
   block->owner = (Object)__50744980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50745200;

   return block;
};

Block __50744940;

void code__50744940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58121_50793980___46257580______58_840_50470040->c_value,reg__0_50219420___50065840___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50744940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50744940 = block;
   block->owner = (Object)__50744540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50744940;

   return block;
};

Block __50743520;

void code__50743520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50335180___50065840___46257580______58_840_50470040->c_value,_58122_50890600___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50743520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50743520 = block;
   block->owner = (Object)__50743040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50743520;

   return block;
};

Block __50742960;

void code__50742960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58122_50890600___46257580______58_840_50470040->c_value,reg__1_50335180___50065840___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50742960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50742960 = block;
   block->owner = (Object)__50742540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50742960;

   return block;
};

Block __50741900;

void code__50741900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50219420___50065840___46257580______58_840_50470040->c_value,_58136_49854600___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50741900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50741900 = block;
   block->owner = (Object)__50741600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50741900;

   return block;
};

Block __50741540;

void code__50741540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58136_49854600___46257580______58_840_50470040->c_value,reg__0_50219420___50065840___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50741540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50741540 = block;
   block->owner = (Object)__50741280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50741540;

   return block;
};

Block __50798100;

void code__50798100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50335180___50065840___46257580______58_840_50470040->c_value,_58137_49979680___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50798100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50798100 = block;
   block->owner = (Object)__50797800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50798100;

   return block;
};

Block __50797740;

void code__50797740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58137_49979680___46257580______58_840_50470040->c_value,reg__1_50335180___50065840___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50797740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50797740 = block;
   block->owner = (Object)__50797280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50797740;

   return block;
};

Block __50794220;

void code__50794220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50063200___50063580___50065840___46257580______58_840_50470040->c_value,_58138_49979560___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50794220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50794220 = block;
   block->owner = (Object)__50793560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50794220;

   return block;
};

Block __50793420;

void code__50793420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58138_49979560___46257580______58_840_50470040->c_value,abus__w_50063200___50063580___50065840___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50793420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50793420 = block;
   block->owner = (Object)__50792920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50793420;

   return block;
};

Block __50790740;

void code__50790740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51599140___51356880___46257580______58_840_50470040->c_value,_58151_51028020___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50790740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50790740 = block;
   block->owner = (Object)__50790500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50790740;

   return block;
};

Block __50814920;

void code__50814920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58151_51028020___46257580______58_840_50470040->c_value,reg__0_51599140___51356880___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50814920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50814920 = block;
   block->owner = (Object)__50814580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50814920;

   return block;
};

Block __50813480;

void code__50813480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51674220___51356880___46257580______58_840_50470040->c_value,_58152_51321440___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50813480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50813480 = block;
   block->owner = (Object)__50813100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50813480;

   return block;
};

Block __50813000;

void code__50813000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58152_51321440___46257580______58_840_50470040->c_value,reg__1_51674220___51356880___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50813000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50813000 = block;
   block->owner = (Object)__50812700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50813000;

   return block;
};

Block __49634840;

Block __49633120;

Block __49632800;

void code__49632800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_50493700___46257580______58_840_50470040->c_value,lv0_47836360___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51578920(),lvok0_49635040___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__49632800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49632800 = block;
   block->owner = (Object)__49633120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49632800;

   return block;
};

Block __50063280;

void code__50063280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58121_50793980___46257580______58_840_50470040->c_value,rv0_48104000___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51578720(),rvok0_49635000___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50063280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50063280 = block;
   block->owner = (Object)__49633120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50063280;

   return block;
};

Block __50331900;

Block __50364040;

void code__50364040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_47836360___47721760___46257580______58_840_50470040->c_value;
      src1 = rv0_48104000___47721760___46257580______58_840_50470040->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58151_51028020___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50364040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50364040 = block;
   block->owner = (Object)__50331900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50364040;

   return block;
};

void code__50331900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51578420(),run_49634960___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51578340(),ack_66_49933340___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
 code__50364040();
}

Block make__50331900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50331900 = block;
   block->owner = (Object)__49633120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50331900;

   return block;
};

Block __50846660;

void code__50846660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5891_50672700___46257580______58_840_50470040->c_value,lv1_47946780___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51577580(),lvok1_49635020___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50846660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50846660 = block;
   block->owner = (Object)__49633120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50846660;

   return block;
};

Block __51084380;

void code__51084380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58122_50890600___46257580______58_840_50470040->c_value,rv1_49635060___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51577100(),rvok1_49634980___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51084380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51084380 = block;
   block->owner = (Object)__49633120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51084380;

   return block;
};

Block __51490100;

Block __51489620;

void code__51489620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_47946780___47721760___46257580______58_840_50470040->c_value;
      src1 = rv1_49635060___47721760___46257580______58_840_50470040->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58152_51321440___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51489620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51489620 = block;
   block->owner = (Object)__51490100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51489620;

   return block;
};

void code__51490100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51601320(),run_49634960___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51601100(),ack_66_49933340___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
 code__51489620();
}

Block make__51490100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51490100 = block;
   block->owner = (Object)__49633120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51490100;

   return block;
};

void code__49633120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51579340(),run_49634960___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
 code__49632800();
 code__50063280();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49635040___47721760___46257580______58_840_50470040->c_value;
         src1 = rvok0_49635000___47721760___46257580______58_840_50470040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50331900();
   }
      }
   }
 code__50846660();
 code__51084380();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49635020___47721760___46257580______58_840_50470040->c_value;
         src1 = rvok1_49634980___47721760___46257580______58_840_50470040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51490100();
   }
      }
   }
}

Block make__49633120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49633120 = block;
   block->owner = (Object)__49634840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49633120;

   return block;
};

Block __49634160;

void code__49634160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51600660(),lvok0_49635040___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51600560(),rvok0_49635000___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51600460(),lvok1_49635020___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51600380(),rvok1_49634980___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__49634160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49634160 = block;
   block->owner = (Object)__49634840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49634160;

   return block;
};

void code__49634840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51579780(),ack_66_49933340___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51579680(),run_49634960___47721760___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack_65_49933360___46257580______58_840_50470040->c_value;
         src1 = run_49634960___47721760___46257580______58_840_50470040->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49633120();
   }
   else {
  code__49634160();
   }
      }
   }
}

Block make__49634840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49634840 = block;
   block->owner = (Object)__47551020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49634840;

   return block;
};

Block __50809460;

void code__50809460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47721260___47550420___46257580______58_840_50470040->c_value,_58182_51463480___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50809460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50809460 = block;
   block->owner = (Object)__50809260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50809460;

   return block;
};

Block __50809160;

void code__50809160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_51463480___46257580______58_840_50470040->c_value,reg__0_47721260___47550420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50809160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50809160 = block;
   block->owner = (Object)__50808880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50809160;

   return block;
};

Block __50808240;

void code__50808240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47856640___47550420___46257580______58_840_50470040->c_value,_58183_51633040___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50808240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50808240 = block;
   block->owner = (Object)__50807740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50808240;

   return block;
};

Block __50807700;

void code__50807700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_51633040___46257580______58_840_50470040->c_value,reg__1_47856640___47550420___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50807700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50807700 = block;
   block->owner = (Object)__50807380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50807700;

   return block;
};

Value make__51462980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51462640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51462500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51462300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51462180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51494740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51494660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51494580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51494520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51494460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51494400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51494240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51494160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51494020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51493280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51492000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51491840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51491760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51491660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51491500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51491340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51491200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51490400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51490020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51489020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51488360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51488160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51487840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51487660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51487500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51487120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51487060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51584380() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51584020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51583900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51583660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51583580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51583500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51579780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51579680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51579340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51578920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51578720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51578420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51578340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51577580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51577100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51601320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51601100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51600660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51600560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51600460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51600380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51597480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51597260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51597180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51597100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51596500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51596140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51596060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51595900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51595800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51595680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51595520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51595360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51595220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51595120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51594980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51594780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51594300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51594040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51593520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51593400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51617580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51617340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51617080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51616640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51616380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51616220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51615820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51615620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51615460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51615160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51614600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51614360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51614260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51614060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51613580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51613460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51613400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51613320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51613200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51613100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51613020() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51612940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51612780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51612720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51612660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51612600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51612520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51612420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51612320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51612140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51611320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51611000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51610880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51610720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51610300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51610240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51610100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51609940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51609840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51609760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51634020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51633900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51633820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51633660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51633560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51633400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51632820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51632760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51632660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51632460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51632400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51632220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51632020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51631900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51631800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51631480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51631360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51631260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51631060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope __46257580;

SignalI clk_49933420___46257580______58_840_50470040;

SignalI makeclk_49933420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49933420___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI rst_49933400___46257580______58_840_50470040;

SignalI makerst_49933400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49933400___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI req_49933380___46257580______58_840_50470040;

SignalI makereq_49933380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49933380___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI ack_65_49933360___46257580______58_840_50470040;

SignalI makeack_65_49933360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_65_49933360___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI ack_66_49933340___46257580______58_840_50470040;

SignalI makeack_66_49933340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_66_49933340___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI ack_49933320___46257580______58_840_50470040;

SignalI makeack_49933320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_49933320___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = "ack";
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

SignalI fill_49933280___46257580______58_840_50470040;

SignalI makefill_49933280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49933280___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI _5815_50149820___46257580______58_840_50470040;

SignalI make_5815_50149820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_50149820___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI _5813_50149800___46257580______58_840_50470040;

SignalI make_5813_50149800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_50149800___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI _5814_50149700___46257580______58_840_50470040;

SignalI make_5814_50149700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_50149700___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI _5844_50269780___46257580______58_840_50470040;

SignalI make_5844_50269780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_50269780___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI _5842_50269760___46257580______58_840_50470040;

SignalI make_5842_50269760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5842_50269760___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":42";
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

SignalI _5843_50269600___46257580______58_840_50470040;

SignalI make_5843_50269600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_50269600___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":43";
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

SignalI _5873_50374180___46257580______58_840_50470040;

SignalI make_5873_50374180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5873_50374180___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":73";
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

SignalI _5871_50374160___46257580______58_840_50470040;

SignalI make_5871_50374160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5871_50374160___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":71";
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

SignalI _5872_50374080___46257580______58_840_50470040;

SignalI make_5872_50374080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5872_50374080___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":72";
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

SignalI _5890_50493700___46257580______58_840_50470040;

SignalI make_5890_50493700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5890_50493700___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":90";
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

SignalI _5891_50672700___46257580______58_840_50470040;

SignalI make_5891_50672700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5891_50672700___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":91";
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

SignalI _58121_50793980___46257580______58_840_50470040;

SignalI make_58121_50793980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58121_50793980___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":121";
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

SignalI _58122_50890600___46257580______58_840_50470040;

SignalI make_58122_50890600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58122_50890600___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":122";
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

SignalI _58151_51028020___46257580______58_840_50470040;

SignalI make_58151_51028020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58151_51028020___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":151";
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

SignalI _58152_51321440___46257580______58_840_50470040;

SignalI make_58152_51321440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58152_51321440___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":152";
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

SignalI _58182_51463480___46257580______58_840_50470040;

SignalI make_58182_51463480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_51463480___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":182";
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

SignalI _58183_51633040___46257580______58_840_50470040;

SignalI make_58183_51633040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_51633040___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":183";
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

SignalI z0__val_51778500___46257580______58_840_50470040;

SignalI makez0__val_51778500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z0__val_51778500___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = "z0_val";
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

SignalI z1__val_45713040___46257580______58_840_50470040;

SignalI makez1__val_45713040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z1__val_45713040___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = "z1_val";
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

SignalI a0__val_47569900___46257580______58_840_50470040;

SignalI makea0__val_47569900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a0__val_47569900___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = "a0_val";
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

SignalI a1__val_47720640___46257580______58_840_50470040;

SignalI makea1__val_47720640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a1__val_47720640___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = "a1_val";
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

SignalI z0__flag_47720620___46257580______58_840_50470040;

SignalI makez0__flag_47720620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z0__flag_47720620___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = "z0_flag";
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

SignalI z1__flag_47720600___46257580______58_840_50470040;

SignalI makez1__flag_47720600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z1__flag_47720600___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = "z1_flag";
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

SignalI a0__ack_47720580___46257580______58_840_50470040;

SignalI makea0__ack_47720580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a0__ack_47720580___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = "a0_ack";
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

SignalI a1__ack_47720560___46257580______58_840_50470040;

SignalI makea1__ack_47720560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a1__ack_47720560___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = "a1_ack";
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

SignalI layer__ack_47720500___46257580______58_840_50470040;

SignalI makelayer__ack_47720500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   layer__ack_47720500___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = "layer_ack";
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

SignalI _5817_47720480___46257580______58_840_50470040;

SignalI make_5817_47720480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_47720480___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI _5818_47720360___46257580______58_840_50470040;

SignalI make_5818_47720360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_47720360___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI _5819_47853040___46257580______58_840_50470040;

SignalI make_5819_47853040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_47853040___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
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

SignalI _5846_47853000___46257580______58_840_50470040;

SignalI make_5846_47853000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5846_47853000___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":46";
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

SignalI _5847_47852860___46257580______58_840_50470040;

SignalI make_5847_47852860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5847_47852860___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":47";
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

SignalI _5848_47978780___46257580______58_840_50470040;

SignalI make_5848_47978780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5848_47978780___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":48";
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

SignalI _5875_47978760___46257580______58_840_50470040;

SignalI make_5875_47978760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5875_47978760___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":75";
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

SignalI _5876_47978540___46257580______58_840_50470040;

SignalI make_5876_47978540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5876_47978540___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":76";
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

SignalI _5877_48187340___46257580______58_840_50470040;

SignalI make_5877_48187340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5877_48187340___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":77";
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

SignalI _58136_49854600___46257580______58_840_50470040;

SignalI make_58136_49854600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58136_49854600___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":136";
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

SignalI _58137_49979680___46257580______58_840_50470040;

SignalI make_58137_49979680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58137_49979680___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":137";
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

SignalI _58138_49979560___46257580______58_840_50470040;

SignalI make_58138_49979560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58138_49979560___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = ":138";
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

SignalI val_50194720___46257580______58_840_50470040;

SignalI makeval_50194720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   val_50194720___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46257580;
   signalI->name = "val";
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

SystemI func0_49850920;

SystemI makefunc0_49850920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_49850920 = systemI;
   systemI->owner = (Object)__46257580;
   systemI->name = "func0";
   systemI->system = func0_58_840_47898220;

   return systemI;
};

SystemI func1_51649620;

SystemI makefunc1_51649620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_51649620 = systemI;
   systemI->owner = (Object)__46257580;
   systemI->name = "func1";
   systemI->system = func1_58_840_50998640;

   return systemI;
};

Scope __46256840;

SignalI trig__r_47208300___46256840___46257580______58_840_50470040;

SignalI maketrig__r_47208300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47208300___46256840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46256840;
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

SignalI trig__w_47208280___46256840___46257580______58_840_50470040;

SignalI maketrig__w_47208280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47208280___46256840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46256840;
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

SignalI dbus__r_47570680___46256840___46257580______58_840_50470040;

SignalI makedbus__r_47570680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47570680___46256840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46256840;
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

SignalI dbus__w_47673100___46256840___46257580______58_840_50470040;

SignalI makedbus__w_47673100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47673100___46256840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46256840;
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

SignalI abus__r_47673020___46256840___46257580______58_840_50470040;

SignalI makeabus__r_47673020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47673020___46256840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46256840;
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

SignalI abus__w_47672860___46256840___46257580______58_840_50470040;

SignalI makeabus__w_47672860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47672860___46256840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46256840;
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

SignalI mem_47773680___46256840___46257580______58_840_50470040;

SignalI makemem_47773680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47773680___46256840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__46256840;
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

Scope __46256220;

Scope make__46256220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46256220 = scope;
   scope->owner = (Object)__46256840;
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

Scope __46255280;

Scope make__46255280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46255280 = scope;
   scope->owner = (Object)__46256840;
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

Scope __46253960;

Scope make__46253960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46253960 = scope;
   scope->owner = (Object)__46256840;
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

Scope __46253080;

Scope make__46253080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46253080 = scope;
   scope->owner = (Object)__46256840;
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

Scope __46252280;

Scope make__46252280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46252280 = scope;
   scope->owner = (Object)__46256840;
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

Scope __47208980;

Scope make__47208980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47208980 = scope;
   scope->owner = (Object)__46256840;
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

Behavior __47516320;

Behavior make__47516320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47516320 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49933420___46257580______58_840_50470040);
   clk_49933420___46257580______58_840_50470040->num_neg += 1;
   clk_49933420___46257580______58_840_50470040->neg = realloc(clk_49933420___46257580______58_840_50470040->neg,clk_49933420___46257580______58_840_50470040->num_neg*sizeof(Object));
clk_49933420___46257580______58_840_50470040->neg[clk_49933420___46257580______58_840_50470040->num_neg-1] = (Object)behavior;
   behavior->block = make__48208460();

   return behavior;
}

Behavior __50580860;

Behavior make__50580860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50580860 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47570680___46256840___46257580______58_840_50470040);
   dbus__r_47570680___46256840___46257580______58_840_50470040->num_any += 1;
   dbus__r_47570680___46256840___46257580______58_840_50470040->any = realloc(dbus__r_47570680___46256840___46257580______58_840_50470040->any,dbus__r_47570680___46256840___46257580______58_840_50470040->num_any*sizeof(Object));
dbus__r_47570680___46256840___46257580______58_840_50470040->any[dbus__r_47570680___46256840___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50581860();

   return behavior;
}

Behavior __50580360;

Behavior make__50580360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50580360 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_50149820___46257580______58_840_50470040);
   _5815_50149820___46257580______58_840_50470040->num_any += 1;
   _5815_50149820___46257580______58_840_50470040->any = realloc(_5815_50149820___46257580______58_840_50470040->any,_5815_50149820___46257580______58_840_50470040->num_any*sizeof(Object));
_5815_50149820___46257580______58_840_50470040->any[_5815_50149820___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50580800();

   return behavior;
}

Behavior __50579200;

Behavior make__50579200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50579200 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_47208300___46256840___46257580______58_840_50470040);
   trig__r_47208300___46256840___46257580______58_840_50470040->num_any += 1;
   trig__r_47208300___46256840___46257580______58_840_50470040->any = realloc(trig__r_47208300___46256840___46257580______58_840_50470040->any,trig__r_47208300___46256840___46257580______58_840_50470040->num_any*sizeof(Object));
trig__r_47208300___46256840___46257580______58_840_50470040->any[trig__r_47208300___46256840___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50579680();

   return behavior;
}

Behavior __50578680;

Behavior make__50578680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50578680 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_50149800___46257580______58_840_50470040);
   _5813_50149800___46257580______58_840_50470040->num_any += 1;
   _5813_50149800___46257580______58_840_50470040->any = realloc(_5813_50149800___46257580______58_840_50470040->any,_5813_50149800___46257580______58_840_50470040->num_any*sizeof(Object));
_5813_50149800___46257580______58_840_50470040->any[_5813_50149800___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50579140();

   return behavior;
}

Behavior __50577900;

Behavior make__50577900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50577900 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47673020___46256840___46257580______58_840_50470040);
   abus__r_47673020___46256840___46257580______58_840_50470040->num_any += 1;
   abus__r_47673020___46256840___46257580______58_840_50470040->any = realloc(abus__r_47673020___46256840___46257580______58_840_50470040->any,abus__r_47673020___46256840___46257580______58_840_50470040->num_any*sizeof(Object));
abus__r_47673020___46256840___46257580______58_840_50470040->any[abus__r_47673020___46256840___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50578180();

   return behavior;
}

Behavior __50618280;

Behavior make__50618280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50618280 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_50149700___46257580______58_840_50470040);
   _5814_50149700___46257580______58_840_50470040->num_any += 1;
   _5814_50149700___46257580______58_840_50470040->any = realloc(_5814_50149700___46257580______58_840_50470040->any,_5814_50149700___46257580______58_840_50470040->num_any*sizeof(Object));
_5814_50149700___46257580______58_840_50470040->any[_5814_50149700___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50577840();

   return behavior;
}

Behavior __50617420;

Behavior make__50617420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50617420 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_47208280___46256840___46257580______58_840_50470040);
   trig__w_47208280___46256840___46257580______58_840_50470040->num_any += 1;
   trig__w_47208280___46256840___46257580______58_840_50470040->any = realloc(trig__w_47208280___46256840___46257580______58_840_50470040->any,trig__w_47208280___46256840___46257580______58_840_50470040->num_any*sizeof(Object));
trig__w_47208280___46256840___46257580______58_840_50470040->any[trig__w_47208280___46256840___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50617680();

   return behavior;
}

Behavior __50617000;

Behavior make__50617000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50617000 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_47720480___46257580______58_840_50470040);
   _5817_47720480___46257580______58_840_50470040->num_any += 1;
   _5817_47720480___46257580______58_840_50470040->any = realloc(_5817_47720480___46257580______58_840_50470040->any,_5817_47720480___46257580______58_840_50470040->num_any*sizeof(Object));
_5817_47720480___46257580______58_840_50470040->any[_5817_47720480___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50617340();

   return behavior;
}

Behavior __50616020;

Behavior make__50616020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50616020 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47672860___46256840___46257580______58_840_50470040);
   abus__w_47672860___46256840___46257580______58_840_50470040->num_any += 1;
   abus__w_47672860___46256840___46257580______58_840_50470040->any = realloc(abus__w_47672860___46256840___46257580______58_840_50470040->any,abus__w_47672860___46256840___46257580______58_840_50470040->num_any*sizeof(Object));
abus__w_47672860___46256840___46257580______58_840_50470040->any[abus__w_47672860___46256840___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50616520();

   return behavior;
}

Behavior __50615220;

Behavior make__50615220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50615220 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_47720360___46257580______58_840_50470040);
   _5818_47720360___46257580______58_840_50470040->num_any += 1;
   _5818_47720360___46257580______58_840_50470040->any = realloc(_5818_47720360___46257580______58_840_50470040->any,_5818_47720360___46257580______58_840_50470040->num_any*sizeof(Object));
_5818_47720360___46257580______58_840_50470040->any[_5818_47720360___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50615920();

   return behavior;
}

Behavior __50614520;

Behavior make__50614520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50614520 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47673100___46256840___46257580______58_840_50470040);
   dbus__w_47673100___46256840___46257580______58_840_50470040->num_any += 1;
   dbus__w_47673100___46256840___46257580______58_840_50470040->any = realloc(dbus__w_47673100___46256840___46257580______58_840_50470040->any,dbus__w_47673100___46256840___46257580______58_840_50470040->num_any*sizeof(Object));
dbus__w_47673100___46256840___46257580______58_840_50470040->any[dbus__w_47673100___46256840___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50614680();

   return behavior;
}

Behavior __50614240;

Behavior make__50614240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50614240 = behavior;
   behavior->owner = (Object)__46256840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_47853040___46257580______58_840_50470040);
   _5819_47853040___46257580______58_840_50470040->num_any += 1;
   _5819_47853040___46257580______58_840_50470040->any = realloc(_5819_47853040___46257580______58_840_50470040->any,_5819_47853040___46257580______58_840_50470040->num_any*sizeof(Object));
_5819_47853040___46257580______58_840_50470040->any[_5819_47853040___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50614460();

   return behavior;
}

Scope make__46256840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46256840 = scope;
   scope->owner = (Object)__46257580;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47208300();
   scope->inners[1] = maketrig__w_47208280();
   scope->inners[2] = makedbus__r_47570680();
   scope->inners[3] = makedbus__w_47673100();
   scope->inners[4] = makeabus__r_47673020();
   scope->inners[5] = makeabus__w_47672860();
   scope->inners[6] = makemem_47773680();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__46256220();
   scope->scopes[1] = make__46255280();
   scope->scopes[2] = make__46253960();
   scope->scopes[3] = make__46253080();
   scope->scopes[4] = make__46252280();
   scope->scopes[5] = make__47208980();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47516320();
   scope->behaviors[1] = make__50580860();
   scope->behaviors[2] = make__50580360();
   scope->behaviors[3] = make__50579200();
   scope->behaviors[4] = make__50578680();
   scope->behaviors[5] = make__50577900();
   scope->behaviors[6] = make__50618280();
   scope->behaviors[7] = make__50617420();
   scope->behaviors[8] = make__50617000();
   scope->behaviors[9] = make__50616020();
   scope->behaviors[10] = make__50615220();
   scope->behaviors[11] = make__50614520();
   scope->behaviors[12] = make__50614240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47516140;

SignalI trig__r_47487460___47516140___46257580______58_840_50470040;

SignalI maketrig__r_47487460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47487460___47516140___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47516140;
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

SignalI trig__w_47487400___47516140___46257580______58_840_50470040;

SignalI maketrig__w_47487400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47487400___47516140___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47516140;
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

SignalI dbus__r_47654880___47516140___46257580______58_840_50470040;

SignalI makedbus__r_47654880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47654880___47516140___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47516140;
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

SignalI dbus__w_47863820___47516140___46257580______58_840_50470040;

SignalI makedbus__w_47863820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47863820___47516140___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47516140;
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

SignalI abus__r_47863740___47516140___46257580______58_840_50470040;

SignalI makeabus__r_47863740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47863740___47516140___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47516140;
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

SignalI abus__w_47863660___47516140___46257580______58_840_50470040;

SignalI makeabus__w_47863660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47863660___47516140___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47516140;
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

SignalI mem_48191320___47516140___46257580______58_840_50470040;

SignalI makemem_48191320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48191320___47516140___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47516140;
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

Scope __47515520;

Scope make__47515520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47515520 = scope;
   scope->owner = (Object)__47516140;
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

Scope __47514860;

Scope make__47514860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47514860 = scope;
   scope->owner = (Object)__47516140;
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

Scope __47514340;

Scope make__47514340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47514340 = scope;
   scope->owner = (Object)__47516140;
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

Scope __47513860;

Scope make__47513860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47513860 = scope;
   scope->owner = (Object)__47516140;
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

Scope __47488660;

Scope make__47488660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47488660 = scope;
   scope->owner = (Object)__47516140;
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

Scope __47488120;

Scope make__47488120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47488120 = scope;
   scope->owner = (Object)__47516140;
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

Behavior __49906560;

Behavior make__49906560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49906560 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49933420___46257580______58_840_50470040);
   clk_49933420___46257580______58_840_50470040->num_neg += 1;
   clk_49933420___46257580______58_840_50470040->neg = realloc(clk_49933420___46257580______58_840_50470040->neg,clk_49933420___46257580______58_840_50470040->num_neg*sizeof(Object));
clk_49933420___46257580______58_840_50470040->neg[clk_49933420___46257580______58_840_50470040->num_neg-1] = (Object)behavior;
   behavior->block = make__47671020();

   return behavior;
}

Behavior __50610200;

Behavior make__50610200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50610200 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47654880___47516140___46257580______58_840_50470040);
   dbus__r_47654880___47516140___46257580______58_840_50470040->num_any += 1;
   dbus__r_47654880___47516140___46257580______58_840_50470040->any = realloc(dbus__r_47654880___47516140___46257580______58_840_50470040->any,dbus__r_47654880___47516140___46257580______58_840_50470040->num_any*sizeof(Object));
dbus__r_47654880___47516140___46257580______58_840_50470040->any[dbus__r_47654880___47516140___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50610580();

   return behavior;
}

Behavior __50675280;

Behavior make__50675280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50675280 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5844_50269780___46257580______58_840_50470040);
   _5844_50269780___46257580______58_840_50470040->num_any += 1;
   _5844_50269780___46257580______58_840_50470040->any = realloc(_5844_50269780___46257580______58_840_50470040->any,_5844_50269780___46257580______58_840_50470040->num_any*sizeof(Object));
_5844_50269780___46257580______58_840_50470040->any[_5844_50269780___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50675540();

   return behavior;
}

Behavior __50674520;

Behavior make__50674520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50674520 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_47487460___47516140___46257580______58_840_50470040);
   trig__r_47487460___47516140___46257580______58_840_50470040->num_any += 1;
   trig__r_47487460___47516140___46257580______58_840_50470040->any = realloc(trig__r_47487460___47516140___46257580______58_840_50470040->any,trig__r_47487460___47516140___46257580______58_840_50470040->num_any*sizeof(Object));
trig__r_47487460___47516140___46257580______58_840_50470040->any[trig__r_47487460___47516140___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50674880();

   return behavior;
}

Behavior __50674240;

Behavior make__50674240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50674240 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5842_50269760___46257580______58_840_50470040);
   _5842_50269760___46257580______58_840_50470040->num_any += 1;
   _5842_50269760___46257580______58_840_50470040->any = realloc(_5842_50269760___46257580______58_840_50470040->any,_5842_50269760___46257580______58_840_50470040->num_any*sizeof(Object));
_5842_50269760___46257580______58_840_50470040->any[_5842_50269760___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50674480();

   return behavior;
}

Behavior __50672960;

Behavior make__50672960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50672960 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47863740___47516140___46257580______58_840_50470040);
   abus__r_47863740___47516140___46257580______58_840_50470040->num_any += 1;
   abus__r_47863740___47516140___46257580______58_840_50470040->any = realloc(abus__r_47863740___47516140___46257580______58_840_50470040->any,abus__r_47863740___47516140___46257580______58_840_50470040->num_any*sizeof(Object));
abus__r_47863740___47516140___46257580______58_840_50470040->any[abus__r_47863740___47516140___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50673740();

   return behavior;
}

Behavior __50672260;

Behavior make__50672260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50672260 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_50269600___46257580______58_840_50470040);
   _5843_50269600___46257580______58_840_50470040->num_any += 1;
   _5843_50269600___46257580______58_840_50470040->any = realloc(_5843_50269600___46257580______58_840_50470040->any,_5843_50269600___46257580______58_840_50470040->num_any*sizeof(Object));
_5843_50269600___46257580______58_840_50470040->any[_5843_50269600___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50672900();

   return behavior;
}

Behavior __50671560;

Behavior make__50671560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50671560 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_47487400___47516140___46257580______58_840_50470040);
   trig__w_47487400___47516140___46257580______58_840_50470040->num_any += 1;
   trig__w_47487400___47516140___46257580______58_840_50470040->any = realloc(trig__w_47487400___47516140___46257580______58_840_50470040->any,trig__w_47487400___47516140___46257580______58_840_50470040->num_any*sizeof(Object));
trig__w_47487400___47516140___46257580______58_840_50470040->any[trig__w_47487400___47516140___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50671760();

   return behavior;
}

Behavior __50671200;

Behavior make__50671200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50671200 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5846_47853000___46257580______58_840_50470040);
   _5846_47853000___46257580______58_840_50470040->num_any += 1;
   _5846_47853000___46257580______58_840_50470040->any = realloc(_5846_47853000___46257580______58_840_50470040->any,_5846_47853000___46257580______58_840_50470040->num_any*sizeof(Object));
_5846_47853000___46257580______58_840_50470040->any[_5846_47853000___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50671520();

   return behavior;
}

Behavior __50669760;

Behavior make__50669760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50669760 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47863660___47516140___46257580______58_840_50470040);
   abus__w_47863660___47516140___46257580______58_840_50470040->num_any += 1;
   abus__w_47863660___47516140___46257580______58_840_50470040->any = realloc(abus__w_47863660___47516140___46257580______58_840_50470040->any,abus__w_47863660___47516140___46257580______58_840_50470040->num_any*sizeof(Object));
abus__w_47863660___47516140___46257580______58_840_50470040->any[abus__w_47863660___47516140___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50670060();

   return behavior;
}

Behavior __50669560;

Behavior make__50669560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50669560 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5847_47852860___46257580______58_840_50470040);
   _5847_47852860___46257580______58_840_50470040->num_any += 1;
   _5847_47852860___46257580______58_840_50470040->any = realloc(_5847_47852860___46257580______58_840_50470040->any,_5847_47852860___46257580______58_840_50470040->num_any*sizeof(Object));
_5847_47852860___46257580______58_840_50470040->any[_5847_47852860___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50669720();

   return behavior;
}

Behavior __50668340;

Behavior make__50668340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50668340 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47863820___47516140___46257580______58_840_50470040);
   dbus__w_47863820___47516140___46257580______58_840_50470040->num_any += 1;
   dbus__w_47863820___47516140___46257580______58_840_50470040->any = realloc(dbus__w_47863820___47516140___46257580______58_840_50470040->any,dbus__w_47863820___47516140___46257580______58_840_50470040->num_any*sizeof(Object));
dbus__w_47863820___47516140___46257580______58_840_50470040->any[dbus__w_47863820___47516140___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50668660();

   return behavior;
}

Behavior __50667820;

Behavior make__50667820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50667820 = behavior;
   behavior->owner = (Object)__47516140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5848_47978780___46257580______58_840_50470040);
   _5848_47978780___46257580______58_840_50470040->num_any += 1;
   _5848_47978780___46257580______58_840_50470040->any = realloc(_5848_47978780___46257580______58_840_50470040->any,_5848_47978780___46257580______58_840_50470040->num_any*sizeof(Object));
_5848_47978780___46257580______58_840_50470040->any[_5848_47978780___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50668300();

   return behavior;
}

Scope make__47516140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47516140 = scope;
   scope->owner = (Object)__46257580;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47487460();
   scope->inners[1] = maketrig__w_47487400();
   scope->inners[2] = makedbus__r_47654880();
   scope->inners[3] = makedbus__w_47863820();
   scope->inners[4] = makeabus__r_47863740();
   scope->inners[5] = makeabus__w_47863660();
   scope->inners[6] = makemem_48191320();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47515520();
   scope->scopes[1] = make__47514860();
   scope->scopes[2] = make__47514340();
   scope->scopes[3] = make__47513860();
   scope->scopes[4] = make__47488660();
   scope->scopes[5] = make__47488120();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49906560();
   scope->behaviors[1] = make__50610200();
   scope->behaviors[2] = make__50675280();
   scope->behaviors[3] = make__50674520();
   scope->behaviors[4] = make__50674240();
   scope->behaviors[5] = make__50672960();
   scope->behaviors[6] = make__50672260();
   scope->behaviors[7] = make__50671560();
   scope->behaviors[8] = make__50671200();
   scope->behaviors[9] = make__50669760();
   scope->behaviors[10] = make__50669560();
   scope->behaviors[11] = make__50668340();
   scope->behaviors[12] = make__50667820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __49906440;

SignalI trig__r_49928140___49906440___46257580______58_840_50470040;

SignalI maketrig__r_49928140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49928140___49906440___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__49906440;
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

SignalI trig__w_49928120___49906440___46257580______58_840_50470040;

SignalI maketrig__w_49928120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49928120___49906440___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__49906440;
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

SignalI dbus__r_49990860___49906440___46257580______58_840_50470040;

SignalI makedbus__r_49990860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49990860___49906440___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__49906440;
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

SignalI dbus__w_50143720___49906440___46257580______58_840_50470040;

SignalI makedbus__w_50143720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50143720___49906440___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__49906440;
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

SignalI abus__r_50143640___49906440___46257580______58_840_50470040;

SignalI makeabus__r_50143640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50143640___49906440___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__49906440;
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

SignalI abus__w_50143560___49906440___46257580______58_840_50470040;

SignalI makeabus__w_50143560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50143560___49906440___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__49906440;
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

SignalI mem_50271720___49906440___46257580______58_840_50470040;

SignalI makemem_50271720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50271720___49906440___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__49906440;
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

Scope __49906140;

Scope make__49906140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49906140 = scope;
   scope->owner = (Object)__49906440;
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

Scope __49905720;

Scope make__49905720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49905720 = scope;
   scope->owner = (Object)__49906440;
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

Scope __49929840;

Scope make__49929840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49929840 = scope;
   scope->owner = (Object)__49906440;
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

Scope __49929420;

Scope make__49929420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49929420 = scope;
   scope->owner = (Object)__49906440;
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

Scope __49929000;

Scope make__49929000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49929000 = scope;
   scope->owner = (Object)__49906440;
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

Scope __49928580;

Scope make__49928580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49928580 = scope;
   scope->owner = (Object)__49906440;
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

Behavior __51470100;

Behavior make__51470100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51470100 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49933420___46257580______58_840_50470040);
   clk_49933420___46257580______58_840_50470040->num_neg += 1;
   clk_49933420___46257580______58_840_50470040->neg = realloc(clk_49933420___46257580______58_840_50470040->neg,clk_49933420___46257580______58_840_50470040->num_neg*sizeof(Object));
clk_49933420___46257580______58_840_50470040->neg[clk_49933420___46257580______58_840_50470040->num_neg-1] = (Object)behavior;
   behavior->block = make__50669040();

   return behavior;
}

Behavior __50688840;

Behavior make__50688840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50688840 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49990860___49906440___46257580______58_840_50470040);
   dbus__r_49990860___49906440___46257580______58_840_50470040->num_any += 1;
   dbus__r_49990860___49906440___46257580______58_840_50470040->any = realloc(dbus__r_49990860___49906440___46257580______58_840_50470040->any,dbus__r_49990860___49906440___46257580______58_840_50470040->num_any*sizeof(Object));
dbus__r_49990860___49906440___46257580______58_840_50470040->any[dbus__r_49990860___49906440___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50689460();

   return behavior;
}

Behavior __50688060;

Behavior make__50688060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50688060 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5873_50374180___46257580______58_840_50470040);
   _5873_50374180___46257580______58_840_50470040->num_any += 1;
   _5873_50374180___46257580______58_840_50470040->any = realloc(_5873_50374180___46257580______58_840_50470040->any,_5873_50374180___46257580______58_840_50470040->num_any*sizeof(Object));
_5873_50374180___46257580______58_840_50470040->any[_5873_50374180___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50688780();

   return behavior;
}

Behavior __50686800;

Behavior make__50686800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50686800 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49928140___49906440___46257580______58_840_50470040);
   trig__r_49928140___49906440___46257580______58_840_50470040->num_any += 1;
   trig__r_49928140___49906440___46257580______58_840_50470040->any = realloc(trig__r_49928140___49906440___46257580______58_840_50470040->any,trig__r_49928140___49906440___46257580______58_840_50470040->num_any*sizeof(Object));
trig__r_49928140___49906440___46257580______58_840_50470040->any[trig__r_49928140___49906440___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50687040();

   return behavior;
}

Behavior __50686440;

Behavior make__50686440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50686440 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5871_50374160___46257580______58_840_50470040);
   _5871_50374160___46257580______58_840_50470040->num_any += 1;
   _5871_50374160___46257580______58_840_50470040->any = realloc(_5871_50374160___46257580______58_840_50470040->any,_5871_50374160___46257580______58_840_50470040->num_any*sizeof(Object));
_5871_50374160___46257580______58_840_50470040->any[_5871_50374160___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50686720();

   return behavior;
}

Behavior __50685400;

Behavior make__50685400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50685400 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50143640___49906440___46257580______58_840_50470040);
   abus__r_50143640___49906440___46257580______58_840_50470040->num_any += 1;
   abus__r_50143640___49906440___46257580______58_840_50470040->any = realloc(abus__r_50143640___49906440___46257580______58_840_50470040->any,abus__r_50143640___49906440___46257580______58_840_50470040->num_any*sizeof(Object));
abus__r_50143640___49906440___46257580______58_840_50470040->any[abus__r_50143640___49906440___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50685880();

   return behavior;
}

Behavior __50684780;

Behavior make__50684780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50684780 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5872_50374080___46257580______58_840_50470040);
   _5872_50374080___46257580______58_840_50470040->num_any += 1;
   _5872_50374080___46257580______58_840_50470040->any = realloc(_5872_50374080___46257580______58_840_50470040->any,_5872_50374080___46257580______58_840_50470040->num_any*sizeof(Object));
_5872_50374080___46257580______58_840_50470040->any[_5872_50374080___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50685220();

   return behavior;
}

Behavior __50684140;

Behavior make__50684140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50684140 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49928120___49906440___46257580______58_840_50470040);
   trig__w_49928120___49906440___46257580______58_840_50470040->num_any += 1;
   trig__w_49928120___49906440___46257580______58_840_50470040->any = realloc(trig__w_49928120___49906440___46257580______58_840_50470040->any,trig__w_49928120___49906440___46257580______58_840_50470040->num_any*sizeof(Object));
trig__w_49928120___49906440___46257580______58_840_50470040->any[trig__w_49928120___49906440___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50684380();

   return behavior;
}

Behavior __50724460;

Behavior make__50724460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50724460 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5875_47978760___46257580______58_840_50470040);
   _5875_47978760___46257580______58_840_50470040->num_any += 1;
   _5875_47978760___46257580______58_840_50470040->any = realloc(_5875_47978760___46257580______58_840_50470040->any,_5875_47978760___46257580______58_840_50470040->num_any*sizeof(Object));
_5875_47978760___46257580______58_840_50470040->any[_5875_47978760___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50683980();

   return behavior;
}

Behavior __50723540;

Behavior make__50723540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50723540 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50143560___49906440___46257580______58_840_50470040);
   abus__w_50143560___49906440___46257580______58_840_50470040->num_any += 1;
   abus__w_50143560___49906440___46257580______58_840_50470040->any = realloc(abus__w_50143560___49906440___46257580______58_840_50470040->any,abus__w_50143560___49906440___46257580______58_840_50470040->num_any*sizeof(Object));
abus__w_50143560___49906440___46257580______58_840_50470040->any[abus__w_50143560___49906440___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50723900();

   return behavior;
}

Behavior __50722840;

Behavior make__50722840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50722840 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5876_47978540___46257580______58_840_50470040);
   _5876_47978540___46257580______58_840_50470040->num_any += 1;
   _5876_47978540___46257580______58_840_50470040->any = realloc(_5876_47978540___46257580______58_840_50470040->any,_5876_47978540___46257580______58_840_50470040->num_any*sizeof(Object));
_5876_47978540___46257580______58_840_50470040->any[_5876_47978540___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50723240();

   return behavior;
}

Behavior __50722160;

Behavior make__50722160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50722160 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50143720___49906440___46257580______58_840_50470040);
   dbus__w_50143720___49906440___46257580______58_840_50470040->num_any += 1;
   dbus__w_50143720___49906440___46257580______58_840_50470040->any = realloc(dbus__w_50143720___49906440___46257580______58_840_50470040->any,dbus__w_50143720___49906440___46257580______58_840_50470040->num_any*sizeof(Object));
dbus__w_50143720___49906440___46257580______58_840_50470040->any[dbus__w_50143720___49906440___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50722400();

   return behavior;
}

Behavior __50721740;

Behavior make__50721740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50721740 = behavior;
   behavior->owner = (Object)__49906440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5877_48187340___46257580______58_840_50470040);
   _5877_48187340___46257580______58_840_50470040->num_any += 1;
   _5877_48187340___46257580______58_840_50470040->any = realloc(_5877_48187340___46257580______58_840_50470040->any,_5877_48187340___46257580______58_840_50470040->num_any*sizeof(Object));
_5877_48187340___46257580______58_840_50470040->any[_5877_48187340___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50722060();

   return behavior;
}

Scope make__49906440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49906440 = scope;
   scope->owner = (Object)__46257580;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49928140();
   scope->inners[1] = maketrig__w_49928120();
   scope->inners[2] = makedbus__r_49990860();
   scope->inners[3] = makedbus__w_50143720();
   scope->inners[4] = makeabus__r_50143640();
   scope->inners[5] = makeabus__w_50143560();
   scope->inners[6] = makemem_50271720();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__49906140();
   scope->scopes[1] = make__49905720();
   scope->scopes[2] = make__49929840();
   scope->scopes[3] = make__49929420();
   scope->scopes[4] = make__49929000();
   scope->scopes[5] = make__49928580();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51470100();
   scope->behaviors[1] = make__50688840();
   scope->behaviors[2] = make__50688060();
   scope->behaviors[3] = make__50686800();
   scope->behaviors[4] = make__50686440();
   scope->behaviors[5] = make__50685400();
   scope->behaviors[6] = make__50684780();
   scope->behaviors[7] = make__50684140();
   scope->behaviors[8] = make__50724460();
   scope->behaviors[9] = make__50723540();
   scope->behaviors[10] = make__50722840();
   scope->behaviors[11] = make__50722160();
   scope->behaviors[12] = make__50721740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __51469980;

SignalI reg__0_51594700___51469980___46257580______58_840_50470040;

SignalI makereg__0_51594700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51594700___51469980___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__51469980;
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

SignalI reg__1_51673780___51469980___46257580______58_840_50470040;

SignalI makereg__1_51673780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51673780___51469980___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__51469980;
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

Scope __51469680;

Scope make__51469680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51469680 = scope;
   scope->owner = (Object)__51469980;
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

Scope __51469260;

Scope make__51469260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51469260 = scope;
   scope->owner = (Object)__51469980;
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

Scope __51468840;

Scope make__51468840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51468840 = scope;
   scope->owner = (Object)__51469980;
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

Scope __51468420;

SignalI abus__r_51468040___51468420___51469980___46257580______58_840_50470040;

SignalI makeabus__r_51468040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51468040___51468420___51469980___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__51468420;
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

Scope make__51468420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51468420 = scope;
   scope->owner = (Object)__51469980;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51468040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __51467920;

SignalI abus__w_51467540___51467920___51469980___46257580______58_840_50470040;

SignalI makeabus__w_51467540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51467540___51467920___51469980___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__51467920;
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

Scope make__51467920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51467920 = scope;
   scope->owner = (Object)__51469980;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51467540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __51467420;

SignalI abus__r_51467040___51467420___51469980___46257580______58_840_50470040;

SignalI makeabus__r_51467040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51467040___51467420___51469980___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__51467420;
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

Scope make__51467420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51467420 = scope;
   scope->owner = (Object)__51469980;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51467040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __51466920;

SignalI abus__w_51466540___51466920___51469980___46257580______58_840_50470040;

SignalI makeabus__w_51466540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51466540___51466920___51469980___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__51466920;
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

Scope make__51466920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51466920 = scope;
   scope->owner = (Object)__51469980;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51466540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50718040;

Behavior make__50718040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50718040 = behavior;
   behavior->owner = (Object)__51469980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51594700___51469980___46257580______58_840_50470040);
   reg__0_51594700___51469980___46257580______58_840_50470040->num_any += 1;
   reg__0_51594700___51469980___46257580______58_840_50470040->any = realloc(reg__0_51594700___51469980___46257580______58_840_50470040->any,reg__0_51594700___51469980___46257580______58_840_50470040->num_any*sizeof(Object));
reg__0_51594700___51469980___46257580______58_840_50470040->any[reg__0_51594700___51469980___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50718260();

   return behavior;
}

Behavior __50717580;

Behavior make__50717580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50717580 = behavior;
   behavior->owner = (Object)__51469980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5890_50493700___46257580______58_840_50470040);
   _5890_50493700___46257580______58_840_50470040->num_any += 1;
   _5890_50493700___46257580______58_840_50470040->any = realloc(_5890_50493700___46257580______58_840_50470040->any,_5890_50493700___46257580______58_840_50470040->num_any*sizeof(Object));
_5890_50493700___46257580______58_840_50470040->any[_5890_50493700___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50717960();

   return behavior;
}

Behavior __50749260;

Behavior make__50749260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50749260 = behavior;
   behavior->owner = (Object)__51469980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51673780___51469980___46257580______58_840_50470040);
   reg__1_51673780___51469980___46257580______58_840_50470040->num_any += 1;
   reg__1_51673780___51469980___46257580______58_840_50470040->any = realloc(reg__1_51673780___51469980___46257580______58_840_50470040->any,reg__1_51673780___51469980___46257580______58_840_50470040->num_any*sizeof(Object));
reg__1_51673780___51469980___46257580______58_840_50470040->any[reg__1_51673780___51469980___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50716920();

   return behavior;
}

Behavior __50748540;

Behavior make__50748540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50748540 = behavior;
   behavior->owner = (Object)__51469980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5891_50672700___46257580______58_840_50470040);
   _5891_50672700___46257580______58_840_50470040->num_any += 1;
   _5891_50672700___46257580______58_840_50470040->any = realloc(_5891_50672700___46257580______58_840_50470040->any,_5891_50672700___46257580______58_840_50470040->num_any*sizeof(Object));
_5891_50672700___46257580______58_840_50470040->any[_5891_50672700___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50749160();

   return behavior;
}

Scope make__51469980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51469980 = scope;
   scope->owner = (Object)__46257580;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51594700();
   scope->inners[1] = makereg__1_51673780();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__51469680();
   scope->scopes[1] = make__51469260();
   scope->scopes[2] = make__51468840();
   scope->scopes[3] = make__51468420();
   scope->scopes[4] = make__51467920();
   scope->scopes[5] = make__51467420();
   scope->scopes[6] = make__51466920();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50718040();
   scope->behaviors[1] = make__50717580();
   scope->behaviors[2] = make__50749260();
   scope->behaviors[3] = make__50748540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47633460;

SignalI lv0_47736860___47633460___46257580______58_840_50470040;

SignalI makelv0_47736860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47736860___47633460___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47633460;
   signalI->name = "lv0";
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

SignalI lv1_47856180___47633460___46257580______58_840_50470040;

SignalI makelv1_47856180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47856180___47633460___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47633460;
   signalI->name = "lv1";
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

SignalI av0_47923340___47633460___46257580______58_840_50470040;

SignalI makeav0_47923340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_47923340___47633460___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47633460;
   signalI->name = "av0";
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

SignalI av1_48094400___47633460___46257580______58_840_50470040;

SignalI makeav1_48094400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_48094400___47633460___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47633460;
   signalI->name = "av1";
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

SignalI rv_48319700___47633460___46257580______58_840_50470040;

SignalI makerv_48319700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_48319700___47633460___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47633460;
   signalI->name = "rv";
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

SignalI lvok0_48319680___47633460___46257580______58_840_50470040;

SignalI makelvok0_48319680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_48319680___47633460___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47633460;
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

SignalI lvok1_48319580___47633460___46257580______58_840_50470040;

SignalI makelvok1_48319580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_48319580___47633460___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47633460;
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

SignalI rvok_48319560___47633460___46257580______58_840_50470040;

SignalI makervok_48319560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_48319560___47633460___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47633460;
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

SignalI run_48319540___47633460___46257580______58_840_50470040;

SignalI makerun_48319540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_48319540___47633460___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47633460;
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

Behavior __50065960;

Behavior make__50065960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50065960 = behavior;
   behavior->owner = (Object)__47633460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49933420___46257580______58_840_50470040);
   clk_49933420___46257580______58_840_50470040->num_pos += 1;
   clk_49933420___46257580______58_840_50470040->pos = realloc(clk_49933420___46257580______58_840_50470040->pos,clk_49933420___46257580______58_840_50470040->num_pos*sizeof(Object));
clk_49933420___46257580______58_840_50470040->pos[clk_49933420___46257580______58_840_50470040->num_pos-1] = (Object)behavior;
   behavior->block = make__48319340();

   return behavior;
}

Scope make__47633460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47633460 = scope;
   scope->owner = (Object)__46257580;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47736860();
   scope->inners[1] = makelv1_47856180();
   scope->inners[2] = makeav0_47923340();
   scope->inners[3] = makeav1_48094400();
   scope->inners[4] = makerv_48319700();
   scope->inners[5] = makelvok0_48319680();
   scope->inners[6] = makelvok1_48319580();
   scope->inners[7] = makervok_48319560();
   scope->inners[8] = makerun_48319540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50065960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __50065840;

SignalI reg__0_50219420___50065840___46257580______58_840_50470040;

SignalI makereg__0_50219420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50219420___50065840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__50065840;
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

SignalI reg__1_50335180___50065840___46257580______58_840_50470040;

SignalI makereg__1_50335180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50335180___50065840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__50065840;
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

Scope __50065540;

Scope make__50065540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50065540 = scope;
   scope->owner = (Object)__50065840;
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

Scope __50065120;

Scope make__50065120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50065120 = scope;
   scope->owner = (Object)__50065840;
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

Scope __50064700;

Scope make__50064700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50064700 = scope;
   scope->owner = (Object)__50065840;
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

Scope __50064080;

SignalI abus__r_50063700___50064080___50065840___46257580______58_840_50470040;

SignalI makeabus__r_50063700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50063700___50064080___50065840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__50064080;
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

Scope make__50064080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50064080 = scope;
   scope->owner = (Object)__50065840;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50063700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __50063580;

SignalI abus__w_50063200___50063580___50065840___46257580______58_840_50470040;

SignalI makeabus__w_50063200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50063200___50063580___50065840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__50063580;
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

Behavior __50793560;

Behavior make__50793560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50793560 = behavior;
   behavior->owner = (Object)__50063580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50063200___50063580___50065840___46257580______58_840_50470040);
   abus__w_50063200___50063580___50065840___46257580______58_840_50470040->num_any += 1;
   abus__w_50063200___50063580___50065840___46257580______58_840_50470040->any = realloc(abus__w_50063200___50063580___50065840___46257580______58_840_50470040->any,abus__w_50063200___50063580___50065840___46257580______58_840_50470040->num_any*sizeof(Object));
abus__w_50063200___50063580___50065840___46257580______58_840_50470040->any[abus__w_50063200___50063580___50065840___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50794220();

   return behavior;
}

Behavior __50792920;

Behavior make__50792920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50792920 = behavior;
   behavior->owner = (Object)__50063580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58138_49979560___46257580______58_840_50470040);
   _58138_49979560___46257580______58_840_50470040->num_any += 1;
   _58138_49979560___46257580______58_840_50470040->any = realloc(_58138_49979560___46257580______58_840_50470040->any,_58138_49979560___46257580______58_840_50470040->num_any*sizeof(Object));
_58138_49979560___46257580______58_840_50470040->any[_58138_49979560___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50793420();

   return behavior;
}

Scope make__50063580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50063580 = scope;
   scope->owner = (Object)__50065840;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50063200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50793560();
   scope->behaviors[1] = make__50792920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __50062820;

SignalI abus__r_50062380___50062820___50065840___46257580______58_840_50470040;

SignalI makeabus__r_50062380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50062380___50062820___50065840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__50062820;
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

Scope make__50062820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50062820 = scope;
   scope->owner = (Object)__50065840;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50062380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __50062220;

SignalI abus__w_50061740___50062220___50065840___46257580______58_840_50470040;

SignalI makeabus__w_50061740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50061740___50062220___50065840___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__50062220;
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

Scope make__50062220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50062220 = scope;
   scope->owner = (Object)__50065840;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50061740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50744980;

Behavior make__50744980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50744980 = behavior;
   behavior->owner = (Object)__50065840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50219420___50065840___46257580______58_840_50470040);
   reg__0_50219420___50065840___46257580______58_840_50470040->num_any += 1;
   reg__0_50219420___50065840___46257580______58_840_50470040->any = realloc(reg__0_50219420___50065840___46257580______58_840_50470040->any,reg__0_50219420___50065840___46257580______58_840_50470040->num_any*sizeof(Object));
reg__0_50219420___50065840___46257580______58_840_50470040->any[reg__0_50219420___50065840___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50745200();

   return behavior;
}

Behavior __50744540;

Behavior make__50744540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50744540 = behavior;
   behavior->owner = (Object)__50065840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58121_50793980___46257580______58_840_50470040);
   _58121_50793980___46257580______58_840_50470040->num_any += 1;
   _58121_50793980___46257580______58_840_50470040->any = realloc(_58121_50793980___46257580______58_840_50470040->any,_58121_50793980___46257580______58_840_50470040->num_any*sizeof(Object));
_58121_50793980___46257580______58_840_50470040->any[_58121_50793980___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50744940();

   return behavior;
}

Behavior __50743040;

Behavior make__50743040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50743040 = behavior;
   behavior->owner = (Object)__50065840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50335180___50065840___46257580______58_840_50470040);
   reg__1_50335180___50065840___46257580______58_840_50470040->num_any += 1;
   reg__1_50335180___50065840___46257580______58_840_50470040->any = realloc(reg__1_50335180___50065840___46257580______58_840_50470040->any,reg__1_50335180___50065840___46257580______58_840_50470040->num_any*sizeof(Object));
reg__1_50335180___50065840___46257580______58_840_50470040->any[reg__1_50335180___50065840___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50743520();

   return behavior;
}

Behavior __50742540;

Behavior make__50742540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50742540 = behavior;
   behavior->owner = (Object)__50065840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58122_50890600___46257580______58_840_50470040);
   _58122_50890600___46257580______58_840_50470040->num_any += 1;
   _58122_50890600___46257580______58_840_50470040->any = realloc(_58122_50890600___46257580______58_840_50470040->any,_58122_50890600___46257580______58_840_50470040->num_any*sizeof(Object));
_58122_50890600___46257580______58_840_50470040->any[_58122_50890600___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50742960();

   return behavior;
}

Behavior __50741600;

Behavior make__50741600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50741600 = behavior;
   behavior->owner = (Object)__50065840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50219420___50065840___46257580______58_840_50470040);
   reg__0_50219420___50065840___46257580______58_840_50470040->num_any += 1;
   reg__0_50219420___50065840___46257580______58_840_50470040->any = realloc(reg__0_50219420___50065840___46257580______58_840_50470040->any,reg__0_50219420___50065840___46257580______58_840_50470040->num_any*sizeof(Object));
reg__0_50219420___50065840___46257580______58_840_50470040->any[reg__0_50219420___50065840___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50741900();

   return behavior;
}

Behavior __50741280;

Behavior make__50741280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50741280 = behavior;
   behavior->owner = (Object)__50065840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58136_49854600___46257580______58_840_50470040);
   _58136_49854600___46257580______58_840_50470040->num_any += 1;
   _58136_49854600___46257580______58_840_50470040->any = realloc(_58136_49854600___46257580______58_840_50470040->any,_58136_49854600___46257580______58_840_50470040->num_any*sizeof(Object));
_58136_49854600___46257580______58_840_50470040->any[_58136_49854600___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50741540();

   return behavior;
}

Behavior __50797800;

Behavior make__50797800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50797800 = behavior;
   behavior->owner = (Object)__50065840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50335180___50065840___46257580______58_840_50470040);
   reg__1_50335180___50065840___46257580______58_840_50470040->num_any += 1;
   reg__1_50335180___50065840___46257580______58_840_50470040->any = realloc(reg__1_50335180___50065840___46257580______58_840_50470040->any,reg__1_50335180___50065840___46257580______58_840_50470040->num_any*sizeof(Object));
reg__1_50335180___50065840___46257580______58_840_50470040->any[reg__1_50335180___50065840___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50798100();

   return behavior;
}

Behavior __50797280;

Behavior make__50797280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50797280 = behavior;
   behavior->owner = (Object)__50065840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58137_49979680___46257580______58_840_50470040);
   _58137_49979680___46257580______58_840_50470040->num_any += 1;
   _58137_49979680___46257580______58_840_50470040->any = realloc(_58137_49979680___46257580______58_840_50470040->any,_58137_49979680___46257580______58_840_50470040->num_any*sizeof(Object));
_58137_49979680___46257580______58_840_50470040->any[_58137_49979680___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50797740();

   return behavior;
}

Scope make__50065840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50065840 = scope;
   scope->owner = (Object)__46257580;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50219420();
   scope->inners[1] = makereg__1_50335180();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__50065540();
   scope->scopes[1] = make__50065120();
   scope->scopes[2] = make__50064700();
   scope->scopes[3] = make__50064080();
   scope->scopes[4] = make__50063580();
   scope->scopes[5] = make__50062820();
   scope->scopes[6] = make__50062220();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50744980();
   scope->behaviors[1] = make__50744540();
   scope->behaviors[2] = make__50743040();
   scope->behaviors[3] = make__50742540();
   scope->behaviors[4] = make__50741600();
   scope->behaviors[5] = make__50741280();
   scope->behaviors[6] = make__50797800();
   scope->behaviors[7] = make__50797280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __51356880;

SignalI reg__0_51599140___51356880___46257580______58_840_50470040;

SignalI makereg__0_51599140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51599140___51356880___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__51356880;
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

SignalI reg__1_51674220___51356880___46257580______58_840_50470040;

SignalI makereg__1_51674220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51674220___51356880___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__51356880;
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

Scope __51356580;

Scope make__51356580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51356580 = scope;
   scope->owner = (Object)__51356880;
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

Scope __51356120;

Scope make__51356120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51356120 = scope;
   scope->owner = (Object)__51356880;
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

Scope __51445720;

Scope make__51445720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51445720 = scope;
   scope->owner = (Object)__51356880;
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

Scope __51445300;

SignalI abus__r_51444820___51445300___51356880___46257580______58_840_50470040;

SignalI makeabus__r_51444820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51444820___51445300___51356880___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__51445300;
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

Scope make__51445300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51445300 = scope;
   scope->owner = (Object)__51356880;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51444820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __51444700;

SignalI abus__w_51444300___51444700___51356880___46257580______58_840_50470040;

SignalI makeabus__w_51444300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51444300___51444700___51356880___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__51444700;
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

Scope make__51444700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51444700 = scope;
   scope->owner = (Object)__51356880;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51444300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __51444160;

SignalI abus__r_51443720___51444160___51356880___46257580______58_840_50470040;

SignalI makeabus__r_51443720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51443720___51444160___51356880___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__51444160;
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

Scope make__51444160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51444160 = scope;
   scope->owner = (Object)__51356880;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51443720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __51443600;

SignalI abus__w_51443220___51443600___51356880___46257580______58_840_50470040;

SignalI makeabus__w_51443220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51443220___51443600___51356880___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__51443600;
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

Scope make__51443600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51443600 = scope;
   scope->owner = (Object)__51356880;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51443220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50790500;

Behavior make__50790500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50790500 = behavior;
   behavior->owner = (Object)__51356880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51599140___51356880___46257580______58_840_50470040);
   reg__0_51599140___51356880___46257580______58_840_50470040->num_any += 1;
   reg__0_51599140___51356880___46257580______58_840_50470040->any = realloc(reg__0_51599140___51356880___46257580______58_840_50470040->any,reg__0_51599140___51356880___46257580______58_840_50470040->num_any*sizeof(Object));
reg__0_51599140___51356880___46257580______58_840_50470040->any[reg__0_51599140___51356880___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50790740();

   return behavior;
}

Behavior __50814580;

Behavior make__50814580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50814580 = behavior;
   behavior->owner = (Object)__51356880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58151_51028020___46257580______58_840_50470040);
   _58151_51028020___46257580______58_840_50470040->num_any += 1;
   _58151_51028020___46257580______58_840_50470040->any = realloc(_58151_51028020___46257580______58_840_50470040->any,_58151_51028020___46257580______58_840_50470040->num_any*sizeof(Object));
_58151_51028020___46257580______58_840_50470040->any[_58151_51028020___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50814920();

   return behavior;
}

Behavior __50813100;

Behavior make__50813100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50813100 = behavior;
   behavior->owner = (Object)__51356880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51674220___51356880___46257580______58_840_50470040);
   reg__1_51674220___51356880___46257580______58_840_50470040->num_any += 1;
   reg__1_51674220___51356880___46257580______58_840_50470040->any = realloc(reg__1_51674220___51356880___46257580______58_840_50470040->any,reg__1_51674220___51356880___46257580______58_840_50470040->num_any*sizeof(Object));
reg__1_51674220___51356880___46257580______58_840_50470040->any[reg__1_51674220___51356880___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50813480();

   return behavior;
}

Behavior __50812700;

Behavior make__50812700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50812700 = behavior;
   behavior->owner = (Object)__51356880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58152_51321440___46257580______58_840_50470040);
   _58152_51321440___46257580______58_840_50470040->num_any += 1;
   _58152_51321440___46257580______58_840_50470040->any = realloc(_58152_51321440___46257580______58_840_50470040->any,_58152_51321440___46257580______58_840_50470040->num_any*sizeof(Object));
_58152_51321440___46257580______58_840_50470040->any[_58152_51321440___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50813000();

   return behavior;
}

Scope make__51356880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51356880 = scope;
   scope->owner = (Object)__46257580;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51599140();
   scope->inners[1] = makereg__1_51674220();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__51356580();
   scope->scopes[1] = make__51356120();
   scope->scopes[2] = make__51445720();
   scope->scopes[3] = make__51445300();
   scope->scopes[4] = make__51444700();
   scope->scopes[5] = make__51444160();
   scope->scopes[6] = make__51443600();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50790500();
   scope->behaviors[1] = make__50814580();
   scope->behaviors[2] = make__50813100();
   scope->behaviors[3] = make__50812700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47721760;

SignalI lv0_47836360___47721760___46257580______58_840_50470040;

SignalI makelv0_47836360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47836360___47721760___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47721760;
   signalI->name = "lv0";
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

SignalI lv1_47946780___47721760___46257580______58_840_50470040;

SignalI makelv1_47946780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47946780___47721760___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47721760;
   signalI->name = "lv1";
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

SignalI rv0_48104000___47721760___46257580______58_840_50470040;

SignalI makerv0_48104000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_48104000___47721760___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47721760;
   signalI->name = "rv0";
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

SignalI rv1_49635060___47721760___46257580______58_840_50470040;

SignalI makerv1_49635060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_49635060___47721760___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47721760;
   signalI->name = "rv1";
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

SignalI lvok0_49635040___47721760___46257580______58_840_50470040;

SignalI makelvok0_49635040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49635040___47721760___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47721760;
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

SignalI lvok1_49635020___47721760___46257580______58_840_50470040;

SignalI makelvok1_49635020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49635020___47721760___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47721760;
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

SignalI rvok0_49635000___47721760___46257580______58_840_50470040;

SignalI makervok0_49635000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49635000___47721760___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47721760;
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

SignalI rvok1_49634980___47721760___46257580______58_840_50470040;

SignalI makervok1_49634980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_49634980___47721760___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47721760;
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

SignalI run_49634960___47721760___46257580______58_840_50470040;

SignalI makerun_49634960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49634960___47721760___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47721760;
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

Behavior __47551020;

Behavior make__47551020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47551020 = behavior;
   behavior->owner = (Object)__47721760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49933420___46257580______58_840_50470040);
   clk_49933420___46257580______58_840_50470040->num_pos += 1;
   clk_49933420___46257580______58_840_50470040->pos = realloc(clk_49933420___46257580______58_840_50470040->pos,clk_49933420___46257580______58_840_50470040->num_pos*sizeof(Object));
clk_49933420___46257580______58_840_50470040->pos[clk_49933420___46257580______58_840_50470040->num_pos-1] = (Object)behavior;
   behavior->block = make__49634840();

   return behavior;
}

Scope make__47721760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47721760 = scope;
   scope->owner = (Object)__46257580;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47836360();
   scope->inners[1] = makelv1_47946780();
   scope->inners[2] = makerv0_48104000();
   scope->inners[3] = makerv1_49635060();
   scope->inners[4] = makelvok0_49635040();
   scope->inners[5] = makelvok1_49635020();
   scope->inners[6] = makervok0_49635000();
   scope->inners[7] = makervok1_49634980();
   scope->inners[8] = makerun_49634960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47551020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47550420;

SignalI reg__0_47721260___47550420___46257580______58_840_50470040;

SignalI makereg__0_47721260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47721260___47550420___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47550420;
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

SignalI reg__1_47856640___47550420___46257580______58_840_50470040;

SignalI makereg__1_47856640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47856640___47550420___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47550420;
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

Scope __47549500;

Scope make__47549500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47549500 = scope;
   scope->owner = (Object)__47550420;
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

Scope __47547400;

Scope make__47547400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47547400 = scope;
   scope->owner = (Object)__47550420;
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

Scope __47546500;

Scope make__47546500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47546500 = scope;
   scope->owner = (Object)__47550420;
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

Scope __47569880;

SignalI abus__r_47569040___47569880___47550420___46257580______58_840_50470040;

SignalI makeabus__r_47569040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47569040___47569880___47550420___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47569880;
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

Scope make__47569880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47569880 = scope;
   scope->owner = (Object)__47550420;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47569040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47568740;

SignalI abus__w_47567380___47568740___47550420___46257580______58_840_50470040;

SignalI makeabus__w_47567380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47567380___47568740___47550420___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47568740;
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

Scope make__47568740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47568740 = scope;
   scope->owner = (Object)__47550420;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47567380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47567220;

SignalI abus__r_47566180___47567220___47550420___46257580______58_840_50470040;

SignalI makeabus__r_47566180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47566180___47567220___47550420___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47567220;
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

Scope make__47567220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47567220 = scope;
   scope->owner = (Object)__47550420;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47566180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47566040;

SignalI abus__w_47565460___47566040___47550420___46257580______58_840_50470040;

SignalI makeabus__w_47565460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47565460___47566040___47550420___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__47566040;
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

Scope make__47566040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47566040 = scope;
   scope->owner = (Object)__47550420;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47565460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50809260;

Behavior make__50809260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50809260 = behavior;
   behavior->owner = (Object)__47550420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47721260___47550420___46257580______58_840_50470040);
   reg__0_47721260___47550420___46257580______58_840_50470040->num_any += 1;
   reg__0_47721260___47550420___46257580______58_840_50470040->any = realloc(reg__0_47721260___47550420___46257580______58_840_50470040->any,reg__0_47721260___47550420___46257580______58_840_50470040->num_any*sizeof(Object));
reg__0_47721260___47550420___46257580______58_840_50470040->any[reg__0_47721260___47550420___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50809460();

   return behavior;
}

Behavior __50808880;

Behavior make__50808880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50808880 = behavior;
   behavior->owner = (Object)__47550420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_51463480___46257580______58_840_50470040);
   _58182_51463480___46257580______58_840_50470040->num_any += 1;
   _58182_51463480___46257580______58_840_50470040->any = realloc(_58182_51463480___46257580______58_840_50470040->any,_58182_51463480___46257580______58_840_50470040->num_any*sizeof(Object));
_58182_51463480___46257580______58_840_50470040->any[_58182_51463480___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50809160();

   return behavior;
}

Behavior __50807740;

Behavior make__50807740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50807740 = behavior;
   behavior->owner = (Object)__47550420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47856640___47550420___46257580______58_840_50470040);
   reg__1_47856640___47550420___46257580______58_840_50470040->num_any += 1;
   reg__1_47856640___47550420___46257580______58_840_50470040->any = realloc(reg__1_47856640___47550420___46257580______58_840_50470040->any,reg__1_47856640___47550420___46257580______58_840_50470040->num_any*sizeof(Object));
reg__1_47856640___47550420___46257580______58_840_50470040->any[reg__1_47856640___47550420___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50808240();

   return behavior;
}

Behavior __50807380;

Behavior make__50807380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50807380 = behavior;
   behavior->owner = (Object)__47550420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_51633040___46257580______58_840_50470040);
   _58183_51633040___46257580______58_840_50470040->num_any += 1;
   _58183_51633040___46257580______58_840_50470040->any = realloc(_58183_51633040___46257580______58_840_50470040->any,_58183_51633040___46257580______58_840_50470040->num_any*sizeof(Object));
_58183_51633040___46257580______58_840_50470040->any[_58183_51633040___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50807700();

   return behavior;
}

Scope make__47550420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47550420 = scope;
   scope->owner = (Object)__46257580;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47721260();
   scope->inners[1] = makereg__1_47856640();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47549500();
   scope->scopes[1] = make__47547400();
   scope->scopes[2] = make__47546500();
   scope->scopes[3] = make__47569880();
   scope->scopes[4] = make__47568740();
   scope->scopes[5] = make__47567220();
   scope->scopes[6] = make__47566040();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50809260();
   scope->behaviors[1] = make__50808880();
   scope->behaviors[2] = make__50807740();
   scope->behaviors[3] = make__50807380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56395700;

Behavior make__56395700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56395700 = behavior;
   behavior->owner = (Object)__46257580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49933420___46257580______58_840_50470040);
   clk_49933420___46257580______58_840_50470040->num_neg += 1;
   clk_49933420___46257580______58_840_50470040->neg = realloc(clk_49933420___46257580______58_840_50470040->neg,clk_49933420___46257580______58_840_50470040->num_neg*sizeof(Object));
clk_49933420___46257580______58_840_50470040->neg[clk_49933420___46257580______58_840_50470040->num_neg-1] = (Object)behavior;
   behavior->block = make__55958060();

   return behavior;
}

Behavior __56941360;

Behavior make__56941360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56941360 = behavior;
   behavior->owner = (Object)__46257580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49933420___46257580______58_840_50470040);
   clk_49933420___46257580______58_840_50470040->num_pos += 1;
   clk_49933420___46257580______58_840_50470040->pos = realloc(clk_49933420___46257580______58_840_50470040->pos,clk_49933420___46257580______58_840_50470040->num_pos*sizeof(Object));
clk_49933420___46257580______58_840_50470040->pos[clk_49933420___46257580______58_840_50470040->num_pos-1] = (Object)behavior;
   behavior->block = make__56395580();

   return behavior;
}

Behavior __49833320;

Behavior make__49833320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49833320 = behavior;
   behavior->owner = (Object)__46257580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49933420___46257580______58_840_50470040);
   clk_49933420___46257580______58_840_50470040->num_pos += 1;
   clk_49933420___46257580______58_840_50470040->pos = realloc(clk_49933420___46257580______58_840_50470040->pos,clk_49933420___46257580______58_840_50470040->num_pos*sizeof(Object));
clk_49933420___46257580______58_840_50470040->pos[clk_49933420___46257580______58_840_50470040->num_pos-1] = (Object)behavior;
   behavior->block = make__56941240();

   return behavior;
}

Behavior __50470280;

Behavior make__50470280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50470280 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__46257580;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__49833020();

   return behavior;
}

Behavior __50583260;

Behavior make__50583260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50583260 = behavior;
   behavior->owner = (Object)__46257580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a0__ack_47720580___46257580______58_840_50470040);
   a0__ack_47720580___46257580______58_840_50470040->num_any += 1;
   a0__ack_47720580___46257580______58_840_50470040->any = realloc(a0__ack_47720580___46257580______58_840_50470040->any,a0__ack_47720580___46257580______58_840_50470040->num_any*sizeof(Object));
a0__ack_47720580___46257580______58_840_50470040->any[a0__ack_47720580___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a1__ack_47720560___46257580______58_840_50470040);
   a1__ack_47720560___46257580______58_840_50470040->num_any += 1;
   a1__ack_47720560___46257580______58_840_50470040->any = realloc(a1__ack_47720560___46257580______58_840_50470040->any,a1__ack_47720560___46257580______58_840_50470040->num_any*sizeof(Object));
a1__ack_47720560___46257580______58_840_50470040->any[a1__ack_47720560___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50584320();

   return behavior;
}

Behavior __50582960;

Behavior make__50582960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50582960 = behavior;
   behavior->owner = (Object)__46257580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z0__val_51778500___46257580______58_840_50470040);
   z0__val_51778500___46257580______58_840_50470040->num_any += 1;
   z0__val_51778500___46257580______58_840_50470040->any = realloc(z0__val_51778500___46257580______58_840_50470040->any,z0__val_51778500___46257580______58_840_50470040->num_any*sizeof(Object));
z0__val_51778500___46257580______58_840_50470040->any[z0__val_51778500___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z1__val_45713040___46257580______58_840_50470040);
   z1__val_45713040___46257580______58_840_50470040->num_any += 1;
   z1__val_45713040___46257580______58_840_50470040->any = realloc(z1__val_45713040___46257580______58_840_50470040->any,z1__val_45713040___46257580______58_840_50470040->num_any*sizeof(Object));
z1__val_45713040___46257580______58_840_50470040->any[z1__val_45713040___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50540540();

   return behavior;
}

Behavior __50582760;

Behavior make__50582760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50582760 = behavior;
   behavior->owner = (Object)__46257580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_49851100_func0_58_840_47898220___46257580______58_840_50470040);
   a_49851100_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   a_49851100_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(a_49851100_func0_58_840_47898220___46257580______58_840_50470040->any,a_49851100_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
a_49851100_func0_58_840_47898220___46257580______58_840_50470040->any[a_49851100_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_51649920_func1_58_840_50998640___46257580______58_840_50470040);
   a_51649920_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   a_51649920_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(a_51649920_func1_58_840_50998640___46257580______58_840_50470040->any,a_51649920_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
a_51649920_func1_58_840_50998640___46257580______58_840_50470040->any[a_51649920_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50540380();

   return behavior;
}

Scope make__46257580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46257580 = scope;
   scope->owner = (Object)_____58_840_50470040;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_49850920();
   scope->systemIs[1] = makefunc1_51649620();
   scope->num_inners = 46;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_49933420();
   scope->inners[1] = makerst_49933400();
   scope->inners[2] = makereq_49933380();
   scope->inners[3] = makeack_65_49933360();
   scope->inners[4] = makeack_66_49933340();
   scope->inners[5] = makeack_49933320();
   scope->inners[6] = makefill_49933280();
   scope->inners[7] = make_5815_50149820();
   scope->inners[8] = make_5813_50149800();
   scope->inners[9] = make_5814_50149700();
   scope->inners[10] = make_5844_50269780();
   scope->inners[11] = make_5842_50269760();
   scope->inners[12] = make_5843_50269600();
   scope->inners[13] = make_5873_50374180();
   scope->inners[14] = make_5871_50374160();
   scope->inners[15] = make_5872_50374080();
   scope->inners[16] = make_5890_50493700();
   scope->inners[17] = make_5891_50672700();
   scope->inners[18] = make_58121_50793980();
   scope->inners[19] = make_58122_50890600();
   scope->inners[20] = make_58151_51028020();
   scope->inners[21] = make_58152_51321440();
   scope->inners[22] = make_58182_51463480();
   scope->inners[23] = make_58183_51633040();
   scope->inners[24] = makez0__val_51778500();
   scope->inners[25] = makez1__val_45713040();
   scope->inners[26] = makea0__val_47569900();
   scope->inners[27] = makea1__val_47720640();
   scope->inners[28] = makez0__flag_47720620();
   scope->inners[29] = makez1__flag_47720600();
   scope->inners[30] = makea0__ack_47720580();
   scope->inners[31] = makea1__ack_47720560();
   scope->inners[32] = makelayer__ack_47720500();
   scope->inners[33] = make_5817_47720480();
   scope->inners[34] = make_5818_47720360();
   scope->inners[35] = make_5819_47853040();
   scope->inners[36] = make_5846_47853000();
   scope->inners[37] = make_5847_47852860();
   scope->inners[38] = make_5848_47978780();
   scope->inners[39] = make_5875_47978760();
   scope->inners[40] = make_5876_47978540();
   scope->inners[41] = make_5877_48187340();
   scope->inners[42] = make_58136_49854600();
   scope->inners[43] = make_58137_49979680();
   scope->inners[44] = make_58138_49979560();
   scope->inners[45] = makeval_50194720();
   scope->num_scopes = 9;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__46256840();
   scope->scopes[1] = make__47516140();
   scope->scopes[2] = make__49906440();
   scope->scopes[3] = make__51469980();
   scope->scopes[4] = make__47633460();
   scope->scopes[5] = make__50065840();
   scope->scopes[6] = make__51356880();
   scope->scopes[7] = make__47721760();
   scope->scopes[8] = make__47550420();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56395700();
   scope->behaviors[1] = make__56941360();
   scope->behaviors[2] = make__49833320();
   scope->behaviors[3] = make__50470280();
   scope->behaviors[4] = make__50583260();
   scope->behaviors[5] = make__50582960();
   scope->behaviors[6] = make__50582760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_50470040() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_50470040 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__46257580();

   return systemT;
}