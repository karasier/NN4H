#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_51654360;

SignalI clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeclk_54959740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)layer0_58_840_51654360;
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

SignalI rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makerst_54959720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)layer0_58_840_51654360;
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

SignalI req_54959700_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makereq_54959700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_54959700_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)layer0_58_840_51654360;
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

SignalI fill_54959680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makefill_54959680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_54959680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)layer0_58_840_51654360;
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

SignalI ack__0_54959640_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeack__0_54959640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_54959640_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)layer0_58_840_51654360;
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

Block __57074400;

Block __57147340;

Block __57147120;

void code__57147120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,value__z0_49640560___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55488260(),flag__z0_50187020___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__57147120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57147120 = block;
   block->owner = (Object)__57147340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57147120;

   return block;
};

Block __57310120;

void code__57310120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,value__z1_49907020___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55488120(),flag__z1_50186980___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__57310120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57310120 = block;
   block->owner = (Object)__57147340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57310120;

   return block;
};

void code__57147340() {
 code__57147120();
 code__57310120();
}

Block make__57147340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57147340 = block;
   block->owner = (Object)__57074400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57147340;

   return block;
};

Block __57074240;

void code__57074240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55488040(),flag__z0_50187020___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55487980(),flag__z1_50186980___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__57074240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57074240 = block;
   block->owner = (Object)__57074400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57074240;

   return block;
};

void code__57074400() {
   {
      Value cond = ack__add_51277140___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57147340();
   }
   else {
  code__57074240();
   }
      }
   }
}

Block make__57074400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57074400 = block;
   block->owner = (Object)__57659280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57074400;

   return block;
};

Block __57659160;

Block __57658860;

Block __57658700;

void code__57658700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_50051160___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_5832_50206960___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55487660(),ack__a00_50186960___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__57658700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57658700 = block;
   block->owner = (Object)__57658860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57658700;

   return block;
};

Block __45457920;

void code__45457920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a01_50187040___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_5833_50351640___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55487520(),ack__a01_50186900___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__45457920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45457920 = block;
   block->owner = (Object)__57658860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45457920;

   return block;
};

void code__57658860() {
 code__57658700();
 code__45457920();
}

Block make__57658860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57658860 = block;
   block->owner = (Object)__57659160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57658860;

   return block;
};

void code__57659160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_50187020___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         src1 = flag__z1_50186980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57658860();
   }
      }
   }
}

Block make__57659160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57659160 = block;
   block->owner = (Object)__47960820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57659160;

   return block;
};

Block __47960300;

Block __47959920;

Block __47958780;

void code__47958780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55487340(),_58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__47958780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47958780 = block;
   block->owner = (Object)__47959920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47958780;

   return block;
};

void code__47959920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55487440();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47958780();
   }
      }
   }
}

Block make__47959920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47959920 = block;
   block->owner = (Object)__47960300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47959920;

   return block;
};

Block __47979420;

Block __47977640;

void code__47977640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55487160(),_58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__47977640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47977640 = block;
   block->owner = (Object)__47979420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47977640;

   return block;
};

void code__47979420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55487240();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47977640();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55487080(),_58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__47979420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47979420 = block;
   block->owner = (Object)__47960300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47979420;

   return block;
};

Block __47975360;

Block __47992360;

void code__47992360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55486640(),_58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__47992360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47992360 = block;
   block->owner = (Object)__47975360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47992360;

   return block;
};

void code__47975360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55486880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47992360();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55486360(),_5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__47975360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47975360 = block;
   block->owner = (Object)__47960300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47975360;

   return block;
};

Block __48011440;

Block __48009860;

Block __48007520;

void code__48007520() {
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
                  src0 = _58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55485960();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55485860(),_5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_50989060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58101_50379380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__48007520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48007520 = block;
   block->owner = (Object)__48009860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48007520;

   return block;
};

void code__48009860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55486140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48007520();
   }
      }
   }
}

Block make__48009860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48009860 = block;
   block->owner = (Object)__48011440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48009860;

   return block;
};

Block __49926080;

Block __49925300;

void code__49925300() {
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
                  src0 = _58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55485560();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55485460(),_58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_50989060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58130_50519260___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__49925300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49925300 = block;
   block->owner = (Object)__49926080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49925300;

   return block;
};

void code__49926080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55485700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49925300();
   }
      }
   }
}

Block make__49926080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49926080 = block;
   block->owner = (Object)__48011440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49926080;

   return block;
};

Block __50464180;

Block __50463240;

Block __50494300;

void code__50494300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_50989060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58189_50644860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__50494300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50494300 = block;
   block->owner = (Object)__50463240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50494300;

   return block;
};

Block __51050580;

void code__51050580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_50989060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58190_50853180___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__51050580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51050580 = block;
   block->owner = (Object)__50463240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51050580;

   return block;
};

void code__50463240() {
{
      Value value = _58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__55485140())) {
    code__50494300();
         }
         else if (value2integer(value) == value2integer(make__55485040())) {
    code__51050580();
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
                  src0 = _58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55484780();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__50463240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50463240 = block;
   block->owner = (Object)__50464180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50463240;

   return block;
};

void code__50464180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55485300();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50463240();
   }
      }
   }
}

Block make__50464180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50464180 = block;
   block->owner = (Object)__48011440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50464180;

   return block;
};

void code__48011440() {
 code__48009860();
 code__49926080();
 code__50464180();
}

Block make__48011440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48011440 = block;
   block->owner = (Object)__47960300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48011440;

   return block;
};

void code__47960300() {
 code__47959920();
 code__47979420();
 code__47975360();
   {
      Value cond = fill_54959680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48011440();
   }
      }
   }
}

Block make__47960300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47960300 = block;
   block->owner = (Object)__51657300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47960300;

   return block;
};

Block __51656820;

Block __51656240;

void code__51656240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55484640(),req_54959700_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__51656240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51656240 = block;
   block->owner = (Object)__51656820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51656240;

   return block;
};

void code__51656820() {
   {
      Value cond = ack__add_51277140___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51656240();
   }
      }
   }
}

Block make__51656820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51656820 = block;
   block->owner = (Object)__51655220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51656820;

   return block;
};

Block __55119880;

void code__55119880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55484580(),val_50989060___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55119880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55119880 = block;
   block->owner = (Object)__55119740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55119880;

   return block;
};

Block __55123480;

void code__55123480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_49640560___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_49907020___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a00_50186960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      src1 = ack__a01_50186900___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__0_54959640_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55123480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55123480 = block;
   block->owner = (Object)__55119580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55123480;

   return block;
};

Block __55123400;

void code__55123400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_51202020_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,value__a00_50051160___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_56066940_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,value__a01_50187040___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55123400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55123400 = block;
   block->owner = (Object)__55119420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55123400;

   return block;
};

Block __51201000;

Block __51634460;

void code__51634460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50683800___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,make_ref_rangeS(mem_50754520___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760,value2integer(abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value),value2integer(abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__51634460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51634460 = block;
   block->owner = (Object)__51201000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51634460;

   return block;
};

void code__51201000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50754520___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
            idx = value2integer(abus__r_50683720___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50563760___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_50468240___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51634460();
   }
      }
   }
}

Block make__51201000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51201000 = block;
   block->owner = (Object)__47071840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51201000;

   return block;
};

Block __55118760;

void code__55118760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50563760___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_5897_51586820___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55118760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55118760 = block;
   block->owner = (Object)__55118600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55118760;

   return block;
};

Block __55118540;

void code__55118540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_51586820___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,dbus__r_50563760___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55118540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55118540 = block;
   block->owner = (Object)__55118360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55118540;

   return block;
};

Block __55118000;

void code__55118000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50468260___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55118000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55118000 = block;
   block->owner = (Object)__55117840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55118000;

   return block;
};

Block __55117800;

void code__55117800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,trig__r_50468260___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55117800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55117800 = block;
   block->owner = (Object)__55117640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55117800;

   return block;
};

Block __55117340;

void code__55117340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50683720___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55117340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55117340 = block;
   block->owner = (Object)__55117180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55117340;

   return block;
};

Block __55117120;

void code__55117120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,abus__r_50683720___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55117120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55117120 = block;
   block->owner = (Object)__55116940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55117120;

   return block;
};

Block __55116580;

void code__55116580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_50468240___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55116580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55116580 = block;
   block->owner = (Object)__55116380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55116580;

   return block;
};

Block __55116340;

void code__55116340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,trig__w_50468240___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55116340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55116340 = block;
   block->owner = (Object)__55116120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55116340;

   return block;
};

Block __55115820;

void code__55115820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55115820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55115820 = block;
   block->owner = (Object)__55156580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55115820;

   return block;
};

Block __55156540;

void code__55156540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55156540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55156540 = block;
   block->owner = (Object)__55156380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55156540;

   return block;
};

Block __55156080;

void code__55156080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50683800___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58101_50379380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55156080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55156080 = block;
   block->owner = (Object)__55155920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55156080;

   return block;
};

Block __55155860;

void code__55155860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_50379380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,dbus__w_50683800___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55155860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55155860 = block;
   block->owner = (Object)__55155680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55155860;

   return block;
};

Block __49637940;

Block __50099100;

void code__50099100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47697180___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,make_ref_rangeS(mem_47878160___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760,value2integer(abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value),value2integer(abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50099100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50099100 = block;
   block->owner = (Object)__49637940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50099100;

   return block;
};

void code__49637940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47878160___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
            idx = value2integer(abus__r_47697060___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47493220___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47324520___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50099100();
   }
      }
   }
}

Block make__49637940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49637940 = block;
   block->owner = (Object)__50493180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49637940;

   return block;
};

Block __55153960;

void code__55153960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47493220___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58126_45202480___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55153960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55153960 = block;
   block->owner = (Object)__55153800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55153960;

   return block;
};

Block __55153760;

void code__55153760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_45202480___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,dbus__r_47493220___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55153760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55153760 = block;
   block->owner = (Object)__55153600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55153760;

   return block;
};

Block __55153240;

void code__55153240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_47324540___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55153240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55153240 = block;
   block->owner = (Object)__55152980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55153240;

   return block;
};

Block __55152900;

void code__55152900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,trig__r_47324540___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55152900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55152900 = block;
   block->owner = (Object)__55152740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55152900;

   return block;
};

Block __55152440;

void code__55152440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47697060___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55152440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55152440 = block;
   block->owner = (Object)__55152280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55152440;

   return block;
};

Block __55152240;

void code__55152240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,abus__r_47697060___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55152240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55152240 = block;
   block->owner = (Object)__55152080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55152240;

   return block;
};

Block __55151780;

void code__55151780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_47324520___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55151780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55151780 = block;
   block->owner = (Object)__55151620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55151780;

   return block;
};

Block __55151580;

void code__55151580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,trig__w_47324520___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55151580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55151580 = block;
   block->owner = (Object)__55151420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55151580;

   return block;
};

Block __55151040;

void code__55151040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55151040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55151040 = block;
   block->owner = (Object)__55150760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55151040;

   return block;
};

Block __55150720;

void code__55150720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55150720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55150720 = block;
   block->owner = (Object)__55150560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55150720;

   return block;
};

Block __55150260;

void code__55150260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47697180___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58130_50519260___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55150260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55150260 = block;
   block->owner = (Object)__55150100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55150260;

   return block;
};

Block __55150060;

void code__55150060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_50519260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,dbus__w_47697180___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55150060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55150060 = block;
   block->owner = (Object)__55149900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55150060;

   return block;
};

Block __55172880;

void code__55172880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50607800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55172880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55172880 = block;
   block->owner = (Object)__55172720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55172880;

   return block;
};

Block __55172680;

void code__55172680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,reg__0_50607800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55172680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55172680 = block;
   block->owner = (Object)__55172520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55172680;

   return block;
};

Block __55172220;

void code__55172220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50726240___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55172220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55172220 = block;
   block->owner = (Object)__55172060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55172220;

   return block;
};

Block __55172020;

void code__55172020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,reg__1_50726240___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55172020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55172020 = block;
   block->owner = (Object)__55171860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55172020;

   return block;
};

Block __45818160;

Block __45840860;

Block __45873920;

void code__45873920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55473040(),_58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__45873920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45873920 = block;
   block->owner = (Object)__45840860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45873920;

   return block;
};

void code__45840860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55473140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45873920();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472980(),_58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__45840860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45840860 = block;
   block->owner = (Object)__45818160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45840860;

   return block;
};

Block __45869480;

Block __45867100;

void code__45867100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472760(),_5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__45867100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45867100 = block;
   block->owner = (Object)__45869480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45867100;

   return block;
};

void code__45869480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55472840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45867100();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472700(),_5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__45869480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45869480 = block;
   block->owner = (Object)__45818160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45869480;

   return block;
};

Block __45955600;

Block __45954440;

void code__45954440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472540(),_5814_50062340___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__45954440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45954440 = block;
   block->owner = (Object)__45955600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45954440;

   return block;
};

void code__45955600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55472620();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45954440();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472480(),_5813_50062420___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__45955600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45955600 = block;
   block->owner = (Object)__45818160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45955600;

   return block;
};

Block __47641540;

Block __47641220;

Block __47640840;

Block __47640400;

void code__47640400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_50062440___48221760______58_840_51820760->c_value,rv_45818680___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55471760(),rvok_45818580___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__47640400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47640400 = block;
   block->owner = (Object)__47640840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47640400;

   return block;
};

void code__47640840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_50062420___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55471960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47640400();
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
                  src0 = _5814_50062340___48221760______58_840_51820760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55471640();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_50062340___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55471540(),_5813_50062420___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__47640840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47640840 = block;
   block->owner = (Object)__47641220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47640840;

   return block;
};

void code__47641220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55472080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47640840();
   }
      }
   }
}

Block make__47641220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47641220 = block;
   block->owner = (Object)__47641540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47641220;

   return block;
};

Block __48021720;

Block __48045740;

Block __48045300;

void code__48045300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_51586820___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,lv0_51260040___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55471200(),lvok0_45818660___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__48045300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48045300 = block;
   block->owner = (Object)__48045740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48045300;

   return block;
};

void code__48045740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55471360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48045300();
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
                  src0 = _5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55471060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55470940(),_5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__48045740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48045740 = block;
   block->owner = (Object)__48021720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48045740;

   return block;
};

void code__48021720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55471460();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48045740();
   }
      }
   }
}

Block make__48021720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48021720 = block;
   block->owner = (Object)__47641540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48021720;

   return block;
};

Block __49163320;

Block __49162740;

Block __49162580;

void code__49162580() {
}

Block make__49162580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49162580 = block;
   block->owner = (Object)__49162740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49162580;

   return block;
};

Block __50514760;

void code__50514760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_51636260___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__50514760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50514760 = block;
   block->owner = (Object)__49162740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50514760;

   return block;
};

void code__49162740() {
 code__49162580();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_51636260___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
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
                              src0 = lv0_51260040___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_45818680___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55470320();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_51636260___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
 code__50514760();
}

Block make__49162740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49162740 = block;
   block->owner = (Object)__49163320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49162740;

   return block;
};

void code__49163320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55470720(),ack__mac_51277160___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55470660(),run_45818520___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
 code__49162740();
}

Block make__49163320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49163320 = block;
   block->owner = (Object)__47641540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49163320;

   return block;
};

Block __50756340;

Block __50755960;

Block __50755600;

void code__50755600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_45202480___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,lv1_51509600___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55469820(),lvok1_45818640___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__50755600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50755600 = block;
   block->owner = (Object)__50755960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50755600;

   return block;
};

void code__50755960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55470000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50755600();
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
                  src0 = _58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55469640();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55469540(),_58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__50755960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50755960 = block;
   block->owner = (Object)__50756340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50755960;

   return block;
};

void code__50756340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54959720_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55470120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50755960();
   }
      }
   }
}

Block make__50756340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50756340 = block;
   block->owner = (Object)__47641540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50756340;

   return block;
};

Block __51028100;

Block __51052160;

Block __51052000;

void code__51052000() {
}

Block make__51052000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51052000 = block;
   block->owner = (Object)__51052160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51052000;

   return block;
};

Block __47372420;

void code__47372420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_45334280___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__47372420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47372420 = block;
   block->owner = (Object)__51052160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47372420;

   return block;
};

void code__51052160() {
 code__51052000();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_45334280___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
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
                              src0 = lv1_51509600___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_45818680___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55468940();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_45334280___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
 code__47372420();
}

Block make__51052160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51052160 = block;
   block->owner = (Object)__51028100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51052160;

   return block;
};

void code__51028100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55469380(),ack__mac_51277160___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55469320(),run_45818520___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
 code__51052160();
}

Block make__51028100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51028100 = block;
   block->owner = (Object)__47641540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51028100;

   return block;
};

void code__47641540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472180(),run_45818520___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
 code__47641220();
 code__48021720();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_45818660___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         src1 = rvok_45818580___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49163320();
   }
      }
   }
 code__50756340();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_45818640___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         src1 = rvok_45818580___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51028100();
   }
      }
   }
}

Block make__47641540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47641540 = block;
   block->owner = (Object)__45818160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47641540;

   return block;
};

Block __45952160;

void code__45952160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55468700(),rvok_45818580___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55468640(),lvok0_45818660___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55468580(),av0_51636260___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55468520(),lvok1_45818640___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55468460(),av1_45334280___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__45952160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45952160 = block;
   block->owner = (Object)__45818160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45952160;

   return block;
};

void code__45818160() {
 code__45840860();
 code__45869480();
 code__45955600();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472420(),ack__mac_51277160___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472360(),run_45818520___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_54959700_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         src1 = run_45818520___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47641540();
   }
   else {
  code__45952160();
   }
      }
   }
}

Block make__45818160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45818160 = block;
   block->owner = (Object)__47849100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45818160;

   return block;
};

Block __55170100;

void code__55170100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58174_47670260___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55170100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55170100 = block;
   block->owner = (Object)__55169940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55170100;

   return block;
};

Block __55169900;

void code__55169900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58174_47670260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55169900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55169900 = block;
   block->owner = (Object)__55169740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55169900;

   return block;
};

Block __55169420;

void code__55169420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58175_47929940___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55169420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55169420 = block;
   block->owner = (Object)__55169240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55169420;

   return block;
};

Block __55169120;

void code__55169120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58175_47929940___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55169120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55169120 = block;
   block->owner = (Object)__55168940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55169120;

   return block;
};

Block __55168580;

void code__55168580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58189_50644860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55168580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55168580 = block;
   block->owner = (Object)__55168420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55168580;

   return block;
};

Block __55168380;

void code__55168380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58189_50644860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55168380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55168380 = block;
   block->owner = (Object)__55168220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55168380;

   return block;
};

Block __55167920;

void code__55167920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58190_50853180___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55167920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55167920 = block;
   block->owner = (Object)__55167760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55167920;

   return block;
};

Block __55167720;

void code__55167720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58190_50853180___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55167720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55167720 = block;
   block->owner = (Object)__55167560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55167720;

   return block;
};

Block __55165940;

void code__55165940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47842580___47843480___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55165940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55165940 = block;
   block->owner = (Object)__55165780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55165940;

   return block;
};

Block __55165740;

void code__55165740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,abus__w_47842580___47843480___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55165740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55165740 = block;
   block->owner = (Object)__55165580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55165740;

   return block;
};

Block __55205160;

void code__55205160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50742220___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55205160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55205160 = block;
   block->owner = (Object)__55205000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55205160;

   return block;
};

Block __55204960;

void code__55204960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,reg__0_50742220___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55204960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55204960 = block;
   block->owner = (Object)__55204800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55204960;

   return block;
};

Block __55204500;

void code__55204500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50873120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,_58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55204500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55204500 = block;
   block->owner = (Object)__55204340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55204500;

   return block;
};

Block __55204300;

void code__55204300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,reg__1_50873120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55204300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55204300 = block;
   block->owner = (Object)__55204140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55204300;

   return block;
};

Block __47420060;

Block __47480100;

Block __47474000;

void code__47474000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,lv0_51657180___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55490700(),lvok0_47420260___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__47474000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47474000 = block;
   block->owner = (Object)__47480100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47474000;

   return block;
};

Block __47978540;

void code__47978540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58174_47670260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,rv0_47055740___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55490560(),rvok0_47420220___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__47978540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47978540 = block;
   block->owner = (Object)__47480100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47978540;

   return block;
};

Block __49163940;

Block __49162460;

void code__49162460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_51657180___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      src1 = rv0_47055740___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__49162460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49162460 = block;
   block->owner = (Object)__49163940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49162460;

   return block;
};

void code__49163940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55490400(),run_47420180___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55490340(),ack__add_51277140___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
 code__49162460();
}

Block make__49163940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49163940 = block;
   block->owner = (Object)__47480100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49163940;

   return block;
};

Block __50186240;

void code__50186240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,lv1_45423620___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55489960(),lvok1_47420240___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__50186240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50186240 = block;
   block->owner = (Object)__47480100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50186240;

   return block;
};

Block __50491120;

void code__50491120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58175_47929940___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,rv1_47420280___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55489780(),rvok1_47420200___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__50491120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50491120 = block;
   block->owner = (Object)__47480100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50491120;

   return block;
};

Block __50754140;

Block __50753620;

void code__50753620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_45423620___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      src1 = rv1_47420280___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__50753620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50753620 = block;
   block->owner = (Object)__50754140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50753620;

   return block;
};

void code__50754140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55489620(),run_47420180___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55489560(),ack__add_51277140___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
 code__50753620();
}

Block make__50754140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50754140 = block;
   block->owner = (Object)__47480100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50754140;

   return block;
};

void code__47480100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55490840(),run_47420180___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
 code__47474000();
 code__47978540();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47420260___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         src1 = rvok0_47420220___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49163940();
   }
      }
   }
 code__50186240();
 code__50491120();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_47420240___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         src1 = rvok1_47420200___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50754140();
   }
      }
   }
}

Block make__47480100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47480100 = block;
   block->owner = (Object)__47420060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47480100;

   return block;
};

Block __47418320;

void code__47418320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55489280(),lvok0_47420260___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55489220(),rvok0_47420220___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55489140(),lvok1_47420240___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55489040(),rvok1_47420200___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__47418320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47418320 = block;
   block->owner = (Object)__47420060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47418320;

   return block;
};

void code__47420060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55491060(),ack__add_51277140___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55491000(),run_47420180___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_51277160___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         src1 = run_47420180___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47480100();
   }
   else {
  code__47418320();
   }
      }
   }
}

Block make__47420060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47420060 = block;
   block->owner = (Object)__51277300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47420060;

   return block;
};

Value make__55473140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55473040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55472980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55472840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55472760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55472700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55472620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55472540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55472480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55472420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55472360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55472180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55472080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55471960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55471760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55471640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55471540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55471460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55471360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55471200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55471060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55470940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55470720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55470660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55470320() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55470120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55470000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55469820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55469640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55469540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55469380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55469320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55468940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55468700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55468640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55468580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55468520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55468460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55491060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55491000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55490840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55490700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55490560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55490400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55490340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55489960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55489780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55489620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55489560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55489280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55489220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55489140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55489040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55488260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55488120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55488040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55487980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55487660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55487520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55487440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55487340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55487240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55487160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55487080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55486880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55486640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55486360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55486140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55485960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55485860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55485700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55485560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55485460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55485300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55485140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55485040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55484780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55484640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55484580() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope __50438680;

SignalI ack__mac_51277160___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeack__mac_51277160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51277160___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI ack__add_51277140___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeack__add_51277140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_51277140___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _5897_51586820___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_5897_51586820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_51586820___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_5895_51586800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_5896_51586720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _58126_45202480___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58126_45202480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_45202480___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58124_45202440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58125_45202140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58143_45721520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58144_47372960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _58174_47670260___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58174_47670260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58174_47670260___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
   signalI->name = ":174";
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

SignalI _58175_47929940___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58175_47929940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58175_47929940___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
   signalI->name = ":175";
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

SignalI _58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58204_48173420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
   signalI->name = ":204";
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

SignalI _58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58205_49147640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
   signalI->name = ":205";
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

SignalI value__z0_49640560___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makevalue__z0_49640560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_49640560___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI value__z1_49907020___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makevalue__z1_49907020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_49907020___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI value__a00_50051160___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makevalue__a00_50051160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_50051160___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI value__a01_50187040___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makevalue__a01_50187040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a01_50187040___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI flag__z0_50187020___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeflag__z0_50187020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_50187020___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI flag__z1_50186980___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeflag__z1_50186980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_50186980___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI ack__a00_50186960___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeack__a00_50186960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_50186960___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI ack__a01_50186900___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeack__a01_50186900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a01_50186900___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_5899_50186880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58100_50186720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _58101_50379380___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58101_50379380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_50379380___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58128_50379360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58129_50379260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _58130_50519260___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58130_50519260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_50519260___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SignalI _58189_50644860___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58189_50644860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58189_50644860___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
   signalI->name = ":189";
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

SignalI _58190_50853180___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58190_50853180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58190_50853180___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
   signalI->name = ":190";
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

SignalI _58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI make_58191_50853100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
   signalI->name = ":191";
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

SignalI val_50989060___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeval_50989060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   val_50989060___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438680;
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

SystemI func0_51201880;

SystemI makefunc0_51201880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_51201880 = systemI;
   systemI->owner = (Object)__50438680;
   systemI->name = "func0";
   systemI->system = func0_58_840_50854860;

   return systemI;
};

SystemI func1_56066800;

SystemI makefunc1_56066800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_56066800 = systemI;
   systemI->owner = (Object)__50438680;
   systemI->name = "func1";
   systemI->system = func1_58_840_55702360;

   return systemI;
};

Scope __50438380;

SignalI trig__r_50468260___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI maketrig__r_50468260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50468260___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438380;
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

SignalI trig__w_50468240___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI maketrig__w_50468240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_50468240___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438380;
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

SignalI dbus__r_50563760___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makedbus__r_50563760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50563760___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438380;
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

SignalI dbus__w_50683800___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makedbus__w_50683800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50683800___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438380;
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

SignalI abus__r_50683720___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__r_50683720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50683720___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438380;
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

SignalI abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__w_50683640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438380;
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

SignalI mem_50754520___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makemem_50754520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50754520___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50438380;
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

Scope __50470800;

Scope make__50470800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50470800 = scope;
   scope->owner = (Object)__50438380;
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

Scope __50470380;

Scope make__50470380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50470380 = scope;
   scope->owner = (Object)__50438380;
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

Scope __50469960;

Scope make__50469960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50469960 = scope;
   scope->owner = (Object)__50438380;
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

Scope __50469540;

Scope make__50469540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50469540 = scope;
   scope->owner = (Object)__50438380;
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

Scope __50469120;

Scope make__50469120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50469120 = scope;
   scope->owner = (Object)__50438380;
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

Scope __50468700;

Scope make__50468700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50468700 = scope;
   scope->owner = (Object)__50438380;
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

Behavior __47071840;

Behavior make__47071840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47071840 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760);
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_neg += 1;
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->neg = realloc(clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->neg,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_neg*sizeof(Object));
clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->neg[clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_neg-1] = (Object)behavior;
   behavior->block = make__51201000();

   return behavior;
}

Behavior __55118600;

Behavior make__55118600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55118600 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50563760___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   dbus__r_50563760___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   dbus__r_50563760___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(dbus__r_50563760___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,dbus__r_50563760___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
dbus__r_50563760___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[dbus__r_50563760___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55118760();

   return behavior;
}

Behavior __55118360;

Behavior make__55118360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55118360 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_51586820___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _5897_51586820___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _5897_51586820___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_5897_51586820___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_5897_51586820___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_5897_51586820___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_5897_51586820___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55118540();

   return behavior;
}

Behavior __55117840;

Behavior make__55117840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55117840 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50468260___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   trig__r_50468260___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   trig__r_50468260___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(trig__r_50468260___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,trig__r_50468260___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
trig__r_50468260___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[trig__r_50468260___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55118000();

   return behavior;
}

Behavior __55117640;

Behavior make__55117640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55117640 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_5895_51586800___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55117800();

   return behavior;
}

Behavior __55117180;

Behavior make__55117180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55117180 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50683720___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   abus__r_50683720___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   abus__r_50683720___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(abus__r_50683720___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,abus__r_50683720___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
abus__r_50683720___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[abus__r_50683720___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55117340();

   return behavior;
}

Behavior __55116940;

Behavior make__55116940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55116940 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_5896_51586720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55117120();

   return behavior;
}

Behavior __55116380;

Behavior make__55116380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55116380 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_50468240___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   trig__w_50468240___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   trig__w_50468240___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(trig__w_50468240___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,trig__w_50468240___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
trig__w_50468240___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[trig__w_50468240___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55116580();

   return behavior;
}

Behavior __55116120;

Behavior make__55116120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55116120 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_5899_50186880___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55116340();

   return behavior;
}

Behavior __55156580;

Behavior make__55156580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55156580 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[abus__w_50683640___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55115820();

   return behavior;
}

Behavior __55156380;

Behavior make__55156380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55156380 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58100_50186720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55156540();

   return behavior;
}

Behavior __55155920;

Behavior make__55155920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55155920 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50683800___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   dbus__w_50683800___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   dbus__w_50683800___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(dbus__w_50683800___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,dbus__w_50683800___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
dbus__w_50683800___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[dbus__w_50683800___50438380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55156080();

   return behavior;
}

Behavior __55155680;

Behavior make__55155680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55155680 = behavior;
   behavior->owner = (Object)__50438380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_50379380___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58101_50379380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58101_50379380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58101_50379380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58101_50379380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58101_50379380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58101_50379380___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55155860();

   return behavior;
}

Scope make__50438380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50438380 = scope;
   scope->owner = (Object)__50438680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50468260();
   scope->inners[1] = maketrig__w_50468240();
   scope->inners[2] = makedbus__r_50563760();
   scope->inners[3] = makedbus__w_50683800();
   scope->inners[4] = makeabus__r_50683720();
   scope->inners[5] = makeabus__w_50683640();
   scope->inners[6] = makemem_50754520();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__50470800();
   scope->scopes[1] = make__50470380();
   scope->scopes[2] = make__50469960();
   scope->scopes[3] = make__50469540();
   scope->scopes[4] = make__50469120();
   scope->scopes[5] = make__50468700();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47071840();
   scope->behaviors[1] = make__55118600();
   scope->behaviors[2] = make__55118360();
   scope->behaviors[3] = make__55117840();
   scope->behaviors[4] = make__55117640();
   scope->behaviors[5] = make__55117180();
   scope->behaviors[6] = make__55116940();
   scope->behaviors[7] = make__55116380();
   scope->behaviors[8] = make__55116120();
   scope->behaviors[9] = make__55156580();
   scope->behaviors[10] = make__55156380();
   scope->behaviors[11] = make__55155920();
   scope->behaviors[12] = make__55155680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47071720;

SignalI trig__r_47324540___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI maketrig__r_47324540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47324540___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47071720;
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

SignalI trig__w_47324520___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI maketrig__w_47324520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47324520___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47071720;
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

SignalI dbus__r_47493220___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makedbus__r_47493220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47493220___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47071720;
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

SignalI dbus__w_47697180___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makedbus__w_47697180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47697180___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47071720;
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

SignalI abus__r_47697060___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__r_47697060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47697060___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47071720;
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

SignalI abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__w_47696620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47071720;
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

SignalI mem_47878160___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makemem_47878160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47878160___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47071720;
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

Scope __47071260;

Scope make__47071260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47071260 = scope;
   scope->owner = (Object)__47071720;
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

Scope __47094200;

Scope make__47094200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47094200 = scope;
   scope->owner = (Object)__47071720;
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

Scope __47093500;

Scope make__47093500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47093500 = scope;
   scope->owner = (Object)__47071720;
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

Scope __47092120;

Scope make__47092120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47092120 = scope;
   scope->owner = (Object)__47071720;
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

Scope __47090980;

Scope make__47090980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47090980 = scope;
   scope->owner = (Object)__47071720;
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

Scope __47090220;

Scope make__47090220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47090220 = scope;
   scope->owner = (Object)__47071720;
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

Behavior __50493180;

Behavior make__50493180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50493180 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760);
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_neg += 1;
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->neg = realloc(clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->neg,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_neg*sizeof(Object));
clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->neg[clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_neg-1] = (Object)behavior;
   behavior->block = make__49637940();

   return behavior;
}

Behavior __55153800;

Behavior make__55153800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55153800 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47493220___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   dbus__r_47493220___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   dbus__r_47493220___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(dbus__r_47493220___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,dbus__r_47493220___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
dbus__r_47493220___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[dbus__r_47493220___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55153960();

   return behavior;
}

Behavior __55153600;

Behavior make__55153600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55153600 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_45202480___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58126_45202480___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58126_45202480___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58126_45202480___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58126_45202480___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58126_45202480___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58126_45202480___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55153760();

   return behavior;
}

Behavior __55152980;

Behavior make__55152980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55152980 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_47324540___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   trig__r_47324540___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   trig__r_47324540___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(trig__r_47324540___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,trig__r_47324540___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
trig__r_47324540___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[trig__r_47324540___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55153240();

   return behavior;
}

Behavior __55152740;

Behavior make__55152740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55152740 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58124_45202440___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55152900();

   return behavior;
}

Behavior __55152280;

Behavior make__55152280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55152280 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47697060___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   abus__r_47697060___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   abus__r_47697060___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(abus__r_47697060___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,abus__r_47697060___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
abus__r_47697060___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[abus__r_47697060___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55152440();

   return behavior;
}

Behavior __55152080;

Behavior make__55152080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55152080 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58125_45202140___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55152240();

   return behavior;
}

Behavior __55151620;

Behavior make__55151620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55151620 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_47324520___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   trig__w_47324520___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   trig__w_47324520___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(trig__w_47324520___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,trig__w_47324520___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
trig__w_47324520___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[trig__w_47324520___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55151780();

   return behavior;
}

Behavior __55151420;

Behavior make__55151420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55151420 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58128_50379360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55151580();

   return behavior;
}

Behavior __55150760;

Behavior make__55150760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55150760 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[abus__w_47696620___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55151040();

   return behavior;
}

Behavior __55150560;

Behavior make__55150560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55150560 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58129_50379260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55150720();

   return behavior;
}

Behavior __55150100;

Behavior make__55150100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55150100 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47697180___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   dbus__w_47697180___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   dbus__w_47697180___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(dbus__w_47697180___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,dbus__w_47697180___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
dbus__w_47697180___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[dbus__w_47697180___47071720___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55150260();

   return behavior;
}

Behavior __55149900;

Behavior make__55149900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55149900 = behavior;
   behavior->owner = (Object)__47071720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_50519260___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58130_50519260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58130_50519260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58130_50519260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58130_50519260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58130_50519260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58130_50519260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55150060();

   return behavior;
}

Scope make__47071720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47071720 = scope;
   scope->owner = (Object)__50438680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47324540();
   scope->inners[1] = maketrig__w_47324520();
   scope->inners[2] = makedbus__r_47493220();
   scope->inners[3] = makedbus__w_47697180();
   scope->inners[4] = makeabus__r_47697060();
   scope->inners[5] = makeabus__w_47696620();
   scope->inners[6] = makemem_47878160();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47071260();
   scope->scopes[1] = make__47094200();
   scope->scopes[2] = make__47093500();
   scope->scopes[3] = make__47092120();
   scope->scopes[4] = make__47090980();
   scope->scopes[5] = make__47090220();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50493180();
   scope->behaviors[1] = make__55153800();
   scope->behaviors[2] = make__55153600();
   scope->behaviors[3] = make__55152980();
   scope->behaviors[4] = make__55152740();
   scope->behaviors[5] = make__55152280();
   scope->behaviors[6] = make__55152080();
   scope->behaviors[7] = make__55151620();
   scope->behaviors[8] = make__55151420();
   scope->behaviors[9] = make__55150760();
   scope->behaviors[10] = make__55150560();
   scope->behaviors[11] = make__55150100();
   scope->behaviors[12] = make__55149900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __50493060;

SignalI reg__0_50607800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makereg__0_50607800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50607800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50493060;
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

SignalI reg__1_50726240___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makereg__1_50726240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50726240___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50493060;
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

Scope __50492740;

Scope make__50492740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50492740 = scope;
   scope->owner = (Object)__50493060;
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

Scope __50492240;

Scope make__50492240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50492240 = scope;
   scope->owner = (Object)__50493060;
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

Scope __50491820;

Scope make__50491820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50491820 = scope;
   scope->owner = (Object)__50493060;
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

Scope __50491400;

SignalI abus__r_50491020___50491400___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__r_50491020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50491020___50491400___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50491400;
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

Scope make__50491400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50491400 = scope;
   scope->owner = (Object)__50493060;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50491020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __50490900;

SignalI abus__w_50490480___50490900___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__w_50490480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50490480___50490900___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50490900;
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

Scope make__50490900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50490900 = scope;
   scope->owner = (Object)__50493060;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50490480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __50490300;

SignalI abus__r_50489920___50490300___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__r_50489920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50489920___50490300___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50490300;
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

Scope make__50490300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50490300 = scope;
   scope->owner = (Object)__50493060;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50489920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __50489800;

SignalI abus__w_50489420___50489800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__w_50489420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50489420___50489800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50489800;
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

Scope make__50489800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50489800 = scope;
   scope->owner = (Object)__50493060;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50489420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __55172720;

Behavior make__55172720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55172720 = behavior;
   behavior->owner = (Object)__50493060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50607800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   reg__0_50607800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   reg__0_50607800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(reg__0_50607800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,reg__0_50607800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
reg__0_50607800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[reg__0_50607800___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55172880();

   return behavior;
}

Behavior __55172520;

Behavior make__55172520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55172520 = behavior;
   behavior->owner = (Object)__50493060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58143_45721520___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55172680();

   return behavior;
}

Behavior __55172060;

Behavior make__55172060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55172060 = behavior;
   behavior->owner = (Object)__50493060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50726240___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   reg__1_50726240___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   reg__1_50726240___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(reg__1_50726240___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,reg__1_50726240___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
reg__1_50726240___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[reg__1_50726240___50493060___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55172220();

   return behavior;
}

Behavior __55171860;

Behavior make__55171860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55171860 = behavior;
   behavior->owner = (Object)__50493060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58144_47372960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55172020();

   return behavior;
}

Scope make__50493060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50493060 = scope;
   scope->owner = (Object)__50438680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50607800();
   scope->inners[1] = makereg__1_50726240();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__50492740();
   scope->scopes[1] = make__50492240();
   scope->scopes[2] = make__50491820();
   scope->scopes[3] = make__50491400();
   scope->scopes[4] = make__50490900();
   scope->scopes[5] = make__50490300();
   scope->scopes[6] = make__50489800();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55172720();
   scope->behaviors[1] = make__55172520();
   scope->behaviors[2] = make__55172060();
   scope->behaviors[3] = make__55171860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __51207580;

SignalI lv0_51260040___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makelv0_51260040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51260040___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51207580;
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

SignalI lv1_51509600___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makelv1_51509600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_51509600___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51207580;
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

SignalI av0_51636260___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeav0_51636260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_51636260___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51207580;
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

SignalI av1_45334280___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeav1_45334280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_45334280___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51207580;
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

SignalI rv_45818680___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makerv_45818680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_45818680___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51207580;
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

SignalI lvok0_45818660___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makelvok0_45818660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_45818660___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51207580;
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

SignalI lvok1_45818640___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makelvok1_45818640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_45818640___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51207580;
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

SignalI rvok_45818580___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makervok_45818580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_45818580___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51207580;
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

SignalI run_45818520___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makerun_45818520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_45818520___51207580___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51207580;
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

Behavior __47849100;

Behavior make__47849100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47849100 = behavior;
   behavior->owner = (Object)__51207580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760);
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos += 1;
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos = realloc(clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos*sizeof(Object));
clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos[clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos-1] = (Object)behavior;
   behavior->block = make__45818160();

   return behavior;
}

Scope make__51207580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51207580 = scope;
   scope->owner = (Object)__50438680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51260040();
   scope->inners[1] = makelv1_51509600();
   scope->inners[2] = makeav0_51636260();
   scope->inners[3] = makeav1_45334280();
   scope->inners[4] = makerv_45818680();
   scope->inners[5] = makelvok0_45818660();
   scope->inners[6] = makelvok1_45818640();
   scope->inners[7] = makervok_45818580();
   scope->inners[8] = makerun_45818520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47849100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47848980;

SignalI reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makereg__0_48071640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47848980;
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

SignalI reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makereg__1_48972640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47848980;
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

Scope __47848580;

Scope make__47848580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47848580 = scope;
   scope->owner = (Object)__47848980;
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

Scope __47848120;

Scope make__47848120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47848120 = scope;
   scope->owner = (Object)__47848980;
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

Scope __47845700;

Scope make__47845700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47845700 = scope;
   scope->owner = (Object)__47848980;
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

Scope __47844300;

SignalI abus__r_47843620___47844300___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__r_47843620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47843620___47844300___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47844300;
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

Scope make__47844300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47844300 = scope;
   scope->owner = (Object)__47848980;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47843620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47843480;

SignalI abus__w_47842580___47843480___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__w_47842580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47842580___47843480___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47843480;
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

Behavior __55165780;

Behavior make__55165780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55165780 = behavior;
   behavior->owner = (Object)__47843480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47842580___47843480___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   abus__w_47842580___47843480___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   abus__w_47842580___47843480___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(abus__w_47842580___47843480___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,abus__w_47842580___47843480___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
abus__w_47842580___47843480___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[abus__w_47842580___47843480___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55165940();

   return behavior;
}

Behavior __55165580;

Behavior make__55165580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55165580 = behavior;
   behavior->owner = (Object)__47843480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58191_50853100___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55165740();

   return behavior;
}

Scope make__47843480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47843480 = scope;
   scope->owner = (Object)__47848980;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47842580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55165780();
   scope->behaviors[1] = make__55165580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47841900;

SignalI abus__r_47865140___47841900___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__r_47865140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47865140___47841900___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47841900;
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

Scope make__47841900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47841900 = scope;
   scope->owner = (Object)__47848980;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47865140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47864980;

SignalI abus__w_47864540___47864980___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__w_47864540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47864540___47864980___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__47864980;
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

Scope make__47864980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47864980 = scope;
   scope->owner = (Object)__47848980;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47864540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __55169940;

Behavior make__55169940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55169940 = behavior;
   behavior->owner = (Object)__47848980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55170100();

   return behavior;
}

Behavior __55169740;

Behavior make__55169740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55169740 = behavior;
   behavior->owner = (Object)__47848980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58174_47670260___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58174_47670260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58174_47670260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58174_47670260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58174_47670260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58174_47670260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58174_47670260___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55169900();

   return behavior;
}

Behavior __55169240;

Behavior make__55169240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55169240 = behavior;
   behavior->owner = (Object)__47848980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55169420();

   return behavior;
}

Behavior __55168940;

Behavior make__55168940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55168940 = behavior;
   behavior->owner = (Object)__47848980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58175_47929940___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58175_47929940___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58175_47929940___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58175_47929940___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58175_47929940___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58175_47929940___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58175_47929940___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55169120();

   return behavior;
}

Behavior __55168420;

Behavior make__55168420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55168420 = behavior;
   behavior->owner = (Object)__47848980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[reg__0_48071640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55168580();

   return behavior;
}

Behavior __55168220;

Behavior make__55168220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55168220 = behavior;
   behavior->owner = (Object)__47848980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58189_50644860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58189_50644860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58189_50644860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58189_50644860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58189_50644860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58189_50644860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58189_50644860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55168380();

   return behavior;
}

Behavior __55167760;

Behavior make__55167760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55167760 = behavior;
   behavior->owner = (Object)__47848980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[reg__1_48972640___47848980___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55167920();

   return behavior;
}

Behavior __55167560;

Behavior make__55167560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55167560 = behavior;
   behavior->owner = (Object)__47848980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58190_50853180___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58190_50853180___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58190_50853180___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58190_50853180___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58190_50853180___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58190_50853180___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58190_50853180___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55167720();

   return behavior;
}

Scope make__47848980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47848980 = scope;
   scope->owner = (Object)__50438680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48071640();
   scope->inners[1] = makereg__1_48972640();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47848580();
   scope->scopes[1] = make__47848120();
   scope->scopes[2] = make__47845700();
   scope->scopes[3] = make__47844300();
   scope->scopes[4] = make__47843480();
   scope->scopes[5] = make__47841900();
   scope->scopes[6] = make__47864980();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55169940();
   scope->behaviors[1] = make__55169740();
   scope->behaviors[2] = make__55169240();
   scope->behaviors[3] = make__55168940();
   scope->behaviors[4] = make__55168420();
   scope->behaviors[5] = make__55168220();
   scope->behaviors[6] = make__55167760();
   scope->behaviors[7] = make__55167560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __50606780;

SignalI reg__0_50742220___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makereg__0_50742220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50742220___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50606780;
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

SignalI reg__1_50873120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makereg__1_50873120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50873120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50606780;
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

Scope __50606440;

Scope make__50606440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50606440 = scope;
   scope->owner = (Object)__50606780;
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

Scope __50605920;

Scope make__50605920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50605920 = scope;
   scope->owner = (Object)__50606780;
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

Scope __50605340;

Scope make__50605340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50605340 = scope;
   scope->owner = (Object)__50606780;
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

Scope __50604920;

SignalI abus__r_50604520___50604920___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__r_50604520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50604520___50604920___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50604920;
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

Scope make__50604920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50604920 = scope;
   scope->owner = (Object)__50606780;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50604520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __50604380;

SignalI abus__w_50603940___50604380___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__w_50603940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50603940___50604380___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50604380;
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

Scope make__50604380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50604380 = scope;
   scope->owner = (Object)__50606780;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50603940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __50603800;

SignalI abus__r_50603240___50603800___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__r_50603240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50603240___50603800___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50603800;
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

Scope make__50603800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50603800 = scope;
   scope->owner = (Object)__50606780;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50603240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __50603120;

SignalI abus__w_50602740___50603120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeabus__w_50602740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50602740___50603120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50603120;
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

Scope make__50603120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50603120 = scope;
   scope->owner = (Object)__50606780;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50602740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __55205000;

Behavior make__55205000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55205000 = behavior;
   behavior->owner = (Object)__50606780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50742220___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   reg__0_50742220___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   reg__0_50742220___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(reg__0_50742220___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,reg__0_50742220___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
reg__0_50742220___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[reg__0_50742220___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55205160();

   return behavior;
}

Behavior __55204800;

Behavior make__55204800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55204800 = behavior;
   behavior->owner = (Object)__50606780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58204_48173420___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55204960();

   return behavior;
}

Behavior __55204340;

Behavior make__55204340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55204340 = behavior;
   behavior->owner = (Object)__50606780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50873120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   reg__1_50873120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   reg__1_50873120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(reg__1_50873120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,reg__1_50873120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
reg__1_50873120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[reg__1_50873120___50606780___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55204500();

   return behavior;
}

Behavior __55204140;

Behavior make__55204140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55204140 = behavior;
   behavior->owner = (Object)__50606780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   _58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   _58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(_58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,_58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
_58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[_58205_49147640___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55204300();

   return behavior;
}

Scope make__50606780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50606780 = scope;
   scope->owner = (Object)__50438680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50742220();
   scope->inners[1] = makereg__1_50873120();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__50606440();
   scope->scopes[1] = make__50605920();
   scope->scopes[2] = make__50605340();
   scope->scopes[3] = make__50604920();
   scope->scopes[4] = make__50604380();
   scope->scopes[5] = make__50603800();
   scope->scopes[6] = make__50603120();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55205000();
   scope->behaviors[1] = make__55204800();
   scope->behaviors[2] = make__55204340();
   scope->behaviors[3] = make__55204140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __51510840;

SignalI lv0_51657180___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makelv0_51657180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51657180___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51510840;
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

SignalI lv1_45423620___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makelv1_45423620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_45423620___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51510840;
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

SignalI rv0_47055740___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makerv0_47055740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_47055740___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51510840;
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

SignalI rv1_47420280___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makerv1_47420280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_47420280___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51510840;
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

SignalI lvok0_47420260___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makelvok0_47420260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47420260___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51510840;
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

SignalI lvok1_47420240___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makelvok1_47420240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_47420240___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51510840;
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

SignalI rvok0_47420220___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makervok0_47420220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_47420220___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51510840;
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

SignalI rvok1_47420200___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makervok1_47420200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_47420200___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51510840;
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

SignalI run_47420180___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makerun_47420180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47420180___51510840___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51510840;
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

Behavior __51277300;

Behavior make__51277300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51277300 = behavior;
   behavior->owner = (Object)__51510840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760);
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos += 1;
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos = realloc(clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos*sizeof(Object));
clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos[clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos-1] = (Object)behavior;
   behavior->block = make__47420060();

   return behavior;
}

Scope make__51510840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51510840 = scope;
   scope->owner = (Object)__50438680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51657180();
   scope->inners[1] = makelv1_45423620();
   scope->inners[2] = makerv0_47055740();
   scope->inners[3] = makerv1_47420280();
   scope->inners[4] = makelvok0_47420260();
   scope->inners[5] = makelvok1_47420240();
   scope->inners[6] = makervok0_47420220();
   scope->inners[7] = makervok1_47420200();
   scope->inners[8] = makerun_47420180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51277300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57659280;

Behavior make__57659280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57659280 = behavior;
   behavior->owner = (Object)__50438680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760);
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos += 1;
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos = realloc(clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos*sizeof(Object));
clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos[clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos-1] = (Object)behavior;
   behavior->block = make__57074400();

   return behavior;
}

Behavior __47960820;

Behavior make__47960820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47960820 = behavior;
   behavior->owner = (Object)__50438680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760);
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos += 1;
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos = realloc(clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos*sizeof(Object));
clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos[clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos-1] = (Object)behavior;
   behavior->block = make__57659160();

   return behavior;
}

Behavior __51657300;

Behavior make__51657300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51657300 = behavior;
   behavior->owner = (Object)__50438680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760);
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos += 1;
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos = realloc(clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos*sizeof(Object));
clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos[clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos-1] = (Object)behavior;
   behavior->block = make__47960300();

   return behavior;
}

Behavior __51655220;

Behavior make__51655220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51655220 = behavior;
   behavior->owner = (Object)__50438680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760);
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos += 1;
   clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos = realloc(clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos,clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos*sizeof(Object));
clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->pos[clk_54959740_layer0_58_840_51654360___48221760______58_840_51820760->num_pos-1] = (Object)behavior;
   behavior->block = make__51656820();

   return behavior;
}

Behavior __55119740;

Behavior make__55119740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55119740 = behavior;
   behavior->owner = (Object)__50438680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__55119880();

   return behavior;
}

Behavior __55119580;

Behavior make__55119580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55119580 = behavior;
   behavior->owner = (Object)__50438680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,value__z0_49640560___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   value__z0_49640560___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   value__z0_49640560___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(value__z0_49640560___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,value__z0_49640560___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
value__z0_49640560___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[value__z0_49640560___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,value__z1_49907020___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   value__z1_49907020___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   value__z1_49907020___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(value__z1_49907020___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,value__z1_49907020___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
value__z1_49907020___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[value__z1_49907020___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__a00_50186960___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   ack__a00_50186960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   ack__a00_50186960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(ack__a00_50186960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,ack__a00_50186960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
ack__a00_50186960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[ack__a00_50186960___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__a01_50186900___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   ack__a01_50186900___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   ack__a01_50186900___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(ack__a01_50186900___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,ack__a01_50186900___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
ack__a01_50186900___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[ack__a01_50186900___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55123480();

   return behavior;
}

Behavior __55119420;

Behavior make__55119420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55119420 = behavior;
   behavior->owner = (Object)__50438680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_51202020_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   a_51202020_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   a_51202020_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(a_51202020_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,a_51202020_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
a_51202020_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[a_51202020_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_56066940_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   a_56066940_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   a_56066940_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(a_56066940_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,a_56066940_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
a_56066940_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[a_56066940_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55123400();

   return behavior;
}

Scope make__50438680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50438680 = scope;
   scope->owner = (Object)layer0_58_840_51654360;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_51201880();
   scope->systemIs[1] = makefunc1_56066800();
   scope->num_inners = 32;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__mac_51277160();
   scope->inners[1] = makeack__add_51277140();
   scope->inners[2] = make_5897_51586820();
   scope->inners[3] = make_5895_51586800();
   scope->inners[4] = make_5896_51586720();
   scope->inners[5] = make_58126_45202480();
   scope->inners[6] = make_58124_45202440();
   scope->inners[7] = make_58125_45202140();
   scope->inners[8] = make_58143_45721520();
   scope->inners[9] = make_58144_47372960();
   scope->inners[10] = make_58174_47670260();
   scope->inners[11] = make_58175_47929940();
   scope->inners[12] = make_58204_48173420();
   scope->inners[13] = make_58205_49147640();
   scope->inners[14] = makevalue__z0_49640560();
   scope->inners[15] = makevalue__z1_49907020();
   scope->inners[16] = makevalue__a00_50051160();
   scope->inners[17] = makevalue__a01_50187040();
   scope->inners[18] = makeflag__z0_50187020();
   scope->inners[19] = makeflag__z1_50186980();
   scope->inners[20] = makeack__a00_50186960();
   scope->inners[21] = makeack__a01_50186900();
   scope->inners[22] = make_5899_50186880();
   scope->inners[23] = make_58100_50186720();
   scope->inners[24] = make_58101_50379380();
   scope->inners[25] = make_58128_50379360();
   scope->inners[26] = make_58129_50379260();
   scope->inners[27] = make_58130_50519260();
   scope->inners[28] = make_58189_50644860();
   scope->inners[29] = make_58190_50853180();
   scope->inners[30] = make_58191_50853100();
   scope->inners[31] = makeval_50989060();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__50438380();
   scope->scopes[1] = make__47071720();
   scope->scopes[2] = make__50493060();
   scope->scopes[3] = make__51207580();
   scope->scopes[4] = make__47848980();
   scope->scopes[5] = make__50606780();
   scope->scopes[6] = make__51510840();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57659280();
   scope->behaviors[1] = make__47960820();
   scope->behaviors[2] = make__51657300();
   scope->behaviors[3] = make__51655220();
   scope->behaviors[4] = make__55119740();
   scope->behaviors[5] = make__55119580();
   scope->behaviors[6] = make__55119420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_51654360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_51654360 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_54959740();
   systemT->inputs[1] = makerst_54959720();
   systemT->inputs[2] = makereq_54959700();
   systemT->inputs[3] = makefill_54959680();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_54959640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__50438680();

   return systemT;
}