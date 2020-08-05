#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_47331200;

Block __47193440;

Block __47193280;

Block __47192960;

void code__47192960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47567800(),_58137_47193640___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47192960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47192960 = block;
   block->owner = (Object)__47193280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47192960;

   return block;
};

void code__47193280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47567880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47192960();
   }
      }
   }
}

Block make__47193280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47193280 = block;
   block->owner = (Object)__47193440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47193280;

   return block;
};

Block __47192500;

Block __47192140;

void code__47192140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47567640(),_5875_47193960___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47192140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47192140 = block;
   block->owner = (Object)__47192500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47192140;

   return block;
};

void code__47192500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47567720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47192140();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47567580(),_5874_47194040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47192500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47192500 = block;
   block->owner = (Object)__47193440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47192500;

   return block;
};

Block __47191280;

Block __47190960;

void code__47190960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47567420(),_5846_47169640___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47190960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47190960 = block;
   block->owner = (Object)__47191280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47190960;

   return block;
};

void code__47191280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47567500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47190960();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47567360(),_5845_47169720___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47191280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47191280 = block;
   block->owner = (Object)__47193440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47191280;

   return block;
};

Block __47190340;

Block __47190020;

void code__47190020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47567200(),_5817_47169820___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47190020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47190020 = block;
   block->owner = (Object)__47190340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47190020;

   return block;
};

void code__47190340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47567280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47190020();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47567140(),_5816_47169900___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47190340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47190340 = block;
   block->owner = (Object)__47193440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47190340;

   return block;
};

Block __47189340;

Block __47189180;

Block __47188860;

void code__47188860() {
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
                  src0 = _5817_47169820___45557300______58_840_47331200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47566880();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5817_47169820___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47566780(),_5816_47169900___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_47193560___45557300______58_840_47331200->c_value,_5818_47169740___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47188860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47188860 = block;
   block->owner = (Object)__47189180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47188860;

   return block;
};

void code__47189180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47567020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47188860();
   }
      }
   }
}

Block make__47189180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47189180 = block;
   block->owner = (Object)__47189340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47189180;

   return block;
};

Block __47275760;

Block __47275440;

void code__47275440() {
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
                  src0 = _5846_47169640___45557300______58_840_47331200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47566480();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5846_47169640___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47566380(),_5845_47169720___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_47193560___45557300______58_840_47331200->c_value,_5847_47194060___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47275440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47275440 = block;
   block->owner = (Object)__47275760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47275440;

   return block;
};

void code__47275760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47566620();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47275440();
   }
      }
   }
}

Block make__47275760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47275760 = block;
   block->owner = (Object)__47189340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47275760;

   return block;
};

Block __47274360;

Block __47274040;

void code__47274040() {
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
                  src0 = _5875_47193960___45557300______58_840_47331200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47566080();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5875_47193960___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47565980(),_5874_47194040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_47193560___45557300______58_840_47331200->c_value,_5876_47193880___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47274040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47274040 = block;
   block->owner = (Object)__47274360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47274040;

   return block;
};

void code__47274360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47566220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47274040();
   }
      }
   }
}

Block make__47274360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47274360 = block;
   block->owner = (Object)__47189340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47274360;

   return block;
};

Block __47271300;

Block __47270380;

Block __47269300;

void code__47269300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_47193560___45557300______58_840_47331200->c_value,_58135_47193800___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47269300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47269300 = block;
   block->owner = (Object)__47270380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47269300;

   return block;
};

Block __47292240;

void code__47292240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_47193560___45557300______58_840_47331200->c_value,_58136_47193720___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47292240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47292240 = block;
   block->owner = (Object)__47270380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47292240;

   return block;
};

void code__47270380() {
{
      Value value = _58137_47193640___45557300______58_840_47331200->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__47565700())) {
    code__47269300();
         }
         else if (value2integer(value) == value2integer(make__47565600())) {
    code__47292240();
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
                  src0 = _58137_47193640___45557300______58_840_47331200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47565400();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58137_47193640___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47270380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47270380 = block;
   block->owner = (Object)__47271300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47270380;

   return block;
};

void code__47271300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47565820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47270380();
   }
      }
   }
}

Block make__47271300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47271300 = block;
   block->owner = (Object)__47189340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47271300;

   return block;
};

void code__47189340() {
 code__47189180();
 code__47275760();
 code__47274360();
 code__47271300();
}

Block make__47189340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47189340 = block;
   block->owner = (Object)__47193440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47189340;

   return block;
};

void code__47193440() {
 code__47193280();
 code__47192500();
 code__47191280();
 code__47190340();
   {
      Value cond = fill_47170980___45557300______58_840_47331200->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47189340();
   }
      }
   }
}

Block make__47193440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47193440 = block;
   block->owner = (Object)__47289580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47193440;

   return block;
};

Block __47289440;

Block __47285280;

void code__47285280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47563940(),req_47171040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47285280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47285280 = block;
   block->owner = (Object)__47289440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47285280;

   return block;
};

Block __47284360;

void code__47284360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47563660(),req_47171040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47284360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47284360 = block;
   block->owner = (Object)__47289440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47284360;

   return block;
};

Block __47307980;

void code__47307980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47563340(),req_47171040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47307980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47307980 = block;
   block->owner = (Object)__47289440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47307980;

   return block;
};

Block __47307060;

void code__47307060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47563060(),req_47171040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47307060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47307060 = block;
   block->owner = (Object)__47289440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47307060;

   return block;
};

Block __47306140;

void code__47306140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47562780(),req_47171040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47306140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47306140 = block;
   block->owner = (Object)__47289440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47306140;

   return block;
};

Block __47305220;

void code__47305220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47587040(),req_47171040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47305220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47305220 = block;
   block->owner = (Object)__47289440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47305220;

   return block;
};

Block __47304300;

void code__47304300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47586760(),req_47171040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47304300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47304300 = block;
   block->owner = (Object)__47289440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47304300;

   return block;
};

Block __47303340;

void code__47303340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47586480(),req_47171040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47303340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47303340 = block;
   block->owner = (Object)__47289440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47303340;

   return block;
};

Block __47302180;

void code__47302180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47586200(),req_47171040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47302180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47302180 = block;
   block->owner = (Object)__47289440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47302180;

   return block;
};

Block __47301220;

void code__47301220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47585920(),req_47171040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47301220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47301220 = block;
   block->owner = (Object)__47289440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47301220;

   return block;
};

void code__47289440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47565300(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47565240(),rst_47171060___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47565180(),req_47171040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47565120(),val_47193560___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47565060(),fill_47170980___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47565000(),rst_47171060___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564940(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564880(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564820(),rst_47171060___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564760(),fill_47170980___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564700(),val_47193560___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564640(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564580(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564520(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564460(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564400(),fill_47170980___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564340(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564280(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564220(),req_47171040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564160(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47564100(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = ack_66_47171000___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47564020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47285280();
   }
      }
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47563880(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47563820(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = ack_66_47171000___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47563740();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47284360();
   }
      }
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47563600(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47563540(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = ack_66_47171000___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47563420();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47307980();
   }
      }
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47563280(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47563220(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = ack_66_47171000___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47563140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47307060();
   }
      }
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47563000(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47562940(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = ack_66_47171000___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47562860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47306140();
   }
      }
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47587260(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47587200(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = ack_66_47171000___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47587120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47305220();
   }
      }
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47586980(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47586920(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = ack_66_47171000___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47586840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47304300();
   }
      }
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47586700(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47586640(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = ack_66_47171000___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47586560();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47303340();
   }
      }
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47586420(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47586360(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = ack_66_47171000___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47586280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47302180();
   }
      }
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47586140(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47331320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47586080(),clk_47171080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = ack_66_47171000___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47586000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47301220();
   }
      }
   }
   hw_wait(make_delay(10,NS),__47331320);
}

Block make__47289440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47289440 = block;
   block->owner = (Object)__47331320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47289440;

   return block;
};

Block __45641740;

Block __45640380;

void code__45640380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_45623540___45556360___45557300______58_840_47331200->c_value,make_ref_rangeS(mem_45622740___45556360___45557300______58_840_47331200,value2integer(abus__w_45623200___45556360___45557300______58_840_47331200->c_value),value2integer(abus__w_45623200___45556360___45557300______58_840_47331200->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__45640380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45640380 = block;
   block->owner = (Object)__45641740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45640380;

   return block;
};

void code__45641740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_45622740___45556360___45557300______58_840_47331200->c_value;
            idx = value2integer(abus__r_45623400___45556360___45557300______58_840_47331200->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_45623700___45556360___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_45623880___45556360___45557300______58_840_47331200->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45640380();
   }
      }
   }
}

Block make__45641740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45641740 = block;
   block->owner = (Object)__45638920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45641740;

   return block;
};

Block __47349040;

void code__47349040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_45623700___45556360___45557300______58_840_47331200->c_value,_5814_47170900___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47349040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47349040 = block;
   block->owner = (Object)__47348880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47349040;

   return block;
};

Block __47348840;

void code__47348840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_47170900___45557300______58_840_47331200->c_value,dbus__r_45623700___45556360___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47348840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47348840 = block;
   block->owner = (Object)__47348680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47348840;

   return block;
};

Block __47348340;

void code__47348340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_45623900___45556360___45557300______58_840_47331200->c_value,_5812_47170880___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47348340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47348340 = block;
   block->owner = (Object)__47348180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47348340;

   return block;
};

Block __47348140;

void code__47348140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5812_47170880___45557300______58_840_47331200->c_value,trig__r_45623900___45556360___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47348140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47348140 = block;
   block->owner = (Object)__47347980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47348140;

   return block;
};

Block __47347680;

void code__47347680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_45623400___45556360___45557300______58_840_47331200->c_value,_5813_47170800___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47347680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47347680 = block;
   block->owner = (Object)__47347520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47347680;

   return block;
};

Block __47347480;

void code__47347480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_47170800___45557300______58_840_47331200->c_value,abus__r_45623400___45556360___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47347480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47347480 = block;
   block->owner = (Object)__47347320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47347480;

   return block;
};

Block __47347020;

void code__47347020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_45623880___45556360___45557300______58_840_47331200->c_value,_5816_47169900___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47347020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47347020 = block;
   block->owner = (Object)__47346860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47347020;

   return block;
};

Block __47346820;

void code__47346820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5816_47169900___45557300______58_840_47331200->c_value,trig__w_45623880___45556360___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47346820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47346820 = block;
   block->owner = (Object)__47346660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47346820;

   return block;
};

Block __47346360;

void code__47346360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_45623200___45556360___45557300______58_840_47331200->c_value,_5817_47169820___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47346360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47346360 = block;
   block->owner = (Object)__47346200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47346360;

   return block;
};

Block __47346160;

void code__47346160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_47169820___45557300______58_840_47331200->c_value,abus__w_45623200___45556360___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47346160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47346160 = block;
   block->owner = (Object)__47346000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47346160;

   return block;
};

Block __47345700;

void code__47345700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_45623540___45556360___45557300______58_840_47331200->c_value,_5818_47169740___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47345700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47345700 = block;
   block->owner = (Object)__47345540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47345700;

   return block;
};

Block __47345500;

void code__47345500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_47169740___45557300______58_840_47331200->c_value,dbus__w_45623540___45556360___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47345500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47345500 = block;
   block->owner = (Object)__47345340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47345500;

   return block;
};

Block __45745820;

Block __45767200;

void code__45767200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_45731620___45638600___45557300______58_840_47331200->c_value,make_ref_rangeS(mem_45729800___45638600___45557300______58_840_47331200,value2integer(abus__w_45730420___45638600___45557300______58_840_47331200->c_value),value2integer(abus__w_45730420___45638600___45557300______58_840_47331200->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__45767200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45767200 = block;
   block->owner = (Object)__45745820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45767200;

   return block;
};

void code__45745820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_45729800___45638600___45557300______58_840_47331200->c_value;
            idx = value2integer(abus__r_45731420___45638600___45557300______58_840_47331200->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_45732420___45638600___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_45733060___45638600___45557300______58_840_47331200->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45767200();
   }
      }
   }
}

Block make__45745820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45745820 = block;
   block->owner = (Object)__45763380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45745820;

   return block;
};

Block __47343980;

void code__47343980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_45732420___45638600___45557300______58_840_47331200->c_value,_5843_47170720___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47343980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47343980 = block;
   block->owner = (Object)__47343820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47343980;

   return block;
};

Block __47343780;

void code__47343780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_47170720___45557300______58_840_47331200->c_value,dbus__r_45732420___45638600___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47343780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47343780 = block;
   block->owner = (Object)__47343620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47343780;

   return block;
};

Block __47343320;

void code__47343320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_45733120___45638600___45557300______58_840_47331200->c_value,_5841_47170700___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47343320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47343320 = block;
   block->owner = (Object)__47343160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47343320;

   return block;
};

Block __47343120;

void code__47343120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5841_47170700___45557300______58_840_47331200->c_value,trig__r_45733120___45638600___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47343120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47343120 = block;
   block->owner = (Object)__47342960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47343120;

   return block;
};

Block __47342660;

void code__47342660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_45731420___45638600___45557300______58_840_47331200->c_value,_5842_47170620___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47342660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47342660 = block;
   block->owner = (Object)__47342500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47342660;

   return block;
};

Block __47342460;

void code__47342460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5842_47170620___45557300______58_840_47331200->c_value,abus__r_45731420___45638600___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47342460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47342460 = block;
   block->owner = (Object)__47342300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47342460;

   return block;
};

Block __47342000;

void code__47342000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_45733060___45638600___45557300______58_840_47331200->c_value,_5845_47169720___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47342000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47342000 = block;
   block->owner = (Object)__47341840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47342000;

   return block;
};

Block __47341800;

void code__47341800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_47169720___45557300______58_840_47331200->c_value,trig__w_45733060___45638600___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47341800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47341800 = block;
   block->owner = (Object)__47341640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47341800;

   return block;
};

Block __47365880;

void code__47365880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_45730420___45638600___45557300______58_840_47331200->c_value,_5846_47169640___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47365880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47365880 = block;
   block->owner = (Object)__47365720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47365880;

   return block;
};

Block __47365680;

void code__47365680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5846_47169640___45557300______58_840_47331200->c_value,abus__w_45730420___45638600___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47365680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47365680 = block;
   block->owner = (Object)__47365520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47365680;

   return block;
};

Block __47365220;

void code__47365220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_45731620___45638600___45557300______58_840_47331200->c_value,_5847_47194060___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47365220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47365220 = block;
   block->owner = (Object)__47365060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47365220;

   return block;
};

Block __47365020;

void code__47365020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5847_47194060___45557300______58_840_47331200->c_value,dbus__w_45731620___45638600___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47365020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47365020 = block;
   block->owner = (Object)__47364820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47365020;

   return block;
};

Block __46930580;

Block __46929840;

void code__46929840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_46861840___45762840___45557300______58_840_47331200->c_value,make_ref_rangeS(mem_46861020___45762840___45557300______58_840_47331200,value2integer(abus__w_46861460___45762840___45557300______58_840_47331200->c_value),value2integer(abus__w_46861460___45762840___45557300______58_840_47331200->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__46929840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46929840 = block;
   block->owner = (Object)__46930580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46929840;

   return block;
};

void code__46930580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_46861020___45762840___45557300______58_840_47331200->c_value;
            idx = value2integer(abus__r_46861600___45762840___45557300______58_840_47331200->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_46862140___45762840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_46862320___45762840___45557300______58_840_47331200->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46929840();
   }
      }
   }
}

Block make__46930580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46930580 = block;
   block->owner = (Object)__46928820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46930580;

   return block;
};

Block __47363460;

void code__47363460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_46862140___45762840___45557300______58_840_47331200->c_value,_5872_47170540___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47363460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47363460 = block;
   block->owner = (Object)__47363300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47363460;

   return block;
};

Block __47363260;

void code__47363260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5872_47170540___45557300______58_840_47331200->c_value,dbus__r_46862140___45762840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47363260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47363260 = block;
   block->owner = (Object)__47363100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47363260;

   return block;
};

Block __47362800;

void code__47362800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_46862340___45762840___45557300______58_840_47331200->c_value,_5870_47170520___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47362800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47362800 = block;
   block->owner = (Object)__47362640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47362800;

   return block;
};

Block __47362600;

void code__47362600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5870_47170520___45557300______58_840_47331200->c_value,trig__r_46862340___45762840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47362600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47362600 = block;
   block->owner = (Object)__47362440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47362600;

   return block;
};

Block __47362140;

void code__47362140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_46861600___45762840___45557300______58_840_47331200->c_value,_5871_47170440___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47362140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47362140 = block;
   block->owner = (Object)__47361980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47362140;

   return block;
};

Block __47361940;

void code__47361940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5871_47170440___45557300______58_840_47331200->c_value,abus__r_46861600___45762840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47361940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47361940 = block;
   block->owner = (Object)__47361780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47361940;

   return block;
};

Block __47361480;

void code__47361480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_46862320___45762840___45557300______58_840_47331200->c_value,_5874_47194040___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47361480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47361480 = block;
   block->owner = (Object)__47361320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47361480;

   return block;
};

Block __47361280;

void code__47361280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5874_47194040___45557300______58_840_47331200->c_value,trig__w_46862320___45762840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47361280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47361280 = block;
   block->owner = (Object)__47361120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47361280;

   return block;
};

Block __47360820;

void code__47360820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_46861460___45762840___45557300______58_840_47331200->c_value,_5875_47193960___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47360820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47360820 = block;
   block->owner = (Object)__47359800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47360820;

   return block;
};

Block __47359560;

void code__47359560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5875_47193960___45557300______58_840_47331200->c_value,abus__w_46861460___45762840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47359560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47359560 = block;
   block->owner = (Object)__47358800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47359560;

   return block;
};

Block __47358080;

void code__47358080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_46861840___45762840___45557300______58_840_47331200->c_value,_5876_47193880___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47358080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47358080 = block;
   block->owner = (Object)__47382460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47358080;

   return block;
};

Block __47382420;

void code__47382420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5876_47193880___45557300______58_840_47331200->c_value,dbus__w_46861840___45762840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47382420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47382420 = block;
   block->owner = (Object)__47382260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47382420;

   return block;
};

Block __47380900;

void code__47380900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_46924800___46928700___45557300______58_840_47331200->c_value,_5889_47170360___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47380900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47380900 = block;
   block->owner = (Object)__47380700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47380900;

   return block;
};

Block __47380660;

void code__47380660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5889_47170360___45557300______58_840_47331200->c_value,reg__0_46924800___46928700___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47380660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47380660 = block;
   block->owner = (Object)__47380500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47380660;

   return block;
};

Block __47380200;

void code__47380200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_46924720___46928700___45557300______58_840_47331200->c_value,_5890_47170280___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47380200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47380200 = block;
   block->owner = (Object)__47380040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47380200;

   return block;
};

Block __47380000;

void code__47380000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_47170280___45557300______58_840_47331200->c_value,reg__1_46924720___46928700___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47380000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47380000 = block;
   block->owner = (Object)__47379840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47380000;

   return block;
};

Block __47093440;

Block __47092660;

Block __47092320;

void code__47092320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47551260(),_5842_47170620___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47092320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47092320 = block;
   block->owner = (Object)__47092660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47092320;

   return block;
};

void code__47092660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47551340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47092320();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47551200(),_5841_47170700___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47092660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47092660 = block;
   block->owner = (Object)__47093440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47092660;

   return block;
};

Block __47089620;

Block __47089300;

void code__47089300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47551040(),_5813_47170800___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47089300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47089300 = block;
   block->owner = (Object)__47089620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47089300;

   return block;
};

void code__47089620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47551120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47089300();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47550980(),_5812_47170880___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47089620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47089620 = block;
   block->owner = (Object)__47093440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47089620;

   return block;
};

Block __47088680;

Block __47088360;

void code__47088360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47550820(),_5871_47170440___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47088360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47088360 = block;
   block->owner = (Object)__47088680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47088360;

   return block;
};

void code__47088680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47550900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47088360();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47550760(),_5870_47170520___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47088680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47088680 = block;
   block->owner = (Object)__47093440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47088680;

   return block;
};

Block __47110700;

Block __47110380;

Block __47110060;

Block __47109740;

void code__47109740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5872_47170540___45557300______58_840_47331200->c_value,rv_47094680___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47550140(),rvok_47094280___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47109740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47109740 = block;
   block->owner = (Object)__47110060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47109740;

   return block;
};

void code__47110060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5870_47170520___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47550300();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47109740();
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
                  src0 = _5871_47170440___45557300______58_840_47331200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47550020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5871_47170440___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47549920(),_5870_47170520___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47110060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47110060 = block;
   block->owner = (Object)__47110380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47110060;

   return block;
};

void code__47110380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47550400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47110060();
   }
      }
   }
}

Block make__47110380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47110380 = block;
   block->owner = (Object)__47110700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47110380;

   return block;
};

Block __47108260;

Block __47107860;

Block __47107540;

void code__47107540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_47170900___45557300______58_840_47331200->c_value,lv0_47095460___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47549580(),lvok0_47094520___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47107540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47107540 = block;
   block->owner = (Object)__47107860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47107540;

   return block;
};

void code__47107860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5812_47170880___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47549740();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47107540();
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
                  src0 = _5813_47170800___45557300______58_840_47331200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47549460();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5813_47170800___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47549360(),_5812_47170880___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47107860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47107860 = block;
   block->owner = (Object)__47108260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47107860;

   return block;
};

void code__47108260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47549840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47107860();
   }
      }
   }
}

Block make__47108260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47108260 = block;
   block->owner = (Object)__47110700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47108260;

   return block;
};

Block __47106040;

Block __47105560;

Block __47104740;

void code__47104740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_47095300___46923840___45557300______58_840_47331200->c_value,_5889_47170360___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47104740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47104740 = block;
   block->owner = (Object)__47105560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47104740;

   return block;
};

void code__47105560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_47095300___46923840___45557300______58_840_47331200->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = lv0_47095460___46923840___45557300______58_840_47331200->c_value;
            src1 = rv_47094680___46923840___45557300______58_840_47331200->c_value;
            dst = mul_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_47095300___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
 code__47104740();
}

Block make__47105560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47105560 = block;
   block->owner = (Object)__47106040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47105560;

   return block;
};

void code__47106040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47549200(),ack_65_47171020___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47549140(),run_47094160___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
 code__47105560();
}

Block make__47106040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47106040 = block;
   block->owner = (Object)__47110700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47106040;

   return block;
};

Block __47104240;

Block __47128020;

Block __47126780;

void code__47126780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_47170720___45557300______58_840_47331200->c_value,lv1_47095380___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47548480(),lvok1_47094400___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47126780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47126780 = block;
   block->owner = (Object)__47128020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47126780;

   return block;
};

void code__47128020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5841_47170700___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47548640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47126780();
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
                  src0 = _5842_47170620___45557300______58_840_47331200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47548320();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5842_47170620___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47548220(),_5841_47170700___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47128020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47128020 = block;
   block->owner = (Object)__47104240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47128020;

   return block;
};

void code__47104240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47171060___45557300______58_840_47331200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47548780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47128020();
   }
      }
   }
}

Block make__47104240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47104240 = block;
   block->owner = (Object)__47110700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47104240;

   return block;
};

Block __47125040;

Block __47124560;

Block __47123740;

void code__47123740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_47095220___46923840___45557300______58_840_47331200->c_value,_5890_47170280___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47123740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47123740 = block;
   block->owner = (Object)__47124560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47123740;

   return block;
};

void code__47124560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_47095220___46923840___45557300______58_840_47331200->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = lv1_47095380___46923840___45557300______58_840_47331200->c_value;
            src1 = rv_47094680___46923840___45557300______58_840_47331200->c_value;
            dst = mul_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_47095220___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
 code__47123740();
}

Block make__47124560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47124560 = block;
   block->owner = (Object)__47125040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47124560;

   return block;
};

void code__47125040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47547840(),ack_65_47171020___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47547780(),run_47094160___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
 code__47124560();
}

Block make__47125040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47125040 = block;
   block->owner = (Object)__47110700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47125040;

   return block;
};

void code__47110700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47550480(),run_47094160___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
 code__47110380();
 code__47108260();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47094520___46923840___45557300______58_840_47331200->c_value;
         src1 = rvok_47094280___46923840___45557300______58_840_47331200->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47106040();
   }
      }
   }
 code__47104240();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_47094400___46923840___45557300______58_840_47331200->c_value;
         src1 = rvok_47094280___46923840___45557300______58_840_47331200->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47125040();
   }
      }
   }
}

Block make__47110700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47110700 = block;
   block->owner = (Object)__47093440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47110700;

   return block;
};

Block __47111960;

void code__47111960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47547440(),rvok_47094280___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47547380(),lvok0_47094520___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47547320(),av0_47095300___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47547260(),lvok1_47094400___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47547200(),av1_47095220___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47111960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47111960 = block;
   block->owner = (Object)__47093440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47111960;

   return block;
};

void code__47093440() {
 code__47092660();
 code__47089620();
 code__47088680();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47550700(),ack_65_47171020___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47550640(),run_47094160___46923840___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_47171040___45557300______58_840_47331200->c_value;
         src1 = run_47094160___46923840___45557300______58_840_47331200->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47110700();
   }
   else {
  code__47111960();
   }
      }
   }
}

Block make__47093440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47093440 = block;
   block->owner = (Object)__47122900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47093440;

   return block;
};

Block __47378060;

void code__47378060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47141120___47122780___45557300______58_840_47331200->c_value,_58120_47170200___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47378060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47378060 = block;
   block->owner = (Object)__47377900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47378060;

   return block;
};

Block __47377860;

void code__47377860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58120_47170200___45557300______58_840_47331200->c_value,reg__0_47141120___47122780___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47377860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47377860 = block;
   block->owner = (Object)__47377140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47377860;

   return block;
};

Block __47375420;

void code__47375420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47141040___47122780___45557300______58_840_47331200->c_value,_58121_47170080___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47375420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47375420 = block;
   block->owner = (Object)__47375160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47375420;

   return block;
};

Block __47375120;

void code__47375120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58121_47170080___45557300______58_840_47331200->c_value,reg__1_47141040___47122780___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47375120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47375120 = block;
   block->owner = (Object)__47374960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47375120;

   return block;
};

Block __47374660;

void code__47374660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47141120___47122780___45557300______58_840_47331200->c_value,_58135_47193800___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47374660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47374660 = block;
   block->owner = (Object)__47374500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47374660;

   return block;
};

Block __47374460;

void code__47374460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58135_47193800___45557300______58_840_47331200->c_value,reg__0_47141120___47122780___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47374460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47374460 = block;
   block->owner = (Object)__47398840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47374460;

   return block;
};

Block __47398540;

void code__47398540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47141040___47122780___45557300______58_840_47331200->c_value,_58136_47193720___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47398540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47398540 = block;
   block->owner = (Object)__47397240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47398540;

   return block;
};

Block __47397000;

void code__47397000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58136_47193720___45557300______58_840_47331200->c_value,reg__1_47141040___47122780___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47397000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47397000 = block;
   block->owner = (Object)__47396120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47397000;

   return block;
};

Block __47394560;

void code__47394560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47143500___47120720___47122780___45557300______58_840_47331200->c_value,_58137_47193640___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47394560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47394560 = block;
   block->owner = (Object)__47394400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47394560;

   return block;
};

Block __47394360;

void code__47394360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58137_47193640___45557300______58_840_47331200->c_value,abus__w_47143500___47120720___47122780___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47394360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47394360 = block;
   block->owner = (Object)__47394200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47394360;

   return block;
};

Block __47393200;

void code__47393200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47155820___47139880___45557300______58_840_47331200->c_value,_58150_47170000___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47393200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47393200 = block;
   block->owner = (Object)__47393040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47393200;

   return block;
};

Block __47393000;

void code__47393000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58150_47170000___45557300______58_840_47331200->c_value,reg__0_47155820___47139880___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47393000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47393000 = block;
   block->owner = (Object)__47392840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47393000;

   return block;
};

Block __47392540;

void code__47392540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47155740___47139880___45557300______58_840_47331200->c_value,_58151_47169920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47392540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47392540 = block;
   block->owner = (Object)__47392380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47392540;

   return block;
};

Block __47392340;

void code__47392340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58151_47169920___45557300______58_840_47331200->c_value,reg__1_47155740___47139880___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47392340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47392340 = block;
   block->owner = (Object)__47392180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47392340;

   return block;
};

Block __47154040;

Block __47176840;

Block __47176520;

void code__47176520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5889_47170360___45557300______58_840_47331200->c_value,lv0_47154500___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47569640(),lvok0_47154240___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47176520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47176520 = block;
   block->owner = (Object)__47176840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47176520;

   return block;
};

Block __47175940;

void code__47175940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58120_47170200___45557300______58_840_47331200->c_value,rv0_47154340___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47569500(),rvok0_47154200___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47175940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47175940 = block;
   block->owner = (Object)__47176840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47175940;

   return block;
};

Block __47175220;

Block __47174740;

void code__47174740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_47154500___47154920___45557300______58_840_47331200->c_value;
      src1 = rv0_47154340___47154920___45557300______58_840_47331200->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58150_47170000___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47174740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47174740 = block;
   block->owner = (Object)__47175220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47174740;

   return block;
};

void code__47175220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47569340(),run_47154160___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47569280(),ack_66_47171000___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
 code__47174740();
}

Block make__47175220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47175220 = block;
   block->owner = (Object)__47176840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47175220;

   return block;
};

Block __47174040;

void code__47174040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_47170280___45557300______58_840_47331200->c_value,lv1_47154420___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47568960(),lvok1_47154220___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47174040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47174040 = block;
   block->owner = (Object)__47176840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47174040;

   return block;
};

Block __47173460;

void code__47173460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58121_47170080___45557300______58_840_47331200->c_value,rv1_47154260___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47568820(),rvok1_47154180___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47173460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47173460 = block;
   block->owner = (Object)__47176840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47173460;

   return block;
};

Block __47172740;

Block __47172260;

void code__47172260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_47154420___47154920___45557300______58_840_47331200->c_value;
      src1 = rv1_47154260___47154920___45557300______58_840_47331200->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58151_47169920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47172260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47172260 = block;
   block->owner = (Object)__47172740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47172260;

   return block;
};

void code__47172740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47568620(),run_47154160___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47568540(),ack_66_47171000___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
 code__47172260();
}

Block make__47172740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47172740 = block;
   block->owner = (Object)__47176840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47172740;

   return block;
};

void code__47176840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47569780(),run_47154160___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
 code__47176520();
 code__47175940();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47154240___47154920___45557300______58_840_47331200->c_value;
         src1 = rvok0_47154200___47154920___45557300______58_840_47331200->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47175220();
   }
      }
   }
 code__47174040();
 code__47173460();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_47154220___47154920___45557300______58_840_47331200->c_value;
         src1 = rvok1_47154180___47154920___45557300______58_840_47331200->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47172740();
   }
      }
   }
}

Block make__47176840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47176840 = block;
   block->owner = (Object)__47154040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47176840;

   return block;
};

Block __47153440;

void code__47153440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47568220(),lvok0_47154240___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47568080(),rvok0_47154200___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47568020(),lvok1_47154220___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47567960(),rvok1_47154180___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
}

Block make__47153440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47153440 = block;
   block->owner = (Object)__47154040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47153440;

   return block;
};

void code__47154040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47570000(),ack_66_47171000___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47569940(),run_47154160___47154920___45557300______58_840_47331200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack_65_47171020___45557300______58_840_47331200->c_value;
         src1 = run_47154160___47154920___45557300______58_840_47331200->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47176840();
   }
   else {
  code__47153440();
   }
      }
   }
}

Block make__47154040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47154040 = block;
   block->owner = (Object)__47171220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47154040;

   return block;
};

Value make__47551340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47551260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47551200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47551120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47551040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47550980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47550900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47550820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47550760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47550700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47550640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47550480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47550400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47550300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47550140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47550020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47549920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47549840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47549740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47549580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47549460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47549360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47549200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47549140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47548780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47548640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47548480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47548320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47548220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47547840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47547780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47547440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47547380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47547320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47547260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47547200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47570000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47569940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47569780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47569640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47569500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47569340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47569280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47568960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47568820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47568620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47568540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47568220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47568080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47568020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47567960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47567880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47567800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47567720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47567640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47567580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47567500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47567420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47567360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47567280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47567200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47567140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47567020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47566880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47566780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47566620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47566480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47566380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47566220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47566080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47565980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47565820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47565700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47565600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47565400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47565300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47565240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47565180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47565120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47565060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47565000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47564640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47564020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47563940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47563880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47563820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47563740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47563660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47563600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47563540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47563420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47563340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47563280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47563220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47563140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47563060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47563000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47562940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47562860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47562780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47587260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47587200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47587120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47587040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47586980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47586920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47586840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47586760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47586700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47586640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47586560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47586480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47586420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47586360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47586280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47586200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47586140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47586080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47586000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47585920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope __45557300;

SignalI clk_47171080___45557300______58_840_47331200;

SignalI makeclk_47171080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_47171080___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI rst_47171060___45557300______58_840_47331200;

SignalI makerst_47171060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_47171060___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI req_47171040___45557300______58_840_47331200;

SignalI makereq_47171040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_47171040___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI ack_65_47171020___45557300______58_840_47331200;

SignalI makeack_65_47171020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_65_47171020___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI ack_66_47171000___45557300______58_840_47331200;

SignalI makeack_66_47171000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_66_47171000___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI fill_47170980___45557300______58_840_47331200;

SignalI makefill_47170980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_47170980___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5814_47170900___45557300______58_840_47331200;

SignalI make_5814_47170900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_47170900___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5812_47170880___45557300______58_840_47331200;

SignalI make_5812_47170880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5812_47170880___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5813_47170800___45557300______58_840_47331200;

SignalI make_5813_47170800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_47170800___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5843_47170720___45557300______58_840_47331200;

SignalI make_5843_47170720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_47170720___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5841_47170700___45557300______58_840_47331200;

SignalI make_5841_47170700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5841_47170700___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5842_47170620___45557300______58_840_47331200;

SignalI make_5842_47170620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5842_47170620___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5872_47170540___45557300______58_840_47331200;

SignalI make_5872_47170540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5872_47170540___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5870_47170520___45557300______58_840_47331200;

SignalI make_5870_47170520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5870_47170520___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5871_47170440___45557300______58_840_47331200;

SignalI make_5871_47170440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5871_47170440___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5889_47170360___45557300______58_840_47331200;

SignalI make_5889_47170360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5889_47170360___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5890_47170280___45557300______58_840_47331200;

SignalI make_5890_47170280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5890_47170280___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _58120_47170200___45557300______58_840_47331200;

SignalI make_58120_47170200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58120_47170200___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _58121_47170080___45557300______58_840_47331200;

SignalI make_58121_47170080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58121_47170080___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _58150_47170000___45557300______58_840_47331200;

SignalI make_58150_47170000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58150_47170000___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _58151_47169920___45557300______58_840_47331200;

SignalI make_58151_47169920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58151_47169920___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5816_47169900___45557300______58_840_47331200;

SignalI make_5816_47169900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5816_47169900___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5817_47169820___45557300______58_840_47331200;

SignalI make_5817_47169820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_47169820___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5818_47169740___45557300______58_840_47331200;

SignalI make_5818_47169740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_47169740___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5845_47169720___45557300______58_840_47331200;

SignalI make_5845_47169720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_47169720___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5846_47169640___45557300______58_840_47331200;

SignalI make_5846_47169640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5846_47169640___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5847_47194060___45557300______58_840_47331200;

SignalI make_5847_47194060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5847_47194060___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5874_47194040___45557300______58_840_47331200;

SignalI make_5874_47194040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5874_47194040___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5875_47193960___45557300______58_840_47331200;

SignalI make_5875_47193960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5875_47193960___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _5876_47193880___45557300______58_840_47331200;

SignalI make_5876_47193880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5876_47193880___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _58135_47193800___45557300______58_840_47331200;

SignalI make_58135_47193800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58135_47193800___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _58136_47193720___45557300______58_840_47331200;

SignalI make_58136_47193720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58136_47193720___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI _58137_47193640___45557300______58_840_47331200;

SignalI make_58137_47193640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58137_47193640___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

SignalI val_47193560___45557300______58_840_47331200;

SignalI makeval_47193560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   val_47193560___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45557300;
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

Scope __45556360;

SignalI trig__r_45623900___45556360___45557300______58_840_47331200;

SignalI maketrig__r_45623900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_45623900___45556360___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45556360;
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

SignalI trig__w_45623880___45556360___45557300______58_840_47331200;

SignalI maketrig__w_45623880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_45623880___45556360___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45556360;
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

SignalI dbus__r_45623700___45556360___45557300______58_840_47331200;

SignalI makedbus__r_45623700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_45623700___45556360___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45556360;
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

SignalI dbus__w_45623540___45556360___45557300______58_840_47331200;

SignalI makedbus__w_45623540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_45623540___45556360___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45556360;
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

SignalI abus__r_45623400___45556360___45557300______58_840_47331200;

SignalI makeabus__r_45623400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45623400___45556360___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45556360;
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

SignalI abus__w_45623200___45556360___45557300______58_840_47331200;

SignalI makeabus__w_45623200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45623200___45556360___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45556360;
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

SignalI mem_45622740___45556360___45557300______58_840_47331200;

SignalI makemem_45622740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_45622740___45556360___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45556360;
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

Scope __45579860;

Scope make__45579860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45579860 = scope;
   scope->owner = (Object)__45556360;
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

Scope __45576740;

Scope make__45576740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45576740 = scope;
   scope->owner = (Object)__45556360;
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

Scope __45575720;

Scope make__45575720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45575720 = scope;
   scope->owner = (Object)__45556360;
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

Scope __45574420;

Scope make__45574420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45574420 = scope;
   scope->owner = (Object)__45556360;
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

Scope __45629100;

Scope make__45629100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45629100 = scope;
   scope->owner = (Object)__45556360;
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

Scope __45626040;

Scope make__45626040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45626040 = scope;
   scope->owner = (Object)__45556360;
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

Behavior __45638920;

Behavior make__45638920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45638920 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47171080___45557300______58_840_47331200);
   clk_47171080___45557300______58_840_47331200->num_neg += 1;
   clk_47171080___45557300______58_840_47331200->neg = realloc(clk_47171080___45557300______58_840_47331200->neg,clk_47171080___45557300______58_840_47331200->num_neg*sizeof(Object));
clk_47171080___45557300______58_840_47331200->neg[clk_47171080___45557300______58_840_47331200->num_neg-1] = (Object)behavior;
   behavior->block = make__45641740();

   return behavior;
}

Behavior __47348880;

Behavior make__47348880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47348880 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_45623700___45556360___45557300______58_840_47331200);
   dbus__r_45623700___45556360___45557300______58_840_47331200->num_any += 1;
   dbus__r_45623700___45556360___45557300______58_840_47331200->any = realloc(dbus__r_45623700___45556360___45557300______58_840_47331200->any,dbus__r_45623700___45556360___45557300______58_840_47331200->num_any*sizeof(Object));
dbus__r_45623700___45556360___45557300______58_840_47331200->any[dbus__r_45623700___45556360___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47349040();

   return behavior;
}

Behavior __47348680;

Behavior make__47348680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47348680 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_47170900___45557300______58_840_47331200);
   _5814_47170900___45557300______58_840_47331200->num_any += 1;
   _5814_47170900___45557300______58_840_47331200->any = realloc(_5814_47170900___45557300______58_840_47331200->any,_5814_47170900___45557300______58_840_47331200->num_any*sizeof(Object));
_5814_47170900___45557300______58_840_47331200->any[_5814_47170900___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47348840();

   return behavior;
}

Behavior __47348180;

Behavior make__47348180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47348180 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_45623900___45556360___45557300______58_840_47331200);
   trig__r_45623900___45556360___45557300______58_840_47331200->num_any += 1;
   trig__r_45623900___45556360___45557300______58_840_47331200->any = realloc(trig__r_45623900___45556360___45557300______58_840_47331200->any,trig__r_45623900___45556360___45557300______58_840_47331200->num_any*sizeof(Object));
trig__r_45623900___45556360___45557300______58_840_47331200->any[trig__r_45623900___45556360___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47348340();

   return behavior;
}

Behavior __47347980;

Behavior make__47347980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47347980 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5812_47170880___45557300______58_840_47331200);
   _5812_47170880___45557300______58_840_47331200->num_any += 1;
   _5812_47170880___45557300______58_840_47331200->any = realloc(_5812_47170880___45557300______58_840_47331200->any,_5812_47170880___45557300______58_840_47331200->num_any*sizeof(Object));
_5812_47170880___45557300______58_840_47331200->any[_5812_47170880___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47348140();

   return behavior;
}

Behavior __47347520;

Behavior make__47347520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47347520 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_45623400___45556360___45557300______58_840_47331200);
   abus__r_45623400___45556360___45557300______58_840_47331200->num_any += 1;
   abus__r_45623400___45556360___45557300______58_840_47331200->any = realloc(abus__r_45623400___45556360___45557300______58_840_47331200->any,abus__r_45623400___45556360___45557300______58_840_47331200->num_any*sizeof(Object));
abus__r_45623400___45556360___45557300______58_840_47331200->any[abus__r_45623400___45556360___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47347680();

   return behavior;
}

Behavior __47347320;

Behavior make__47347320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47347320 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_47170800___45557300______58_840_47331200);
   _5813_47170800___45557300______58_840_47331200->num_any += 1;
   _5813_47170800___45557300______58_840_47331200->any = realloc(_5813_47170800___45557300______58_840_47331200->any,_5813_47170800___45557300______58_840_47331200->num_any*sizeof(Object));
_5813_47170800___45557300______58_840_47331200->any[_5813_47170800___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47347480();

   return behavior;
}

Behavior __47346860;

Behavior make__47346860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47346860 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_45623880___45556360___45557300______58_840_47331200);
   trig__w_45623880___45556360___45557300______58_840_47331200->num_any += 1;
   trig__w_45623880___45556360___45557300______58_840_47331200->any = realloc(trig__w_45623880___45556360___45557300______58_840_47331200->any,trig__w_45623880___45556360___45557300______58_840_47331200->num_any*sizeof(Object));
trig__w_45623880___45556360___45557300______58_840_47331200->any[trig__w_45623880___45556360___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47347020();

   return behavior;
}

Behavior __47346660;

Behavior make__47346660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47346660 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5816_47169900___45557300______58_840_47331200);
   _5816_47169900___45557300______58_840_47331200->num_any += 1;
   _5816_47169900___45557300______58_840_47331200->any = realloc(_5816_47169900___45557300______58_840_47331200->any,_5816_47169900___45557300______58_840_47331200->num_any*sizeof(Object));
_5816_47169900___45557300______58_840_47331200->any[_5816_47169900___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47346820();

   return behavior;
}

Behavior __47346200;

Behavior make__47346200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47346200 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_45623200___45556360___45557300______58_840_47331200);
   abus__w_45623200___45556360___45557300______58_840_47331200->num_any += 1;
   abus__w_45623200___45556360___45557300______58_840_47331200->any = realloc(abus__w_45623200___45556360___45557300______58_840_47331200->any,abus__w_45623200___45556360___45557300______58_840_47331200->num_any*sizeof(Object));
abus__w_45623200___45556360___45557300______58_840_47331200->any[abus__w_45623200___45556360___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47346360();

   return behavior;
}

Behavior __47346000;

Behavior make__47346000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47346000 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_47169820___45557300______58_840_47331200);
   _5817_47169820___45557300______58_840_47331200->num_any += 1;
   _5817_47169820___45557300______58_840_47331200->any = realloc(_5817_47169820___45557300______58_840_47331200->any,_5817_47169820___45557300______58_840_47331200->num_any*sizeof(Object));
_5817_47169820___45557300______58_840_47331200->any[_5817_47169820___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47346160();

   return behavior;
}

Behavior __47345540;

Behavior make__47345540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47345540 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_45623540___45556360___45557300______58_840_47331200);
   dbus__w_45623540___45556360___45557300______58_840_47331200->num_any += 1;
   dbus__w_45623540___45556360___45557300______58_840_47331200->any = realloc(dbus__w_45623540___45556360___45557300______58_840_47331200->any,dbus__w_45623540___45556360___45557300______58_840_47331200->num_any*sizeof(Object));
dbus__w_45623540___45556360___45557300______58_840_47331200->any[dbus__w_45623540___45556360___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47345700();

   return behavior;
}

Behavior __47345340;

Behavior make__47345340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47345340 = behavior;
   behavior->owner = (Object)__45556360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_47169740___45557300______58_840_47331200);
   _5818_47169740___45557300______58_840_47331200->num_any += 1;
   _5818_47169740___45557300______58_840_47331200->any = realloc(_5818_47169740___45557300______58_840_47331200->any,_5818_47169740___45557300______58_840_47331200->num_any*sizeof(Object));
_5818_47169740___45557300______58_840_47331200->any[_5818_47169740___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47345500();

   return behavior;
}

Scope make__45556360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45556360 = scope;
   scope->owner = (Object)__45557300;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_45623900();
   scope->inners[1] = maketrig__w_45623880();
   scope->inners[2] = makedbus__r_45623700();
   scope->inners[3] = makedbus__w_45623540();
   scope->inners[4] = makeabus__r_45623400();
   scope->inners[5] = makeabus__w_45623200();
   scope->inners[6] = makemem_45622740();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__45579860();
   scope->scopes[1] = make__45576740();
   scope->scopes[2] = make__45575720();
   scope->scopes[3] = make__45574420();
   scope->scopes[4] = make__45629100();
   scope->scopes[5] = make__45626040();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45638920();
   scope->behaviors[1] = make__47348880();
   scope->behaviors[2] = make__47348680();
   scope->behaviors[3] = make__47348180();
   scope->behaviors[4] = make__47347980();
   scope->behaviors[5] = make__47347520();
   scope->behaviors[6] = make__47347320();
   scope->behaviors[7] = make__47346860();
   scope->behaviors[8] = make__47346660();
   scope->behaviors[9] = make__47346200();
   scope->behaviors[10] = make__47346000();
   scope->behaviors[11] = make__47345540();
   scope->behaviors[12] = make__47345340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45638600;

SignalI trig__r_45733120___45638600___45557300______58_840_47331200;

SignalI maketrig__r_45733120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_45733120___45638600___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45638600;
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

SignalI trig__w_45733060___45638600___45557300______58_840_47331200;

SignalI maketrig__w_45733060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_45733060___45638600___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45638600;
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

SignalI dbus__r_45732420___45638600___45557300______58_840_47331200;

SignalI makedbus__r_45732420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_45732420___45638600___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45638600;
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

SignalI dbus__w_45731620___45638600___45557300______58_840_47331200;

SignalI makedbus__w_45731620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_45731620___45638600___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45638600;
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

SignalI abus__r_45731420___45638600___45557300______58_840_47331200;

SignalI makeabus__r_45731420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45731420___45638600___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45638600;
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

SignalI abus__w_45730420___45638600___45557300______58_840_47331200;

SignalI makeabus__w_45730420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45730420___45638600___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45638600;
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

SignalI mem_45729800___45638600___45557300______58_840_47331200;

SignalI makemem_45729800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_45729800___45638600___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45638600;
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

Scope __45680940;

Scope make__45680940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45680940 = scope;
   scope->owner = (Object)__45638600;
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

Scope __45702380;

Scope make__45702380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45702380 = scope;
   scope->owner = (Object)__45638600;
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

Scope __45701660;

Scope make__45701660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45701660 = scope;
   scope->owner = (Object)__45638600;
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

Scope __45700420;

Scope make__45700420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45700420 = scope;
   scope->owner = (Object)__45638600;
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

Scope __45699300;

Scope make__45699300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45699300 = scope;
   scope->owner = (Object)__45638600;
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

Scope __45734780;

Scope make__45734780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45734780 = scope;
   scope->owner = (Object)__45638600;
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

Behavior __45763380;

Behavior make__45763380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45763380 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47171080___45557300______58_840_47331200);
   clk_47171080___45557300______58_840_47331200->num_neg += 1;
   clk_47171080___45557300______58_840_47331200->neg = realloc(clk_47171080___45557300______58_840_47331200->neg,clk_47171080___45557300______58_840_47331200->num_neg*sizeof(Object));
clk_47171080___45557300______58_840_47331200->neg[clk_47171080___45557300______58_840_47331200->num_neg-1] = (Object)behavior;
   behavior->block = make__45745820();

   return behavior;
}

Behavior __47343820;

Behavior make__47343820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47343820 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_45732420___45638600___45557300______58_840_47331200);
   dbus__r_45732420___45638600___45557300______58_840_47331200->num_any += 1;
   dbus__r_45732420___45638600___45557300______58_840_47331200->any = realloc(dbus__r_45732420___45638600___45557300______58_840_47331200->any,dbus__r_45732420___45638600___45557300______58_840_47331200->num_any*sizeof(Object));
dbus__r_45732420___45638600___45557300______58_840_47331200->any[dbus__r_45732420___45638600___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47343980();

   return behavior;
}

Behavior __47343620;

Behavior make__47343620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47343620 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_47170720___45557300______58_840_47331200);
   _5843_47170720___45557300______58_840_47331200->num_any += 1;
   _5843_47170720___45557300______58_840_47331200->any = realloc(_5843_47170720___45557300______58_840_47331200->any,_5843_47170720___45557300______58_840_47331200->num_any*sizeof(Object));
_5843_47170720___45557300______58_840_47331200->any[_5843_47170720___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47343780();

   return behavior;
}

Behavior __47343160;

Behavior make__47343160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47343160 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_45733120___45638600___45557300______58_840_47331200);
   trig__r_45733120___45638600___45557300______58_840_47331200->num_any += 1;
   trig__r_45733120___45638600___45557300______58_840_47331200->any = realloc(trig__r_45733120___45638600___45557300______58_840_47331200->any,trig__r_45733120___45638600___45557300______58_840_47331200->num_any*sizeof(Object));
trig__r_45733120___45638600___45557300______58_840_47331200->any[trig__r_45733120___45638600___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47343320();

   return behavior;
}

Behavior __47342960;

Behavior make__47342960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47342960 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5841_47170700___45557300______58_840_47331200);
   _5841_47170700___45557300______58_840_47331200->num_any += 1;
   _5841_47170700___45557300______58_840_47331200->any = realloc(_5841_47170700___45557300______58_840_47331200->any,_5841_47170700___45557300______58_840_47331200->num_any*sizeof(Object));
_5841_47170700___45557300______58_840_47331200->any[_5841_47170700___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47343120();

   return behavior;
}

Behavior __47342500;

Behavior make__47342500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47342500 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_45731420___45638600___45557300______58_840_47331200);
   abus__r_45731420___45638600___45557300______58_840_47331200->num_any += 1;
   abus__r_45731420___45638600___45557300______58_840_47331200->any = realloc(abus__r_45731420___45638600___45557300______58_840_47331200->any,abus__r_45731420___45638600___45557300______58_840_47331200->num_any*sizeof(Object));
abus__r_45731420___45638600___45557300______58_840_47331200->any[abus__r_45731420___45638600___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47342660();

   return behavior;
}

Behavior __47342300;

Behavior make__47342300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47342300 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5842_47170620___45557300______58_840_47331200);
   _5842_47170620___45557300______58_840_47331200->num_any += 1;
   _5842_47170620___45557300______58_840_47331200->any = realloc(_5842_47170620___45557300______58_840_47331200->any,_5842_47170620___45557300______58_840_47331200->num_any*sizeof(Object));
_5842_47170620___45557300______58_840_47331200->any[_5842_47170620___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47342460();

   return behavior;
}

Behavior __47341840;

Behavior make__47341840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47341840 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_45733060___45638600___45557300______58_840_47331200);
   trig__w_45733060___45638600___45557300______58_840_47331200->num_any += 1;
   trig__w_45733060___45638600___45557300______58_840_47331200->any = realloc(trig__w_45733060___45638600___45557300______58_840_47331200->any,trig__w_45733060___45638600___45557300______58_840_47331200->num_any*sizeof(Object));
trig__w_45733060___45638600___45557300______58_840_47331200->any[trig__w_45733060___45638600___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47342000();

   return behavior;
}

Behavior __47341640;

Behavior make__47341640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47341640 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_47169720___45557300______58_840_47331200);
   _5845_47169720___45557300______58_840_47331200->num_any += 1;
   _5845_47169720___45557300______58_840_47331200->any = realloc(_5845_47169720___45557300______58_840_47331200->any,_5845_47169720___45557300______58_840_47331200->num_any*sizeof(Object));
_5845_47169720___45557300______58_840_47331200->any[_5845_47169720___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47341800();

   return behavior;
}

Behavior __47365720;

Behavior make__47365720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47365720 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_45730420___45638600___45557300______58_840_47331200);
   abus__w_45730420___45638600___45557300______58_840_47331200->num_any += 1;
   abus__w_45730420___45638600___45557300______58_840_47331200->any = realloc(abus__w_45730420___45638600___45557300______58_840_47331200->any,abus__w_45730420___45638600___45557300______58_840_47331200->num_any*sizeof(Object));
abus__w_45730420___45638600___45557300______58_840_47331200->any[abus__w_45730420___45638600___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47365880();

   return behavior;
}

Behavior __47365520;

Behavior make__47365520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47365520 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5846_47169640___45557300______58_840_47331200);
   _5846_47169640___45557300______58_840_47331200->num_any += 1;
   _5846_47169640___45557300______58_840_47331200->any = realloc(_5846_47169640___45557300______58_840_47331200->any,_5846_47169640___45557300______58_840_47331200->num_any*sizeof(Object));
_5846_47169640___45557300______58_840_47331200->any[_5846_47169640___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47365680();

   return behavior;
}

Behavior __47365060;

Behavior make__47365060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47365060 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_45731620___45638600___45557300______58_840_47331200);
   dbus__w_45731620___45638600___45557300______58_840_47331200->num_any += 1;
   dbus__w_45731620___45638600___45557300______58_840_47331200->any = realloc(dbus__w_45731620___45638600___45557300______58_840_47331200->any,dbus__w_45731620___45638600___45557300______58_840_47331200->num_any*sizeof(Object));
dbus__w_45731620___45638600___45557300______58_840_47331200->any[dbus__w_45731620___45638600___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47365220();

   return behavior;
}

Behavior __47364820;

Behavior make__47364820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47364820 = behavior;
   behavior->owner = (Object)__45638600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5847_47194060___45557300______58_840_47331200);
   _5847_47194060___45557300______58_840_47331200->num_any += 1;
   _5847_47194060___45557300______58_840_47331200->any = realloc(_5847_47194060___45557300______58_840_47331200->any,_5847_47194060___45557300______58_840_47331200->num_any*sizeof(Object));
_5847_47194060___45557300______58_840_47331200->any[_5847_47194060___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47365020();

   return behavior;
}

Scope make__45638600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45638600 = scope;
   scope->owner = (Object)__45557300;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_45733120();
   scope->inners[1] = maketrig__w_45733060();
   scope->inners[2] = makedbus__r_45732420();
   scope->inners[3] = makedbus__w_45731620();
   scope->inners[4] = makeabus__r_45731420();
   scope->inners[5] = makeabus__w_45730420();
   scope->inners[6] = makemem_45729800();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__45680940();
   scope->scopes[1] = make__45702380();
   scope->scopes[2] = make__45701660();
   scope->scopes[3] = make__45700420();
   scope->scopes[4] = make__45699300();
   scope->scopes[5] = make__45734780();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45763380();
   scope->behaviors[1] = make__47343820();
   scope->behaviors[2] = make__47343620();
   scope->behaviors[3] = make__47343160();
   scope->behaviors[4] = make__47342960();
   scope->behaviors[5] = make__47342500();
   scope->behaviors[6] = make__47342300();
   scope->behaviors[7] = make__47341840();
   scope->behaviors[8] = make__47341640();
   scope->behaviors[9] = make__47365720();
   scope->behaviors[10] = make__47365520();
   scope->behaviors[11] = make__47365060();
   scope->behaviors[12] = make__47364820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45762840;

SignalI trig__r_46862340___45762840___45557300______58_840_47331200;

SignalI maketrig__r_46862340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_46862340___45762840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45762840;
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

SignalI trig__w_46862320___45762840___45557300______58_840_47331200;

SignalI maketrig__w_46862320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_46862320___45762840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45762840;
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

SignalI dbus__r_46862140___45762840___45557300______58_840_47331200;

SignalI makedbus__r_46862140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_46862140___45762840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45762840;
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

SignalI dbus__w_46861840___45762840___45557300______58_840_47331200;

SignalI makedbus__w_46861840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_46861840___45762840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45762840;
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

SignalI abus__r_46861600___45762840___45557300______58_840_47331200;

SignalI makeabus__r_46861600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46861600___45762840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45762840;
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

SignalI abus__w_46861460___45762840___45557300______58_840_47331200;

SignalI makeabus__w_46861460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46861460___45762840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45762840;
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

SignalI mem_46861020___45762840___45557300______58_840_47331200;

SignalI makemem_46861020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_46861020___45762840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__45762840;
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

Scope __45761720;

Scope make__45761720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45761720 = scope;
   scope->owner = (Object)__45762840;
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

Scope __45760540;

Scope make__45760540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45760540 = scope;
   scope->owner = (Object)__45762840;
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

Scope __46865640;

Scope make__46865640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46865640 = scope;
   scope->owner = (Object)__45762840;
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

Scope __46865220;

Scope make__46865220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46865220 = scope;
   scope->owner = (Object)__45762840;
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

Scope __46864500;

Scope make__46864500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46864500 = scope;
   scope->owner = (Object)__45762840;
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

Scope __46863480;

Scope make__46863480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46863480 = scope;
   scope->owner = (Object)__45762840;
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

Behavior __46928820;

Behavior make__46928820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46928820 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47171080___45557300______58_840_47331200);
   clk_47171080___45557300______58_840_47331200->num_neg += 1;
   clk_47171080___45557300______58_840_47331200->neg = realloc(clk_47171080___45557300______58_840_47331200->neg,clk_47171080___45557300______58_840_47331200->num_neg*sizeof(Object));
clk_47171080___45557300______58_840_47331200->neg[clk_47171080___45557300______58_840_47331200->num_neg-1] = (Object)behavior;
   behavior->block = make__46930580();

   return behavior;
}

Behavior __47363300;

Behavior make__47363300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47363300 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_46862140___45762840___45557300______58_840_47331200);
   dbus__r_46862140___45762840___45557300______58_840_47331200->num_any += 1;
   dbus__r_46862140___45762840___45557300______58_840_47331200->any = realloc(dbus__r_46862140___45762840___45557300______58_840_47331200->any,dbus__r_46862140___45762840___45557300______58_840_47331200->num_any*sizeof(Object));
dbus__r_46862140___45762840___45557300______58_840_47331200->any[dbus__r_46862140___45762840___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47363460();

   return behavior;
}

Behavior __47363100;

Behavior make__47363100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47363100 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5872_47170540___45557300______58_840_47331200);
   _5872_47170540___45557300______58_840_47331200->num_any += 1;
   _5872_47170540___45557300______58_840_47331200->any = realloc(_5872_47170540___45557300______58_840_47331200->any,_5872_47170540___45557300______58_840_47331200->num_any*sizeof(Object));
_5872_47170540___45557300______58_840_47331200->any[_5872_47170540___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47363260();

   return behavior;
}

Behavior __47362640;

Behavior make__47362640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47362640 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_46862340___45762840___45557300______58_840_47331200);
   trig__r_46862340___45762840___45557300______58_840_47331200->num_any += 1;
   trig__r_46862340___45762840___45557300______58_840_47331200->any = realloc(trig__r_46862340___45762840___45557300______58_840_47331200->any,trig__r_46862340___45762840___45557300______58_840_47331200->num_any*sizeof(Object));
trig__r_46862340___45762840___45557300______58_840_47331200->any[trig__r_46862340___45762840___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47362800();

   return behavior;
}

Behavior __47362440;

Behavior make__47362440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47362440 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5870_47170520___45557300______58_840_47331200);
   _5870_47170520___45557300______58_840_47331200->num_any += 1;
   _5870_47170520___45557300______58_840_47331200->any = realloc(_5870_47170520___45557300______58_840_47331200->any,_5870_47170520___45557300______58_840_47331200->num_any*sizeof(Object));
_5870_47170520___45557300______58_840_47331200->any[_5870_47170520___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47362600();

   return behavior;
}

Behavior __47361980;

Behavior make__47361980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47361980 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_46861600___45762840___45557300______58_840_47331200);
   abus__r_46861600___45762840___45557300______58_840_47331200->num_any += 1;
   abus__r_46861600___45762840___45557300______58_840_47331200->any = realloc(abus__r_46861600___45762840___45557300______58_840_47331200->any,abus__r_46861600___45762840___45557300______58_840_47331200->num_any*sizeof(Object));
abus__r_46861600___45762840___45557300______58_840_47331200->any[abus__r_46861600___45762840___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47362140();

   return behavior;
}

Behavior __47361780;

Behavior make__47361780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47361780 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5871_47170440___45557300______58_840_47331200);
   _5871_47170440___45557300______58_840_47331200->num_any += 1;
   _5871_47170440___45557300______58_840_47331200->any = realloc(_5871_47170440___45557300______58_840_47331200->any,_5871_47170440___45557300______58_840_47331200->num_any*sizeof(Object));
_5871_47170440___45557300______58_840_47331200->any[_5871_47170440___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47361940();

   return behavior;
}

Behavior __47361320;

Behavior make__47361320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47361320 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_46862320___45762840___45557300______58_840_47331200);
   trig__w_46862320___45762840___45557300______58_840_47331200->num_any += 1;
   trig__w_46862320___45762840___45557300______58_840_47331200->any = realloc(trig__w_46862320___45762840___45557300______58_840_47331200->any,trig__w_46862320___45762840___45557300______58_840_47331200->num_any*sizeof(Object));
trig__w_46862320___45762840___45557300______58_840_47331200->any[trig__w_46862320___45762840___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47361480();

   return behavior;
}

Behavior __47361120;

Behavior make__47361120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47361120 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5874_47194040___45557300______58_840_47331200);
   _5874_47194040___45557300______58_840_47331200->num_any += 1;
   _5874_47194040___45557300______58_840_47331200->any = realloc(_5874_47194040___45557300______58_840_47331200->any,_5874_47194040___45557300______58_840_47331200->num_any*sizeof(Object));
_5874_47194040___45557300______58_840_47331200->any[_5874_47194040___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47361280();

   return behavior;
}

Behavior __47359800;

Behavior make__47359800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47359800 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_46861460___45762840___45557300______58_840_47331200);
   abus__w_46861460___45762840___45557300______58_840_47331200->num_any += 1;
   abus__w_46861460___45762840___45557300______58_840_47331200->any = realloc(abus__w_46861460___45762840___45557300______58_840_47331200->any,abus__w_46861460___45762840___45557300______58_840_47331200->num_any*sizeof(Object));
abus__w_46861460___45762840___45557300______58_840_47331200->any[abus__w_46861460___45762840___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47360820();

   return behavior;
}

Behavior __47358800;

Behavior make__47358800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47358800 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5875_47193960___45557300______58_840_47331200);
   _5875_47193960___45557300______58_840_47331200->num_any += 1;
   _5875_47193960___45557300______58_840_47331200->any = realloc(_5875_47193960___45557300______58_840_47331200->any,_5875_47193960___45557300______58_840_47331200->num_any*sizeof(Object));
_5875_47193960___45557300______58_840_47331200->any[_5875_47193960___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47359560();

   return behavior;
}

Behavior __47382460;

Behavior make__47382460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47382460 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_46861840___45762840___45557300______58_840_47331200);
   dbus__w_46861840___45762840___45557300______58_840_47331200->num_any += 1;
   dbus__w_46861840___45762840___45557300______58_840_47331200->any = realloc(dbus__w_46861840___45762840___45557300______58_840_47331200->any,dbus__w_46861840___45762840___45557300______58_840_47331200->num_any*sizeof(Object));
dbus__w_46861840___45762840___45557300______58_840_47331200->any[dbus__w_46861840___45762840___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47358080();

   return behavior;
}

Behavior __47382260;

Behavior make__47382260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47382260 = behavior;
   behavior->owner = (Object)__45762840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5876_47193880___45557300______58_840_47331200);
   _5876_47193880___45557300______58_840_47331200->num_any += 1;
   _5876_47193880___45557300______58_840_47331200->any = realloc(_5876_47193880___45557300______58_840_47331200->any,_5876_47193880___45557300______58_840_47331200->num_any*sizeof(Object));
_5876_47193880___45557300______58_840_47331200->any[_5876_47193880___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47382420();

   return behavior;
}

Scope make__45762840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45762840 = scope;
   scope->owner = (Object)__45557300;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_46862340();
   scope->inners[1] = maketrig__w_46862320();
   scope->inners[2] = makedbus__r_46862140();
   scope->inners[3] = makedbus__w_46861840();
   scope->inners[4] = makeabus__r_46861600();
   scope->inners[5] = makeabus__w_46861460();
   scope->inners[6] = makemem_46861020();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__45761720();
   scope->scopes[1] = make__45760540();
   scope->scopes[2] = make__46865640();
   scope->scopes[3] = make__46865220();
   scope->scopes[4] = make__46864500();
   scope->scopes[5] = make__46863480();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46928820();
   scope->behaviors[1] = make__47363300();
   scope->behaviors[2] = make__47363100();
   scope->behaviors[3] = make__47362640();
   scope->behaviors[4] = make__47362440();
   scope->behaviors[5] = make__47361980();
   scope->behaviors[6] = make__47361780();
   scope->behaviors[7] = make__47361320();
   scope->behaviors[8] = make__47361120();
   scope->behaviors[9] = make__47359800();
   scope->behaviors[10] = make__47358800();
   scope->behaviors[11] = make__47382460();
   scope->behaviors[12] = make__47382260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __46928700;

SignalI reg__0_46924800___46928700___45557300______58_840_47331200;

SignalI makereg__0_46924800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_46924800___46928700___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46928700;
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

SignalI reg__1_46924720___46928700___45557300______58_840_47331200;

SignalI makereg__1_46924720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_46924720___46928700___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46928700;
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

Scope __46928400;

Scope make__46928400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46928400 = scope;
   scope->owner = (Object)__46928700;
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

Scope __46927980;

Scope make__46927980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46927980 = scope;
   scope->owner = (Object)__46928700;
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

Scope __46927560;

Scope make__46927560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46927560 = scope;
   scope->owner = (Object)__46928700;
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

Scope __46927140;

SignalI abus__r_46926760___46927140___46928700___45557300______58_840_47331200;

SignalI makeabus__r_46926760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46926760___46927140___46928700___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46927140;
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

Scope make__46927140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46927140 = scope;
   scope->owner = (Object)__46928700;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_46926760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __46926600;

SignalI abus__w_46926040___46926600___46928700___45557300______58_840_47331200;

SignalI makeabus__w_46926040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46926040___46926600___46928700___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46926600;
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

Scope make__46926600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46926600 = scope;
   scope->owner = (Object)__46928700;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_46926040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __46925920;

SignalI abus__r_46925540___46925920___46928700___45557300______58_840_47331200;

SignalI makeabus__r_46925540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46925540___46925920___46928700___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46925920;
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

Scope make__46925920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46925920 = scope;
   scope->owner = (Object)__46928700;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_46925540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __46925420;

SignalI abus__w_46925040___46925420___46928700___45557300______58_840_47331200;

SignalI makeabus__w_46925040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46925040___46925420___46928700___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46925420;
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

Scope make__46925420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46925420 = scope;
   scope->owner = (Object)__46928700;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_46925040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47380700;

Behavior make__47380700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47380700 = behavior;
   behavior->owner = (Object)__46928700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_46924800___46928700___45557300______58_840_47331200);
   reg__0_46924800___46928700___45557300______58_840_47331200->num_any += 1;
   reg__0_46924800___46928700___45557300______58_840_47331200->any = realloc(reg__0_46924800___46928700___45557300______58_840_47331200->any,reg__0_46924800___46928700___45557300______58_840_47331200->num_any*sizeof(Object));
reg__0_46924800___46928700___45557300______58_840_47331200->any[reg__0_46924800___46928700___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47380900();

   return behavior;
}

Behavior __47380500;

Behavior make__47380500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47380500 = behavior;
   behavior->owner = (Object)__46928700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5889_47170360___45557300______58_840_47331200);
   _5889_47170360___45557300______58_840_47331200->num_any += 1;
   _5889_47170360___45557300______58_840_47331200->any = realloc(_5889_47170360___45557300______58_840_47331200->any,_5889_47170360___45557300______58_840_47331200->num_any*sizeof(Object));
_5889_47170360___45557300______58_840_47331200->any[_5889_47170360___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47380660();

   return behavior;
}

Behavior __47380040;

Behavior make__47380040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47380040 = behavior;
   behavior->owner = (Object)__46928700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_46924720___46928700___45557300______58_840_47331200);
   reg__1_46924720___46928700___45557300______58_840_47331200->num_any += 1;
   reg__1_46924720___46928700___45557300______58_840_47331200->any = realloc(reg__1_46924720___46928700___45557300______58_840_47331200->any,reg__1_46924720___46928700___45557300______58_840_47331200->num_any*sizeof(Object));
reg__1_46924720___46928700___45557300______58_840_47331200->any[reg__1_46924720___46928700___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47380200();

   return behavior;
}

Behavior __47379840;

Behavior make__47379840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47379840 = behavior;
   behavior->owner = (Object)__46928700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5890_47170280___45557300______58_840_47331200);
   _5890_47170280___45557300______58_840_47331200->num_any += 1;
   _5890_47170280___45557300______58_840_47331200->any = realloc(_5890_47170280___45557300______58_840_47331200->any,_5890_47170280___45557300______58_840_47331200->num_any*sizeof(Object));
_5890_47170280___45557300______58_840_47331200->any[_5890_47170280___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47380000();

   return behavior;
}

Scope make__46928700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46928700 = scope;
   scope->owner = (Object)__45557300;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_46924800();
   scope->inners[1] = makereg__1_46924720();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__46928400();
   scope->scopes[1] = make__46927980();
   scope->scopes[2] = make__46927560();
   scope->scopes[3] = make__46927140();
   scope->scopes[4] = make__46926600();
   scope->scopes[5] = make__46925920();
   scope->scopes[6] = make__46925420();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47380700();
   scope->behaviors[1] = make__47380500();
   scope->behaviors[2] = make__47380040();
   scope->behaviors[3] = make__47379840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __46923840;

SignalI lv0_47095460___46923840___45557300______58_840_47331200;

SignalI makelv0_47095460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47095460___46923840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46923840;
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

SignalI lv1_47095380___46923840___45557300______58_840_47331200;

SignalI makelv1_47095380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47095380___46923840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46923840;
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

SignalI av0_47095300___46923840___45557300______58_840_47331200;

SignalI makeav0_47095300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_47095300___46923840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46923840;
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

SignalI av1_47095220___46923840___45557300______58_840_47331200;

SignalI makeav1_47095220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_47095220___46923840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46923840;
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

SignalI rv_47094680___46923840___45557300______58_840_47331200;

SignalI makerv_47094680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_47094680___46923840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46923840;
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

SignalI lvok0_47094520___46923840___45557300______58_840_47331200;

SignalI makelvok0_47094520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47094520___46923840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46923840;
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

SignalI lvok1_47094400___46923840___45557300______58_840_47331200;

SignalI makelvok1_47094400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_47094400___46923840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46923840;
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

SignalI rvok_47094280___46923840___45557300______58_840_47331200;

SignalI makervok_47094280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_47094280___46923840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46923840;
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

SignalI run_47094160___46923840___45557300______58_840_47331200;

SignalI makerun_47094160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47094160___46923840___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__46923840;
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

Behavior __47122900;

Behavior make__47122900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47122900 = behavior;
   behavior->owner = (Object)__46923840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_47171080___45557300______58_840_47331200);
   clk_47171080___45557300______58_840_47331200->num_pos += 1;
   clk_47171080___45557300______58_840_47331200->pos = realloc(clk_47171080___45557300______58_840_47331200->pos,clk_47171080___45557300______58_840_47331200->num_pos*sizeof(Object));
clk_47171080___45557300______58_840_47331200->pos[clk_47171080___45557300______58_840_47331200->num_pos-1] = (Object)behavior;
   behavior->block = make__47093440();

   return behavior;
}

Scope make__46923840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46923840 = scope;
   scope->owner = (Object)__45557300;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47095460();
   scope->inners[1] = makelv1_47095380();
   scope->inners[2] = makeav0_47095300();
   scope->inners[3] = makeav1_47095220();
   scope->inners[4] = makerv_47094680();
   scope->inners[5] = makelvok0_47094520();
   scope->inners[6] = makelvok1_47094400();
   scope->inners[7] = makervok_47094280();
   scope->inners[8] = makerun_47094160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47122900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47122780;

SignalI reg__0_47141120___47122780___45557300______58_840_47331200;

SignalI makereg__0_47141120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47141120___47122780___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47122780;
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

SignalI reg__1_47141040___47122780___45557300______58_840_47331200;

SignalI makereg__1_47141040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47141040___47122780___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47122780;
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

Scope __47122480;

Scope make__47122480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47122480 = scope;
   scope->owner = (Object)__47122780;
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

Scope __47122060;

Scope make__47122060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47122060 = scope;
   scope->owner = (Object)__47122780;
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

Scope __47121640;

Scope make__47121640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47121640 = scope;
   scope->owner = (Object)__47122780;
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

Scope __47121220;

SignalI abus__r_47120840___47121220___47122780___45557300______58_840_47331200;

SignalI makeabus__r_47120840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47120840___47121220___47122780___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47121220;
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

Scope make__47121220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47121220 = scope;
   scope->owner = (Object)__47122780;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47120840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47120720;

SignalI abus__w_47143500___47120720___47122780___45557300______58_840_47331200;

SignalI makeabus__w_47143500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47143500___47120720___47122780___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47120720;
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

Behavior __47394400;

Behavior make__47394400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47394400 = behavior;
   behavior->owner = (Object)__47120720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47143500___47120720___47122780___45557300______58_840_47331200);
   abus__w_47143500___47120720___47122780___45557300______58_840_47331200->num_any += 1;
   abus__w_47143500___47120720___47122780___45557300______58_840_47331200->any = realloc(abus__w_47143500___47120720___47122780___45557300______58_840_47331200->any,abus__w_47143500___47120720___47122780___45557300______58_840_47331200->num_any*sizeof(Object));
abus__w_47143500___47120720___47122780___45557300______58_840_47331200->any[abus__w_47143500___47120720___47122780___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47394560();

   return behavior;
}

Behavior __47394200;

Behavior make__47394200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47394200 = behavior;
   behavior->owner = (Object)__47120720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58137_47193640___45557300______58_840_47331200);
   _58137_47193640___45557300______58_840_47331200->num_any += 1;
   _58137_47193640___45557300______58_840_47331200->any = realloc(_58137_47193640___45557300______58_840_47331200->any,_58137_47193640___45557300______58_840_47331200->num_any*sizeof(Object));
_58137_47193640___45557300______58_840_47331200->any[_58137_47193640___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47394360();

   return behavior;
}

Scope make__47120720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47120720 = scope;
   scope->owner = (Object)__47122780;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47143500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47394400();
   scope->behaviors[1] = make__47394200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47142200;

SignalI abus__r_47141820___47142200___47122780___45557300______58_840_47331200;

SignalI makeabus__r_47141820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47141820___47142200___47122780___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47142200;
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

Scope make__47142200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47142200 = scope;
   scope->owner = (Object)__47122780;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47141820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47141700;

SignalI abus__w_47141320___47141700___47122780___45557300______58_840_47331200;

SignalI makeabus__w_47141320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47141320___47141700___47122780___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47141700;
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

Scope make__47141700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47141700 = scope;
   scope->owner = (Object)__47122780;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47141320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47377900;

Behavior make__47377900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47377900 = behavior;
   behavior->owner = (Object)__47122780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47141120___47122780___45557300______58_840_47331200);
   reg__0_47141120___47122780___45557300______58_840_47331200->num_any += 1;
   reg__0_47141120___47122780___45557300______58_840_47331200->any = realloc(reg__0_47141120___47122780___45557300______58_840_47331200->any,reg__0_47141120___47122780___45557300______58_840_47331200->num_any*sizeof(Object));
reg__0_47141120___47122780___45557300______58_840_47331200->any[reg__0_47141120___47122780___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47378060();

   return behavior;
}

Behavior __47377140;

Behavior make__47377140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47377140 = behavior;
   behavior->owner = (Object)__47122780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58120_47170200___45557300______58_840_47331200);
   _58120_47170200___45557300______58_840_47331200->num_any += 1;
   _58120_47170200___45557300______58_840_47331200->any = realloc(_58120_47170200___45557300______58_840_47331200->any,_58120_47170200___45557300______58_840_47331200->num_any*sizeof(Object));
_58120_47170200___45557300______58_840_47331200->any[_58120_47170200___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47377860();

   return behavior;
}

Behavior __47375160;

Behavior make__47375160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47375160 = behavior;
   behavior->owner = (Object)__47122780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47141040___47122780___45557300______58_840_47331200);
   reg__1_47141040___47122780___45557300______58_840_47331200->num_any += 1;
   reg__1_47141040___47122780___45557300______58_840_47331200->any = realloc(reg__1_47141040___47122780___45557300______58_840_47331200->any,reg__1_47141040___47122780___45557300______58_840_47331200->num_any*sizeof(Object));
reg__1_47141040___47122780___45557300______58_840_47331200->any[reg__1_47141040___47122780___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47375420();

   return behavior;
}

Behavior __47374960;

Behavior make__47374960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47374960 = behavior;
   behavior->owner = (Object)__47122780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58121_47170080___45557300______58_840_47331200);
   _58121_47170080___45557300______58_840_47331200->num_any += 1;
   _58121_47170080___45557300______58_840_47331200->any = realloc(_58121_47170080___45557300______58_840_47331200->any,_58121_47170080___45557300______58_840_47331200->num_any*sizeof(Object));
_58121_47170080___45557300______58_840_47331200->any[_58121_47170080___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47375120();

   return behavior;
}

Behavior __47374500;

Behavior make__47374500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47374500 = behavior;
   behavior->owner = (Object)__47122780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47141120___47122780___45557300______58_840_47331200);
   reg__0_47141120___47122780___45557300______58_840_47331200->num_any += 1;
   reg__0_47141120___47122780___45557300______58_840_47331200->any = realloc(reg__0_47141120___47122780___45557300______58_840_47331200->any,reg__0_47141120___47122780___45557300______58_840_47331200->num_any*sizeof(Object));
reg__0_47141120___47122780___45557300______58_840_47331200->any[reg__0_47141120___47122780___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47374660();

   return behavior;
}

Behavior __47398840;

Behavior make__47398840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47398840 = behavior;
   behavior->owner = (Object)__47122780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58135_47193800___45557300______58_840_47331200);
   _58135_47193800___45557300______58_840_47331200->num_any += 1;
   _58135_47193800___45557300______58_840_47331200->any = realloc(_58135_47193800___45557300______58_840_47331200->any,_58135_47193800___45557300______58_840_47331200->num_any*sizeof(Object));
_58135_47193800___45557300______58_840_47331200->any[_58135_47193800___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47374460();

   return behavior;
}

Behavior __47397240;

Behavior make__47397240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47397240 = behavior;
   behavior->owner = (Object)__47122780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47141040___47122780___45557300______58_840_47331200);
   reg__1_47141040___47122780___45557300______58_840_47331200->num_any += 1;
   reg__1_47141040___47122780___45557300______58_840_47331200->any = realloc(reg__1_47141040___47122780___45557300______58_840_47331200->any,reg__1_47141040___47122780___45557300______58_840_47331200->num_any*sizeof(Object));
reg__1_47141040___47122780___45557300______58_840_47331200->any[reg__1_47141040___47122780___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47398540();

   return behavior;
}

Behavior __47396120;

Behavior make__47396120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47396120 = behavior;
   behavior->owner = (Object)__47122780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58136_47193720___45557300______58_840_47331200);
   _58136_47193720___45557300______58_840_47331200->num_any += 1;
   _58136_47193720___45557300______58_840_47331200->any = realloc(_58136_47193720___45557300______58_840_47331200->any,_58136_47193720___45557300______58_840_47331200->num_any*sizeof(Object));
_58136_47193720___45557300______58_840_47331200->any[_58136_47193720___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47397000();

   return behavior;
}

Scope make__47122780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47122780 = scope;
   scope->owner = (Object)__45557300;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47141120();
   scope->inners[1] = makereg__1_47141040();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47122480();
   scope->scopes[1] = make__47122060();
   scope->scopes[2] = make__47121640();
   scope->scopes[3] = make__47121220();
   scope->scopes[4] = make__47120720();
   scope->scopes[5] = make__47142200();
   scope->scopes[6] = make__47141700();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47377900();
   scope->behaviors[1] = make__47377140();
   scope->behaviors[2] = make__47375160();
   scope->behaviors[3] = make__47374960();
   scope->behaviors[4] = make__47374500();
   scope->behaviors[5] = make__47398840();
   scope->behaviors[6] = make__47397240();
   scope->behaviors[7] = make__47396120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47139880;

SignalI reg__0_47155820___47139880___45557300______58_840_47331200;

SignalI makereg__0_47155820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47155820___47139880___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47139880;
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

SignalI reg__1_47155740___47139880___45557300______58_840_47331200;

SignalI makereg__1_47155740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47155740___47139880___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47139880;
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

Scope __47139580;

Scope make__47139580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47139580 = scope;
   scope->owner = (Object)__47139880;
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

Scope __47139160;

Scope make__47139160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47139160 = scope;
   scope->owner = (Object)__47139880;
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

Scope __47138740;

Scope make__47138740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47138740 = scope;
   scope->owner = (Object)__47139880;
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

Scope __47160960;

SignalI abus__r_47159280___47160960___47139880___45557300______58_840_47331200;

SignalI makeabus__r_47159280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47159280___47160960___47139880___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47160960;
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

Scope make__47160960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47160960 = scope;
   scope->owner = (Object)__47139880;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47159280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47158900;

SignalI abus__w_47157680___47158900___47139880___45557300______58_840_47331200;

SignalI makeabus__w_47157680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47157680___47158900___47139880___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47158900;
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

Scope make__47158900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47158900 = scope;
   scope->owner = (Object)__47139880;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47157680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47157560;

SignalI abus__r_47156900___47157560___47139880___45557300______58_840_47331200;

SignalI makeabus__r_47156900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47156900___47157560___47139880___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47157560;
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

Scope make__47157560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47157560 = scope;
   scope->owner = (Object)__47139880;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47156900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47156760;

SignalI abus__w_47156180___47156760___47139880___45557300______58_840_47331200;

SignalI makeabus__w_47156180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47156180___47156760___47139880___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47156760;
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

Scope make__47156760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47156760 = scope;
   scope->owner = (Object)__47139880;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47156180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47393040;

Behavior make__47393040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47393040 = behavior;
   behavior->owner = (Object)__47139880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47155820___47139880___45557300______58_840_47331200);
   reg__0_47155820___47139880___45557300______58_840_47331200->num_any += 1;
   reg__0_47155820___47139880___45557300______58_840_47331200->any = realloc(reg__0_47155820___47139880___45557300______58_840_47331200->any,reg__0_47155820___47139880___45557300______58_840_47331200->num_any*sizeof(Object));
reg__0_47155820___47139880___45557300______58_840_47331200->any[reg__0_47155820___47139880___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47393200();

   return behavior;
}

Behavior __47392840;

Behavior make__47392840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47392840 = behavior;
   behavior->owner = (Object)__47139880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58150_47170000___45557300______58_840_47331200);
   _58150_47170000___45557300______58_840_47331200->num_any += 1;
   _58150_47170000___45557300______58_840_47331200->any = realloc(_58150_47170000___45557300______58_840_47331200->any,_58150_47170000___45557300______58_840_47331200->num_any*sizeof(Object));
_58150_47170000___45557300______58_840_47331200->any[_58150_47170000___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47393000();

   return behavior;
}

Behavior __47392380;

Behavior make__47392380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47392380 = behavior;
   behavior->owner = (Object)__47139880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47155740___47139880___45557300______58_840_47331200);
   reg__1_47155740___47139880___45557300______58_840_47331200->num_any += 1;
   reg__1_47155740___47139880___45557300______58_840_47331200->any = realloc(reg__1_47155740___47139880___45557300______58_840_47331200->any,reg__1_47155740___47139880___45557300______58_840_47331200->num_any*sizeof(Object));
reg__1_47155740___47139880___45557300______58_840_47331200->any[reg__1_47155740___47139880___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47392540();

   return behavior;
}

Behavior __47392180;

Behavior make__47392180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47392180 = behavior;
   behavior->owner = (Object)__47139880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58151_47169920___45557300______58_840_47331200);
   _58151_47169920___45557300______58_840_47331200->num_any += 1;
   _58151_47169920___45557300______58_840_47331200->any = realloc(_58151_47169920___45557300______58_840_47331200->any,_58151_47169920___45557300______58_840_47331200->num_any*sizeof(Object));
_58151_47169920___45557300______58_840_47331200->any[_58151_47169920___45557300______58_840_47331200->num_any-1] = (Object)behavior;
   behavior->block = make__47392340();

   return behavior;
}

Scope make__47139880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47139880 = scope;
   scope->owner = (Object)__45557300;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47155820();
   scope->inners[1] = makereg__1_47155740();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47139580();
   scope->scopes[1] = make__47139160();
   scope->scopes[2] = make__47138740();
   scope->scopes[3] = make__47160960();
   scope->scopes[4] = make__47158900();
   scope->scopes[5] = make__47157560();
   scope->scopes[6] = make__47156760();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47393040();
   scope->behaviors[1] = make__47392840();
   scope->behaviors[2] = make__47392380();
   scope->behaviors[3] = make__47392180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47154920;

SignalI lv0_47154500___47154920___45557300______58_840_47331200;

SignalI makelv0_47154500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47154500___47154920___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47154920;
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

SignalI lv1_47154420___47154920___45557300______58_840_47331200;

SignalI makelv1_47154420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47154420___47154920___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47154920;
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

SignalI rv0_47154340___47154920___45557300______58_840_47331200;

SignalI makerv0_47154340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_47154340___47154920___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47154920;
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

SignalI rv1_47154260___47154920___45557300______58_840_47331200;

SignalI makerv1_47154260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_47154260___47154920___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47154920;
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

SignalI lvok0_47154240___47154920___45557300______58_840_47331200;

SignalI makelvok0_47154240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47154240___47154920___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47154920;
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

SignalI lvok1_47154220___47154920___45557300______58_840_47331200;

SignalI makelvok1_47154220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_47154220___47154920___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47154920;
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

SignalI rvok0_47154200___47154920___45557300______58_840_47331200;

SignalI makervok0_47154200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_47154200___47154920___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47154920;
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

SignalI rvok1_47154180___47154920___45557300______58_840_47331200;

SignalI makervok1_47154180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_47154180___47154920___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47154920;
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

SignalI run_47154160___47154920___45557300______58_840_47331200;

SignalI makerun_47154160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47154160___47154920___45557300______58_840_47331200 = signalI;
   signalI->owner = (Object)__47154920;
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

Behavior __47171220;

Behavior make__47171220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47171220 = behavior;
   behavior->owner = (Object)__47154920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_47171080___45557300______58_840_47331200);
   clk_47171080___45557300______58_840_47331200->num_pos += 1;
   clk_47171080___45557300______58_840_47331200->pos = realloc(clk_47171080___45557300______58_840_47331200->pos,clk_47171080___45557300______58_840_47331200->num_pos*sizeof(Object));
clk_47171080___45557300______58_840_47331200->pos[clk_47171080___45557300______58_840_47331200->num_pos-1] = (Object)behavior;
   behavior->block = make__47154040();

   return behavior;
}

Scope make__47154920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47154920 = scope;
   scope->owner = (Object)__45557300;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47154500();
   scope->inners[1] = makelv1_47154420();
   scope->inners[2] = makerv0_47154340();
   scope->inners[3] = makerv1_47154260();
   scope->inners[4] = makelvok0_47154240();
   scope->inners[5] = makelvok1_47154220();
   scope->inners[6] = makervok0_47154200();
   scope->inners[7] = makervok1_47154180();
   scope->inners[8] = makerun_47154160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47171220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47289580;

Behavior make__47289580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47289580 = behavior;
   behavior->owner = (Object)__45557300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_47171080___45557300______58_840_47331200);
   clk_47171080___45557300______58_840_47331200->num_pos += 1;
   clk_47171080___45557300______58_840_47331200->pos = realloc(clk_47171080___45557300______58_840_47331200->pos,clk_47171080___45557300______58_840_47331200->num_pos*sizeof(Object));
clk_47171080___45557300______58_840_47331200->pos[clk_47171080___45557300______58_840_47331200->num_pos-1] = (Object)behavior;
   behavior->block = make__47193440();

   return behavior;
}

Behavior __47331320;

Behavior make__47331320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47331320 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__45557300;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47289440();

   return behavior;
}

Scope make__45557300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45557300 = scope;
   scope->owner = (Object)_____58_840_47331200;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 34;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_47171080();
   scope->inners[1] = makerst_47171060();
   scope->inners[2] = makereq_47171040();
   scope->inners[3] = makeack_65_47171020();
   scope->inners[4] = makeack_66_47171000();
   scope->inners[5] = makefill_47170980();
   scope->inners[6] = make_5814_47170900();
   scope->inners[7] = make_5812_47170880();
   scope->inners[8] = make_5813_47170800();
   scope->inners[9] = make_5843_47170720();
   scope->inners[10] = make_5841_47170700();
   scope->inners[11] = make_5842_47170620();
   scope->inners[12] = make_5872_47170540();
   scope->inners[13] = make_5870_47170520();
   scope->inners[14] = make_5871_47170440();
   scope->inners[15] = make_5889_47170360();
   scope->inners[16] = make_5890_47170280();
   scope->inners[17] = make_58120_47170200();
   scope->inners[18] = make_58121_47170080();
   scope->inners[19] = make_58150_47170000();
   scope->inners[20] = make_58151_47169920();
   scope->inners[21] = make_5816_47169900();
   scope->inners[22] = make_5817_47169820();
   scope->inners[23] = make_5818_47169740();
   scope->inners[24] = make_5845_47169720();
   scope->inners[25] = make_5846_47169640();
   scope->inners[26] = make_5847_47194060();
   scope->inners[27] = make_5874_47194040();
   scope->inners[28] = make_5875_47193960();
   scope->inners[29] = make_5876_47193880();
   scope->inners[30] = make_58135_47193800();
   scope->inners[31] = make_58136_47193720();
   scope->inners[32] = make_58137_47193640();
   scope->inners[33] = makeval_47193560();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__45556360();
   scope->scopes[1] = make__45638600();
   scope->scopes[2] = make__45762840();
   scope->scopes[3] = make__46928700();
   scope->scopes[4] = make__46923840();
   scope->scopes[5] = make__47122780();
   scope->scopes[6] = make__47139880();
   scope->scopes[7] = make__47154920();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47289580();
   scope->behaviors[1] = make__47331320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_47331200() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_47331200 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__45557300();

   return systemT;
}