#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer__hidden_58_840_49905400;

SignalI clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeclk_49898820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49905400;
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

SignalI rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makerst_49898780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49905400;
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

SignalI fill_49898740_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makefill_49898740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49898740_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49905400;
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

SignalI req_49898720_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makereq_49898720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49898720_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49905400;
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

SignalI ack__0_49898540_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeack__0_49898540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49898540_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49905400;
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

Block __53057060;

Block __53054800;

Block __53054600;

void code__53054600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,value__z0_52219840_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59839940(),flag__z0_52733720_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53054600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53054600 = block;
   block->owner = (Object)__53054800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53054600;

   return block;
};

Block __53454140;

void code__53454140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,value__z1_52524760_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59839800(),flag__z1_52733700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53454140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53454140 = block;
   block->owner = (Object)__53054800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53454140;

   return block;
};

void code__53054800() {
 code__53054600();
 code__53454140();
}

Block make__53054800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53054800 = block;
   block->owner = (Object)__53057060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53054800;

   return block;
};

Block __53056720;

void code__53056720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59839720(),flag__z0_52733720_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59839640(),flag__z1_52733700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53056720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53056720 = block;
   block->owner = (Object)__53057060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53056720;

   return block;
};

void code__53057060() {
   {
      Value cond = ack__add_49311920_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53054800();
   }
   else {
  code__53056720();
   }
      }
   }
}

Block make__53057060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53057060 = block;
   block->owner = (Object)__53841580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53057060;

   return block;
};

Block __53841440;

Block __53841080;

Block __53840840;

void code__53840840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_52641320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_5832_49209920______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59839320(),ack__a00_52733680_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53840840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53840840 = block;
   block->owner = (Object)__53841080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53840840;

   return block;
};

Block __54429880;

void code__54429880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a01_52733740_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_5833_49314420______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59839160(),ack__a01_52733660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__54429880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54429880 = block;
   block->owner = (Object)__53841080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54429880;

   return block;
};

void code__53841080() {
 code__53840840();
 code__54429880();
}

Block make__53841080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53841080 = block;
   block->owner = (Object)__53841440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53841080;

   return block;
};

void code__53841440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_52733720_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         src1 = flag__z1_52733700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53841080();
   }
      }
   }
}

Block make__53841440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53841440 = block;
   block->owner = (Object)__47193600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53841440;

   return block;
};

Block __47193340;

Block __47192980;

Block __47191240;

void code__47191240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59838940(),_58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__47191240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47191240 = block;
   block->owner = (Object)__47192980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47191240;

   return block;
};

void code__47192980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59839020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47191240();
   }
      }
   }
}

Block make__47192980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47192980 = block;
   block->owner = (Object)__47193340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47192980;

   return block;
};

Block __47189860;

Block __47188940;

void code__47188940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59838780(),_58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__47188940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47188940 = block;
   block->owner = (Object)__47189860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47188940;

   return block;
};

void code__47189860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59838860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47188940();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59838720(),_58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__47189860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47189860 = block;
   block->owner = (Object)__47193340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47189860;

   return block;
};

Block __47481020;

Block __47501700;

void code__47501700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59838560(),_58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__47501700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47501700 = block;
   block->owner = (Object)__47481020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47501700;

   return block;
};

void code__47481020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59838640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47501700();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59838500(),_5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__47481020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47481020 = block;
   block->owner = (Object)__47193340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47481020;

   return block;
};

Block __47526140;

Block __47582900;

Block __47601780;

void code__47601780() {
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
                  src0 = _58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59838240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59838140(),_5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59838080(),_58101_52850480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__47601780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47601780 = block;
   block->owner = (Object)__47582900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47601780;

   return block;
};

void code__47582900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59838380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47601780();
   }
      }
   }
}

Block make__47582900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47582900 = block;
   block->owner = (Object)__47526140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47582900;

   return block;
};

Block __49200220;

Block __49199540;

void code__49199540() {
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
                  src0 = _58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59837860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59837760(),_58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59837700(),_58130_52967320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49199540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49199540 = block;
   block->owner = (Object)__49200220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49199540;

   return block;
};

void code__49200220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59838000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49199540();
   }
      }
   }
}

Block make__49200220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49200220 = block;
   block->owner = (Object)__47526140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49200220;

   return block;
};

Block __49500080;

Block __49499180;

Block __49498660;

void code__49498660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59837380(),_58191_53074080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49498660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49498660 = block;
   block->owner = (Object)__49499180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49498660;

   return block;
};

Block __49700220;

void code__49700220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59837260(),_58192_53174640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49700220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49700220 = block;
   block->owner = (Object)__49499180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49700220;

   return block;
};

void code__49499180() {
{
      Value value = _58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__59837460())) {
    code__49498660();
         }
         else if (value2integer(value) == value2integer(make__59837320())) {
    code__49700220();
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
                  src0 = _58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59837100();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49499180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49499180 = block;
   block->owner = (Object)__49500080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49499180;

   return block;
};

void code__49500080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59837600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49499180();
   }
      }
   }
}

Block make__49500080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49500080 = block;
   block->owner = (Object)__47526140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49500080;

   return block;
};

void code__47526140() {
 code__47582900();
 code__49200220();
 code__49500080();
}

Block make__47526140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47526140 = block;
   block->owner = (Object)__47193340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47526140;

   return block;
};

void code__47193340() {
 code__47192980();
 code__47189860();
 code__47481020();
   {
      Value cond = fill_49898740_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47526140();
   }
      }
   }
}

Block make__47193340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47193340 = block;
   block->owner = (Object)__49882960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47193340;

   return block;
};

Block __59324440;

void code__59324440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_49898720_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_49311940_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_49312240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59324440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59324440 = block;
   block->owner = (Object)__59324200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59324440;

   return block;
};

Block __59324660;

void code__59324660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,clk_53198860_counter0_58_840_53200860_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,ack_53256140_counter0_58_840_53200860_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,rst_53256080_counter0_58_840_53200860_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_52219840_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_52524760_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a00_52733680_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      src1 = ack__a01_52733660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__0_49898540_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59324660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59324660 = block;
   block->owner = (Object)__59341560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59324660;

   return block;
};

Block __59324600;

void code__59324600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_53256040_counter0_58_840_53200860_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,ack__mac_49311940_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_53056980_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,value__a00_52641320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49698540_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,value__a01_52733740_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59324600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59324600 = block;
   block->owner = (Object)__59341380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59324600;

   return block;
};

Block __47601440;

Block __49298880;

void code__49298880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49837340_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,make_ref_rangeS(mem_49918760_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160,value2integer(abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value),value2integer(abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49298880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49298880 = block;
   block->owner = (Object)__47601440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49298880;

   return block;
};

void code__47601440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49918760_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
            idx = value2integer(abus__r_49837240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49752240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49664160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49298880();
   }
      }
   }
}

Block make__47601440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47601440 = block;
   block->owner = (Object)__49666580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47601440;

   return block;
};

Block __59340580;

void code__59340580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49752240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_5897_49516360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59340580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59340580 = block;
   block->owner = (Object)__59340420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59340580;

   return block;
};

Block __59340380;

void code__59340380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_49516360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,dbus__r_49752240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59340380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59340380 = block;
   block->owner = (Object)__59340220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59340380;

   return block;
};

Block __59339880;

void code__59339880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49664180_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59339880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59339880 = block;
   block->owner = (Object)__59339700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59339880;

   return block;
};

Block __59339620;

void code__59339620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,trig__r_49664180_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59339620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59339620 = block;
   block->owner = (Object)__59339460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59339620;

   return block;
};

Block __59339120;

void code__59339120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49837240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59339120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59339120 = block;
   block->owner = (Object)__59338900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59339120;

   return block;
};

Block __59338860;

void code__59338860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,abus__r_49837240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59338860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59338860 = block;
   block->owner = (Object)__59338700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59338860;

   return block;
};

Block __59338400;

void code__59338400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49664160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59338400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59338400 = block;
   block->owner = (Object)__59338240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59338400;

   return block;
};

Block __59338200;

void code__59338200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,trig__w_49664160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59338200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59338200 = block;
   block->owner = (Object)__59338040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59338200;

   return block;
};

Block __59337700;

void code__59337700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59337700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59337700 = block;
   block->owner = (Object)__59337480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59337700;

   return block;
};

Block __59337440;

void code__59337440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59337440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59337440 = block;
   block->owner = (Object)__59337280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59337440;

   return block;
};

Block __59336940;

void code__59336940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49837340_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58101_52850480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59336940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59336940 = block;
   block->owner = (Object)__59336720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59336940;

   return block;
};

Block __59336680;

void code__59336680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_52850480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,dbus__w_49837340_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59336680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59336680 = block;
   block->owner = (Object)__59336520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59336680;

   return block;
};

Block __49292740;

Block __49999860;

void code__49999860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49853600_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,make_ref_rangeS(mem_49933020_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160,value2integer(abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value),value2integer(abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49999860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49999860 = block;
   block->owner = (Object)__49292740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49999860;

   return block;
};

void code__49292740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49933020_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
            idx = value2integer(abus__r_49853520_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49770940_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49661800_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49999860();
   }
      }
   }
}

Block make__49292740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49292740 = block;
   block->owner = (Object)__49275280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49292740;

   return block;
};

Block __59334880;

void code__59334880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49770940_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58126_49630600_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59334880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59334880 = block;
   block->owner = (Object)__59334700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59334880;

   return block;
};

Block __59424720;

void code__59424720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_49630600_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,dbus__r_49770940_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59424720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59424720 = block;
   block->owner = (Object)__59424520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59424720;

   return block;
};

Block __59424220;

void code__59424220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49661860_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59424220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59424220 = block;
   block->owner = (Object)__59424060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59424220;

   return block;
};

Block __59424020;

void code__59424020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,trig__r_49661860_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59424020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59424020 = block;
   block->owner = (Object)__59423860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59424020;

   return block;
};

Block __59423360;

void code__59423360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49853520_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59423360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59423360 = block;
   block->owner = (Object)__59423160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59423360;

   return block;
};

Block __59423120;

void code__59423120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,abus__r_49853520_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59423120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59423120 = block;
   block->owner = (Object)__59422960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59423120;

   return block;
};

Block __59422640;

void code__59422640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49661800_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59422640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59422640 = block;
   block->owner = (Object)__59422460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59422640;

   return block;
};

Block __59422400;

void code__59422400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,trig__w_49661800_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59422400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59422400 = block;
   block->owner = (Object)__59422200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59422400;

   return block;
};

Block __59421900;

void code__59421900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59421900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59421900 = block;
   block->owner = (Object)__59421740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59421900;

   return block;
};

Block __59421700;

void code__59421700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59421700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59421700 = block;
   block->owner = (Object)__59421520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59421700;

   return block;
};

Block __59421140;

void code__59421140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49853600_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58130_52967320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59421140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59421140 = block;
   block->owner = (Object)__59420980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59421140;

   return block;
};

Block __59420940;

void code__59420940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_52967320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,dbus__w_49853600_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59420940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59420940 = block;
   block->owner = (Object)__59420780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59420940;

   return block;
};

Block __59419060;

void code__59419060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49758060_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59419060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59419060 = block;
   block->owner = (Object)__59418900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59419060;

   return block;
};

Block __59418860;

void code__59418860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,reg__0_49758060_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59418860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59418860 = block;
   block->owner = (Object)__59418700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59418860;

   return block;
};

Block __59418400;

void code__59418400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49883240_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59418400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59418400 = block;
   block->owner = (Object)__59418200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59418400;

   return block;
};

Block __59418160;

void code__59418160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,reg__1_49883240_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59418160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59418160 = block;
   block->owner = (Object)__59417940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59418160;

   return block;
};

Block __49683480;

Block __49683300;

Block __49682880;

void code__49682880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59669500(),_58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49682880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49682880 = block;
   block->owner = (Object)__49683300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49682880;

   return block;
};

void code__49683300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59669580();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49682880();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59669440(),_58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49683300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49683300 = block;
   block->owner = (Object)__49683480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49683300;

   return block;
};

Block __49682080;

Block __49681740;

void code__49681740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59669280(),_5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49681740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49681740 = block;
   block->owner = (Object)__49682080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49681740;

   return block;
};

void code__49682080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59669360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49681740();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59669220(),_5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49682080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49682080 = block;
   block->owner = (Object)__49683480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49682080;

   return block;
};

Block __49680900;

Block __49680440;

void code__49680440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59669060(),_5814_47704200______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49680440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49680440 = block;
   block->owner = (Object)__49680900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49680440;

   return block;
};

void code__49680900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59669140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49680440();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59669000(),_5813_47705120______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49680900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49680900 = block;
   block->owner = (Object)__49683480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49680900;

   return block;
};

Block __49881520;

Block __49904020;

Block __49903280;

Block __49902920;

void code__49902920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_47705200______58_84_49209420______58_840_59103160->c_value,rv_49683800_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59668380(),rvok_49683640_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49902920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49902920 = block;
   block->owner = (Object)__49903280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49902920;

   return block;
};

void code__49903280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_47705120______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59668540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49902920();
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
                  src0 = _5814_47704200______58_84_49209420______58_840_59103160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59668260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_47704200______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59668160(),_5813_47705120______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49903280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49903280 = block;
   block->owner = (Object)__49904020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49903280;

   return block;
};

void code__49904020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59668640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49903280();
   }
      }
   }
}

Block make__49904020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49904020 = block;
   block->owner = (Object)__49881520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49904020;

   return block;
};

Block __50329860;

Block __50329540;

Block __50329220;

void code__50329220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_49516360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,lv0_48865700_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59667740(),lvok0_49683760_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__50329220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50329220 = block;
   block->owner = (Object)__50329540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50329220;

   return block;
};

void code__50329540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59667960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50329220();
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
                  src0 = _5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59667500();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59667400(),_5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__50329540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50329540 = block;
   block->owner = (Object)__50329860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50329540;

   return block;
};

void code__50329860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59668080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50329540();
   }
      }
   }
}

Block make__50329860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50329860 = block;
   block->owner = (Object)__49881520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50329860;

   return block;
};

Block __52157340;

Block __52156860;

Block __52156700;

void code__52156700() {
}

Block make__52156700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52156700 = block;
   block->owner = (Object)__52156860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52156700;

   return block;
};

Block __52996860;

void code__52996860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49397820_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52996860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52996860 = block;
   block->owner = (Object)__52156860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52996860;

   return block;
};

void code__52156860() {
 code__52156700();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49397820_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
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
                              src0 = lv0_48865700_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49683800_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59666840();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49397820_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__52996860();
}

Block make__52156860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52156860 = block;
   block->owner = (Object)__52157340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52156860;

   return block;
};

void code__52157340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59667240(),ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59667180(),run_49683620_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__52156860();
}

Block make__52157340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52157340 = block;
   block->owner = (Object)__49881520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52157340;

   return block;
};

Block __53203920;

Block __53203600;

Block __53203280;

void code__53203280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_49630600_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,lv1_49261540_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59666380(),lvok1_49683660_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53203280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53203280 = block;
   block->owner = (Object)__53203600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53203280;

   return block;
};

void code__53203600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59666540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53203280();
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
                  src0 = _58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59666260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59666160(),_58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53203600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53203600 = block;
   block->owner = (Object)__53203920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53203600;

   return block;
};

void code__53203920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59666640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53203600();
   }
      }
   }
}

Block make__53203920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53203920 = block;
   block->owner = (Object)__49881520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53203920;

   return block;
};

Block __53458520;

Block __53458040;

Block __53457880;

void code__53457880() {
}

Block make__53457880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53457880 = block;
   block->owner = (Object)__53458040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53457880;

   return block;
};

Block __54428980;

void code__54428980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_49562940_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__54428980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54428980 = block;
   block->owner = (Object)__53458040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54428980;

   return block;
};

void code__53458040() {
 code__53457880();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_49562940_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
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
                              src0 = lv1_49261540_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49683800_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59665440();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_49562940_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__54428980();
}

Block make__53458040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53458040 = block;
   block->owner = (Object)__53458520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53458040;

   return block;
};

void code__53458520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59666000(),ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59665940(),run_49683620_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__53458040();
}

Block make__53458520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53458520 = block;
   block->owner = (Object)__49881520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53458520;

   return block;
};

void code__49881520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59668720(),run_49683620_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__49904020();
 code__50329860();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49683760_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         src1 = rvok_49683640_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52157340();
   }
      }
   }
 code__53203920();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49683660_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         src1 = rvok_49683640_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53458520();
   }
      }
   }
}

Block make__49881520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49881520 = block;
   block->owner = (Object)__49683480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49881520;

   return block;
};

Block __49679300;

void code__49679300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59665220(),rvok_49683640_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59665160(),lvok0_49683760_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59665100(),av0_49397820_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59665040(),lvok1_49683660_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59664980(),av1_49562940_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49679300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49679300 = block;
   block->owner = (Object)__49683480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49679300;

   return block;
};

void code__49683480() {
 code__49683300();
 code__49682080();
 code__49680900();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59668940(),ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59668880(),run_49683620_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_49312240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         src1 = run_49683620_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49881520();
   }
   else {
  code__49679300();
   }
      }
   }
}

Block make__49683480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49683480 = block;
   block->owner = (Object)__54594780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49683480;

   return block;
};

Block __59440640;

void code__59440640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58176_49984640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59440640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59440640 = block;
   block->owner = (Object)__59440460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59440640;

   return block;
};

Block __59440400;

void code__59440400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_49984640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59440400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59440400 = block;
   block->owner = (Object)__59440200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59440400;

   return block;
};

Block __59439900;

void code__59439900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58177_51879420_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59439900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59439900 = block;
   block->owner = (Object)__59439700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59439900;

   return block;
};

Block __59439660;

void code__59439660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_51879420_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59439660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59439660 = block;
   block->owner = (Object)__59439440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59439660;

   return block;
};

Block __59439140;

void code__59439140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58191_53074080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59439140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59439140 = block;
   block->owner = (Object)__59438980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59439140;

   return block;
};

Block __59438940;

void code__59438940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_53074080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59438940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59438940 = block;
   block->owner = (Object)__59438780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59438940;

   return block;
};

Block __59438460;

void code__59438460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58192_53174640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59438460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59438460 = block;
   block->owner = (Object)__59438280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59438460;

   return block;
};

Block __59438220;

void code__59438220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58192_53174640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59438220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59438220 = block;
   block->owner = (Object)__59438020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59438220;

   return block;
};

Block __59436340;

void code__59436340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_54592220_winc_58190_54592600_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59436340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59436340 = block;
   block->owner = (Object)__59436140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59436340;

   return block;
};

Block __59436100;

void code__59436100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,abus__w_54592220_winc_58190_54592600_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59436100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59436100 = block;
   block->owner = (Object)__59435880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59436100;

   return block;
};

Block __59434660;

void code__59434660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51874500_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59434660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59434660 = block;
   block->owner = (Object)__59434500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59434660;

   return block;
};

Block __59434460;

void code__59434460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,reg__0_51874500_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59434460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59434460 = block;
   block->owner = (Object)__59434300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59434460;

   return block;
};

Block __59433960;

void code__59433960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50214360_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,_58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59433960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59433960 = block;
   block->owner = (Object)__59433740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59433960;

   return block;
};

Block __59433700;

void code__59433700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,reg__1_50214360_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59433700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59433700 = block;
   block->owner = (Object)__59433500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59433700;

   return block;
};

Block __53028060;

Block __53059280;

Block __53058960;

void code__53058960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,lv0_52738380_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59662680(),lvok0_53028260_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53058960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53058960 = block;
   block->owner = (Object)__53059280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53058960;

   return block;
};

Block __53270540;

void code__53270540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_49984640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,rv0_52950920_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59662540(),rvok0_53028220_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53270540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53270540 = block;
   block->owner = (Object)__53059280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53270540;

   return block;
};

Block __53522220;

Block __53521740;

void code__53521740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_52738380_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      src1 = rv0_52950920_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53521740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53521740 = block;
   block->owner = (Object)__53522220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53521740;

   return block;
};

void code__53522220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59662380(),run_53028180_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59842520(),ack__add_49311920_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__53521740();
}

Block make__53522220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53522220 = block;
   block->owner = (Object)__53059280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53522220;

   return block;
};

Block __54183900;

void code__54183900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,lv1_52783180_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59842200(),lvok1_53028240_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__54183900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54183900 = block;
   block->owner = (Object)__53059280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54183900;

   return block;
};

Block __54428260;

void code__54428260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_51879420_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,rv1_53028280_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59842060(),rvok1_53028200_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__54428260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54428260 = block;
   block->owner = (Object)__53059280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54428260;

   return block;
};

Block __42466720;

Block __42461960;

void code__42461960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_52783180_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      src1 = rv1_53028280_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__42461960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42461960 = block;
   block->owner = (Object)__42466720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42461960;

   return block;
};

void code__42466720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59841900(),run_53028180_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59841820(),ack__add_49311920_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__42461960();
}

Block make__42466720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42466720 = block;
   block->owner = (Object)__53059280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42466720;

   return block;
};

void code__53059280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59662820(),run_53028180_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__53058960();
 code__53270540();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53028260_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         src1 = rvok0_53028220_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53522220();
   }
      }
   }
 code__54183900();
 code__54428260();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_53028240_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         src1 = rvok1_53028200_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42466720();
   }
      }
   }
}

Block make__53059280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53059280 = block;
   block->owner = (Object)__53028060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53059280;

   return block;
};

Block __53027580;

void code__53027580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59841460(),lvok0_53028260_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59841400(),rvok0_53028220_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59841340(),lvok1_53028240_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59841220(),rvok1_53028200_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53027580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53027580 = block;
   block->owner = (Object)__53028060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53027580;

   return block;
};

void code__53028060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59663040(),ack__add_49311920_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59662980(),run_53028180_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_49311940_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         src1 = run_53028180_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53059280();
   }
   else {
  code__53027580();
   }
      }
   }
}

Block make__53028060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53028060 = block;
   block->owner = (Object)__49312560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53028060;

   return block;
};

Value make__59669580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59669500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59669440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59669360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59669280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59669220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59669140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59669060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59669000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59668940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59668880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59668720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59668640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59668540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59668380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59668260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59668160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59668080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59667960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59667740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59667500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59667400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59667240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59667180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59666840() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59666640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59666540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59666380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59666260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59666160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59666000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59665940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59665440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59665220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59665160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59665100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59665040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59664980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59663040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59662980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59662820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59662680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59662540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59662380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59842520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59842200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59842060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59841900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59841820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59841460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59841400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59841340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59841220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59839940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59839800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59839720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59839640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59839320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59839160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59839020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59838940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59838860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59838780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59838720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59838640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59838560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59838500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59838380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59838240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59838140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59838080() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59838000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59837860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59837760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59837700() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59837600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59837460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59837380() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59837320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59837260() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59837100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer__hidden_58_84_49667680;

SignalI req__mac_49312240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makereq__mac_49312240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_49312240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
   signalI->name = "req_mac";
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

SignalI ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeack_49312000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI ack__mac_49311940_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeack__mac_49311940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_49311940_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI ack__add_49311920_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeack__add_49311920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_49311920_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _5897_49516360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_5897_49516360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_49516360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_5895_49516320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_5896_49516240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58126_49630600_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58126_49630600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_49630600_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58124_49630580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58125_49630480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58143_49771700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58144_49866180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58176_49984640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58176_49984640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58176_49984640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58177_51879420_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58177_51879420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58177_51879420_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58206_50193080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58207_52022140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI value__z0_52219840_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makevalue__z0_52219840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_52219840_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI value__z1_52524760_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makevalue__z1_52524760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_52524760_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI value__a00_52641320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makevalue__a00_52641320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_52641320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI value__a01_52733740_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makevalue__a01_52733740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a01_52733740_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI flag__z0_52733720_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeflag__z0_52733720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_52733720_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI flag__z1_52733700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeflag__z1_52733700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_52733700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI ack__a00_52733680_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeack__a00_52733680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_52733680_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI ack__a01_52733660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeack__a01_52733660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a01_52733660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_5899_52733640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58100_52733560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58101_52850480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58101_52850480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_52850480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58128_52850460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58129_52850360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58130_52967320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58130_52967320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_52967320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58191_53074080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58191_53074080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58191_53074080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58192_53174640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58192_53174640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58192_53174640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SignalI _58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI make_58193_53174540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49667680;
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

SystemI counter0_53255900;

SystemI makecounter0_53255900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter0_53255900 = systemI;
   systemI->owner = (Object)layer__hidden_58_84_49667680;
   systemI->name = "counter0";
   systemI->system = counter0_58_840_53200860;

   return systemI;
};

SystemI func0_53056820;

SystemI makefunc0_53056820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_53056820 = systemI;
   systemI->owner = (Object)layer__hidden_58_84_49667680;
   systemI->name = "func0";
   systemI->system = func0_58_840_52772800;

   return systemI;
};

SystemI func1_49698180;

SystemI makefunc1_49698180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_49698180 = systemI;
   systemI->owner = (Object)layer__hidden_58_84_49667680;
   systemI->name = "func1";
   systemI->system = func1_58_840_49228300;

   return systemI;
};

Scope channel__w0_5883_49667380;

SignalI trig__r_49664180_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI maketrig__r_49664180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49664180_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49667380;
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

SignalI trig__w_49664160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI maketrig__w_49664160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49664160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49667380;
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

SignalI dbus__r_49752240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makedbus__r_49752240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49752240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49667380;
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

SignalI dbus__w_49837340_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makedbus__w_49837340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49837340_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49667380;
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

SignalI abus__r_49837240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__r_49837240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49837240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49667380;
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

SignalI abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__w_49837160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49667380;
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

SignalI mem_49918760_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makemem_49918760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49918760_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49667380;
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

Scope raddr_5884_49666980;

Scope makeraddr_5884_49666980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_49666980 = scope;
   scope->owner = (Object)channel__w0_5883_49667380;
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

Scope waddr_5889_49666560;

Scope makewaddr_5889_49666560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_49666560 = scope;
   scope->owner = (Object)channel__w0_5883_49667380;
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

Scope rinc_5894_49666040;

Scope makerinc_5894_49666040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_49666040 = scope;
   scope->owner = (Object)channel__w0_5883_49667380;
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

Scope winc_5898_49665620;

Scope makewinc_5898_49665620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_49665620 = scope;
   scope->owner = (Object)channel__w0_5883_49667380;
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

Scope rdec_58102_49665200;

Scope makerdec_58102_49665200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_49665200 = scope;
   scope->owner = (Object)channel__w0_5883_49667380;
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

Scope wdec_58107_49664680;

Scope makewdec_58107_49664680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_49664680 = scope;
   scope->owner = (Object)channel__w0_5883_49667380;
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

Behavior __49666580;

Behavior make__49666580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49666580 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_neg += 1;
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->neg = realloc(clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->neg,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_neg*sizeof(Object));
clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->neg[clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_neg-1] = (Object)behavior;
   behavior->block = make__47601440();

   return behavior;
}

Behavior __59340420;

Behavior make__59340420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59340420 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49752240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   dbus__r_49752240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   dbus__r_49752240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(dbus__r_49752240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,dbus__r_49752240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
dbus__r_49752240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[dbus__r_49752240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59340580();

   return behavior;
}

Behavior __59340220;

Behavior make__59340220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59340220 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_49516360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _5897_49516360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _5897_49516360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_5897_49516360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_5897_49516360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5897_49516360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_5897_49516360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59340380();

   return behavior;
}

Behavior __59339700;

Behavior make__59339700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59339700 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49664180_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   trig__r_49664180_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   trig__r_49664180_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(trig__r_49664180_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,trig__r_49664180_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
trig__r_49664180_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[trig__r_49664180_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59339880();

   return behavior;
}

Behavior __59339460;

Behavior make__59339460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59339460 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_5895_49516320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59339620();

   return behavior;
}

Behavior __59338900;

Behavior make__59338900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59338900 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49837240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   abus__r_49837240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   abus__r_49837240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(abus__r_49837240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,abus__r_49837240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
abus__r_49837240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[abus__r_49837240_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59339120();

   return behavior;
}

Behavior __59338700;

Behavior make__59338700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59338700 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_5896_49516240_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59338860();

   return behavior;
}

Behavior __59338240;

Behavior make__59338240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59338240 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49664160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   trig__w_49664160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   trig__w_49664160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(trig__w_49664160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,trig__w_49664160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
trig__w_49664160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[trig__w_49664160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59338400();

   return behavior;
}

Behavior __59338040;

Behavior make__59338040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59338040 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_5899_52733640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59338200();

   return behavior;
}

Behavior __59337480;

Behavior make__59337480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59337480 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[abus__w_49837160_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59337700();

   return behavior;
}

Behavior __59337280;

Behavior make__59337280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59337280 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58100_52733560_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59337440();

   return behavior;
}

Behavior __59336720;

Behavior make__59336720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59336720 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49837340_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   dbus__w_49837340_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   dbus__w_49837340_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(dbus__w_49837340_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,dbus__w_49837340_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
dbus__w_49837340_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[dbus__w_49837340_channel__w0_5883_49667380_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59336940();

   return behavior;
}

Behavior __59336520;

Behavior make__59336520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59336520 = behavior;
   behavior->owner = (Object)channel__w0_5883_49667380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_52850480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58101_52850480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58101_52850480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58101_52850480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58101_52850480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58101_52850480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58101_52850480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59336680();

   return behavior;
}

Scope makechannel__w0_5883_49667380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_49667380 = scope;
   scope->owner = (Object)layer__hidden_58_84_49667680;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49664180();
   scope->inners[1] = maketrig__w_49664160();
   scope->inners[2] = makedbus__r_49752240();
   scope->inners[3] = makedbus__w_49837340();
   scope->inners[4] = makeabus__r_49837240();
   scope->inners[5] = makeabus__w_49837160();
   scope->inners[6] = makemem_49918760();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_49666980();
   scope->scopes[1] = makewaddr_5889_49666560();
   scope->scopes[2] = makerinc_5894_49666040();
   scope->scopes[3] = makewinc_5898_49665620();
   scope->scopes[4] = makerdec_58102_49665200();
   scope->scopes[5] = makewdec_58107_49664680();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49666580();
   scope->behaviors[1] = make__59340420();
   scope->behaviors[2] = make__59340220();
   scope->behaviors[3] = make__59339700();
   scope->behaviors[4] = make__59339460();
   scope->behaviors[5] = make__59338900();
   scope->behaviors[6] = make__59338700();
   scope->behaviors[7] = make__59338240();
   scope->behaviors[8] = make__59338040();
   scope->behaviors[9] = make__59337480();
   scope->behaviors[10] = make__59337280();
   scope->behaviors[11] = make__59336720();
   scope->behaviors[12] = make__59336520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_49666180;

SignalI trig__r_49661860_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI maketrig__r_49661860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49661860_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w1_58112_49666180;
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

SignalI trig__w_49661800_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI maketrig__w_49661800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49661800_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w1_58112_49666180;
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

SignalI dbus__r_49770940_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makedbus__r_49770940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49770940_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w1_58112_49666180;
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

SignalI dbus__w_49853600_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makedbus__w_49853600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49853600_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w1_58112_49666180;
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

SignalI abus__r_49853520_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__r_49853520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49853520_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w1_58112_49666180;
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

SignalI abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__w_49853440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w1_58112_49666180;
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

SignalI mem_49933020_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makemem_49933020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49933020_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w1_58112_49666180;
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

Scope raddr_58113_49665700;

Scope makeraddr_58113_49665700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_49665700 = scope;
   scope->owner = (Object)channel__w1_58112_49666180;
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

Scope waddr_58118_49664860;

Scope makewaddr_58118_49664860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_49664860 = scope;
   scope->owner = (Object)channel__w1_58112_49666180;
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

Scope rinc_58123_49663980;

Scope makerinc_58123_49663980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_49663980 = scope;
   scope->owner = (Object)channel__w1_58112_49666180;
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

Scope winc_58127_49663520;

Scope makewinc_58127_49663520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_49663520 = scope;
   scope->owner = (Object)channel__w1_58112_49666180;
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

Scope rdec_58131_49663060;

Scope makerdec_58131_49663060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_49663060 = scope;
   scope->owner = (Object)channel__w1_58112_49666180;
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

Scope wdec_58136_49662360;

Scope makewdec_58136_49662360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_49662360 = scope;
   scope->owner = (Object)channel__w1_58112_49666180;
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

Behavior __49275280;

Behavior make__49275280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49275280 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_neg += 1;
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->neg = realloc(clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->neg,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_neg*sizeof(Object));
clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->neg[clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_neg-1] = (Object)behavior;
   behavior->block = make__49292740();

   return behavior;
}

Behavior __59334700;

Behavior make__59334700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59334700 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49770940_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   dbus__r_49770940_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   dbus__r_49770940_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(dbus__r_49770940_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,dbus__r_49770940_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
dbus__r_49770940_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[dbus__r_49770940_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59334880();

   return behavior;
}

Behavior __59424520;

Behavior make__59424520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59424520 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_49630600_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58126_49630600_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58126_49630600_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58126_49630600_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58126_49630600_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58126_49630600_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58126_49630600_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59424720();

   return behavior;
}

Behavior __59424060;

Behavior make__59424060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59424060 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49661860_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   trig__r_49661860_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   trig__r_49661860_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(trig__r_49661860_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,trig__r_49661860_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
trig__r_49661860_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[trig__r_49661860_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59424220();

   return behavior;
}

Behavior __59423860;

Behavior make__59423860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59423860 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58124_49630580_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59424020();

   return behavior;
}

Behavior __59423160;

Behavior make__59423160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59423160 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49853520_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   abus__r_49853520_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   abus__r_49853520_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(abus__r_49853520_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,abus__r_49853520_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
abus__r_49853520_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[abus__r_49853520_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59423360();

   return behavior;
}

Behavior __59422960;

Behavior make__59422960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59422960 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58125_49630480_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59423120();

   return behavior;
}

Behavior __59422460;

Behavior make__59422460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59422460 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49661800_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   trig__w_49661800_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   trig__w_49661800_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(trig__w_49661800_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,trig__w_49661800_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
trig__w_49661800_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[trig__w_49661800_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59422640();

   return behavior;
}

Behavior __59422200;

Behavior make__59422200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59422200 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58128_52850460_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59422400();

   return behavior;
}

Behavior __59421740;

Behavior make__59421740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59421740 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[abus__w_49853440_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59421900();

   return behavior;
}

Behavior __59421520;

Behavior make__59421520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59421520 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58129_52850360_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59421700();

   return behavior;
}

Behavior __59420980;

Behavior make__59420980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59420980 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49853600_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   dbus__w_49853600_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   dbus__w_49853600_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(dbus__w_49853600_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,dbus__w_49853600_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
dbus__w_49853600_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[dbus__w_49853600_channel__w1_58112_49666180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59421140();

   return behavior;
}

Behavior __59420780;

Behavior make__59420780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59420780 = behavior;
   behavior->owner = (Object)channel__w1_58112_49666180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_52967320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58130_52967320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58130_52967320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58130_52967320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58130_52967320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58130_52967320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58130_52967320_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59420940();

   return behavior;
}

Scope makechannel__w1_58112_49666180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_49666180 = scope;
   scope->owner = (Object)layer__hidden_58_84_49667680;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49661860();
   scope->inners[1] = maketrig__w_49661800();
   scope->inners[2] = makedbus__r_49770940();
   scope->inners[3] = makedbus__w_49853600();
   scope->inners[4] = makeabus__r_49853520();
   scope->inners[5] = makeabus__w_49853440();
   scope->inners[6] = makemem_49933020();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_49665700();
   scope->scopes[1] = makewaddr_58118_49664860();
   scope->scopes[2] = makerinc_58123_49663980();
   scope->scopes[3] = makewinc_58127_49663520();
   scope->scopes[4] = makerdec_58131_49663060();
   scope->scopes[5] = makewdec_58136_49662360();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49275280();
   scope->behaviors[1] = make__59334700();
   scope->behaviors[2] = make__59424520();
   scope->behaviors[3] = make__59424060();
   scope->behaviors[4] = make__59423860();
   scope->behaviors[5] = make__59423160();
   scope->behaviors[6] = make__59422960();
   scope->behaviors[7] = make__59422460();
   scope->behaviors[8] = make__59422200();
   scope->behaviors[9] = make__59421740();
   scope->behaviors[10] = make__59421520();
   scope->behaviors[11] = make__59420980();
   scope->behaviors[12] = make__59420780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_49275160;

SignalI reg__0_49758060_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makereg__0_49758060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49758060_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__accum_58141_49275160;
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

SignalI reg__1_49883240_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makereg__1_49883240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49883240_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__accum_58141_49275160;
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

Scope anum_58142_49503800;

Scope makeanum_58142_49503800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_49503800 = scope;
   scope->owner = (Object)channel__accum_58141_49275160;
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

Scope raddr_58145_49503340;

Scope makeraddr_58145_49503340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_49503340 = scope;
   scope->owner = (Object)channel__accum_58141_49275160;
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

Scope waddr_58149_49502900;

Scope makewaddr_58149_49502900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_49502900 = scope;
   scope->owner = (Object)channel__accum_58141_49275160;
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

Scope rinc_58153_49502360;

SignalI abus__r_49501580_rinc_58153_49502360_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__r_49501580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49501580_rinc_58153_49502360_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rinc_58153_49502360;
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

Scope makerinc_58153_49502360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_49502360 = scope;
   scope->owner = (Object)channel__accum_58141_49275160;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49501580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_49501440;

SignalI abus__w_49501000_winc_58158_49501440_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__w_49501000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49501000_winc_58158_49501440_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)winc_58158_49501440;
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

Scope makewinc_58158_49501440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_49501440 = scope;
   scope->owner = (Object)channel__accum_58141_49275160;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49501000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_49500880;

SignalI abus__r_49500500_rdec_58163_49500880_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__r_49500500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49500500_rdec_58163_49500880_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rdec_58163_49500880;
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

Scope makerdec_58163_49500880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_49500880 = scope;
   scope->owner = (Object)channel__accum_58141_49275160;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49500500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_49500380;

SignalI abus__w_49499760_wdec_58168_49500380_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__w_49499760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49499760_wdec_58168_49500380_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)wdec_58168_49500380;
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

Scope makewdec_58168_49500380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_49500380 = scope;
   scope->owner = (Object)channel__accum_58141_49275160;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49499760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59418900;

Behavior make__59418900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59418900 = behavior;
   behavior->owner = (Object)channel__accum_58141_49275160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49758060_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   reg__0_49758060_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   reg__0_49758060_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(reg__0_49758060_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,reg__0_49758060_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__0_49758060_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[reg__0_49758060_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59419060();

   return behavior;
}

Behavior __59418700;

Behavior make__59418700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59418700 = behavior;
   behavior->owner = (Object)channel__accum_58141_49275160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58143_49771700_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59418860();

   return behavior;
}

Behavior __59418200;

Behavior make__59418200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59418200 = behavior;
   behavior->owner = (Object)channel__accum_58141_49275160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49883240_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   reg__1_49883240_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   reg__1_49883240_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(reg__1_49883240_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,reg__1_49883240_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__1_49883240_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[reg__1_49883240_channel__accum_58141_49275160_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59418400();

   return behavior;
}

Behavior __59417940;

Behavior make__59417940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59417940 = behavior;
   behavior->owner = (Object)channel__accum_58141_49275160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58144_49866180_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59418160();

   return behavior;
}

Scope makechannel__accum_58141_49275160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_49275160 = scope;
   scope->owner = (Object)layer__hidden_58_84_49667680;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49758060();
   scope->inners[1] = makereg__1_49883240();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_49503800();
   scope->scopes[1] = makeraddr_58145_49503340();
   scope->scopes[2] = makewaddr_58149_49502900();
   scope->scopes[3] = makerinc_58153_49502360();
   scope->scopes[4] = makewinc_58158_49501440();
   scope->scopes[5] = makerdec_58163_49500880();
   scope->scopes[6] = makewdec_58168_49500380();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59418900();
   scope->behaviors[1] = make__59418700();
   scope->behaviors[2] = make__59418200();
   scope->behaviors[3] = make__59417940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_47843520;

SignalI lv0_48865700_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makelv0_48865700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48865700_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58173_47843520;
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

SignalI lv1_49261540_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makelv1_49261540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49261540_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58173_47843520;
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

SignalI av0_49397820_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeav0_49397820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49397820_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58173_47843520;
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

SignalI av1_49562940_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeav1_49562940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_49562940_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58173_47843520;
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

SignalI rv_49683800_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makerv_49683800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49683800_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58173_47843520;
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

SignalI lvok0_49683760_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makelvok0_49683760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49683760_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58173_47843520;
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

SignalI lvok1_49683660_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makelvok1_49683660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49683660_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58173_47843520;
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

SignalI rvok_49683640_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makervok_49683640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49683640_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58173_47843520;
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

SignalI run_49683620_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makerun_49683620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49683620_mac__n1_58173_47843520_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58173_47843520;
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

Behavior __54594780;

Behavior make__54594780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54594780 = behavior;
   behavior->owner = (Object)mac__n1_58173_47843520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos += 1;
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos = realloc(clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos*sizeof(Object));
clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos[clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos-1] = (Object)behavior;
   behavior->block = make__49683480();

   return behavior;
}

Scope makemac__n1_58173_47843520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_47843520 = scope;
   scope->owner = (Object)layer__hidden_58_84_49667680;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48865700();
   scope->inners[1] = makelv1_49261540();
   scope->inners[2] = makeav0_49397820();
   scope->inners[3] = makeav1_49562940();
   scope->inners[4] = makerv_49683800();
   scope->inners[5] = makelvok0_49683760();
   scope->inners[6] = makelvok1_49683660();
   scope->inners[7] = makervok_49683640();
   scope->inners[8] = makerun_49683620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54594780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58174_54594660;

SignalI reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makereg__0_45685580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__bias_58174_54594660;
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

SignalI reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makereg__1_47665920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__bias_58174_54594660;
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

Scope anum_58175_54594360;

Scope makeanum_58175_54594360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58175_54594360 = scope;
   scope->owner = (Object)channel__bias_58174_54594660;
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

Scope raddr_58178_54593940;

Scope makeraddr_58178_54593940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58178_54593940 = scope;
   scope->owner = (Object)channel__bias_58174_54594660;
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

Scope waddr_58182_54593520;

Scope makewaddr_58182_54593520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58182_54593520 = scope;
   scope->owner = (Object)channel__bias_58174_54594660;
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

Scope rinc_58186_54593100;

SignalI abus__r_54592720_rinc_58186_54593100_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__r_54592720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54592720_rinc_58186_54593100_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rinc_58186_54593100;
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

Scope makerinc_58186_54593100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58186_54593100 = scope;
   scope->owner = (Object)channel__bias_58174_54594660;
   scope->name = "rinc:186";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54592720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58190_54592600;

SignalI abus__w_54592220_winc_58190_54592600_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__w_54592220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54592220_winc_58190_54592600_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)winc_58190_54592600;
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

Behavior __59436140;

Behavior make__59436140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59436140 = behavior;
   behavior->owner = (Object)winc_58190_54592600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_54592220_winc_58190_54592600_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   abus__w_54592220_winc_58190_54592600_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   abus__w_54592220_winc_58190_54592600_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(abus__w_54592220_winc_58190_54592600_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,abus__w_54592220_winc_58190_54592600_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
abus__w_54592220_winc_58190_54592600_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[abus__w_54592220_winc_58190_54592600_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59436340();

   return behavior;
}

Behavior __59435880;

Behavior make__59435880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59435880 = behavior;
   behavior->owner = (Object)winc_58190_54592600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58193_53174540_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59436100();

   return behavior;
}

Scope makewinc_58190_54592600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58190_54592600 = scope;
   scope->owner = (Object)channel__bias_58174_54594660;
   scope->name = "winc:190";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54592220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59436140();
   scope->behaviors[1] = make__59435880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58194_54591840;

SignalI abus__r_54599620_rdec_58194_54591840_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__r_54599620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54599620_rdec_58194_54591840_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rdec_58194_54591840;
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

Scope makerdec_58194_54591840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58194_54591840 = scope;
   scope->owner = (Object)channel__bias_58174_54594660;
   scope->name = "rdec:194";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54599620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58199_54599480;

SignalI abus__w_54599060_wdec_58199_54599480_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__w_54599060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54599060_wdec_58199_54599480_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)wdec_58199_54599480;
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

Scope makewdec_58199_54599480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58199_54599480 = scope;
   scope->owner = (Object)channel__bias_58174_54594660;
   scope->name = "wdec:199";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54599060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59440460;

Behavior make__59440460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59440460 = behavior;
   behavior->owner = (Object)channel__bias_58174_54594660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59440640();

   return behavior;
}

Behavior __59440200;

Behavior make__59440200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59440200 = behavior;
   behavior->owner = (Object)channel__bias_58174_54594660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58176_49984640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58176_49984640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58176_49984640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58176_49984640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58176_49984640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58176_49984640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58176_49984640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59440400();

   return behavior;
}

Behavior __59439700;

Behavior make__59439700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59439700 = behavior;
   behavior->owner = (Object)channel__bias_58174_54594660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59439900();

   return behavior;
}

Behavior __59439440;

Behavior make__59439440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59439440 = behavior;
   behavior->owner = (Object)channel__bias_58174_54594660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58177_51879420_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58177_51879420_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58177_51879420_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58177_51879420_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58177_51879420_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58177_51879420_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58177_51879420_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59439660();

   return behavior;
}

Behavior __59438980;

Behavior make__59438980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59438980 = behavior;
   behavior->owner = (Object)channel__bias_58174_54594660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[reg__0_45685580_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59439140();

   return behavior;
}

Behavior __59438780;

Behavior make__59438780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59438780 = behavior;
   behavior->owner = (Object)channel__bias_58174_54594660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58191_53074080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58191_53074080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58191_53074080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58191_53074080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58191_53074080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58191_53074080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58191_53074080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59438940();

   return behavior;
}

Behavior __59438280;

Behavior make__59438280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59438280 = behavior;
   behavior->owner = (Object)channel__bias_58174_54594660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[reg__1_47665920_channel__bias_58174_54594660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59438460();

   return behavior;
}

Behavior __59438020;

Behavior make__59438020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59438020 = behavior;
   behavior->owner = (Object)channel__bias_58174_54594660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58192_53174640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58192_53174640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58192_53174640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58192_53174640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58192_53174640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58192_53174640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58192_53174640_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59438220();

   return behavior;
}

Scope makechannel__bias_58174_54594660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58174_54594660 = scope;
   scope->owner = (Object)layer__hidden_58_84_49667680;
   scope->name = "channel_bias:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_45685580();
   scope->inners[1] = makereg__1_47665920();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58175_54594360();
   scope->scopes[1] = makeraddr_58178_54593940();
   scope->scopes[2] = makewaddr_58182_54593520();
   scope->scopes[3] = makerinc_58186_54593100();
   scope->scopes[4] = makewinc_58190_54592600();
   scope->scopes[5] = makerdec_58194_54591840();
   scope->scopes[6] = makewdec_58199_54599480();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59440460();
   scope->behaviors[1] = make__59440200();
   scope->behaviors[2] = make__59439700();
   scope->behaviors[3] = make__59439440();
   scope->behaviors[4] = make__59438980();
   scope->behaviors[5] = make__59438780();
   scope->behaviors[6] = make__59438280();
   scope->behaviors[7] = make__59438020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58204_49996900;

SignalI reg__0_51874500_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makereg__0_51874500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51874500_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__z_58204_49996900;
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

SignalI reg__1_50214360_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makereg__1_50214360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50214360_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__z_58204_49996900;
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

Scope anum_58205_49996480;

Scope makeanum_58205_49996480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58205_49996480 = scope;
   scope->owner = (Object)channel__z_58204_49996900;
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

Scope raddr_58208_50044860;

Scope makeraddr_58208_50044860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58208_50044860 = scope;
   scope->owner = (Object)channel__z_58204_49996900;
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

Scope waddr_58212_50044440;

Scope makewaddr_58212_50044440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58212_50044440 = scope;
   scope->owner = (Object)channel__z_58204_49996900;
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

Scope rinc_58216_50042620;

SignalI abus__r_50041220_rinc_58216_50042620_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__r_50041220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50041220_rinc_58216_50042620_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rinc_58216_50042620;
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

Scope makerinc_58216_50042620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58216_50042620 = scope;
   scope->owner = (Object)channel__z_58204_49996900;
   scope->name = "rinc:216";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50041220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58220_50041020;

SignalI abus__w_50040460_winc_58220_50041020_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__w_50040460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50040460_winc_58220_50041020_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)winc_58220_50041020;
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

Scope makewinc_58220_50041020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58220_50041020 = scope;
   scope->owner = (Object)channel__z_58204_49996900;
   scope->name = "winc:220";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50040460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58224_50040340;

SignalI abus__r_50039920_rdec_58224_50040340_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__r_50039920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50039920_rdec_58224_50040340_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rdec_58224_50040340;
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

Scope makerdec_58224_50040340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58224_50040340 = scope;
   scope->owner = (Object)channel__z_58204_49996900;
   scope->name = "rdec:224";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50039920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58229_50039740;

SignalI abus__w_50039200_wdec_58229_50039740_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeabus__w_50039200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50039200_wdec_58229_50039740_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)wdec_58229_50039740;
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

Scope makewdec_58229_50039740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58229_50039740 = scope;
   scope->owner = (Object)channel__z_58204_49996900;
   scope->name = "wdec:229";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50039200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59434500;

Behavior make__59434500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59434500 = behavior;
   behavior->owner = (Object)channel__z_58204_49996900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51874500_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   reg__0_51874500_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   reg__0_51874500_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(reg__0_51874500_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,reg__0_51874500_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__0_51874500_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[reg__0_51874500_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59434660();

   return behavior;
}

Behavior __59434300;

Behavior make__59434300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59434300 = behavior;
   behavior->owner = (Object)channel__z_58204_49996900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58206_50193080_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59434460();

   return behavior;
}

Behavior __59433740;

Behavior make__59433740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59433740 = behavior;
   behavior->owner = (Object)channel__z_58204_49996900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50214360_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   reg__1_50214360_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   reg__1_50214360_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(reg__1_50214360_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,reg__1_50214360_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__1_50214360_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[reg__1_50214360_channel__z_58204_49996900_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59433960();

   return behavior;
}

Behavior __59433500;

Behavior make__59433500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59433500 = behavior;
   behavior->owner = (Object)channel__z_58204_49996900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   _58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   _58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(_58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,_58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[_58207_52022140_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59433700();

   return behavior;
}

Scope makechannel__z_58204_49996900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58204_49996900 = scope;
   scope->owner = (Object)layer__hidden_58_84_49667680;
   scope->name = "channel_z:204";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51874500();
   scope->inners[1] = makereg__1_50214360();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58205_49996480();
   scope->scopes[1] = makeraddr_58208_50044860();
   scope->scopes[2] = makewaddr_58212_50044440();
   scope->scopes[3] = makerinc_58216_50042620();
   scope->scopes[4] = makewinc_58220_50041020();
   scope->scopes[5] = makerdec_58224_50040340();
   scope->scopes[6] = makewdec_58229_50039740();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59434500();
   scope->behaviors[1] = make__59434300();
   scope->behaviors[2] = make__59433740();
   scope->behaviors[3] = make__59433500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58234_52603780;

SignalI lv0_52738380_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makelv0_52738380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52738380_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58234_52603780;
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

SignalI lv1_52783180_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makelv1_52783180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_52783180_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58234_52603780;
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

SignalI rv0_52950920_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makerv0_52950920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_52950920_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58234_52603780;
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

SignalI rv1_53028280_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makerv1_53028280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_53028280_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58234_52603780;
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

SignalI lvok0_53028260_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makelvok0_53028260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53028260_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58234_52603780;
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

SignalI lvok1_53028240_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makelvok1_53028240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_53028240_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58234_52603780;
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

SignalI rvok0_53028220_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makervok0_53028220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_53028220_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58234_52603780;
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

SignalI rvok1_53028200_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makervok1_53028200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_53028200_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58234_52603780;
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

SignalI run_53028180_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makerun_53028180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53028180_add__n_58234_52603780_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58234_52603780;
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

Behavior __49312560;

Behavior make__49312560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49312560 = behavior;
   behavior->owner = (Object)add__n_58234_52603780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos += 1;
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos = realloc(clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos*sizeof(Object));
clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos[clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos-1] = (Object)behavior;
   behavior->block = make__53028060();

   return behavior;
}

Scope makeadd__n_58234_52603780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58234_52603780 = scope;
   scope->owner = (Object)layer__hidden_58_84_49667680;
   scope->name = "add_n:234";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52738380();
   scope->inners[1] = makelv1_52783180();
   scope->inners[2] = makerv0_52950920();
   scope->inners[3] = makerv1_53028280();
   scope->inners[4] = makelvok0_53028260();
   scope->inners[5] = makelvok1_53028240();
   scope->inners[6] = makervok0_53028220();
   scope->inners[7] = makervok1_53028200();
   scope->inners[8] = makerun_53028180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49312560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53841580;

Behavior make__53841580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53841580 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_49667680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos += 1;
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos = realloc(clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos*sizeof(Object));
clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos[clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos-1] = (Object)behavior;
   behavior->block = make__53057060();

   return behavior;
}

Behavior __47193600;

Behavior make__47193600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47193600 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_49667680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos += 1;
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos = realloc(clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos*sizeof(Object));
clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos[clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos-1] = (Object)behavior;
   behavior->block = make__53841440();

   return behavior;
}

Behavior __49882960;

Behavior make__49882960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49882960 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_49667680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos += 1;
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos = realloc(clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos*sizeof(Object));
clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->pos[clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_pos-1] = (Object)behavior;
   behavior->block = make__47193340();

   return behavior;
}

Behavior __59324200;

Behavior make__59324200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59324200 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_49667680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_49898720_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   req_49898720_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   req_49898720_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(req_49898720_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,req_49898720_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
req_49898720_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[req_49898720_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_49311940_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   ack__mac_49311940_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   ack__mac_49311940_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(ack__mac_49311940_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,ack__mac_49311940_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
ack__mac_49311940_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[ack__mac_49311940_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59324440();

   return behavior;
}

Behavior __59341560;

Behavior make__59341560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59341560 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_49667680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[ack_49312000_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_52219840_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   value__z0_52219840_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   value__z0_52219840_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(value__z0_52219840_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,value__z0_52219840_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
value__z0_52219840_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[value__z0_52219840_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_52524760_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   value__z1_52524760_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   value__z1_52524760_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(value__z1_52524760_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,value__z1_52524760_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
value__z1_52524760_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[value__z1_52524760_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a00_52733680_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   ack__a00_52733680_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   ack__a00_52733680_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(ack__a00_52733680_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,ack__a00_52733680_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
ack__a00_52733680_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[ack__a00_52733680_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a01_52733660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   ack__a01_52733660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   ack__a01_52733660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(ack__a01_52733660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,ack__a01_52733660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
ack__a01_52733660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[ack__a01_52733660_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59324660();

   return behavior;
}

Behavior __59341380;

Behavior make__59341380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59341380 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_49667680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_53256040_counter0_58_840_53200860_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   ack__mac_53256040_counter0_58_840_53200860_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   ack__mac_53256040_counter0_58_840_53200860_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(ack__mac_53256040_counter0_58_840_53200860_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,ack__mac_53256040_counter0_58_840_53200860_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
ack__mac_53256040_counter0_58_840_53200860_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[ack__mac_53256040_counter0_58_840_53200860_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_53056980_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   a_53056980_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   a_53056980_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(a_53056980_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,a_53056980_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
a_53056980_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[a_53056980_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_49698540_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   a_49698540_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   a_49698540_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(a_49698540_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,a_49698540_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
a_49698540_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[a_49698540_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59324600();

   return behavior;
}

Scope makelayer__hidden_58_84_49667680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer__hidden_58_84_49667680 = scope;
   scope->owner = (Object)layer__hidden_58_840_49905400;
   scope->name = "layer_hidden:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter0_53255900();
   scope->systemIs[1] = makefunc0_53056820();
   scope->systemIs[2] = makefunc1_49698180();
   scope->num_inners = 33;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_49312240();
   scope->inners[1] = makeack_49312000();
   scope->inners[2] = makeack__mac_49311940();
   scope->inners[3] = makeack__add_49311920();
   scope->inners[4] = make_5897_49516360();
   scope->inners[5] = make_5895_49516320();
   scope->inners[6] = make_5896_49516240();
   scope->inners[7] = make_58126_49630600();
   scope->inners[8] = make_58124_49630580();
   scope->inners[9] = make_58125_49630480();
   scope->inners[10] = make_58143_49771700();
   scope->inners[11] = make_58144_49866180();
   scope->inners[12] = make_58176_49984640();
   scope->inners[13] = make_58177_51879420();
   scope->inners[14] = make_58206_50193080();
   scope->inners[15] = make_58207_52022140();
   scope->inners[16] = makevalue__z0_52219840();
   scope->inners[17] = makevalue__z1_52524760();
   scope->inners[18] = makevalue__a00_52641320();
   scope->inners[19] = makevalue__a01_52733740();
   scope->inners[20] = makeflag__z0_52733720();
   scope->inners[21] = makeflag__z1_52733700();
   scope->inners[22] = makeack__a00_52733680();
   scope->inners[23] = makeack__a01_52733660();
   scope->inners[24] = make_5899_52733640();
   scope->inners[25] = make_58100_52733560();
   scope->inners[26] = make_58101_52850480();
   scope->inners[27] = make_58128_52850460();
   scope->inners[28] = make_58129_52850360();
   scope->inners[29] = make_58130_52967320();
   scope->inners[30] = make_58191_53074080();
   scope->inners[31] = make_58192_53174640();
   scope->inners[32] = make_58193_53174540();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_49667380();
   scope->scopes[1] = makechannel__w1_58112_49666180();
   scope->scopes[2] = makechannel__accum_58141_49275160();
   scope->scopes[3] = makemac__n1_58173_47843520();
   scope->scopes[4] = makechannel__bias_58174_54594660();
   scope->scopes[5] = makechannel__z_58204_49996900();
   scope->scopes[6] = makeadd__n_58234_52603780();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53841580();
   scope->behaviors[1] = make__47193600();
   scope->behaviors[2] = make__49882960();
   scope->behaviors[3] = make__59324200();
   scope->behaviors[4] = make__59341560();
   scope->behaviors[5] = make__59341380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer__hidden_58_840_49905400() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer__hidden_58_840_49905400 = systemT;
systemT->owner = NULL;
   systemT->name = "layer_hidden:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_49898820();
   systemT->inputs[1] = makerst_49898780();
   systemT->inputs[2] = makefill_49898740();
   systemT->inputs[3] = makereq_49898720();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_49898540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer__hidden_58_84_49667680();

   return systemT;
}