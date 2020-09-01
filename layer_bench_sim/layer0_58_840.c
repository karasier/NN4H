#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_45714380;

SignalI clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeclk_45829420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_840_45714380;
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

SignalI rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makerst_45829380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_840_45714380;
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

SignalI fill_45829120_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makefill_45829120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_45829120_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_840_45714380;
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

SignalI req_45829060_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makereq_45829060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_45829060_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_840_45714380;
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

SignalI ack__0_45829000_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeack__0_45829000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_45829000_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_840_45714380;
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

Block __52865320;

Block __52864120;

Block __52863940;

void code__52863940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,value__z0_53963920_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62856360(),flag__z0_54409580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__52863940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52863940 = block;
   block->owner = (Object)__52864120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52863940;

   return block;
};

Block __53121140;

void code__53121140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,value__z1_54041420_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62856220(),flag__z1_54409560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__53121140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53121140 = block;
   block->owner = (Object)__52864120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53121140;

   return block;
};

void code__52864120() {
 code__52863940();
 code__53121140();
}

Block make__52864120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52864120 = block;
   block->owner = (Object)__52865320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52864120;

   return block;
};

Block __52865080;

void code__52865080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62856160(),flag__z0_54409580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62856100(),flag__z1_54409560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__52865080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52865080 = block;
   block->owner = (Object)__52865320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52865080;

   return block;
};

void code__52865320() {
   {
      Value cond = ack__add_52817300_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52864120();
   }
   else {
  code__52865080();
   }
      }
   }
}

Block make__52865320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52865320 = block;
   block->owner = (Object)__53687640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52865320;

   return block;
};

Block __53687440;

Block __53687040;

Block __53686860;

void code__53686860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_54176300_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_5832_49593920______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62855860(),ack__a00_54409540_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__53686860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53686860 = block;
   block->owner = (Object)__53687040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53686860;

   return block;
};

Block __54019180;

void code__54019180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a01_54409600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_5833_49784060______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62855720(),ack__a01_54409520_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54019180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54019180 = block;
   block->owner = (Object)__53687040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54019180;

   return block;
};

void code__53687040() {
 code__53686860();
 code__54019180();
}

Block make__53687040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53687040 = block;
   block->owner = (Object)__53687440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53687040;

   return block;
};

void code__53687440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_54409580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         src1 = flag__z1_54409560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53687040();
   }
      }
   }
}

Block make__53687440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53687440 = block;
   block->owner = (Object)__54489280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53687440;

   return block;
};

Block __54489080;

Block __54488840;

Block __54488340;

void code__54488340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62855560(),_58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54488340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54488340 = block;
   block->owner = (Object)__54488840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54488340;

   return block;
};

void code__54488840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62855640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54488340();
   }
      }
   }
}

Block make__54488840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54488840 = block;
   block->owner = (Object)__54489080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54488840;

   return block;
};

Block __54487180;

Block __54486320;

void code__54486320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62855400(),_58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54486320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54486320 = block;
   block->owner = (Object)__54487180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54486320;

   return block;
};

void code__54487180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62855480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54486320();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62855340(),_58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54487180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54487180 = block;
   block->owner = (Object)__54489080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54487180;

   return block;
};

Block __54485600;

Block __54485220;

void code__54485220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62855180(),_58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54485220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54485220 = block;
   block->owner = (Object)__54485600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54485220;

   return block;
};

void code__54485600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62855260();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54485220();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62855120(),_5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54485600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54485600 = block;
   block->owner = (Object)__54489080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54485600;

   return block;
};

Block __54516700;

Block __54516460;

Block __54515860;

void code__54515860() {
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
                  src0 = _58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62854840();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62854720(),_5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62854640(),_58101_54486720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54515860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54515860 = block;
   block->owner = (Object)__54516460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54515860;

   return block;
};

void code__54516460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62855000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54515860();
   }
      }
   }
}

Block make__54516460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54516460 = block;
   block->owner = (Object)__54516700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54516460;

   return block;
};

Block __54635420;

Block __54635060;

void code__54635060() {
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
                  src0 = _58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62854380();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62854280(),_58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62854220(),_58130_54572380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54635060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54635060 = block;
   block->owner = (Object)__54635420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54635060;

   return block;
};

void code__54635420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62854520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54635060();
   }
      }
   }
}

Block make__54635420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54635420 = block;
   block->owner = (Object)__54516700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54635420;

   return block;
};

Block __54777060;

Block __54776100;

Block __54775540;

void code__54775540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62853960(),_58191_54649960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54775540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54775540 = block;
   block->owner = (Object)__54776100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54775540;

   return block;
};

Block __54941140;

void code__54941140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62853880(),_58192_54727600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54941140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54941140 = block;
   block->owner = (Object)__54776100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54941140;

   return block;
};

void code__54776100() {
{
      Value value = _58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__62854020())) {
    code__54775540();
         }
         else if (value2integer(value) == value2integer(make__62853940())) {
    code__54941140();
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
                  src0 = _58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62853760();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54776100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54776100 = block;
   block->owner = (Object)__54777060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54776100;

   return block;
};

void code__54777060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62854140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54776100();
   }
      }
   }
}

Block make__54777060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54777060 = block;
   block->owner = (Object)__54516700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54777060;

   return block;
};

void code__54516700() {
 code__54516460();
 code__54635420();
 code__54777060();
}

Block make__54516700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54516700 = block;
   block->owner = (Object)__54489080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54516700;

   return block;
};

void code__54489080() {
 code__54488840();
 code__54487180();
 code__54485600();
   {
      Value cond = fill_45829120_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54516700();
   }
      }
   }
}

Block make__54489080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54489080 = block;
   block->owner = (Object)__45585860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54489080;

   return block;
};

Block __62365500;

void code__62365500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_53963920_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_54041420_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a00_54409540_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      src1 = ack__a01_54409520_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__0_45829000_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62365500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62365500 = block;
   block->owner = (Object)__62361880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62365500;

   return block;
};

Block __62365440;

void code__62365440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_53986360_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,value__a00_54176300_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_48018280_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,value__a01_54409600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62365440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62365440 = block;
   block->owner = (Object)__62361720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62365440;

   return block;
};

Block __48632280;

Block __49488120;

void code__49488120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_45827600_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,make_ref_rangeS(mem_48021160_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920,value2integer(abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value),value2integer(abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49488120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49488120 = block;
   block->owner = (Object)__48632280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49488120;

   return block;
};

void code__48632280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48021160_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
            idx = value2integer(abus__r_45827220_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50277440_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_50142060_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49488120();
   }
      }
   }
}

Block make__48632280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48632280 = block;
   block->owner = (Object)__49989380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48632280;

   return block;
};

Block __62361000;

void code__62361000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50277440_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_5897_52903100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62361000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62361000 = block;
   block->owner = (Object)__62360840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62361000;

   return block;
};

Block __62360800;

void code__62360800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_52903100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,dbus__r_50277440_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62360800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62360800 = block;
   block->owner = (Object)__62360640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62360800;

   return block;
};

Block __62360240;

void code__62360240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50142080_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62360240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62360240 = block;
   block->owner = (Object)__62360080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62360240;

   return block;
};

Block __62360040;

void code__62360040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,trig__r_50142080_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62360040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62360040 = block;
   block->owner = (Object)__62359880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62360040;

   return block;
};

Block __62359580;

void code__62359580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_45827220_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62359580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62359580 = block;
   block->owner = (Object)__62359420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62359580;

   return block;
};

Block __62359380;

void code__62359380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,abus__r_45827220_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62359380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62359380 = block;
   block->owner = (Object)__62359220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62359380;

   return block;
};

Block __62358920;

void code__62358920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_50142060_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62358920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62358920 = block;
   block->owner = (Object)__62358760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62358920;

   return block;
};

Block __62358720;

void code__62358720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,trig__w_50142060_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62358720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62358720 = block;
   block->owner = (Object)__62358560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62358720;

   return block;
};

Block __62358140;

void code__62358140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62358140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62358140 = block;
   block->owner = (Object)__62357900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62358140;

   return block;
};

Block __62357840;

void code__62357840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62357840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62357840 = block;
   block->owner = (Object)__62381760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62357840;

   return block;
};

Block __62381240;

void code__62381240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_45827600_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58101_54486720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62381240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62381240 = block;
   block->owner = (Object)__62381080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62381240;

   return block;
};

Block __62381040;

void code__62381040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_54486720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,dbus__w_45827600_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62381040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62381040 = block;
   block->owner = (Object)__62380880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62381040;

   return block;
};

Block __48553900;

Block __49457340;

void code__49457340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50279380_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,make_ref_rangeS(mem_45866200_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920,value2integer(abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value),value2integer(abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49457340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49457340 = block;
   block->owner = (Object)__48553900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49457340;

   return block;
};

void code__48553900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_45866200_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
            idx = value2integer(abus__r_50279260_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50122760_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_50043220_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49457340();
   }
      }
   }
}

Block make__48553900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48553900 = block;
   block->owner = (Object)__49976460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48553900;

   return block;
};

Block __62379320;

void code__62379320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50122760_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58126_53005120_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62379320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62379320 = block;
   block->owner = (Object)__62379100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62379320;

   return block;
};

Block __62379060;

void code__62379060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_53005120_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,dbus__r_50122760_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62379060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62379060 = block;
   block->owner = (Object)__62378900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62379060;

   return block;
};

Block __62378600;

void code__62378600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50043240_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62378600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62378600 = block;
   block->owner = (Object)__62378440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62378600;

   return block;
};

Block __62378400;

void code__62378400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,trig__r_50043240_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62378400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62378400 = block;
   block->owner = (Object)__62378240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62378400;

   return block;
};

Block __62377940;

void code__62377940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50279260_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62377940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62377940 = block;
   block->owner = (Object)__62377780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62377940;

   return block;
};

Block __62377740;

void code__62377740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,abus__r_50279260_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62377740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62377740 = block;
   block->owner = (Object)__62377580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62377740;

   return block;
};

Block __62377240;

void code__62377240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_50043220_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62377240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62377240 = block;
   block->owner = (Object)__62377020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62377240;

   return block;
};

Block __62376980;

void code__62376980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,trig__w_50043220_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62376980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62376980 = block;
   block->owner = (Object)__62376820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62376980;

   return block;
};

Block __62376520;

void code__62376520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62376520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62376520 = block;
   block->owner = (Object)__62376360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62376520;

   return block;
};

Block __62376320;

void code__62376320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62376320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62376320 = block;
   block->owner = (Object)__62376160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62376320;

   return block;
};

Block __62375860;

void code__62375860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50279380_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58130_54572380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62375860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62375860 = block;
   block->owner = (Object)__62375700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62375860;

   return block;
};

Block __62375660;

void code__62375660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_54572380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,dbus__w_50279380_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62375660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62375660 = block;
   block->owner = (Object)__62375500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62375660;

   return block;
};

Block __62431180;

void code__62431180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50107360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62431180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62431180 = block;
   block->owner = (Object)__62431020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62431180;

   return block;
};

Block __62430980;

void code__62430980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,reg__0_50107360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62430980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62430980 = block;
   block->owner = (Object)__62430820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62430980;

   return block;
};

Block __62430500;

void code__62430500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50245120_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62430500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62430500 = block;
   block->owner = (Object)__62430300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62430500;

   return block;
};

Block __62430220;

void code__62430220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,reg__1_50245120_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62430220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62430220 = block;
   block->owner = (Object)__62430060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62430220;

   return block;
};

Block __49672720;

Block __49672560;

Block __49670080;

void code__49670080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62840720(),_58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__49670080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49670080 = block;
   block->owner = (Object)__49672560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49670080;

   return block;
};

void code__49672560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62808100();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49670080();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62840640(),_58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__49672560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49672560 = block;
   block->owner = (Object)__49672720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49672560;

   return block;
};

Block __49669080;

Block __49668620;

void code__49668620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62840420(),_5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__49668620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49668620 = block;
   block->owner = (Object)__49669080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49668620;

   return block;
};

void code__49669080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62840560();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49668620();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62840360(),_5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__49669080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49669080 = block;
   block->owner = (Object)__49672720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49669080;

   return block;
};

Block __49692360;

Block __49691780;

void code__49691780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62840200(),_5814_49160820______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__49691780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49691780 = block;
   block->owner = (Object)__49692360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49691780;

   return block;
};

void code__49692360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62840280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49691780();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62840140(),_5813_49160900______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__49692360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49692360 = block;
   block->owner = (Object)__49672720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49692360;

   return block;
};

Block __50074340;

Block __50073100;

Block __50072640;

Block __50072320;

void code__50072320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_49160920______58_84_49959720______58_840_62073920->c_value,rv_49672920_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62839520(),rvok_49672860_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__50072320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50072320 = block;
   block->owner = (Object)__50072640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50072320;

   return block;
};

void code__50072640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_49160900______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62839680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50072320();
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
                  src0 = _5814_49160820______58_84_49959720______58_840_62073920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62839400();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_49160820______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62839300(),_5813_49160900______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__50072640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50072640 = block;
   block->owner = (Object)__50073100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50072640;

   return block;
};

void code__50073100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62839780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50072640();
   }
      }
   }
}

Block make__50073100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50073100 = block;
   block->owner = (Object)__50074340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50073100;

   return block;
};

Block __45652040;

Block __45648120;

Block __45646820;

void code__45646820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_52903100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,lv0_48568440_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62838960(),lvok0_49672900_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__45646820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45646820 = block;
   block->owner = (Object)__45648120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45646820;

   return block;
};

void code__45648120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62839120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45646820();
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
                  src0 = _5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62838840();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62838740(),_5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__45648120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45648120 = block;
   block->owner = (Object)__45652040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45648120;

   return block;
};

void code__45652040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62839220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45648120();
   }
      }
   }
}

Block make__45652040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45652040 = block;
   block->owner = (Object)__50074340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45652040;

   return block;
};

Block __48568420;

Block __48567620;

Block __48567240;

void code__48567240() {
}

Block make__48567240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48567240 = block;
   block->owner = (Object)__48567620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48567240;

   return block;
};

Block __49576980;

void code__49576980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49409480_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__49576980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49576980 = block;
   block->owner = (Object)__48567620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49576980;

   return block;
};

void code__48567620() {
 code__48567240();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49409480_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
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
                              src0 = lv0_48568440_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49672920_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62838080();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49409480_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__49576980();
}

Block make__48567620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48567620 = block;
   block->owner = (Object)__48568420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48567620;

   return block;
};

void code__48568420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62838540(),ack__mac_52817320_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62838480(),run_49672840_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__48567620();
}

Block make__48568420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48568420 = block;
   block->owner = (Object)__50074340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48568420;

   return block;
};

Block __50155380;

Block __50154720;

Block __50154360;

void code__50154360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_53005120_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,lv1_49330160_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62837620(),lvok1_49672880_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__50154360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50154360 = block;
   block->owner = (Object)__50154720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50154360;

   return block;
};

void code__50154720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62837780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50154360();
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
                  src0 = _58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62837500();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62837400(),_58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__50154720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50154720 = block;
   block->owner = (Object)__50155380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50154720;

   return block;
};

void code__50155380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62837880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50154720();
   }
      }
   }
}

Block make__50155380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50155380 = block;
   block->owner = (Object)__50074340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50155380;

   return block;
};

Block __48063120;

Block __48086980;

Block __48086820;

void code__48086820() {
}

Block make__48086820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48086820 = block;
   block->owner = (Object)__48086980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48086820;

   return block;
};

Block __49911060;

void code__49911060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_49494920_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__49911060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49911060 = block;
   block->owner = (Object)__48086980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49911060;

   return block;
};

void code__48086980() {
 code__48086820();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_49494920_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
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
                              src0 = lv1_49330160_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49672920_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62836840();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_49494920_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__49911060();
}

Block make__48086980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48086980 = block;
   block->owner = (Object)__48063120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48086980;

   return block;
};

void code__48063120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62837240(),ack__mac_52817320_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62837180(),run_49672840_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__48086980();
}

Block make__48063120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48063120 = block;
   block->owner = (Object)__50074340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48063120;

   return block;
};

void code__50074340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62839860(),run_49672840_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__50073100();
 code__45652040();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49672900_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         src1 = rvok_49672860_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48568420();
   }
      }
   }
 code__50155380();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49672880_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         src1 = rvok_49672860_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48063120();
   }
      }
   }
}

Block make__50074340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50074340 = block;
   block->owner = (Object)__49672720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50074340;

   return block;
};

Block __49689920;

void code__49689920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62836660(),rvok_49672860_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62836580(),lvok0_49672900_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62836500(),av0_49409480_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62836440(),lvok1_49672880_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62836360(),av1_49494920_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__49689920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49689920 = block;
   block->owner = (Object)__49672720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49689920;

   return block;
};

void code__49672720() {
 code__49672560();
 code__49669080();
 code__49692360();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62840080(),ack__mac_52817320_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62840020(),run_49672840_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_45829060_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         src1 = run_49672840_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50074340();
   }
   else {
  code__49689920();
   }
      }
   }
}

Block make__49672720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49672720 = block;
   block->owner = (Object)__50190600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49672720;

   return block;
};

Block __62428300;

void code__62428300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58176_53253840_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62428300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62428300 = block;
   block->owner = (Object)__62428080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62428300;

   return block;
};

Block __62428040;

void code__62428040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_53253840_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62428040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62428040 = block;
   block->owner = (Object)__62427880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62428040;

   return block;
};

Block __62427580;

void code__62427580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58177_53355960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62427580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62427580 = block;
   block->owner = (Object)__62427420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62427580;

   return block;
};

Block __62427380;

void code__62427380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_53355960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62427380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62427380 = block;
   block->owner = (Object)__62427220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62427380;

   return block;
};

Block __62426920;

void code__62426920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58191_54649960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62426920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62426920 = block;
   block->owner = (Object)__62426760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62426920;

   return block;
};

Block __62426720;

void code__62426720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_54649960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62426720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62426720 = block;
   block->owner = (Object)__62426560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62426720;

   return block;
};

Block __62426220;

void code__62426220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58192_54727600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62426220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62426220 = block;
   block->owner = (Object)__62426000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62426220;

   return block;
};

Block __62425960;

void code__62425960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58192_54727600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62425960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62425960 = block;
   block->owner = (Object)__62425800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62425960;

   return block;
};

Block __62424180;

void code__62424180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50204780_winc_58190_50207780_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62424180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62424180 = block;
   block->owner = (Object)__62423960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62424180;

   return block;
};

Block __62423920;

void code__62423920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,abus__w_50204780_winc_58190_50207780_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62423920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62423920 = block;
   block->owner = (Object)__62423760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62423920;

   return block;
};

Block __62447160;

void code__62447160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53825020_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62447160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62447160 = block;
   block->owner = (Object)__62447000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62447160;

   return block;
};

Block __62446960;

void code__62446960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,reg__0_53825020_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62446960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62446960 = block;
   block->owner = (Object)__62446800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62446960;

   return block;
};

Block __62446400;

void code__62446400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_53945100_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,_58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62446400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62446400 = block;
   block->owner = (Object)__62446240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62446400;

   return block;
};

Block __62446200;

void code__62446200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,reg__1_53945100_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62446200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62446200 = block;
   block->owner = (Object)__62446040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62446200;

   return block;
};

Block __54773880;

Block __54772460;

Block __54772140;

void code__54772140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,lv0_54528520_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62834120(),lvok0_54774080_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54772140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54772140 = block;
   block->owner = (Object)__54772460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54772140;

   return block;
};

Block __54987300;

void code__54987300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_53253840_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,rv0_54686780_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62833980(),rvok0_54774040_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54987300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54987300 = block;
   block->owner = (Object)__54772460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54987300;

   return block;
};

Block __47846760;

Block __47845960;

void code__47845960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_54528520_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      src1 = rv0_54686780_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__47845960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47845960 = block;
   block->owner = (Object)__47846760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47845960;

   return block;
};

void code__47846760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62833820(),run_54774000_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62833760(),ack__add_52817300_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__47845960();
}

Block make__47846760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47846760 = block;
   block->owner = (Object)__54772460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47846760;

   return block;
};

Block __49115020;

void code__49115020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,lv1_54640400_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62833440(),lvok1_54774060_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__49115020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49115020 = block;
   block->owner = (Object)__54772460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49115020;

   return block;
};

Block __49607660;

void code__49607660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_53355960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,rv1_54774100_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62833300(),rvok1_54774020_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__49607660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49607660 = block;
   block->owner = (Object)__54772460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49607660;

   return block;
};

Block __50060020;

Block __50055680;

void code__50055680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_54640400_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      src1 = rv1_54774100_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__50055680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50055680 = block;
   block->owner = (Object)__50060020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50055680;

   return block;
};

void code__50060020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62833140(),run_54774000_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62833080(),ack__add_52817300_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__50055680();
}

Block make__50060020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50060020 = block;
   block->owner = (Object)__54772460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50060020;

   return block;
};

void code__54772460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62834320(),run_54774000_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__54772140();
 code__54987300();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_54774080_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         src1 = rvok0_54774040_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47846760();
   }
      }
   }
 code__49115020();
 code__49607660();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_54774060_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         src1 = rvok1_54774020_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50060020();
   }
      }
   }
}

Block make__54772460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54772460 = block;
   block->owner = (Object)__54773880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54772460;

   return block;
};

Block __54773400;

void code__54773400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62832840(),lvok0_54774080_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62832780(),rvok0_54774040_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62832720(),lvok1_54774060_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62832660(),rvok1_54774020_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54773400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54773400 = block;
   block->owner = (Object)__54773880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54773400;

   return block;
};

void code__54773880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62834580(),ack__add_52817300_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62834500(),run_54774000_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_52817320_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         src1 = run_54774000_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54772460();
   }
   else {
  code__54773400();
   }
      }
   }
}

Block make__54773880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54773880 = block;
   block->owner = (Object)__52817520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54773880;

   return block;
};

Value make__62808100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62840720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62840640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62840560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62840420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62840360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62840280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62840200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62840140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62840080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62840020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62839860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62839780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62839680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62839520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62839400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62839300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62839220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62839120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62838960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62838840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62838740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62838540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62838480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62838080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62837880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62837780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62837620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62837500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62837400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62837240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62837180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62836840() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62836660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62836580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62836500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62836440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62836360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62834580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62834500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62834320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62834120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62833980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62833820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62833760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62833440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62833300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62833140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62833080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62832840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62832780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62832720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62832660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62856360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62856220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62856160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62856100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62855860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62855720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62855640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62855560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62855480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62855400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62855340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62855260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62855180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62855120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62855000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62854840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62854720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62854640() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62854520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62854380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62854280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62854220() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62854140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62854020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62853960() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62853940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62853880() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62853760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer0_58_84_50121360;

SignalI ack__mac_52817320_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeack__mac_52817320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_52817320_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = "ack_mac";
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

SignalI ack__add_52817300_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeack__add_52817300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_52817300_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = "ack_add";
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

SignalI _5897_52903100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_5897_52903100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_52903100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":97";
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

SignalI _5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_5895_52903080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":95";
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

SignalI _5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_5896_52903000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":96";
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

SignalI _58126_53005120_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58126_53005120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_53005120_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":126";
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

SignalI _58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58124_53005100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":124";
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

SignalI _58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58125_53005020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":125";
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

SignalI _58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58143_53090720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":143";
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

SignalI _58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58144_53135340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":144";
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

SignalI _58176_53253840_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58176_53253840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58176_53253840_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":176";
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

SignalI _58177_53355960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58177_53355960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58177_53355960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":177";
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

SignalI _58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58206_53759580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":206";
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

SignalI _58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58207_53853560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":207";
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

SignalI value__z0_53963920_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makevalue__z0_53963920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_53963920_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = "value_z0";
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

SignalI value__z1_54041420_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makevalue__z1_54041420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_54041420_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = "value_z1";
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

SignalI value__a00_54176300_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makevalue__a00_54176300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_54176300_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = "value_a00";
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

SignalI value__a01_54409600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makevalue__a01_54409600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a01_54409600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = "value_a01";
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

SignalI flag__z0_54409580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeflag__z0_54409580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_54409580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = "flag_z0";
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

SignalI flag__z1_54409560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeflag__z1_54409560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_54409560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = "flag_z1";
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

SignalI ack__a00_54409540_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeack__a00_54409540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_54409540_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = "ack_a00";
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

SignalI ack__a01_54409520_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeack__a01_54409520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a01_54409520_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = "ack_a01";
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

SignalI _5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_5899_54409480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":99";
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

SignalI _58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58100_54409380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":100";
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

SignalI _58101_54486720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58101_54486720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_54486720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":101";
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

SignalI _58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58128_54486700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":128";
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

SignalI _58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58129_54486620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":129";
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

SignalI _58130_54572380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58130_54572380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_54572380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":130";
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

SignalI _58191_54649960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58191_54649960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58191_54649960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":191";
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

SignalI _58192_54727600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58192_54727600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58192_54727600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":192";
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

SignalI _58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI make_58193_54727500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer0_58_84_50121360;
   signalI->name = ":193";
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

SystemI func0_53986200;

SystemI makefunc0_53986200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_53986200 = systemI;
   systemI->owner = (Object)layer0_58_84_50121360;
   systemI->name = "func0";
   systemI->system = func0_58_841_53762340;

   return systemI;
};

SystemI func1_48017980;

SystemI makefunc1_48017980() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_48017980 = systemI;
   systemI->owner = (Object)layer0_58_84_50121360;
   systemI->name = "func1";
   systemI->system = func1_58_840_54906280;

   return systemI;
};

Scope channel__w0_5883_50121060;

SignalI trig__r_50142080_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI maketrig__r_50142080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50142080_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_5883_50121060;
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

SignalI trig__w_50142060_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI maketrig__w_50142060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_50142060_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_5883_50121060;
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

SignalI dbus__r_50277440_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makedbus__r_50277440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50277440_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_5883_50121060;
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

SignalI dbus__w_45827600_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makedbus__w_45827600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_45827600_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_5883_50121060;
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

SignalI abus__r_45827220_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__r_45827220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45827220_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_5883_50121060;
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

SignalI abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__w_45826280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_5883_50121060;
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

SignalI mem_48021160_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makemem_48021160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48021160_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_5883_50121060;
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

Scope raddr_5884_50120760;

Scope makeraddr_5884_50120760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_50120760 = scope;
   scope->owner = (Object)channel__w0_5883_50121060;
   scope->name = "raddr:84";
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

Scope waddr_5889_50120340;

Scope makewaddr_5889_50120340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_50120340 = scope;
   scope->owner = (Object)channel__w0_5883_50121060;
   scope->name = "waddr:89";
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

Scope rinc_5894_50119880;

Scope makerinc_5894_50119880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_50119880 = scope;
   scope->owner = (Object)channel__w0_5883_50121060;
   scope->name = "rinc:94";
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

Scope winc_5898_50118840;

Scope makewinc_5898_50118840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_50118840 = scope;
   scope->owner = (Object)channel__w0_5883_50121060;
   scope->name = "winc:98";
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

Scope rdec_58102_50142960;

Scope makerdec_58102_50142960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_50142960 = scope;
   scope->owner = (Object)channel__w0_5883_50121060;
   scope->name = "rdec:102";
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

Scope wdec_58107_50142540;

Scope makewdec_58107_50142540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_50142540 = scope;
   scope->owner = (Object)channel__w0_5883_50121060;
   scope->name = "wdec:107";
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

Behavior __49989380;

Behavior make__49989380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49989380 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_neg += 1;
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->neg = realloc(clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->neg,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_neg*sizeof(Object));
clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->neg[clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_neg-1] = (Object)behavior;
   behavior->block = make__48632280();

   return behavior;
}

Behavior __62360840;

Behavior make__62360840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62360840 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50277440_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   dbus__r_50277440_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   dbus__r_50277440_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(dbus__r_50277440_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,dbus__r_50277440_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
dbus__r_50277440_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[dbus__r_50277440_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62361000();

   return behavior;
}

Behavior __62360640;

Behavior make__62360640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62360640 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_52903100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _5897_52903100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _5897_52903100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_5897_52903100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_5897_52903100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5897_52903100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_5897_52903100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62360800();

   return behavior;
}

Behavior __62360080;

Behavior make__62360080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62360080 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50142080_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   trig__r_50142080_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   trig__r_50142080_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(trig__r_50142080_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,trig__r_50142080_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
trig__r_50142080_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[trig__r_50142080_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62360240();

   return behavior;
}

Behavior __62359880;

Behavior make__62359880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62359880 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_5895_52903080_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62360040();

   return behavior;
}

Behavior __62359420;

Behavior make__62359420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62359420 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_45827220_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   abus__r_45827220_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   abus__r_45827220_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(abus__r_45827220_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,abus__r_45827220_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
abus__r_45827220_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[abus__r_45827220_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62359580();

   return behavior;
}

Behavior __62359220;

Behavior make__62359220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62359220 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_5896_52903000_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62359380();

   return behavior;
}

Behavior __62358760;

Behavior make__62358760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62358760 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_50142060_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   trig__w_50142060_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   trig__w_50142060_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(trig__w_50142060_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,trig__w_50142060_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
trig__w_50142060_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[trig__w_50142060_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62358920();

   return behavior;
}

Behavior __62358560;

Behavior make__62358560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62358560 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_5899_54409480_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62358720();

   return behavior;
}

Behavior __62357900;

Behavior make__62357900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62357900 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[abus__w_45826280_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62358140();

   return behavior;
}

Behavior __62381760;

Behavior make__62381760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62381760 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58100_54409380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62357840();

   return behavior;
}

Behavior __62381080;

Behavior make__62381080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62381080 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_45827600_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   dbus__w_45827600_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   dbus__w_45827600_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(dbus__w_45827600_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,dbus__w_45827600_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
dbus__w_45827600_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[dbus__w_45827600_channel__w0_5883_50121060_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62381240();

   return behavior;
}

Behavior __62380880;

Behavior make__62380880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62380880 = behavior;
   behavior->owner = (Object)channel__w0_5883_50121060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_54486720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58101_54486720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58101_54486720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58101_54486720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58101_54486720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58101_54486720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58101_54486720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62381040();

   return behavior;
}

Scope makechannel__w0_5883_50121060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_50121060 = scope;
   scope->owner = (Object)layer0_58_84_50121360;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50142080();
   scope->inners[1] = maketrig__w_50142060();
   scope->inners[2] = makedbus__r_50277440();
   scope->inners[3] = makedbus__w_45827600();
   scope->inners[4] = makeabus__r_45827220();
   scope->inners[5] = makeabus__w_45826280();
   scope->inners[6] = makemem_48021160();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_50120760();
   scope->scopes[1] = makewaddr_5889_50120340();
   scope->scopes[2] = makerinc_5894_50119880();
   scope->scopes[3] = makewinc_5898_50118840();
   scope->scopes[4] = makerdec_58102_50142960();
   scope->scopes[5] = makewdec_58107_50142540();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49989380();
   scope->behaviors[1] = make__62360840();
   scope->behaviors[2] = make__62360640();
   scope->behaviors[3] = make__62360080();
   scope->behaviors[4] = make__62359880();
   scope->behaviors[5] = make__62359420();
   scope->behaviors[6] = make__62359220();
   scope->behaviors[7] = make__62358760();
   scope->behaviors[8] = make__62358560();
   scope->behaviors[9] = make__62357900();
   scope->behaviors[10] = make__62381760();
   scope->behaviors[11] = make__62381080();
   scope->behaviors[12] = make__62380880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_49989260;

SignalI trig__r_50043240_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI maketrig__r_50043240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50043240_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49989260;
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

SignalI trig__w_50043220_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI maketrig__w_50043220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_50043220_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49989260;
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

SignalI dbus__r_50122760_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makedbus__r_50122760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50122760_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49989260;
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

SignalI dbus__w_50279380_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makedbus__w_50279380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50279380_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49989260;
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

SignalI abus__r_50279260_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__r_50279260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50279260_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49989260;
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

SignalI abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__w_50279100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49989260;
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

SignalI mem_45866200_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makemem_45866200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_45866200_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49989260;
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

Scope raddr_58113_49988960;

Scope makeraddr_58113_49988960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_49988960 = scope;
   scope->owner = (Object)channel__w1_58112_49989260;
   scope->name = "raddr:113";
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

Scope waddr_58118_49988500;

Scope makewaddr_58118_49988500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_49988500 = scope;
   scope->owner = (Object)channel__w1_58112_49989260;
   scope->name = "waddr:118";
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

Scope rinc_58123_49987840;

Scope makerinc_58123_49987840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_49987840 = scope;
   scope->owner = (Object)channel__w1_58112_49989260;
   scope->name = "rinc:123";
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

Scope winc_58127_50044680;

Scope makewinc_58127_50044680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_50044680 = scope;
   scope->owner = (Object)channel__w1_58112_49989260;
   scope->name = "winc:127";
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

Scope rdec_58131_50044260;

Scope makerdec_58131_50044260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_50044260 = scope;
   scope->owner = (Object)channel__w1_58112_49989260;
   scope->name = "rdec:131";
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

Scope wdec_58136_50043820;

Scope makewdec_58136_50043820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_50043820 = scope;
   scope->owner = (Object)channel__w1_58112_49989260;
   scope->name = "wdec:136";
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

Behavior __49976460;

Behavior make__49976460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49976460 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_neg += 1;
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->neg = realloc(clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->neg,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_neg*sizeof(Object));
clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->neg[clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_neg-1] = (Object)behavior;
   behavior->block = make__48553900();

   return behavior;
}

Behavior __62379100;

Behavior make__62379100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62379100 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50122760_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   dbus__r_50122760_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   dbus__r_50122760_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(dbus__r_50122760_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,dbus__r_50122760_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
dbus__r_50122760_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[dbus__r_50122760_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62379320();

   return behavior;
}

Behavior __62378900;

Behavior make__62378900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62378900 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_53005120_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58126_53005120_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58126_53005120_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58126_53005120_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58126_53005120_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58126_53005120_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58126_53005120_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62379060();

   return behavior;
}

Behavior __62378440;

Behavior make__62378440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62378440 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50043240_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   trig__r_50043240_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   trig__r_50043240_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(trig__r_50043240_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,trig__r_50043240_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
trig__r_50043240_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[trig__r_50043240_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62378600();

   return behavior;
}

Behavior __62378240;

Behavior make__62378240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62378240 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58124_53005100_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62378400();

   return behavior;
}

Behavior __62377780;

Behavior make__62377780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62377780 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50279260_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   abus__r_50279260_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   abus__r_50279260_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(abus__r_50279260_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,abus__r_50279260_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
abus__r_50279260_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[abus__r_50279260_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62377940();

   return behavior;
}

Behavior __62377580;

Behavior make__62377580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62377580 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58125_53005020_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62377740();

   return behavior;
}

Behavior __62377020;

Behavior make__62377020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62377020 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_50043220_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   trig__w_50043220_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   trig__w_50043220_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(trig__w_50043220_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,trig__w_50043220_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
trig__w_50043220_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[trig__w_50043220_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62377240();

   return behavior;
}

Behavior __62376820;

Behavior make__62376820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62376820 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58128_54486700_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62376980();

   return behavior;
}

Behavior __62376360;

Behavior make__62376360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62376360 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[abus__w_50279100_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62376520();

   return behavior;
}

Behavior __62376160;

Behavior make__62376160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62376160 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58129_54486620_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62376320();

   return behavior;
}

Behavior __62375700;

Behavior make__62375700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62375700 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50279380_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   dbus__w_50279380_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   dbus__w_50279380_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(dbus__w_50279380_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,dbus__w_50279380_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
dbus__w_50279380_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[dbus__w_50279380_channel__w1_58112_49989260_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62375860();

   return behavior;
}

Behavior __62375500;

Behavior make__62375500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62375500 = behavior;
   behavior->owner = (Object)channel__w1_58112_49989260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_54572380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58130_54572380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58130_54572380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58130_54572380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58130_54572380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58130_54572380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58130_54572380_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62375660();

   return behavior;
}

Scope makechannel__w1_58112_49989260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_49989260 = scope;
   scope->owner = (Object)layer0_58_84_50121360;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50043240();
   scope->inners[1] = maketrig__w_50043220();
   scope->inners[2] = makedbus__r_50122760();
   scope->inners[3] = makedbus__w_50279380();
   scope->inners[4] = makeabus__r_50279260();
   scope->inners[5] = makeabus__w_50279100();
   scope->inners[6] = makemem_45866200();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_49988960();
   scope->scopes[1] = makewaddr_58118_49988500();
   scope->scopes[2] = makerinc_58123_49987840();
   scope->scopes[3] = makewinc_58127_50044680();
   scope->scopes[4] = makerdec_58131_50044260();
   scope->scopes[5] = makewdec_58136_50043820();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49976460();
   scope->behaviors[1] = make__62379100();
   scope->behaviors[2] = make__62378900();
   scope->behaviors[3] = make__62378440();
   scope->behaviors[4] = make__62378240();
   scope->behaviors[5] = make__62377780();
   scope->behaviors[6] = make__62377580();
   scope->behaviors[7] = make__62377020();
   scope->behaviors[8] = make__62376820();
   scope->behaviors[9] = make__62376360();
   scope->behaviors[10] = make__62376160();
   scope->behaviors[11] = make__62375700();
   scope->behaviors[12] = make__62375500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_49976340;

SignalI reg__0_50107360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makereg__0_50107360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50107360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__accum_58141_49976340;
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

SignalI reg__1_50245120_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makereg__1_50245120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50245120_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__accum_58141_49976340;
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

Scope anum_58142_49976040;

Scope makeanum_58142_49976040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_49976040 = scope;
   scope->owner = (Object)channel__accum_58141_49976340;
   scope->name = "anum:142";
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

Scope raddr_58145_49975560;

Scope makeraddr_58145_49975560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_49975560 = scope;
   scope->owner = (Object)channel__accum_58141_49976340;
   scope->name = "raddr:145";
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

Scope waddr_58149_49974940;

Scope makewaddr_58149_49974940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_49974940 = scope;
   scope->owner = (Object)channel__accum_58141_49976340;
   scope->name = "waddr:149";
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

Scope rinc_58153_49974360;

SignalI abus__r_49973980_rinc_58153_49974360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__r_49973980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49973980_rinc_58153_49974360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rinc_58153_49974360;
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

Scope makerinc_58153_49974360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_49974360 = scope;
   scope->owner = (Object)channel__accum_58141_49976340;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49973980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_49973860;

SignalI abus__w_49973480_winc_58158_49973860_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__w_49973480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49973480_winc_58158_49973860_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)winc_58158_49973860;
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

Scope makewinc_58158_49973860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_49973860 = scope;
   scope->owner = (Object)channel__accum_58141_49976340;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49973480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_49973320;

SignalI abus__r_49972680_rdec_58163_49973320_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__r_49972680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49972680_rdec_58163_49973320_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rdec_58163_49973320;
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

Scope makerdec_58163_49973320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_49973320 = scope;
   scope->owner = (Object)channel__accum_58141_49976340;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49972680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_49972440;

SignalI abus__w_49972060_wdec_58168_49972440_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__w_49972060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49972060_wdec_58168_49972440_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)wdec_58168_49972440;
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

Scope makewdec_58168_49972440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_49972440 = scope;
   scope->owner = (Object)channel__accum_58141_49976340;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49972060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __62431020;

Behavior make__62431020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62431020 = behavior;
   behavior->owner = (Object)channel__accum_58141_49976340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50107360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   reg__0_50107360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   reg__0_50107360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(reg__0_50107360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,reg__0_50107360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__0_50107360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[reg__0_50107360_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62431180();

   return behavior;
}

Behavior __62430820;

Behavior make__62430820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62430820 = behavior;
   behavior->owner = (Object)channel__accum_58141_49976340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58143_53090720_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62430980();

   return behavior;
}

Behavior __62430300;

Behavior make__62430300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62430300 = behavior;
   behavior->owner = (Object)channel__accum_58141_49976340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50245120_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   reg__1_50245120_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   reg__1_50245120_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(reg__1_50245120_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,reg__1_50245120_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__1_50245120_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[reg__1_50245120_channel__accum_58141_49976340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62430500();

   return behavior;
}

Behavior __62430060;

Behavior make__62430060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62430060 = behavior;
   behavior->owner = (Object)channel__accum_58141_49976340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58144_53135340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62430220();

   return behavior;
}

Scope makechannel__accum_58141_49976340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_49976340 = scope;
   scope->owner = (Object)layer0_58_84_50121360;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50107360();
   scope->inners[1] = makereg__1_50245120();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_49976040();
   scope->scopes[1] = makeraddr_58145_49975560();
   scope->scopes[2] = makewaddr_58149_49974940();
   scope->scopes[3] = makerinc_58153_49974360();
   scope->scopes[4] = makewinc_58158_49973860();
   scope->scopes[5] = makerdec_58163_49973320();
   scope->scopes[6] = makewdec_58168_49972440();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62431020();
   scope->behaviors[1] = make__62430820();
   scope->behaviors[2] = make__62430300();
   scope->behaviors[3] = make__62430060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_48350200;

SignalI lv0_48568440_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makelv0_48568440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48568440_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48350200;
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

SignalI lv1_49330160_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makelv1_49330160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49330160_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48350200;
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

SignalI av0_49409480_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeav0_49409480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49409480_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48350200;
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

SignalI av1_49494920_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeav1_49494920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_49494920_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48350200;
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

SignalI rv_49672920_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makerv_49672920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49672920_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48350200;
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

SignalI lvok0_49672900_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makelvok0_49672900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49672900_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48350200;
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

SignalI lvok1_49672880_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makelvok1_49672880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49672880_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48350200;
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

SignalI rvok_49672860_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makervok_49672860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49672860_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48350200;
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

SignalI run_49672840_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makerun_49672840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49672840_mac__n1_58173_48350200_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48350200;
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

Behavior __50190600;

Behavior make__50190600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50190600 = behavior;
   behavior->owner = (Object)mac__n1_58173_48350200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos += 1;
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos = realloc(clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos*sizeof(Object));
clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos[clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos-1] = (Object)behavior;
   behavior->block = make__49672720();

   return behavior;
}

Scope makemac__n1_58173_48350200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_48350200 = scope;
   scope->owner = (Object)layer0_58_84_50121360;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48568440();
   scope->inners[1] = makelv1_49330160();
   scope->inners[2] = makeav0_49409480();
   scope->inners[3] = makeav1_49494920();
   scope->inners[4] = makerv_49672920();
   scope->inners[5] = makelvok0_49672900();
   scope->inners[6] = makelvok1_49672880();
   scope->inners[7] = makervok_49672860();
   scope->inners[8] = makerun_49672840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50190600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58174_50190440;

SignalI reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makereg__0_49711940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__bias_58174_50190440;
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

SignalI reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makereg__1_52748420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__bias_58174_50190440;
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

Scope anum_58175_50190040;

Scope makeanum_58175_50190040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58175_50190040 = scope;
   scope->owner = (Object)channel__bias_58174_50190440;
   scope->name = "anum:175";
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

Scope raddr_58178_50189040;

Scope makeraddr_58178_50189040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58178_50189040 = scope;
   scope->owner = (Object)channel__bias_58174_50190440;
   scope->name = "raddr:178";
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

Scope waddr_58182_50185260;

Scope makewaddr_58182_50185260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58182_50185260 = scope;
   scope->owner = (Object)channel__bias_58174_50190440;
   scope->name = "waddr:182";
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

Scope rinc_58186_50184840;

SignalI abus__r_50208300_rinc_58186_50184840_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__r_50208300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50208300_rinc_58186_50184840_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rinc_58186_50184840;
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

Scope makerinc_58186_50184840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58186_50184840 = scope;
   scope->owner = (Object)channel__bias_58174_50190440;
   scope->name = "rinc:186";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50208300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58190_50207780;

SignalI abus__w_50204780_winc_58190_50207780_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__w_50204780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50204780_winc_58190_50207780_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)winc_58190_50207780;
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

Behavior __62423960;

Behavior make__62423960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62423960 = behavior;
   behavior->owner = (Object)winc_58190_50207780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50204780_winc_58190_50207780_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   abus__w_50204780_winc_58190_50207780_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   abus__w_50204780_winc_58190_50207780_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(abus__w_50204780_winc_58190_50207780_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,abus__w_50204780_winc_58190_50207780_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
abus__w_50204780_winc_58190_50207780_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[abus__w_50204780_winc_58190_50207780_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62424180();

   return behavior;
}

Behavior __62423760;

Behavior make__62423760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62423760 = behavior;
   behavior->owner = (Object)winc_58190_50207780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58193_54727500_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62423920();

   return behavior;
}

Scope makewinc_58190_50207780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58190_50207780 = scope;
   scope->owner = (Object)channel__bias_58174_50190440;
   scope->name = "winc:190";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50204780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62423960();
   scope->behaviors[1] = make__62423760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58194_50201860;

SignalI abus__r_50248800_rdec_58194_50201860_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__r_50248800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50248800_rdec_58194_50201860_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rdec_58194_50201860;
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

Scope makerdec_58194_50201860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58194_50201860 = scope;
   scope->owner = (Object)channel__bias_58174_50190440;
   scope->name = "rdec:194";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50248800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58199_50247960;

SignalI abus__w_50246520_wdec_58199_50247960_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__w_50246520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50246520_wdec_58199_50247960_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)wdec_58199_50247960;
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

Scope makewdec_58199_50247960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58199_50247960 = scope;
   scope->owner = (Object)channel__bias_58174_50190440;
   scope->name = "wdec:199";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50246520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __62428080;

Behavior make__62428080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62428080 = behavior;
   behavior->owner = (Object)channel__bias_58174_50190440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62428300();

   return behavior;
}

Behavior __62427880;

Behavior make__62427880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62427880 = behavior;
   behavior->owner = (Object)channel__bias_58174_50190440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58176_53253840_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58176_53253840_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58176_53253840_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58176_53253840_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58176_53253840_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58176_53253840_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58176_53253840_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62428040();

   return behavior;
}

Behavior __62427420;

Behavior make__62427420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62427420 = behavior;
   behavior->owner = (Object)channel__bias_58174_50190440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62427580();

   return behavior;
}

Behavior __62427220;

Behavior make__62427220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62427220 = behavior;
   behavior->owner = (Object)channel__bias_58174_50190440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58177_53355960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58177_53355960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58177_53355960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58177_53355960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58177_53355960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58177_53355960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58177_53355960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62427380();

   return behavior;
}

Behavior __62426760;

Behavior make__62426760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62426760 = behavior;
   behavior->owner = (Object)channel__bias_58174_50190440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[reg__0_49711940_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62426920();

   return behavior;
}

Behavior __62426560;

Behavior make__62426560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62426560 = behavior;
   behavior->owner = (Object)channel__bias_58174_50190440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58191_54649960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58191_54649960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58191_54649960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58191_54649960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58191_54649960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58191_54649960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58191_54649960_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62426720();

   return behavior;
}

Behavior __62426000;

Behavior make__62426000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62426000 = behavior;
   behavior->owner = (Object)channel__bias_58174_50190440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[reg__1_52748420_channel__bias_58174_50190440_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62426220();

   return behavior;
}

Behavior __62425800;

Behavior make__62425800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62425800 = behavior;
   behavior->owner = (Object)channel__bias_58174_50190440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58192_54727600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58192_54727600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58192_54727600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58192_54727600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58192_54727600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58192_54727600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58192_54727600_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62425960();

   return behavior;
}

Scope makechannel__bias_58174_50190440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58174_50190440 = scope;
   scope->owner = (Object)layer0_58_84_50121360;
   scope->name = "channel_bias:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49711940();
   scope->inners[1] = makereg__1_52748420();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58175_50190040();
   scope->scopes[1] = makeraddr_58178_50189040();
   scope->scopes[2] = makewaddr_58182_50185260();
   scope->scopes[3] = makerinc_58186_50184840();
   scope->scopes[4] = makewinc_58190_50207780();
   scope->scopes[5] = makerdec_58194_50201860();
   scope->scopes[6] = makewdec_58199_50247960();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62428080();
   scope->behaviors[1] = make__62427880();
   scope->behaviors[2] = make__62427420();
   scope->behaviors[3] = make__62427220();
   scope->behaviors[4] = make__62426760();
   scope->behaviors[5] = make__62426560();
   scope->behaviors[6] = make__62426000();
   scope->behaviors[7] = make__62425800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58204_53683940;

SignalI reg__0_53825020_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makereg__0_53825020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53825020_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__z_58204_53683940;
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

SignalI reg__1_53945100_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makereg__1_53945100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_53945100_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__z_58204_53683940;
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

Scope anum_58205_53683640;

Scope makeanum_58205_53683640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58205_53683640 = scope;
   scope->owner = (Object)channel__z_58204_53683940;
   scope->name = "anum:205";
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

Scope raddr_58208_53683220;

Scope makeraddr_58208_53683220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58208_53683220 = scope;
   scope->owner = (Object)channel__z_58204_53683940;
   scope->name = "raddr:208";
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

Scope waddr_58212_53682800;

Scope makewaddr_58212_53682800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58212_53682800 = scope;
   scope->owner = (Object)channel__z_58204_53683940;
   scope->name = "waddr:212";
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

Scope rinc_58216_53682380;

SignalI abus__r_53763880_rinc_58216_53682380_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__r_53763880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53763880_rinc_58216_53682380_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rinc_58216_53682380;
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

Scope makerinc_58216_53682380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58216_53682380 = scope;
   scope->owner = (Object)channel__z_58204_53683940;
   scope->name = "rinc:216";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53763880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58220_53763760;

SignalI abus__w_53763380_winc_58220_53763760_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__w_53763380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53763380_winc_58220_53763760_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)winc_58220_53763760;
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

Scope makewinc_58220_53763760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58220_53763760 = scope;
   scope->owner = (Object)channel__z_58204_53683940;
   scope->name = "winc:220";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53763380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58224_53763260;

SignalI abus__r_53762880_rdec_58224_53763260_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__r_53762880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53762880_rdec_58224_53763260_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rdec_58224_53763260;
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

Scope makerdec_58224_53763260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58224_53763260 = scope;
   scope->owner = (Object)channel__z_58204_53683940;
   scope->name = "rdec:224";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53762880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58229_53762760;

SignalI abus__w_53762380_wdec_58229_53762760_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeabus__w_53762380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53762380_wdec_58229_53762760_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)wdec_58229_53762760;
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

Scope makewdec_58229_53762760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58229_53762760 = scope;
   scope->owner = (Object)channel__z_58204_53683940;
   scope->name = "wdec:229";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53762380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __62447000;

Behavior make__62447000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62447000 = behavior;
   behavior->owner = (Object)channel__z_58204_53683940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53825020_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   reg__0_53825020_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   reg__0_53825020_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(reg__0_53825020_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,reg__0_53825020_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__0_53825020_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[reg__0_53825020_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62447160();

   return behavior;
}

Behavior __62446800;

Behavior make__62446800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62446800 = behavior;
   behavior->owner = (Object)channel__z_58204_53683940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58206_53759580_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62446960();

   return behavior;
}

Behavior __62446240;

Behavior make__62446240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62446240 = behavior;
   behavior->owner = (Object)channel__z_58204_53683940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_53945100_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   reg__1_53945100_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   reg__1_53945100_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(reg__1_53945100_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,reg__1_53945100_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__1_53945100_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[reg__1_53945100_channel__z_58204_53683940_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62446400();

   return behavior;
}

Behavior __62446040;

Behavior make__62446040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62446040 = behavior;
   behavior->owner = (Object)channel__z_58204_53683940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   _58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   _58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(_58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,_58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[_58207_53853560_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62446200();

   return behavior;
}

Scope makechannel__z_58204_53683940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58204_53683940 = scope;
   scope->owner = (Object)layer0_58_84_50121360;
   scope->name = "channel_z:204";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53825020();
   scope->inners[1] = makereg__1_53945100();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58205_53683640();
   scope->scopes[1] = makeraddr_58208_53683220();
   scope->scopes[2] = makewaddr_58212_53682800();
   scope->scopes[3] = makerinc_58216_53682380();
   scope->scopes[4] = makewinc_58220_53763760();
   scope->scopes[5] = makerdec_58224_53763260();
   scope->scopes[6] = makewdec_58229_53762760();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62447000();
   scope->behaviors[1] = make__62446800();
   scope->behaviors[2] = make__62446240();
   scope->behaviors[3] = make__62446040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58234_54474240;

SignalI lv0_54528520_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makelv0_54528520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_54528520_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58234_54474240;
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

SignalI lv1_54640400_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makelv1_54640400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_54640400_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58234_54474240;
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

SignalI rv0_54686780_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makerv0_54686780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_54686780_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58234_54474240;
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

SignalI rv1_54774100_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makerv1_54774100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_54774100_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58234_54474240;
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

SignalI lvok0_54774080_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makelvok0_54774080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_54774080_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58234_54474240;
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

SignalI lvok1_54774060_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makelvok1_54774060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_54774060_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58234_54474240;
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

SignalI rvok0_54774040_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makervok0_54774040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_54774040_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58234_54474240;
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

SignalI rvok1_54774020_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makervok1_54774020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_54774020_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58234_54474240;
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

SignalI run_54774000_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makerun_54774000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_54774000_add__n_58234_54474240_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58234_54474240;
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

Behavior __52817520;

Behavior make__52817520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52817520 = behavior;
   behavior->owner = (Object)add__n_58234_54474240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos += 1;
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos = realloc(clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos*sizeof(Object));
clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos[clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos-1] = (Object)behavior;
   behavior->block = make__54773880();

   return behavior;
}

Scope makeadd__n_58234_54474240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58234_54474240 = scope;
   scope->owner = (Object)layer0_58_84_50121360;
   scope->name = "add_n:234";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_54528520();
   scope->inners[1] = makelv1_54640400();
   scope->inners[2] = makerv0_54686780();
   scope->inners[3] = makerv1_54774100();
   scope->inners[4] = makelvok0_54774080();
   scope->inners[5] = makelvok1_54774060();
   scope->inners[6] = makervok0_54774040();
   scope->inners[7] = makervok1_54774020();
   scope->inners[8] = makerun_54774000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52817520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53687640;

Behavior make__53687640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53687640 = behavior;
   behavior->owner = (Object)layer0_58_84_50121360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos += 1;
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos = realloc(clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos*sizeof(Object));
clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos[clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos-1] = (Object)behavior;
   behavior->block = make__52865320();

   return behavior;
}

Behavior __54489280;

Behavior make__54489280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54489280 = behavior;
   behavior->owner = (Object)layer0_58_84_50121360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos += 1;
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos = realloc(clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos*sizeof(Object));
clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos[clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos-1] = (Object)behavior;
   behavior->block = make__53687440();

   return behavior;
}

Behavior __45585860;

Behavior make__45585860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45585860 = behavior;
   behavior->owner = (Object)layer0_58_84_50121360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos += 1;
   clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos = realloc(clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos*sizeof(Object));
clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->pos[clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_pos-1] = (Object)behavior;
   behavior->block = make__54489080();

   return behavior;
}

Behavior __62361880;

Behavior make__62361880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62361880 = behavior;
   behavior->owner = (Object)layer0_58_84_50121360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,value__z0_53963920_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   value__z0_53963920_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   value__z0_53963920_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(value__z0_53963920_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,value__z0_53963920_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
value__z0_53963920_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[value__z0_53963920_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,value__z1_54041420_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   value__z1_54041420_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   value__z1_54041420_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(value__z1_54041420_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,value__z1_54041420_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
value__z1_54041420_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[value__z1_54041420_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__a00_54409540_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   ack__a00_54409540_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   ack__a00_54409540_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(ack__a00_54409540_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,ack__a00_54409540_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
ack__a00_54409540_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[ack__a00_54409540_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__a01_54409520_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   ack__a01_54409520_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   ack__a01_54409520_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(ack__a01_54409520_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,ack__a01_54409520_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
ack__a01_54409520_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[ack__a01_54409520_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62365500();

   return behavior;
}

Behavior __62361720;

Behavior make__62361720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62361720 = behavior;
   behavior->owner = (Object)layer0_58_84_50121360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_53986360_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   a_53986360_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   a_53986360_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(a_53986360_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,a_53986360_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
a_53986360_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[a_53986360_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_48018280_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   a_48018280_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   a_48018280_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(a_48018280_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,a_48018280_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
a_48018280_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[a_48018280_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62365440();

   return behavior;
}

Scope makelayer0_58_84_50121360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_50121360 = scope;
   scope->owner = (Object)layer0_58_840_45714380;
   scope->name = "layer0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_53986200();
   scope->systemIs[1] = makefunc1_48017980();
   scope->num_inners = 31;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__mac_52817320();
   scope->inners[1] = makeack__add_52817300();
   scope->inners[2] = make_5897_52903100();
   scope->inners[3] = make_5895_52903080();
   scope->inners[4] = make_5896_52903000();
   scope->inners[5] = make_58126_53005120();
   scope->inners[6] = make_58124_53005100();
   scope->inners[7] = make_58125_53005020();
   scope->inners[8] = make_58143_53090720();
   scope->inners[9] = make_58144_53135340();
   scope->inners[10] = make_58176_53253840();
   scope->inners[11] = make_58177_53355960();
   scope->inners[12] = make_58206_53759580();
   scope->inners[13] = make_58207_53853560();
   scope->inners[14] = makevalue__z0_53963920();
   scope->inners[15] = makevalue__z1_54041420();
   scope->inners[16] = makevalue__a00_54176300();
   scope->inners[17] = makevalue__a01_54409600();
   scope->inners[18] = makeflag__z0_54409580();
   scope->inners[19] = makeflag__z1_54409560();
   scope->inners[20] = makeack__a00_54409540();
   scope->inners[21] = makeack__a01_54409520();
   scope->inners[22] = make_5899_54409480();
   scope->inners[23] = make_58100_54409380();
   scope->inners[24] = make_58101_54486720();
   scope->inners[25] = make_58128_54486700();
   scope->inners[26] = make_58129_54486620();
   scope->inners[27] = make_58130_54572380();
   scope->inners[28] = make_58191_54649960();
   scope->inners[29] = make_58192_54727600();
   scope->inners[30] = make_58193_54727500();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_50121060();
   scope->scopes[1] = makechannel__w1_58112_49989260();
   scope->scopes[2] = makechannel__accum_58141_49976340();
   scope->scopes[3] = makemac__n1_58173_48350200();
   scope->scopes[4] = makechannel__bias_58174_50190440();
   scope->scopes[5] = makechannel__z_58204_53683940();
   scope->scopes[6] = makeadd__n_58234_54474240();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53687640();
   scope->behaviors[1] = make__54489280();
   scope->behaviors[2] = make__45585860();
   scope->behaviors[3] = make__62361880();
   scope->behaviors[4] = make__62361720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_45714380() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_45714380 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_45829420();
   systemT->inputs[1] = makerst_45829380();
   systemT->inputs[2] = makefill_45829120();
   systemT->inputs[3] = makereq_45829060();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_45829000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer0_58_84_50121360();

   return systemT;
}