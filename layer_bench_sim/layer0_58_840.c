#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_53932980;

SignalI clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeclk_53930120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_840_53932980;
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

SignalI rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makerst_53930060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_840_53932980;
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

SignalI fill_53930000_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makefill_53930000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_53930000_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_840_53932980;
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

SignalI req_53929980_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makereq_53929980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_53929980_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_840_53932980;
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

SignalI ack__0_53929920_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeack__0_53929920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_53929920_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_840_53932980;
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

Block __49056400;

Block __49055300;

Block __49054800;

void code__49054800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,value__z0_53426820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61473320(),flag__z0_53692300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49054800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49054800 = block;
   block->owner = (Object)__49055300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49054800;

   return block;
};

Block __49703760;

void code__49703760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,value__z1_53479940_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61473180(),flag__z1_53692280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49703760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49703760 = block;
   block->owner = (Object)__49055300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49703760;

   return block;
};

void code__49055300() {
 code__49054800();
 code__49703760();
}

Block make__49055300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49055300 = block;
   block->owner = (Object)__49056400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49055300;

   return block;
};

Block __49056060;

void code__49056060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61473120(),flag__z0_53692300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61473060(),flag__z1_53692280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49056060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49056060 = block;
   block->owner = (Object)__49056400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49056060;

   return block;
};

void code__49056400() {
   {
      Value cond = ack__add_50011980_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49055300();
   }
   else {
  code__49056060();
   }
      }
   }
}

Block make__49056400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49056400 = block;
   block->owner = (Object)__50054500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49056400;

   return block;
};

Block __50054320;

Block __50053740;

Block __50053480;

void code__50053480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_53639380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_5832_49991620______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61472820(),ack__a00_53692260_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__50053480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50053480 = block;
   block->owner = (Object)__50053740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50053480;

   return block;
};

Block __52638980;

void code__52638980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a01_53692320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_5833_50054760______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61497220(),ack__a01_53692240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__52638980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52638980 = block;
   block->owner = (Object)__50053740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52638980;

   return block;
};

void code__50053740() {
 code__50053480();
 code__52638980();
}

Block make__50053740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50053740 = block;
   block->owner = (Object)__50054320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50053740;

   return block;
};

void code__50054320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_53692300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         src1 = flag__z1_53692280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50053740();
   }
      }
   }
}

Block make__50054320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50054320 = block;
   block->owner = (Object)__53139120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50054320;

   return block;
};

Block __53139000;

Block __53138820;

Block __53138360;

void code__53138360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61497060(),_58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53138360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53138360 = block;
   block->owner = (Object)__53138820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53138360;

   return block;
};

void code__53138820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61497140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53138360();
   }
      }
   }
}

Block make__53138820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53138820 = block;
   block->owner = (Object)__53139000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53138820;

   return block;
};

Block __53137560;

Block __53136900;

void code__53136900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61496900(),_58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53136900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53136900 = block;
   block->owner = (Object)__53137560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53136900;

   return block;
};

void code__53137560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61496980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53136900();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61496840(),_58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53137560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53137560 = block;
   block->owner = (Object)__53139000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53137560;

   return block;
};

Block __53136060;

Block __53135660;

void code__53135660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61496680(),_58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53135660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53135660 = block;
   block->owner = (Object)__53136060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53135660;

   return block;
};

void code__53136060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61496760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53135660();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61496600(),_5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53136060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53136060 = block;
   block->owner = (Object)__53139000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53136060;

   return block;
};

Block __53134620;

Block __53133880;

Block __53133560;

void code__53133560() {
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
                  src0 = _58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61496260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61496160(),_5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61496100(),_58101_53884340_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53133560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53133560 = block;
   block->owner = (Object)__53133880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53133560;

   return block;
};

void code__53133880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61496460();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53133560();
   }
      }
   }
}

Block make__53133880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53133880 = block;
   block->owner = (Object)__53134620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53133880;

   return block;
};

Block __53373620;

Block __53373160;

void code__53373160() {
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
                  src0 = _58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61495880();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61495780(),_58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61495720(),_58130_53969820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53373160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53373160 = block;
   block->owner = (Object)__53373620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53373160;

   return block;
};

void code__53373620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61496020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53373160();
   }
      }
   }
}

Block make__53373620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53373620 = block;
   block->owner = (Object)__53134620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53373620;

   return block;
};

Block __53509400;

Block __53508980;

Block __53508400;

void code__53508400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61495460(),_58191_54129300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53508400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53508400 = block;
   block->owner = (Object)__53508980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53508400;

   return block;
};

Block __53677480;

void code__53677480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61495380(),_58192_54206860_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53677480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53677480 = block;
   block->owner = (Object)__53508980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53677480;

   return block;
};

void code__53508980() {
{
      Value value = _58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__61495520())) {
    code__53508400();
         }
         else if (value2integer(value) == value2integer(make__61495440())) {
    code__53677480();
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
                  src0 = _58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61495260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53508980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53508980 = block;
   block->owner = (Object)__53509400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53508980;

   return block;
};

void code__53509400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61495640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53508980();
   }
      }
   }
}

Block make__53509400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53509400 = block;
   block->owner = (Object)__53134620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53509400;

   return block;
};

void code__53134620() {
 code__53133880();
 code__53373620();
 code__53509400();
}

Block make__53134620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53134620 = block;
   block->owner = (Object)__53139000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53134620;

   return block;
};

void code__53139000() {
 code__53138820();
 code__53137560();
 code__53136060();
   {
      Value cond = fill_53930000_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53134620();
   }
      }
   }
}

Block make__53139000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53139000 = block;
   block->owner = (Object)__53933680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53139000;

   return block;
};

Block __61260780;

void code__61260780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_53426820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_53479940_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a00_53692260_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      src1 = ack__a01_53692240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__0_53929920_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61260780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61260780 = block;
   block->owner = (Object)__61281700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61260780;

   return block;
};

Block __61260720;

void code__61260720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_53255020_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,value__a00_53639380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_54180400_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,value__a01_53692320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61260720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61260720 = block;
   block->owner = (Object)__61281540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61260720;

   return block;
};

Block __49626880;

Block __49833280;

void code__49833280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48304780_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,make_ref_rangeS(mem_48434140_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740,value2integer(abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value),value2integer(abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49833280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49833280 = block;
   block->owner = (Object)__49626880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49833280;

   return block;
};

void code__49626880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48434140_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
            idx = value2integer(abus__r_48304180_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48154100_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47946700_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49833280();
   }
      }
   }
}

Block make__49626880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49626880 = block;
   block->owner = (Object)__50089640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49626880;

   return block;
};

Block __61280800;

void code__61280800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48154100_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_5897_50103520_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61280800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61280800 = block;
   block->owner = (Object)__61280620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61280800;

   return block;
};

Block __61280560;

void code__61280560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_50103520_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,dbus__r_48154100_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61280560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61280560 = block;
   block->owner = (Object)__61280360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61280560;

   return block;
};

Block __61280060;

void code__61280060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_47946720_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61280060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61280060 = block;
   block->owner = (Object)__61279900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61280060;

   return block;
};

Block __61279860;

void code__61279860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,trig__r_47946720_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61279860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61279860 = block;
   block->owner = (Object)__61279700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61279860;

   return block;
};

Block __61279400;

void code__61279400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48304180_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61279400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61279400 = block;
   block->owner = (Object)__61279240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61279400;

   return block;
};

Block __61279200;

void code__61279200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,abus__r_48304180_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61279200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61279200 = block;
   block->owner = (Object)__61279040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61279200;

   return block;
};

Block __61278720;

void code__61278720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_47946700_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61278720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61278720 = block;
   block->owner = (Object)__61278540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61278720;

   return block;
};

Block __61278480;

void code__61278480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,trig__w_47946700_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61278480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61278480 = block;
   block->owner = (Object)__61278280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61278480;

   return block;
};

Block __61277980;

void code__61277980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61277980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61277980 = block;
   block->owner = (Object)__61277820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61277980;

   return block;
};

Block __61277780;

void code__61277780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61277780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61277780 = block;
   block->owner = (Object)__61277620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61277780;

   return block;
};

Block __61277320;

void code__61277320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48304780_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58101_53884340_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61277320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61277320 = block;
   block->owner = (Object)__61277160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61277320;

   return block;
};

Block __61277120;

void code__61277120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_53884340_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,dbus__w_48304780_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61277120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61277120 = block;
   block->owner = (Object)__61276960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61277120;

   return block;
};

Block __49108020;

Block __49668900;

void code__49668900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47803760_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,make_ref_rangeS(mem_48109300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740,value2integer(abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value),value2integer(abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49668900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49668900 = block;
   block->owner = (Object)__49108020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49668900;

   return block;
};

void code__49108020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48109300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
            idx = value2integer(abus__r_47803580_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50208500_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_50086280_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49668900();
   }
      }
   }
}

Block make__49108020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49108020 = block;
   block->owner = (Object)__49961880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49108020;

   return block;
};

Block __61316260;

void code__61316260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50208500_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58126_51263780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61316260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61316260 = block;
   block->owner = (Object)__61316100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61316260;

   return block;
};

Block __61316060;

void code__61316060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_51263780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,dbus__r_50208500_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61316060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61316060 = block;
   block->owner = (Object)__61315900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61316060;

   return block;
};

Block __61315600;

void code__61315600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50086300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61315600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61315600 = block;
   block->owner = (Object)__61315400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61315600;

   return block;
};

Block __61315360;

void code__61315360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,trig__r_50086300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61315360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61315360 = block;
   block->owner = (Object)__61315140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61315360;

   return block;
};

Block __61314840;

void code__61314840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47803580_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61314840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61314840 = block;
   block->owner = (Object)__61314680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61314840;

   return block;
};

Block __61314640;

void code__61314640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,abus__r_47803580_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61314640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61314640 = block;
   block->owner = (Object)__61314480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61314640;

   return block;
};

Block __61314180;

void code__61314180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_50086280_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61314180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61314180 = block;
   block->owner = (Object)__61314020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61314180;

   return block;
};

Block __61313980;

void code__61313980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,trig__w_50086280_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61313980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61313980 = block;
   block->owner = (Object)__61313820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61313980;

   return block;
};

Block __61313520;

void code__61313520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61313520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61313520 = block;
   block->owner = (Object)__61313320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61313520;

   return block;
};

Block __61313280;

void code__61313280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61313280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61313280 = block;
   block->owner = (Object)__61313060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61313280;

   return block;
};

Block __61312760;

void code__61312760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47803760_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58130_53969820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61312760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61312760 = block;
   block->owner = (Object)__61312600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61312760;

   return block;
};

Block __61312560;

void code__61312560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_53969820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,dbus__w_47803760_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61312560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61312560 = block;
   block->owner = (Object)__61312400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61312560;

   return block;
};

Block __61310780;

void code__61310780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50038740_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61310780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61310780 = block;
   block->owner = (Object)__61310620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61310780;

   return block;
};

Block __61310580;

void code__61310580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,reg__0_50038740_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61310580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61310580 = block;
   block->owner = (Object)__61310420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61310580;

   return block;
};

Block __61310120;

void code__61310120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50137340_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61310120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61310120 = block;
   block->owner = (Object)__61309960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61310120;

   return block;
};

Block __61309920;

void code__61309920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,reg__1_50137340_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61309920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61309920 = block;
   block->owner = (Object)__61309760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61309920;

   return block;
};

Block __49689680;

Block __49689500;

Block __49689080;

void code__49689080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61457760(),_58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49689080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49689080 = block;
   block->owner = (Object)__49689500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49689080;

   return block;
};

void code__49689500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61457840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49689080();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61457700(),_58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49689500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49689500 = block;
   block->owner = (Object)__49689680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49689500;

   return block;
};

Block __49688340;

Block __49687840;

void code__49687840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61457540(),_5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49687840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49687840 = block;
   block->owner = (Object)__49688340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49687840;

   return block;
};

void code__49688340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61457620();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49687840();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61457480(),_5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49688340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49688340 = block;
   block->owner = (Object)__49689680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49688340;

   return block;
};

Block __49687200;

Block __49686800;

void code__49686800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61457320(),_5814_49819420______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49686800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49686800 = block;
   block->owner = (Object)__49687200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49686800;

   return block;
};

void code__49687200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61457400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49686800();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61457260(),_5813_49819500______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49687200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49687200 = block;
   block->owner = (Object)__49689680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49687200;

   return block;
};

Block __49883780;

Block __49883420;

Block __49883060;

Block __49882640;

void code__49882640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_49819520______58_84_48125920______58_840_61083740->c_value,rv_49689880_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61456640(),rvok_49689820_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49882640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49882640 = block;
   block->owner = (Object)__49883060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49882640;

   return block;
};

void code__49883060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_49819500______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61456800();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49882640();
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
                  src0 = _5814_49819420______58_84_48125920______58_840_61083740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61456520();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_49819420______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61456420(),_5813_49819500______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49883060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49883060 = block;
   block->owner = (Object)__49883420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49883060;

   return block;
};

void code__49883420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61456900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49883060();
   }
      }
   }
}

Block make__49883420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49883420 = block;
   block->owner = (Object)__49883780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49883420;

   return block;
};

Block __50069780;

Block __50094000;

Block __50093680;

void code__50093680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_50103520_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,lv0_49357600_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61480600(),lvok0_49689860_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__50093680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50093680 = block;
   block->owner = (Object)__50094000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50093680;

   return block;
};

void code__50094000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61480780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50093680();
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
                  src0 = _5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61480460();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61480300(),_5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__50094000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50094000 = block;
   block->owner = (Object)__50069780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50094000;

   return block;
};

void code__50069780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61480880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50094000();
   }
      }
   }
}

Block make__50069780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50069780 = block;
   block->owner = (Object)__49883780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50069780;

   return block;
};

Block __48160400;

Block __48159760;

Block __48159440;

void code__48159440() {
}

Block make__48159440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48159440 = block;
   block->owner = (Object)__48159760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48159440;

   return block;
};

Block __48371740;

void code__48371740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49201680_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__48371740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48371740 = block;
   block->owner = (Object)__48159760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48371740;

   return block;
};

void code__48159760() {
 code__48159440();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49201680_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
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
                              src0 = lv0_49357600_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49689880_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61479740();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49201680_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__48371740();
}

Block make__48159760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48159760 = block;
   block->owner = (Object)__48160400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48159760;

   return block;
};

void code__48160400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61480140(),ack__mac_50012040_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61480080(),run_49689800_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__48159760();
}

Block make__48160400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48160400 = block;
   block->owner = (Object)__49883780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48160400;

   return block;
};

Block __49569420;

Block __49569040;

Block __49568640;

void code__49568640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_51263780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,lv1_49087600_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61479280(),lvok1_49689840_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49568640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49568640 = block;
   block->owner = (Object)__49569040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49568640;

   return block;
};

void code__49569040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61479440();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49568640();
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
                  src0 = _58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61479160();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61479060(),_58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49569040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49569040 = block;
   block->owner = (Object)__49569420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49569040;

   return block;
};

void code__49569420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61479540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49569040();
   }
      }
   }
}

Block make__49569420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49569420 = block;
   block->owner = (Object)__49883780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49569420;

   return block;
};

Block __50010700;

Block __50010060;

Block __50009860;

void code__50009860() {
}

Block make__50009860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50009860 = block;
   block->owner = (Object)__50010060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50009860;

   return block;
};

Block __49222280;

void code__49222280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_49604680_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49222280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49222280 = block;
   block->owner = (Object)__50010060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49222280;

   return block;
};

void code__50010060() {
 code__50009860();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_49604680_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
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
                              src0 = lv1_49087600_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49689880_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61478460();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_49604680_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__49222280();
}

Block make__50010060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50010060 = block;
   block->owner = (Object)__50010700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50010060;

   return block;
};

void code__50010700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61478900(),ack__mac_50012040_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61478840(),run_49689800_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__50010060();
}

Block make__50010700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50010700 = block;
   block->owner = (Object)__49883780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50010700;

   return block;
};

void code__49883780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61456980(),run_49689800_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__49883420();
 code__50069780();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49689860_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         src1 = rvok_49689820_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48160400();
   }
      }
   }
 code__49569420();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49689840_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         src1 = rvok_49689820_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50010700();
   }
      }
   }
}

Block make__49883780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49883780 = block;
   block->owner = (Object)__49689680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49883780;

   return block;
};

Block __49685560;

void code__49685560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61478220(),rvok_49689820_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61478160(),lvok0_49689860_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61478100(),av0_49201680_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61478040(),lvok1_49689840_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61477980(),av1_49604680_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49685560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49685560 = block;
   block->owner = (Object)__49689680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49685560;

   return block;
};

void code__49689680() {
 code__49689500();
 code__49688340();
 code__49687200();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61457200(),ack__mac_50012040_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61457140(),run_49689800_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_53929980_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         src1 = run_49689800_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49883780();
   }
   else {
  code__49685560();
   }
      }
   }
}

Block make__49689680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49689680 = block;
   block->owner = (Object)__49722760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49689680;

   return block;
};

Block __61365080;

void code__61365080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58176_52774180_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61365080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61365080 = block;
   block->owner = (Object)__61364920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61365080;

   return block;
};

Block __61364880;

void code__61364880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_52774180_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61364880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61364880 = block;
   block->owner = (Object)__61364720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61364880;

   return block;
};

Block __61364420;

void code__61364420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58177_53023800_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61364420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61364420 = block;
   block->owner = (Object)__61364240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61364420;

   return block;
};

Block __61364180;

void code__61364180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_53023800_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61364180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61364180 = block;
   block->owner = (Object)__61363960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61364180;

   return block;
};

Block __61363660;

void code__61363660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58191_54129300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61363660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61363660 = block;
   block->owner = (Object)__61363500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61363660;

   return block;
};

Block __61363460;

void code__61363460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_54129300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61363460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61363460 = block;
   block->owner = (Object)__61363300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61363460;

   return block;
};

Block __61363000;

void code__61363000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58192_54206860_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61363000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61363000 = block;
   block->owner = (Object)__61362840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61363000;

   return block;
};

Block __61362800;

void code__61362800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58192_54206860_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61362800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61362800 = block;
   block->owner = (Object)__61362640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61362800;

   return block;
};

Block __61360960;

void code__61360960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49719160_winc_58190_49719700_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61360960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61360960 = block;
   block->owner = (Object)__61360800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61360960;

   return block;
};

Block __61360760;

void code__61360760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,abus__w_49719160_winc_58190_49719700_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61360760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61360760 = block;
   block->owner = (Object)__61360600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61360760;

   return block;
};

Block __61359380;

void code__61359380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53374160_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61359380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61359380 = block;
   block->owner = (Object)__61359220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61359380;

   return block;
};

Block __61359180;

void code__61359180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,reg__0_53374160_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61359180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61359180 = block;
   block->owner = (Object)__61359020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61359180;

   return block;
};

Block __61358720;

void code__61358720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_53436920_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,_58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61358720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61358720 = block;
   block->owner = (Object)__61358560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61358720;

   return block;
};

Block __61358520;

void code__61358520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,reg__1_53436920_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61358520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61358520 = block;
   block->owner = (Object)__61358360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61358520;

   return block;
};

Block __54290220;

Block __54288800;

Block __54288480;

void code__54288480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,lv0_54020320_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61475780(),lvok0_54290420_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__54288480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54288480 = block;
   block->owner = (Object)__54288800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54288480;

   return block;
};

Block __54659260;

void code__54659260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_52774180_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,rv0_54235880_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61475640(),rvok0_54290380_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__54659260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54659260 = block;
   block->owner = (Object)__54288800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54659260;

   return block;
};

Block __54931640;

Block __54931160;

void code__54931160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_54020320_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      src1 = rv0_54235880_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__54931160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54931160 = block;
   block->owner = (Object)__54931640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54931160;

   return block;
};

void code__54931640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61475480(),run_54290340_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61475420(),ack__add_50011980_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__54931160();
}

Block make__54931640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54931640 = block;
   block->owner = (Object)__54288800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54931640;

   return block;
};

Block __48137000;

void code__48137000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,lv1_54181340_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61475100(),lvok1_54290400_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__48137000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48137000 = block;
   block->owner = (Object)__54288800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48137000;

   return block;
};

Block __49359460;

void code__49359460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_53023800_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,rv1_54290440_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61474960(),rvok1_54290360_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49359460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49359460 = block;
   block->owner = (Object)__54288800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49359460;

   return block;
};

Block __49251280;

Block __49250740;

void code__49250740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_54181340_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      src1 = rv1_54290440_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49250740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49250740 = block;
   block->owner = (Object)__49251280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49250740;

   return block;
};

void code__49251280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61474800(),run_54290340_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61474740(),ack__add_50011980_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__49250740();
}

Block make__49251280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49251280 = block;
   block->owner = (Object)__54288800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49251280;

   return block;
};

void code__54288800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61475920(),run_54290340_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__54288480();
 code__54659260();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_54290420_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         src1 = rvok0_54290380_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54931640();
   }
      }
   }
 code__48137000();
 code__49359460();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_54290400_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         src1 = rvok1_54290360_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49251280();
   }
      }
   }
}

Block make__54288800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54288800 = block;
   block->owner = (Object)__54290220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54288800;

   return block;
};

Block __54289740;

void code__54289740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61474500(),lvok0_54290420_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61474440(),rvok0_54290380_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61474360(),lvok1_54290400_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61474280(),rvok1_54290360_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__54289740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54289740 = block;
   block->owner = (Object)__54290220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54289740;

   return block;
};

void code__54290220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61476140(),ack__add_50011980_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61476080(),run_54290340_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_50012040_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         src1 = run_54290340_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54288800();
   }
   else {
  code__54289740();
   }
      }
   }
}

Block make__54290220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54290220 = block;
   block->owner = (Object)__49987760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54290220;

   return block;
};

Value make__61457840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61457760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61457700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61457620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61457540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61457480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61457400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61457320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61457260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61457200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61457140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61456980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61456900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61456800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61456640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61456520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61456420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61480880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61480780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61480600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61480460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61480300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61480140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61480080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61479740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61479540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61479440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61479280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61479160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61479060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61478900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61478840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61478460() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61478220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61478160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61478100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61478040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61477980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61476140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61476080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61475920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61475780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61475640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61475480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61475420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61475100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61474960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61474800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61474740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61474500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61474440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61474360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61474280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61473320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61473180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61473120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61473060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61472820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61497220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61497140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61497060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61496980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61496900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61496840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61496760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61496680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61496600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61496460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61496260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61496160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61496100() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61496020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61495880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61495780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61495720() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61495640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61495520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61495460() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61495440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61495380() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61495260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer0_58_84_47891680;

SignalI ack__mac_50012040_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeack__mac_50012040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50012040_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI ack__add_50011980_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeack__add_50011980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_50011980_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _5897_50103520_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_5897_50103520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_50103520_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_5895_50103360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_5896_50102380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58126_51263780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58126_51263780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_51263780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58124_51263760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58125_51263660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58143_50505640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58144_52655660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58176_52774180_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58176_52774180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58176_52774180_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58177_53023800_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58177_53023800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58177_53023800_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58206_53134120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58207_53349280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI value__z0_53426820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makevalue__z0_53426820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_53426820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI value__z1_53479940_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makevalue__z1_53479940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_53479940_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI value__a00_53639380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makevalue__a00_53639380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_53639380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI value__a01_53692320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makevalue__a01_53692320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a01_53692320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI flag__z0_53692300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeflag__z0_53692300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_53692300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI flag__z1_53692280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeflag__z1_53692280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_53692280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI ack__a00_53692260_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeack__a00_53692260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_53692260_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI ack__a01_53692240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeack__a01_53692240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a01_53692240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_5899_53692220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58100_53692140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58101_53884340_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58101_53884340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_53884340_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58128_53884320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58129_53884240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58130_53969820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58130_53969820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_53969820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58191_54129300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58191_54129300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58191_54129300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58192_54206860_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58192_54206860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58192_54206860_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SignalI _58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI make_58193_54206780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer0_58_84_47891680;
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

SystemI func0_53254860;

SystemI makefunc0_53254860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_53254860 = systemI;
   systemI->owner = (Object)layer0_58_84_47891680;
   systemI->name = "func0";
   systemI->system = func0_58_841_52711320;

   return systemI;
};

SystemI func1_54180240;

SystemI makefunc1_54180240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_54180240 = systemI;
   systemI->owner = (Object)layer0_58_84_47891680;
   systemI->name = "func1";
   systemI->system = func1_58_840_53709540;

   return systemI;
};

Scope channel__w0_5883_47913300;

SignalI trig__r_47946720_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI maketrig__r_47946720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47946720_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_5883_47913300;
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

SignalI trig__w_47946700_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI maketrig__w_47946700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47946700_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_5883_47913300;
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

SignalI dbus__r_48154100_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makedbus__r_48154100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48154100_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_5883_47913300;
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

SignalI dbus__w_48304780_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makedbus__w_48304780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48304780_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_5883_47913300;
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

SignalI abus__r_48304180_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__r_48304180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48304180_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_5883_47913300;
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

SignalI abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__w_48303960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_5883_47913300;
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

SignalI mem_48434140_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makemem_48434140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48434140_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_5883_47913300;
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

Scope raddr_5884_47907820;

Scope makeraddr_5884_47907820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_47907820 = scope;
   scope->owner = (Object)channel__w0_5883_47913300;
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

Scope waddr_5889_47929380;

Scope makewaddr_5889_47929380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_47929380 = scope;
   scope->owner = (Object)channel__w0_5883_47913300;
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

Scope rinc_5894_47928140;

Scope makerinc_5894_47928140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_47928140 = scope;
   scope->owner = (Object)channel__w0_5883_47913300;
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

Scope winc_5898_47925180;

Scope makewinc_5898_47925180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_47925180 = scope;
   scope->owner = (Object)channel__w0_5883_47913300;
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

Scope rdec_58102_47924340;

Scope makerdec_58102_47924340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_47924340 = scope;
   scope->owner = (Object)channel__w0_5883_47913300;
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

Scope wdec_58107_47923560;

Scope makewdec_58107_47923560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_47923560 = scope;
   scope->owner = (Object)channel__w0_5883_47913300;
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

Behavior __50089640;

Behavior make__50089640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50089640 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_neg += 1;
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->neg = realloc(clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->neg,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_neg*sizeof(Object));
clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->neg[clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_neg-1] = (Object)behavior;
   behavior->block = make__49626880();

   return behavior;
}

Behavior __61280620;

Behavior make__61280620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61280620 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48154100_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   dbus__r_48154100_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   dbus__r_48154100_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(dbus__r_48154100_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,dbus__r_48154100_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
dbus__r_48154100_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[dbus__r_48154100_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61280800();

   return behavior;
}

Behavior __61280360;

Behavior make__61280360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61280360 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_50103520_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _5897_50103520_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _5897_50103520_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_5897_50103520_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_5897_50103520_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5897_50103520_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_5897_50103520_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61280560();

   return behavior;
}

Behavior __61279900;

Behavior make__61279900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61279900 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_47946720_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   trig__r_47946720_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   trig__r_47946720_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(trig__r_47946720_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,trig__r_47946720_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
trig__r_47946720_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[trig__r_47946720_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61280060();

   return behavior;
}

Behavior __61279700;

Behavior make__61279700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61279700 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_5895_50103360_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61279860();

   return behavior;
}

Behavior __61279240;

Behavior make__61279240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61279240 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48304180_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   abus__r_48304180_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   abus__r_48304180_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(abus__r_48304180_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,abus__r_48304180_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
abus__r_48304180_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[abus__r_48304180_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61279400();

   return behavior;
}

Behavior __61279040;

Behavior make__61279040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61279040 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_5896_50102380_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61279200();

   return behavior;
}

Behavior __61278540;

Behavior make__61278540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61278540 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_47946700_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   trig__w_47946700_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   trig__w_47946700_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(trig__w_47946700_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,trig__w_47946700_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
trig__w_47946700_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[trig__w_47946700_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61278720();

   return behavior;
}

Behavior __61278280;

Behavior make__61278280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61278280 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_5899_53692220_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61278480();

   return behavior;
}

Behavior __61277820;

Behavior make__61277820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61277820 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[abus__w_48303960_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61277980();

   return behavior;
}

Behavior __61277620;

Behavior make__61277620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61277620 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58100_53692140_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61277780();

   return behavior;
}

Behavior __61277160;

Behavior make__61277160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61277160 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48304780_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   dbus__w_48304780_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   dbus__w_48304780_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(dbus__w_48304780_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,dbus__w_48304780_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
dbus__w_48304780_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[dbus__w_48304780_channel__w0_5883_47913300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61277320();

   return behavior;
}

Behavior __61276960;

Behavior make__61276960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61276960 = behavior;
   behavior->owner = (Object)channel__w0_5883_47913300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_53884340_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58101_53884340_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58101_53884340_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58101_53884340_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58101_53884340_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58101_53884340_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58101_53884340_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61277120();

   return behavior;
}

Scope makechannel__w0_5883_47913300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_47913300 = scope;
   scope->owner = (Object)layer0_58_84_47891680;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47946720();
   scope->inners[1] = maketrig__w_47946700();
   scope->inners[2] = makedbus__r_48154100();
   scope->inners[3] = makedbus__w_48304780();
   scope->inners[4] = makeabus__r_48304180();
   scope->inners[5] = makeabus__w_48303960();
   scope->inners[6] = makemem_48434140();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_47907820();
   scope->scopes[1] = makewaddr_5889_47929380();
   scope->scopes[2] = makerinc_5894_47928140();
   scope->scopes[3] = makewinc_5898_47925180();
   scope->scopes[4] = makerdec_58102_47924340();
   scope->scopes[5] = makewdec_58107_47923560();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50089640();
   scope->behaviors[1] = make__61280620();
   scope->behaviors[2] = make__61280360();
   scope->behaviors[3] = make__61279900();
   scope->behaviors[4] = make__61279700();
   scope->behaviors[5] = make__61279240();
   scope->behaviors[6] = make__61279040();
   scope->behaviors[7] = make__61278540();
   scope->behaviors[8] = make__61278280();
   scope->behaviors[9] = make__61277820();
   scope->behaviors[10] = make__61277620();
   scope->behaviors[11] = make__61277160();
   scope->behaviors[12] = make__61276960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_50089480;

SignalI trig__r_50086300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI maketrig__r_50086300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50086300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w1_58112_50089480;
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

SignalI trig__w_50086280_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI maketrig__w_50086280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_50086280_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w1_58112_50089480;
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

SignalI dbus__r_50208500_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makedbus__r_50208500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50208500_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w1_58112_50089480;
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

SignalI dbus__w_47803760_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makedbus__w_47803760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47803760_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w1_58112_50089480;
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

SignalI abus__r_47803580_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__r_47803580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47803580_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w1_58112_50089480;
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

SignalI abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__w_47803320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w1_58112_50089480;
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

SignalI mem_48109300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makemem_48109300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48109300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w1_58112_50089480;
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

Scope raddr_58113_50089180;

Scope makeraddr_58113_50089180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_50089180 = scope;
   scope->owner = (Object)channel__w1_58112_50089480;
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

Scope waddr_58118_50088700;

Scope makewaddr_58118_50088700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_50088700 = scope;
   scope->owner = (Object)channel__w1_58112_50089480;
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

Scope rinc_58123_50088140;

Scope makerinc_58123_50088140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_50088140 = scope;
   scope->owner = (Object)channel__w1_58112_50089480;
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

Scope winc_58127_50087720;

Scope makewinc_58127_50087720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_50087720 = scope;
   scope->owner = (Object)channel__w1_58112_50089480;
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

Scope rdec_58131_50087300;

Scope makerdec_58131_50087300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_50087300 = scope;
   scope->owner = (Object)channel__w1_58112_50089480;
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

Scope wdec_58136_50086880;

Scope makewdec_58136_50086880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_50086880 = scope;
   scope->owner = (Object)channel__w1_58112_50089480;
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

Behavior __49961880;

Behavior make__49961880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49961880 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_neg += 1;
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->neg = realloc(clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->neg,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_neg*sizeof(Object));
clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->neg[clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_neg-1] = (Object)behavior;
   behavior->block = make__49108020();

   return behavior;
}

Behavior __61316100;

Behavior make__61316100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61316100 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50208500_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   dbus__r_50208500_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   dbus__r_50208500_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(dbus__r_50208500_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,dbus__r_50208500_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
dbus__r_50208500_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[dbus__r_50208500_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61316260();

   return behavior;
}

Behavior __61315900;

Behavior make__61315900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61315900 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_51263780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58126_51263780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58126_51263780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58126_51263780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58126_51263780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58126_51263780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58126_51263780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61316060();

   return behavior;
}

Behavior __61315400;

Behavior make__61315400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61315400 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50086300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   trig__r_50086300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   trig__r_50086300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(trig__r_50086300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,trig__r_50086300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
trig__r_50086300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[trig__r_50086300_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61315600();

   return behavior;
}

Behavior __61315140;

Behavior make__61315140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61315140 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58124_51263760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61315360();

   return behavior;
}

Behavior __61314680;

Behavior make__61314680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61314680 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47803580_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   abus__r_47803580_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   abus__r_47803580_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(abus__r_47803580_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,abus__r_47803580_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
abus__r_47803580_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[abus__r_47803580_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61314840();

   return behavior;
}

Behavior __61314480;

Behavior make__61314480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61314480 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58125_51263660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61314640();

   return behavior;
}

Behavior __61314020;

Behavior make__61314020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61314020 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_50086280_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   trig__w_50086280_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   trig__w_50086280_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(trig__w_50086280_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,trig__w_50086280_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
trig__w_50086280_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[trig__w_50086280_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61314180();

   return behavior;
}

Behavior __61313820;

Behavior make__61313820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61313820 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58128_53884320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61313980();

   return behavior;
}

Behavior __61313320;

Behavior make__61313320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61313320 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[abus__w_47803320_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61313520();

   return behavior;
}

Behavior __61313060;

Behavior make__61313060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61313060 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58129_53884240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61313280();

   return behavior;
}

Behavior __61312600;

Behavior make__61312600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61312600 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47803760_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   dbus__w_47803760_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   dbus__w_47803760_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(dbus__w_47803760_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,dbus__w_47803760_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
dbus__w_47803760_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[dbus__w_47803760_channel__w1_58112_50089480_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61312760();

   return behavior;
}

Behavior __61312400;

Behavior make__61312400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61312400 = behavior;
   behavior->owner = (Object)channel__w1_58112_50089480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_53969820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58130_53969820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58130_53969820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58130_53969820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58130_53969820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58130_53969820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58130_53969820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61312560();

   return behavior;
}

Scope makechannel__w1_58112_50089480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_50089480 = scope;
   scope->owner = (Object)layer0_58_84_47891680;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50086300();
   scope->inners[1] = maketrig__w_50086280();
   scope->inners[2] = makedbus__r_50208500();
   scope->inners[3] = makedbus__w_47803760();
   scope->inners[4] = makeabus__r_47803580();
   scope->inners[5] = makeabus__w_47803320();
   scope->inners[6] = makemem_48109300();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_50089180();
   scope->scopes[1] = makewaddr_58118_50088700();
   scope->scopes[2] = makerinc_58123_50088140();
   scope->scopes[3] = makewinc_58127_50087720();
   scope->scopes[4] = makerdec_58131_50087300();
   scope->scopes[5] = makewdec_58136_50086880();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49961880();
   scope->behaviors[1] = make__61316100();
   scope->behaviors[2] = make__61315900();
   scope->behaviors[3] = make__61315400();
   scope->behaviors[4] = make__61315140();
   scope->behaviors[5] = make__61314680();
   scope->behaviors[6] = make__61314480();
   scope->behaviors[7] = make__61314020();
   scope->behaviors[8] = make__61313820();
   scope->behaviors[9] = make__61313320();
   scope->behaviors[10] = make__61313060();
   scope->behaviors[11] = make__61312600();
   scope->behaviors[12] = make__61312400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_49961760;

SignalI reg__0_50038740_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makereg__0_50038740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50038740_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__accum_58141_49961760;
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

SignalI reg__1_50137340_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makereg__1_50137340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50137340_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__accum_58141_49961760;
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

Scope anum_58142_49961420;

Scope makeanum_58142_49961420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_49961420 = scope;
   scope->owner = (Object)channel__accum_58141_49961760;
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

Scope raddr_58145_49960800;

Scope makeraddr_58145_49960800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_49960800 = scope;
   scope->owner = (Object)channel__accum_58141_49961760;
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

Scope waddr_58149_49960080;

Scope makewaddr_58149_49960080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_49960080 = scope;
   scope->owner = (Object)channel__accum_58141_49961760;
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

Scope rinc_58153_49959640;

SignalI abus__r_49959260_rinc_58153_49959640_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__r_49959260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49959260_rinc_58153_49959640_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rinc_58153_49959640;
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

Scope makerinc_58153_49959640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_49959640 = scope;
   scope->owner = (Object)channel__accum_58141_49961760;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49959260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_49959140;

SignalI abus__w_49958620_winc_58158_49959140_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__w_49958620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49958620_winc_58158_49959140_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)winc_58158_49959140;
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

Scope makewinc_58158_49959140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_49959140 = scope;
   scope->owner = (Object)channel__accum_58141_49961760;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49958620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_49958440;

SignalI abus__r_49957960_rdec_58163_49958440_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__r_49957960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49957960_rdec_58163_49958440_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rdec_58163_49958440;
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

Scope makerdec_58163_49958440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_49958440 = scope;
   scope->owner = (Object)channel__accum_58141_49961760;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49957960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_49957840;

SignalI abus__w_49957460_wdec_58168_49957840_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__w_49957460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49957460_wdec_58168_49957840_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)wdec_58168_49957840;
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

Scope makewdec_58168_49957840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_49957840 = scope;
   scope->owner = (Object)channel__accum_58141_49961760;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49957460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61310620;

Behavior make__61310620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61310620 = behavior;
   behavior->owner = (Object)channel__accum_58141_49961760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50038740_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   reg__0_50038740_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   reg__0_50038740_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(reg__0_50038740_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,reg__0_50038740_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__0_50038740_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[reg__0_50038740_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61310780();

   return behavior;
}

Behavior __61310420;

Behavior make__61310420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61310420 = behavior;
   behavior->owner = (Object)channel__accum_58141_49961760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58143_50505640_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61310580();

   return behavior;
}

Behavior __61309960;

Behavior make__61309960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61309960 = behavior;
   behavior->owner = (Object)channel__accum_58141_49961760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50137340_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   reg__1_50137340_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   reg__1_50137340_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(reg__1_50137340_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,reg__1_50137340_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__1_50137340_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[reg__1_50137340_channel__accum_58141_49961760_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61310120();

   return behavior;
}

Behavior __61309760;

Behavior make__61309760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61309760 = behavior;
   behavior->owner = (Object)channel__accum_58141_49961760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58144_52655660_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61309920();

   return behavior;
}

Scope makechannel__accum_58141_49961760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_49961760 = scope;
   scope->owner = (Object)layer0_58_84_47891680;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50038740();
   scope->inners[1] = makereg__1_50137340();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_49961420();
   scope->scopes[1] = makeraddr_58145_49960800();
   scope->scopes[2] = makewaddr_58149_49960080();
   scope->scopes[3] = makerinc_58153_49959640();
   scope->scopes[4] = makewinc_58158_49959140();
   scope->scopes[5] = makerdec_58163_49958440();
   scope->scopes[6] = makewdec_58168_49957840();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61310620();
   scope->behaviors[1] = make__61310420();
   scope->behaviors[2] = make__61309960();
   scope->behaviors[3] = make__61309760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_48370700;

SignalI lv0_49357600_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makelv0_49357600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49357600_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58173_48370700;
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

SignalI lv1_49087600_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makelv1_49087600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49087600_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58173_48370700;
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

SignalI av0_49201680_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeav0_49201680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49201680_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58173_48370700;
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

SignalI av1_49604680_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeav1_49604680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_49604680_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58173_48370700;
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

SignalI rv_49689880_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makerv_49689880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49689880_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58173_48370700;
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

SignalI lvok0_49689860_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makelvok0_49689860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49689860_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58173_48370700;
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

SignalI lvok1_49689840_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makelvok1_49689840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49689840_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58173_48370700;
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

SignalI rvok_49689820_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makervok_49689820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49689820_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58173_48370700;
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

SignalI run_49689800_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makerun_49689800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49689800_mac__n1_58173_48370700_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58173_48370700;
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

Behavior __49722760;

Behavior make__49722760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49722760 = behavior;
   behavior->owner = (Object)mac__n1_58173_48370700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos += 1;
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos = realloc(clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos*sizeof(Object));
clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos[clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos-1] = (Object)behavior;
   behavior->block = make__49689680();

   return behavior;
}

Scope makemac__n1_58173_48370700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_48370700 = scope;
   scope->owner = (Object)layer0_58_84_47891680;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49357600();
   scope->inners[1] = makelv1_49087600();
   scope->inners[2] = makeav0_49201680();
   scope->inners[3] = makeav1_49604680();
   scope->inners[4] = makerv_49689880();
   scope->inners[5] = makelvok0_49689860();
   scope->inners[6] = makelvok1_49689840();
   scope->inners[7] = makervok_49689820();
   scope->inners[8] = makerun_49689800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49722760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58174_49722620;

SignalI reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makereg__0_49833780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__bias_58174_49722620;
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

SignalI reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makereg__1_49955020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__bias_58174_49722620;
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

Scope anum_58175_49722160;

Scope makeanum_58175_49722160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58175_49722160 = scope;
   scope->owner = (Object)channel__bias_58174_49722620;
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

Scope raddr_58178_49721620;

Scope makeraddr_58178_49721620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58178_49721620 = scope;
   scope->owner = (Object)channel__bias_58174_49722620;
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

Scope waddr_58182_49720980;

Scope makewaddr_58182_49720980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58182_49720980 = scope;
   scope->owner = (Object)channel__bias_58174_49722620;
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

Scope rinc_58186_49720400;

SignalI abus__r_49719840_rinc_58186_49720400_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__r_49719840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49719840_rinc_58186_49720400_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rinc_58186_49720400;
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

Scope makerinc_58186_49720400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58186_49720400 = scope;
   scope->owner = (Object)channel__bias_58174_49722620;
   scope->name = "rinc:186";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49719840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58190_49719700;

SignalI abus__w_49719160_winc_58190_49719700_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__w_49719160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49719160_winc_58190_49719700_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)winc_58190_49719700;
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

Behavior __61360800;

Behavior make__61360800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61360800 = behavior;
   behavior->owner = (Object)winc_58190_49719700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49719160_winc_58190_49719700_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   abus__w_49719160_winc_58190_49719700_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   abus__w_49719160_winc_58190_49719700_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(abus__w_49719160_winc_58190_49719700_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,abus__w_49719160_winc_58190_49719700_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
abus__w_49719160_winc_58190_49719700_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[abus__w_49719160_winc_58190_49719700_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61360960();

   return behavior;
}

Behavior __61360600;

Behavior make__61360600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61360600 = behavior;
   behavior->owner = (Object)winc_58190_49719700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58193_54206780_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61360760();

   return behavior;
}

Scope makewinc_58190_49719700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58190_49719700 = scope;
   scope->owner = (Object)channel__bias_58174_49722620;
   scope->name = "winc:190";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49719160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61360800();
   scope->behaviors[1] = make__61360600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58194_49718660;

SignalI abus__r_49718020_rdec_58194_49718660_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__r_49718020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49718020_rdec_58194_49718660_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rdec_58194_49718660;
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

Scope makerdec_58194_49718660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58194_49718660 = scope;
   scope->owner = (Object)channel__bias_58174_49722620;
   scope->name = "rdec:194";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49718020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58199_49717900;

SignalI abus__w_49717480_wdec_58199_49717900_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__w_49717480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49717480_wdec_58199_49717900_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)wdec_58199_49717900;
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

Scope makewdec_58199_49717900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58199_49717900 = scope;
   scope->owner = (Object)channel__bias_58174_49722620;
   scope->name = "wdec:199";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49717480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61364920;

Behavior make__61364920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61364920 = behavior;
   behavior->owner = (Object)channel__bias_58174_49722620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61365080();

   return behavior;
}

Behavior __61364720;

Behavior make__61364720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61364720 = behavior;
   behavior->owner = (Object)channel__bias_58174_49722620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58176_52774180_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58176_52774180_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58176_52774180_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58176_52774180_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58176_52774180_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58176_52774180_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58176_52774180_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61364880();

   return behavior;
}

Behavior __61364240;

Behavior make__61364240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61364240 = behavior;
   behavior->owner = (Object)channel__bias_58174_49722620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61364420();

   return behavior;
}

Behavior __61363960;

Behavior make__61363960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61363960 = behavior;
   behavior->owner = (Object)channel__bias_58174_49722620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58177_53023800_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58177_53023800_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58177_53023800_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58177_53023800_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58177_53023800_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58177_53023800_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58177_53023800_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61364180();

   return behavior;
}

Behavior __61363500;

Behavior make__61363500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61363500 = behavior;
   behavior->owner = (Object)channel__bias_58174_49722620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[reg__0_49833780_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61363660();

   return behavior;
}

Behavior __61363300;

Behavior make__61363300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61363300 = behavior;
   behavior->owner = (Object)channel__bias_58174_49722620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58191_54129300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58191_54129300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58191_54129300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58191_54129300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58191_54129300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58191_54129300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58191_54129300_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61363460();

   return behavior;
}

Behavior __61362840;

Behavior make__61362840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61362840 = behavior;
   behavior->owner = (Object)channel__bias_58174_49722620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[reg__1_49955020_channel__bias_58174_49722620_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61363000();

   return behavior;
}

Behavior __61362640;

Behavior make__61362640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61362640 = behavior;
   behavior->owner = (Object)channel__bias_58174_49722620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58192_54206860_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58192_54206860_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58192_54206860_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58192_54206860_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58192_54206860_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58192_54206860_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58192_54206860_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61362800();

   return behavior;
}

Scope makechannel__bias_58174_49722620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58174_49722620 = scope;
   scope->owner = (Object)layer0_58_84_47891680;
   scope->name = "channel_bias:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49833780();
   scope->inners[1] = makereg__1_49955020();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58175_49722160();
   scope->scopes[1] = makeraddr_58178_49721620();
   scope->scopes[2] = makewaddr_58182_49720980();
   scope->scopes[3] = makerinc_58186_49720400();
   scope->scopes[4] = makewinc_58190_49719700();
   scope->scopes[5] = makerdec_58194_49718660();
   scope->scopes[6] = makewdec_58199_49717900();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61364920();
   scope->behaviors[1] = make__61364720();
   scope->behaviors[2] = make__61364240();
   scope->behaviors[3] = make__61363960();
   scope->behaviors[4] = make__61363500();
   scope->behaviors[5] = make__61363300();
   scope->behaviors[6] = make__61362840();
   scope->behaviors[7] = make__61362640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58204_53315020;

SignalI reg__0_53374160_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makereg__0_53374160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53374160_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__z_58204_53315020;
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

SignalI reg__1_53436920_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makereg__1_53436920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_53436920_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__z_58204_53315020;
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

Scope anum_58205_53314720;

Scope makeanum_58205_53314720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58205_53314720 = scope;
   scope->owner = (Object)channel__z_58204_53315020;
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

Scope raddr_58208_53314300;

Scope makeraddr_58208_53314300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58208_53314300 = scope;
   scope->owner = (Object)channel__z_58204_53315020;
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

Scope waddr_58212_53313880;

Scope makewaddr_58212_53313880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58212_53313880 = scope;
   scope->owner = (Object)channel__z_58204_53315020;
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

Scope rinc_58216_53338000;

SignalI abus__r_53337620_rinc_58216_53338000_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__r_53337620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53337620_rinc_58216_53338000_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rinc_58216_53338000;
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

Scope makerinc_58216_53338000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58216_53338000 = scope;
   scope->owner = (Object)channel__z_58204_53315020;
   scope->name = "rinc:216";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53337620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58220_53337500;

SignalI abus__w_53337120_winc_58220_53337500_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__w_53337120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53337120_winc_58220_53337500_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)winc_58220_53337500;
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

Scope makewinc_58220_53337500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58220_53337500 = scope;
   scope->owner = (Object)channel__z_58204_53315020;
   scope->name = "winc:220";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53337120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58224_53337000;

SignalI abus__r_53336620_rdec_58224_53337000_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__r_53336620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53336620_rdec_58224_53337000_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rdec_58224_53337000;
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

Scope makerdec_58224_53337000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58224_53337000 = scope;
   scope->owner = (Object)channel__z_58204_53315020;
   scope->name = "rdec:224";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53336620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58229_53336500;

SignalI abus__w_53336120_wdec_58229_53336500_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeabus__w_53336120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53336120_wdec_58229_53336500_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)wdec_58229_53336500;
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

Scope makewdec_58229_53336500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58229_53336500 = scope;
   scope->owner = (Object)channel__z_58204_53315020;
   scope->name = "wdec:229";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53336120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61359220;

Behavior make__61359220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61359220 = behavior;
   behavior->owner = (Object)channel__z_58204_53315020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53374160_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   reg__0_53374160_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   reg__0_53374160_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(reg__0_53374160_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,reg__0_53374160_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__0_53374160_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[reg__0_53374160_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61359380();

   return behavior;
}

Behavior __61359020;

Behavior make__61359020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61359020 = behavior;
   behavior->owner = (Object)channel__z_58204_53315020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58206_53134120_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61359180();

   return behavior;
}

Behavior __61358560;

Behavior make__61358560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61358560 = behavior;
   behavior->owner = (Object)channel__z_58204_53315020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_53436920_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   reg__1_53436920_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   reg__1_53436920_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(reg__1_53436920_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,reg__1_53436920_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__1_53436920_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[reg__1_53436920_channel__z_58204_53315020_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61358720();

   return behavior;
}

Behavior __61358360;

Behavior make__61358360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61358360 = behavior;
   behavior->owner = (Object)channel__z_58204_53315020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   _58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   _58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(_58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,_58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[_58207_53349280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61358520();

   return behavior;
}

Scope makechannel__z_58204_53315020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58204_53315020 = scope;
   scope->owner = (Object)layer0_58_84_47891680;
   scope->name = "channel_z:204";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53374160();
   scope->inners[1] = makereg__1_53436920();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58205_53314720();
   scope->scopes[1] = makeraddr_58208_53314300();
   scope->scopes[2] = makewaddr_58212_53313880();
   scope->scopes[3] = makerinc_58216_53338000();
   scope->scopes[4] = makewinc_58220_53337500();
   scope->scopes[5] = makerdec_58224_53337000();
   scope->scopes[6] = makewdec_58229_53336500();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61359220();
   scope->behaviors[1] = make__61359020();
   scope->behaviors[2] = make__61358560();
   scope->behaviors[3] = make__61358360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58234_53933280;

SignalI lv0_54020320_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makelv0_54020320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_54020320_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58234_53933280;
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

SignalI lv1_54181340_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makelv1_54181340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_54181340_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58234_53933280;
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

SignalI rv0_54235880_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makerv0_54235880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_54235880_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58234_53933280;
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

SignalI rv1_54290440_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makerv1_54290440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_54290440_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58234_53933280;
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

SignalI lvok0_54290420_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makelvok0_54290420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_54290420_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58234_53933280;
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

SignalI lvok1_54290400_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makelvok1_54290400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_54290400_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58234_53933280;
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

SignalI rvok0_54290380_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makervok0_54290380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_54290380_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58234_53933280;
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

SignalI rvok1_54290360_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makervok1_54290360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_54290360_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58234_53933280;
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

SignalI run_54290340_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makerun_54290340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_54290340_add__n_58234_53933280_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58234_53933280;
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

Behavior __49987760;

Behavior make__49987760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49987760 = behavior;
   behavior->owner = (Object)add__n_58234_53933280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos += 1;
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos = realloc(clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos*sizeof(Object));
clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos[clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos-1] = (Object)behavior;
   behavior->block = make__54290220();

   return behavior;
}

Scope makeadd__n_58234_53933280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58234_53933280 = scope;
   scope->owner = (Object)layer0_58_84_47891680;
   scope->name = "add_n:234";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_54020320();
   scope->inners[1] = makelv1_54181340();
   scope->inners[2] = makerv0_54235880();
   scope->inners[3] = makerv1_54290440();
   scope->inners[4] = makelvok0_54290420();
   scope->inners[5] = makelvok1_54290400();
   scope->inners[6] = makervok0_54290380();
   scope->inners[7] = makervok1_54290360();
   scope->inners[8] = makerun_54290340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49987760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50054500;

Behavior make__50054500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50054500 = behavior;
   behavior->owner = (Object)layer0_58_84_47891680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos += 1;
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos = realloc(clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos*sizeof(Object));
clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos[clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos-1] = (Object)behavior;
   behavior->block = make__49056400();

   return behavior;
}

Behavior __53139120;

Behavior make__53139120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53139120 = behavior;
   behavior->owner = (Object)layer0_58_84_47891680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos += 1;
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos = realloc(clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos*sizeof(Object));
clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos[clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos-1] = (Object)behavior;
   behavior->block = make__50054320();

   return behavior;
}

Behavior __53933680;

Behavior make__53933680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53933680 = behavior;
   behavior->owner = (Object)layer0_58_84_47891680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos += 1;
   clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos = realloc(clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos*sizeof(Object));
clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->pos[clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_pos-1] = (Object)behavior;
   behavior->block = make__53139000();

   return behavior;
}

Behavior __61281700;

Behavior make__61281700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61281700 = behavior;
   behavior->owner = (Object)layer0_58_84_47891680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,value__z0_53426820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   value__z0_53426820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   value__z0_53426820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(value__z0_53426820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,value__z0_53426820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
value__z0_53426820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[value__z0_53426820_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,value__z1_53479940_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   value__z1_53479940_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   value__z1_53479940_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(value__z1_53479940_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,value__z1_53479940_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
value__z1_53479940_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[value__z1_53479940_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__a00_53692260_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   ack__a00_53692260_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   ack__a00_53692260_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(ack__a00_53692260_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,ack__a00_53692260_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
ack__a00_53692260_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[ack__a00_53692260_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__a01_53692240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   ack__a01_53692240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   ack__a01_53692240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(ack__a01_53692240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,ack__a01_53692240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
ack__a01_53692240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[ack__a01_53692240_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61260780();

   return behavior;
}

Behavior __61281540;

Behavior make__61281540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61281540 = behavior;
   behavior->owner = (Object)layer0_58_84_47891680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_53255020_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   a_53255020_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   a_53255020_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(a_53255020_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,a_53255020_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
a_53255020_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[a_53255020_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_54180400_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   a_54180400_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   a_54180400_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(a_54180400_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,a_54180400_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
a_54180400_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[a_54180400_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61260720();

   return behavior;
}

Scope makelayer0_58_84_47891680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_47891680 = scope;
   scope->owner = (Object)layer0_58_840_53932980;
   scope->name = "layer0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_53254860();
   scope->systemIs[1] = makefunc1_54180240();
   scope->num_inners = 31;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__mac_50012040();
   scope->inners[1] = makeack__add_50011980();
   scope->inners[2] = make_5897_50103520();
   scope->inners[3] = make_5895_50103360();
   scope->inners[4] = make_5896_50102380();
   scope->inners[5] = make_58126_51263780();
   scope->inners[6] = make_58124_51263760();
   scope->inners[7] = make_58125_51263660();
   scope->inners[8] = make_58143_50505640();
   scope->inners[9] = make_58144_52655660();
   scope->inners[10] = make_58176_52774180();
   scope->inners[11] = make_58177_53023800();
   scope->inners[12] = make_58206_53134120();
   scope->inners[13] = make_58207_53349280();
   scope->inners[14] = makevalue__z0_53426820();
   scope->inners[15] = makevalue__z1_53479940();
   scope->inners[16] = makevalue__a00_53639380();
   scope->inners[17] = makevalue__a01_53692320();
   scope->inners[18] = makeflag__z0_53692300();
   scope->inners[19] = makeflag__z1_53692280();
   scope->inners[20] = makeack__a00_53692260();
   scope->inners[21] = makeack__a01_53692240();
   scope->inners[22] = make_5899_53692220();
   scope->inners[23] = make_58100_53692140();
   scope->inners[24] = make_58101_53884340();
   scope->inners[25] = make_58128_53884320();
   scope->inners[26] = make_58129_53884240();
   scope->inners[27] = make_58130_53969820();
   scope->inners[28] = make_58191_54129300();
   scope->inners[29] = make_58192_54206860();
   scope->inners[30] = make_58193_54206780();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_47913300();
   scope->scopes[1] = makechannel__w1_58112_50089480();
   scope->scopes[2] = makechannel__accum_58141_49961760();
   scope->scopes[3] = makemac__n1_58173_48370700();
   scope->scopes[4] = makechannel__bias_58174_49722620();
   scope->scopes[5] = makechannel__z_58204_53315020();
   scope->scopes[6] = makeadd__n_58234_53933280();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50054500();
   scope->behaviors[1] = make__53139120();
   scope->behaviors[2] = make__53933680();
   scope->behaviors[3] = make__61281700();
   scope->behaviors[4] = make__61281540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_53932980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_53932980 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53930120();
   systemT->inputs[1] = makerst_53930060();
   systemT->inputs[2] = makefill_53930000();
   systemT->inputs[3] = makereq_53929980();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_53929920();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer0_58_84_47891680();

   return systemT;
}