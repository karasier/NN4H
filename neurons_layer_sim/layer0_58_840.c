#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_52923660;

SignalI clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeclk_52920540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_840_52923660;
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

SignalI rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makerst_52920500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_840_52923660;
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

SignalI fill_52920480_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makefill_52920480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_52920480_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_840_52923660;
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

SignalI req_52920460_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makereq_52920460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_52920460_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_840_52923660;
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

SignalI _5815_53312580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_5815_53312580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_53312580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_840_52923660;
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

SignalI ack__layer_53312520_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeack__layer_53312520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_53312520_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_840_52923660;
   signalI->name = "ack_layer";
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

SignalI _5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_5813_53312480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_840_52923660;
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

SignalI _5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_5814_53312360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_840_52923660;
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

SignalI _5832_53465460_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_5832_53465460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_53465460_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_840_52923660;
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

SignalI _5833_53729160_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_5833_53729160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_53729160_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_840_52923660;
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

Block __47401960;

Block __47399860;

Block __47399460;

void code__47399460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,value__z0_52698800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61473160(),flag__z0_53008240_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__47399460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47399460 = block;
   block->owner = (Object)__47399860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47399460;

   return block;
};

Block __48937160;

void code__48937160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,value__z1_52799260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61472980(),flag__z1_53008220_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__48937160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48937160 = block;
   block->owner = (Object)__47399860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48937160;

   return block;
};

void code__47399860() {
 code__47399460();
 code__48937160();
}

Block make__47399860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47399860 = block;
   block->owner = (Object)__47401960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47399860;

   return block;
};

Block __47401560;

void code__47401560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61472920(),flag__z0_53008240_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61472860(),flag__z1_53008220_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__47401560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47401560 = block;
   block->owner = (Object)__47401960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47401560;

   return block;
};

void code__47401960() {
   {
      Value cond = ack__add_49831760_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47399860();
   }
   else {
  code__47401560();
   }
      }
   }
}

Block make__47401960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47401960 = block;
   block->owner = (Object)__49555600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47401960;

   return block;
};

Block __49555380;

Block __49554900;

Block __49554680;

void code__49554680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_52874980_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_5832_53465460_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61677380(),ack__a0_53008200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__49554680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49554680 = block;
   block->owner = (Object)__49554900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49554680;

   return block;
};

Block __51614100;

void code__51614100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_53008260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_5833_53729160_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61677240(),ack__a1_53008180_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__51614100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51614100 = block;
   block->owner = (Object)__49554900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51614100;

   return block;
};

void code__49554900() {
 code__49554680();
 code__51614100();
}

Block make__49554900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49554900 = block;
   block->owner = (Object)__49555380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49554900;

   return block;
};

void code__49555380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_53008240_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         src1 = flag__z1_53008220_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49554900();
   }
      }
   }
}

Block make__49555380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49555380 = block;
   block->owner = (Object)__52084020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49555380;

   return block;
};

Block __52083820;

Block __52083460;

Block __52082800;

void code__52082800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61677080(),_58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52082800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52082800 = block;
   block->owner = (Object)__52083460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52082800;

   return block;
};

void code__52083460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61677160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52082800();
   }
      }
   }
}

Block make__52083460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52083460 = block;
   block->owner = (Object)__52083820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52083460;

   return block;
};

Block __52082180;

Block __52081720;

void code__52081720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61676920(),_58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52081720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52081720 = block;
   block->owner = (Object)__52082180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52081720;

   return block;
};

void code__52082180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61677000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52081720();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61676860(),_58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52082180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52082180 = block;
   block->owner = (Object)__52083820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52082180;

   return block;
};

Block __52080560;

Block __52080040;

void code__52080040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61676700(),_58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52080040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52080040 = block;
   block->owner = (Object)__52080560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52080040;

   return block;
};

void code__52080560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61676780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52080040();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61676640(),_5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52080560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52080560 = block;
   block->owner = (Object)__52083820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52080560;

   return block;
};

Block __52079100;

Block __52078780;

Block __52078260;

void code__52078260() {
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
                  src0 = _58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61676380();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61676280(),_5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61676200(),_58101_53462480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52078260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52078260 = block;
   block->owner = (Object)__52078780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52078260;

   return block;
};

void code__52078780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61676520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52078260();
   }
      }
   }
}

Block make__52078780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52078780 = block;
   block->owner = (Object)__52079100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52078780;

   return block;
};

Block __52426460;

Block __52425980;

void code__52425980() {
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
                  src0 = _58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61675860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61675740(),_58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61675640(),_58130_53595340_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52425980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52425980 = block;
   block->owner = (Object)__52426460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52425980;

   return block;
};

void code__52426460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61676080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52425980();
   }
      }
   }
}

Block make__52426460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52426460 = block;
   block->owner = (Object)__52079100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52426460;

   return block;
};

Block __52602640;

Block __52602000;

Block __52601320;

void code__52601320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61675380(),_58197_53264260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52601320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52601320 = block;
   block->owner = (Object)__52602000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52601320;

   return block;
};

Block __52802740;

void code__52802740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61675300(),_58198_53370820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52802740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52802740 = block;
   block->owner = (Object)__52602000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52802740;

   return block;
};

void code__52602000() {
{
      Value value = _58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__61675440())) {
    code__52601320();
         }
         else if (value2integer(value) == value2integer(make__61675360())) {
    code__52802740();
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
                  src0 = _58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61675180();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52602000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52602000 = block;
   block->owner = (Object)__52602640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52602000;

   return block;
};

void code__52602640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61675560();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52602000();
   }
      }
   }
}

Block make__52602640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52602640 = block;
   block->owner = (Object)__52079100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52602640;

   return block;
};

void code__52079100() {
 code__52078780();
 code__52426460();
 code__52602640();
}

Block make__52079100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52079100 = block;
   block->owner = (Object)__52083820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52079100;

   return block;
};

void code__52083820() {
 code__52083460();
 code__52082180();
 code__52080560();
   {
      Value cond = fill_52920480_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52079100();
   }
      }
   }
}

Block make__52083820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52083820 = block;
   block->owner = (Object)__52924360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52083820;

   return block;
};

Block __60992580;

void code__60992580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_52920460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_49831780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_49831840_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60992580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60992580 = block;
   block->owner = (Object)__60992300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60992580;

   return block;
};

Block __60992860;

void code__60992860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,ack_53677440_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,rst_53677420_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_52698800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_52799260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_53008200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      src1 = ack__a1_53008180_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_53312520_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60992860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60992860 = block;
   block->owner = (Object)__61009820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60992860;

   return block;
};

Block __60992740;

void code__60992740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_53677380_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,ack__mac_49831780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_53758780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,value__a0_52874980_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52682480_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,value__a1_53008260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60992740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60992740 = block;
   block->owner = (Object)__61009660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60992740;

   return block;
};

Block __49250920;

Block __49589900;

void code__49589900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47479960_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,make_ref_rangeS(mem_47782480_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080,value2integer(abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value),value2integer(abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49589900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49589900 = block;
   block->owner = (Object)__49250920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49589900;

   return block;
};

void code__49250920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47782480_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            idx = value2integer(abus__r_47479880_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47128320_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_45424700_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49589900();
   }
      }
   }
}

Block make__49250920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49250920 = block;
   block->owner = (Object)__47123960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49250920;

   return block;
};

Block __61008940;

void code__61008940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47128320_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_5897_48854920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61008940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61008940 = block;
   block->owner = (Object)__61008740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61008940;

   return block;
};

Block __61008700;

void code__61008700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_48854920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,dbus__r_47128320_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61008700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61008700 = block;
   block->owner = (Object)__61008440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61008700;

   return block;
};

Block __61007940;

void code__61007940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_45424720_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61007940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61007940 = block;
   block->owner = (Object)__61007780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61007940;

   return block;
};

Block __61007740;

void code__61007740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,trig__r_45424720_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61007740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61007740 = block;
   block->owner = (Object)__61007580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61007740;

   return block;
};

Block __61007280;

void code__61007280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47479880_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61007280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61007280 = block;
   block->owner = (Object)__61007120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61007280;

   return block;
};

Block __61007080;

void code__61007080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,abus__r_47479880_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61007080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61007080 = block;
   block->owner = (Object)__61006920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61007080;

   return block;
};

Block __61006620;

void code__61006620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_45424700_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61006620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61006620 = block;
   block->owner = (Object)__61006420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61006620;

   return block;
};

Block __61006360;

void code__61006360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,trig__w_45424700_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61006360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61006360 = block;
   block->owner = (Object)__61006100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61006360;

   return block;
};

Block __61054860;

void code__61054860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61054860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61054860 = block;
   block->owner = (Object)__61054700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61054860;

   return block;
};

Block __61054660;

void code__61054660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61054660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61054660 = block;
   block->owner = (Object)__61054500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61054660;

   return block;
};

Block __61054200;

void code__61054200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47479960_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58101_53462480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61054200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61054200 = block;
   block->owner = (Object)__61054040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61054200;

   return block;
};

Block __61054000;

void code__61054000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_53462480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,dbus__w_47479960_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61054000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61054000 = block;
   block->owner = (Object)__61053840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61054000;

   return block;
};

Block __47918940;

Block __49604860;

void code__49604860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48937180_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,make_ref_rangeS(mem_49334000_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080,value2integer(abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value),value2integer(abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49604860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49604860 = block;
   block->owner = (Object)__47918940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49604860;

   return block;
};

void code__47918940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49334000_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            idx = value2integer(abus__r_48937020_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47858580_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47353280_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49604860();
   }
      }
   }
}

Block make__47918940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47918940 = block;
   block->owner = (Object)__47337720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47918940;

   return block;
};

Block __61051940;

void code__61051940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47858580_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58126_51995520_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61051940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61051940 = block;
   block->owner = (Object)__61051780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61051940;

   return block;
};

Block __61051740;

void code__61051740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_51995520_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,dbus__r_47858580_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61051740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61051740 = block;
   block->owner = (Object)__61051580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61051740;

   return block;
};

Block __61051260;

void code__61051260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_47353400_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61051260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61051260 = block;
   block->owner = (Object)__61051060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61051260;

   return block;
};

Block __61050960;

void code__61050960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,trig__r_47353400_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61050960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61050960 = block;
   block->owner = (Object)__61050780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61050960;

   return block;
};

Block __61050420;

void code__61050420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48937020_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61050420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61050420 = block;
   block->owner = (Object)__61050260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61050420;

   return block;
};

Block __61050220;

void code__61050220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,abus__r_48937020_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61050220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61050220 = block;
   block->owner = (Object)__61050060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61050220;

   return block;
};

Block __61049760;

void code__61049760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_47353280_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61049760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61049760 = block;
   block->owner = (Object)__61049600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61049760;

   return block;
};

Block __61049560;

void code__61049560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,trig__w_47353280_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61049560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61049560 = block;
   block->owner = (Object)__61049400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61049560;

   return block;
};

Block __61049060;

void code__61049060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61049060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61049060 = block;
   block->owner = (Object)__61048840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61049060;

   return block;
};

Block __61048780;

void code__61048780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61048780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61048780 = block;
   block->owner = (Object)__61048600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61048780;

   return block;
};

Block __61048240;

void code__61048240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48937180_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58130_53595340_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61048240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61048240 = block;
   block->owner = (Object)__61048080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61048240;

   return block;
};

Block __61048040;

void code__61048040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_53595340_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,dbus__w_48937180_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61048040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61048040 = block;
   block->owner = (Object)__61047880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61048040;

   return block;
};

Block __61111660;

void code__61111660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47591340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61111660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61111660 = block;
   block->owner = (Object)__61111500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61111660;

   return block;
};

Block __61111460;

void code__61111460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,reg__0_47591340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61111460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61111460 = block;
   block->owner = (Object)__61111300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61111460;

   return block;
};

Block __61111000;

void code__61111000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47900180_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61111000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61111000 = block;
   block->owner = (Object)__61110840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61111000;

   return block;
};

Block __61110800;

void code__61110800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,reg__1_47900180_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61110800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61110800 = block;
   block->owner = (Object)__61110640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61110800;

   return block;
};

Block __51612200;

Block __51612040;

Block __51611700;

void code__51611700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61302880(),_58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__51611700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51611700 = block;
   block->owner = (Object)__51612040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51611700;

   return block;
};

void code__51612040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61302960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51611700();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61302820(),_58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__51612040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51612040 = block;
   block->owner = (Object)__51612200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51612040;

   return block;
};

Block __51611080;

Block __51610760;

void code__51610760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61302660(),_5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__51610760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51610760 = block;
   block->owner = (Object)__51611080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51610760;

   return block;
};

void code__51611080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61302740();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51610760();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61302600(),_5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__51611080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51611080 = block;
   block->owner = (Object)__51612200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51611080;

   return block;
};

Block __51610140;

Block __51609820;

void code__51609820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61302440(),_5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__51609820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51609820 = block;
   block->owner = (Object)__51610140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51609820;

   return block;
};

void code__51610140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61302520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51609820();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61302380(),_5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__51610140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51610140 = block;
   block->owner = (Object)__51612200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51610140;

   return block;
};

Block __51905280;

Block __51904960;

Block __51904640;

Block __51969820;

void code__51969820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_53312580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,rv_51612400_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61301640(),rvok_51612340_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__51969820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51969820 = block;
   block->owner = (Object)__51904640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51969820;

   return block;
};

void code__51904640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61301880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51969820();
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
                  src0 = _5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61301500();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61301380(),_5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__51904640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51904640 = block;
   block->owner = (Object)__51904960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51904640;

   return block;
};

void code__51904960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61302000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51904640();
   }
      }
   }
}

Block make__51904960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51904960 = block;
   block->owner = (Object)__51905280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51904960;

   return block;
};

Block __52094160;

Block __52093840;

Block __52093520;

void code__52093520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_48854920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,lv0_49472980_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61301000(),lvok0_51612380_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52093520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52093520 = block;
   block->owner = (Object)__52093840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52093520;

   return block;
};

void code__52093840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61301160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52093520();
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
                  src0 = _5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61300880();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61300780(),_5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52093840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52093840 = block;
   block->owner = (Object)__52094160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52093840;

   return block;
};

void code__52094160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61301260();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52093840();
   }
      }
   }
}

Block make__52094160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52094160 = block;
   block->owner = (Object)__51905280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52094160;

   return block;
};

Block __52438880;

Block __52438400;

Block __52438240;

void code__52438240() {
}

Block make__52438240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52438240 = block;
   block->owner = (Object)__52438400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52438240;

   return block;
};

Block __53261900;

void code__53261900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49724220_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53261900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53261900 = block;
   block->owner = (Object)__52438400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53261900;

   return block;
};

void code__52438400() {
 code__52438240();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49724220_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
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
                              src0 = lv0_49472980_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_51612400_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61480420();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49724220_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__53261900();
}

Block make__52438400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52438400 = block;
   block->owner = (Object)__52438880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52438400;

   return block;
};

void code__52438880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61480820(),ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61480760(),run_51612320_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__52438400();
}

Block make__52438880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52438880 = block;
   block->owner = (Object)__51905280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52438880;

   return block;
};

Block __53468960;

Block __53468640;

Block __53468320;

void code__53468320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_51995520_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,lv1_49609980_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61479920(),lvok1_51612360_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53468320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53468320 = block;
   block->owner = (Object)__53468640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53468320;

   return block;
};

void code__53468640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61480120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53468320();
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
                  src0 = _58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61479720();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61479600(),_58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53468640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53468640 = block;
   block->owner = (Object)__53468960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53468640;

   return block;
};

void code__53468960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61480220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53468640();
   }
      }
   }
}

Block make__53468960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53468960 = block;
   block->owner = (Object)__51905280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53468960;

   return block;
};

Block __53707180;

Block __53731240;

Block __53731080;

void code__53731080() {
}

Block make__53731080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53731080 = block;
   block->owner = (Object)__53731240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53731080;

   return block;
};

Block __47884200;

void code__47884200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_49848200_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__47884200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47884200 = block;
   block->owner = (Object)__53731240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47884200;

   return block;
};

void code__53731240() {
 code__53731080();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_49848200_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
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
                              src0 = lv1_49609980_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_51612400_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61478980();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_49848200_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__47884200();
}

Block make__53731240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53731240 = block;
   block->owner = (Object)__53707180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53731240;

   return block;
};

void code__53707180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61479380(),ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61479320(),run_51612320_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__53731240();
}

Block make__53707180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53707180 = block;
   block->owner = (Object)__51905280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53707180;

   return block;
};

void code__51905280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61302100(),run_51612320_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__51904960();
 code__52094160();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_51612380_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         src1 = rvok_51612340_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52438880();
   }
      }
   }
 code__53468960();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_51612360_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         src1 = rvok_51612340_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53707180();
   }
      }
   }
}

Block make__51905280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51905280 = block;
   block->owner = (Object)__51612200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51905280;

   return block;
};

Block __51715320;

void code__51715320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61478800(),rvok_51612340_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61478740(),lvok0_51612380_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61478680(),av0_49724220_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61478620(),lvok1_51612360_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61478560(),av1_49848200_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__51715320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51715320 = block;
   block->owner = (Object)__51612200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51715320;

   return block;
};

void code__51612200() {
 code__51612040();
 code__51611080();
 code__51610140();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61302320(),ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61302260(),run_51612320_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_49831840_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         src1 = run_51612320_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51905280();
   }
   else {
  code__51715320();
   }
      }
   }
}

Block make__51612200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51612200 = block;
   block->owner = (Object)__48949060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51612200;

   return block;
};

Block __61108720;

void code__61108720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58182_52093020_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61108720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61108720 = block;
   block->owner = (Object)__61108560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61108720;

   return block;
};

Block __61108500;

void code__61108500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_52093020_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61108500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61108500 = block;
   block->owner = (Object)__61108320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61108500;

   return block;
};

Block __61107960;

void code__61107960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58183_52259080_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61107960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61107960 = block;
   block->owner = (Object)__61107800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61107960;

   return block;
};

Block __61107740;

void code__61107740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_52259080_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61107740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61107740 = block;
   block->owner = (Object)__61107560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61107740;

   return block;
};

Block __61107200;

void code__61107200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58197_53264260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61107200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61107200 = block;
   block->owner = (Object)__61107040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61107200;

   return block;
};

Block __61107000;

void code__61107000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58197_53264260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61107000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61107000 = block;
   block->owner = (Object)__61106840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61107000;

   return block;
};

Block __61106540;

void code__61106540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58198_53370820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61106540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61106540 = block;
   block->owner = (Object)__61106360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61106540;

   return block;
};

Block __61106300;

void code__61106300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_53370820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61106300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61106300 = block;
   block->owner = (Object)__61106080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61106300;

   return block;
};

Block __61104400;

void code__61104400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48969200_winc_58196_48969800_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61104400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61104400 = block;
   block->owner = (Object)__61104200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61104400;

   return block;
};

Block __61104160;

void code__61104160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,abus__w_48969200_winc_58196_48969800_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61104160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61104160 = block;
   block->owner = (Object)__61161240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61104160;

   return block;
};

Block __61160020;

void code__61160020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52161020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61160020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61160020 = block;
   block->owner = (Object)__61159860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61160020;

   return block;
};

Block __61159820;

void code__61159820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,reg__0_52161020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61159820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61159820 = block;
   block->owner = (Object)__61159660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61159820;

   return block;
};

Block __61159300;

void code__61159300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52426980_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,_58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61159300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61159300 = block;
   block->owner = (Object)__61159100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61159300;

   return block;
};

Block __61159060;

void code__61159060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,reg__1_52426980_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61159060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61159060 = block;
   block->owner = (Object)__61158900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61159060;

   return block;
};

Block __53340060;

Block __53338540;

Block __53338220;

void code__53338220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,lv0_52911360_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61476260(),lvok0_53340260_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53338220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53338220 = block;
   block->owner = (Object)__53338540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53338220;

   return block;
};

Block __53598940;

void code__53598940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_52093020_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,rv0_53263100_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61476120(),rvok0_53340220_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53598940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53598940 = block;
   block->owner = (Object)__53338540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53598940;

   return block;
};

Block __53825760;

Block __53825280;

void code__53825280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_52911360_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      src1 = rv0_53263100_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53825280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53825280 = block;
   block->owner = (Object)__53825760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53825280;

   return block;
};

void code__53825760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61475960(),run_53340180_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61475900(),ack__add_49831760_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__53825280();
}

Block make__53825760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53825760 = block;
   block->owner = (Object)__53338540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53825760;

   return block;
};

Block __47475520;

void code__47475520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,lv1_53005400_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61475500(),lvok1_53340240_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__47475520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47475520 = block;
   block->owner = (Object)__53338540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47475520;

   return block;
};

Block __48016260;

void code__48016260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_52259080_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,rv1_53340280_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61475240(),rvok1_53340200_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__48016260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48016260 = block;
   block->owner = (Object)__53338540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48016260;

   return block;
};

Block __49290460;

Block __49289240;

void code__49289240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_53005400_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      src1 = rv1_53340280_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__49289240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49289240 = block;
   block->owner = (Object)__49290460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49289240;

   return block;
};

void code__49290460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61475080(),run_53340180_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61475020(),ack__add_49831760_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__49289240();
}

Block make__49290460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49290460 = block;
   block->owner = (Object)__53338540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49290460;

   return block;
};

void code__53338540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61476400(),run_53340180_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__53338220();
 code__53598940();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53340260_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         src1 = rvok0_53340220_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53825760();
   }
      }
   }
 code__47475520();
 code__48016260();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_53340240_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         src1 = rvok1_53340200_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49290460();
   }
      }
   }
}

Block make__53338540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53338540 = block;
   block->owner = (Object)__53340060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53338540;

   return block;
};

Block __53339580;

void code__53339580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61474780(),lvok0_53340260_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61474720(),rvok0_53340220_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61474660(),lvok1_53340240_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61474600(),rvok1_53340200_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53339580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53339580 = block;
   block->owner = (Object)__53340060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53339580;

   return block;
};

void code__53340060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61476620(),ack__add_49831760_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61476560(),run_53340180_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_49831780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         src1 = run_53340180_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53338540();
   }
   else {
  code__53339580();
   }
      }
   }
}

Block make__53340060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53340060 = block;
   block->owner = (Object)__49807540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53340060;

   return block;
};

Value make__61302960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61302880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61302820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61302740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61302660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61302600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61302520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61302440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61302380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61302320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61302260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61302100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61302000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61301880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61301640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61301500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61301380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61301260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61301160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61301000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61300880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61300780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61480820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61480760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61480420() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61480220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61480120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61479920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61479720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61479600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61479380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61479320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61478980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61478800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61478740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61478680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61478620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61478560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61476620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61476560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61476400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61476260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61476120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61475960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61475900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61475500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61475240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61475080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61475020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61474780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61474720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61474660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61474600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61473160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61472980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61472920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61472860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61677380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61677240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61677160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61677080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61677000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61676920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61676860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61676780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61676700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61676640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61676520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61676380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61676280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61676200() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61676080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61675860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61675740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61675640() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61675560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61675440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61675380() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61675360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61675300() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61675180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer0_58_84_45288580;

SignalI req__mac_49831840_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makereq__mac_49831840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_49831840_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeack_49831820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI ack__mac_49831780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeack__mac_49831780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_49831780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI ack__add_49831760_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeack__add_49831760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_49831760_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _5897_48854920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_5897_48854920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_48854920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_5895_48854900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_5896_48854820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58143_51779160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58144_51912200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58126_51995520_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58126_51995520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_51995520_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58124_51995500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58125_51995400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58182_52093020_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58182_52093020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_52093020_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58183_52259080_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58183_52259080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_52259080_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58212_52456780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
   signalI->name = ":212";
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

SignalI _58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58213_52606480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
   signalI->name = ":213";
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

SignalI value__z0_52698800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makevalue__z0_52698800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_52698800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI value__z1_52799260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makevalue__z1_52799260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_52799260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI value__a0_52874980_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makevalue__a0_52874980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_52874980_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
   signalI->name = "value_a0";
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

SignalI value__a1_53008260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makevalue__a1_53008260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_53008260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
   signalI->name = "value_a1";
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

SignalI flag__z0_53008240_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeflag__z0_53008240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_53008240_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI flag__z1_53008220_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeflag__z1_53008220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_53008220_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI ack__a0_53008200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeack__a0_53008200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_53008200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
   signalI->name = "ack_a0";
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

SignalI ack__a1_53008180_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeack__a1_53008180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_53008180_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
   signalI->name = "ack_a1";
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

SignalI _58197_53264260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58197_53264260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58197_53264260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
   signalI->name = ":197";
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

SignalI _58198_53370820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58198_53370820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_53370820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
   signalI->name = ":198";
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

SignalI _58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58199_53370600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
   signalI->name = ":199";
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

SignalI _5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_5899_53370580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58100_53370500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58101_53462480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58101_53462480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_53462480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58128_53462460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58129_53462380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SignalI _58130_53595340_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI make_58130_53595340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_53595340_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer0_58_84_45288580;
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

SystemI counter_53677240;

SystemI makecounter_53677240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_53677240 = systemI;
   systemI->owner = (Object)layer0_58_84_45288580;
   systemI->name = "counter";
   systemI->system = counter_58_841_53679500;

   return systemI;
};

SystemI func0_53758620;

SystemI makefunc0_53758620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_53758620 = systemI;
   systemI->owner = (Object)layer0_58_84_45288580;
   systemI->name = "func0";
   systemI->system = func0_58_841_53447580;

   return systemI;
};

SystemI func1_52682280;

SystemI makefunc1_52682280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_52682280 = systemI;
   systemI->owner = (Object)layer0_58_84_45288580;
   systemI->name = "func1";
   systemI->system = func1_58_840_52214440;

   return systemI;
};

Scope channel__w0_5883_45286320;

SignalI trig__r_45424720_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI maketrig__r_45424720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_45424720_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_5883_45286320;
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

SignalI trig__w_45424700_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI maketrig__w_45424700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_45424700_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_5883_45286320;
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

SignalI dbus__r_47128320_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makedbus__r_47128320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47128320_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_5883_45286320;
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

SignalI dbus__w_47479960_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makedbus__w_47479960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47479960_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_5883_45286320;
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

SignalI abus__r_47479880_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__r_47479880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47479880_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_5883_45286320;
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

SignalI abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__w_47479740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_5883_45286320;
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

SignalI mem_47782480_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makemem_47782480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47782480_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_5883_45286320;
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

Scope raddr_5884_45285540;

Scope makeraddr_5884_45285540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_45285540 = scope;
   scope->owner = (Object)channel__w0_5883_45286320;
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

Scope waddr_5889_45305800;

Scope makewaddr_5889_45305800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_45305800 = scope;
   scope->owner = (Object)channel__w0_5883_45286320;
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

Scope rinc_5894_45304540;

Scope makerinc_5894_45304540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_45304540 = scope;
   scope->owner = (Object)channel__w0_5883_45286320;
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

Scope winc_5898_45302000;

Scope makewinc_5898_45302000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_45302000 = scope;
   scope->owner = (Object)channel__w0_5883_45286320;
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

Scope rdec_58102_45319900;

Scope makerdec_58102_45319900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_45319900 = scope;
   scope->owner = (Object)channel__w0_5883_45286320;
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

Scope wdec_58107_45427120;

Scope makewdec_58107_45427120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_45427120 = scope;
   scope->owner = (Object)channel__w0_5883_45286320;
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

Behavior __47123960;

Behavior make__47123960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47123960 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_neg += 1;
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->neg = realloc(clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->neg,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_neg*sizeof(Object));
clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->neg[clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_neg-1] = (Object)behavior;
   behavior->block = make__49250920();

   return behavior;
}

Behavior __61008740;

Behavior make__61008740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61008740 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47128320_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   dbus__r_47128320_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   dbus__r_47128320_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(dbus__r_47128320_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,dbus__r_47128320_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
dbus__r_47128320_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[dbus__r_47128320_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61008940();

   return behavior;
}

Behavior __61008440;

Behavior make__61008440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61008440 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_48854920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _5897_48854920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _5897_48854920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_5897_48854920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_5897_48854920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5897_48854920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_5897_48854920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61008700();

   return behavior;
}

Behavior __61007780;

Behavior make__61007780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61007780 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_45424720_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   trig__r_45424720_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   trig__r_45424720_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(trig__r_45424720_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,trig__r_45424720_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
trig__r_45424720_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[trig__r_45424720_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61007940();

   return behavior;
}

Behavior __61007580;

Behavior make__61007580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61007580 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_5895_48854900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61007740();

   return behavior;
}

Behavior __61007120;

Behavior make__61007120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61007120 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47479880_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   abus__r_47479880_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   abus__r_47479880_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(abus__r_47479880_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,abus__r_47479880_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
abus__r_47479880_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[abus__r_47479880_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61007280();

   return behavior;
}

Behavior __61006920;

Behavior make__61006920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61006920 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_5896_48854820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61007080();

   return behavior;
}

Behavior __61006420;

Behavior make__61006420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61006420 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_45424700_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   trig__w_45424700_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   trig__w_45424700_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(trig__w_45424700_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,trig__w_45424700_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
trig__w_45424700_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[trig__w_45424700_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61006620();

   return behavior;
}

Behavior __61006100;

Behavior make__61006100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61006100 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_5899_53370580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61006360();

   return behavior;
}

Behavior __61054700;

Behavior make__61054700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61054700 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[abus__w_47479740_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61054860();

   return behavior;
}

Behavior __61054500;

Behavior make__61054500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61054500 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58100_53370500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61054660();

   return behavior;
}

Behavior __61054040;

Behavior make__61054040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61054040 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47479960_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   dbus__w_47479960_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   dbus__w_47479960_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(dbus__w_47479960_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,dbus__w_47479960_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
dbus__w_47479960_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[dbus__w_47479960_channel__w0_5883_45286320_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61054200();

   return behavior;
}

Behavior __61053840;

Behavior make__61053840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61053840 = behavior;
   behavior->owner = (Object)channel__w0_5883_45286320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_53462480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58101_53462480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58101_53462480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58101_53462480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58101_53462480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58101_53462480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58101_53462480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61054000();

   return behavior;
}

Scope makechannel__w0_5883_45286320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_45286320 = scope;
   scope->owner = (Object)layer0_58_84_45288580;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_45424720();
   scope->inners[1] = maketrig__w_45424700();
   scope->inners[2] = makedbus__r_47128320();
   scope->inners[3] = makedbus__w_47479960();
   scope->inners[4] = makeabus__r_47479880();
   scope->inners[5] = makeabus__w_47479740();
   scope->inners[6] = makemem_47782480();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_45285540();
   scope->scopes[1] = makewaddr_5889_45305800();
   scope->scopes[2] = makerinc_5894_45304540();
   scope->scopes[3] = makewinc_5898_45302000();
   scope->scopes[4] = makerdec_58102_45319900();
   scope->scopes[5] = makewdec_58107_45427120();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47123960();
   scope->behaviors[1] = make__61008740();
   scope->behaviors[2] = make__61008440();
   scope->behaviors[3] = make__61007780();
   scope->behaviors[4] = make__61007580();
   scope->behaviors[5] = make__61007120();
   scope->behaviors[6] = make__61006920();
   scope->behaviors[7] = make__61006420();
   scope->behaviors[8] = make__61006100();
   scope->behaviors[9] = make__61054700();
   scope->behaviors[10] = make__61054500();
   scope->behaviors[11] = make__61054040();
   scope->behaviors[12] = make__61053840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_47123800;

SignalI trig__r_47353400_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI maketrig__r_47353400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47353400_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w1_58112_47123800;
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

SignalI trig__w_47353280_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI maketrig__w_47353280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47353280_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w1_58112_47123800;
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

SignalI dbus__r_47858580_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makedbus__r_47858580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47858580_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w1_58112_47123800;
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

SignalI dbus__w_48937180_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makedbus__w_48937180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48937180_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w1_58112_47123800;
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

SignalI abus__r_48937020_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__r_48937020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48937020_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w1_58112_47123800;
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

SignalI abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__w_48936920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w1_58112_47123800;
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

SignalI mem_49334000_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makemem_49334000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49334000_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w1_58112_47123800;
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

Scope raddr_58113_47123400;

Scope makeraddr_58113_47123400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_47123400 = scope;
   scope->owner = (Object)channel__w1_58112_47123800;
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

Scope waddr_58118_47122980;

Scope makewaddr_58118_47122980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_47122980 = scope;
   scope->owner = (Object)channel__w1_58112_47123800;
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

Scope rinc_58123_47122480;

Scope makerinc_58123_47122480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_47122480 = scope;
   scope->owner = (Object)channel__w1_58112_47123800;
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

Scope winc_58127_47121880;

Scope makewinc_58127_47121880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_47121880 = scope;
   scope->owner = (Object)channel__w1_58112_47123800;
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

Scope rdec_58131_47121420;

Scope makerdec_58131_47121420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_47121420 = scope;
   scope->owner = (Object)channel__w1_58112_47123800;
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

Scope wdec_58136_47356960;

Scope makewdec_58136_47356960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_47356960 = scope;
   scope->owner = (Object)channel__w1_58112_47123800;
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

Behavior __47337720;

Behavior make__47337720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47337720 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_neg += 1;
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->neg = realloc(clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->neg,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_neg*sizeof(Object));
clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->neg[clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_neg-1] = (Object)behavior;
   behavior->block = make__47918940();

   return behavior;
}

Behavior __61051780;

Behavior make__61051780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61051780 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47858580_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   dbus__r_47858580_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   dbus__r_47858580_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(dbus__r_47858580_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,dbus__r_47858580_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
dbus__r_47858580_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[dbus__r_47858580_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61051940();

   return behavior;
}

Behavior __61051580;

Behavior make__61051580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61051580 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_51995520_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58126_51995520_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58126_51995520_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58126_51995520_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58126_51995520_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58126_51995520_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58126_51995520_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61051740();

   return behavior;
}

Behavior __61051060;

Behavior make__61051060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61051060 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_47353400_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   trig__r_47353400_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   trig__r_47353400_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(trig__r_47353400_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,trig__r_47353400_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
trig__r_47353400_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[trig__r_47353400_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61051260();

   return behavior;
}

Behavior __61050780;

Behavior make__61050780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61050780 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58124_51995500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61050960();

   return behavior;
}

Behavior __61050260;

Behavior make__61050260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61050260 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48937020_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   abus__r_48937020_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   abus__r_48937020_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(abus__r_48937020_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,abus__r_48937020_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
abus__r_48937020_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[abus__r_48937020_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61050420();

   return behavior;
}

Behavior __61050060;

Behavior make__61050060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61050060 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58125_51995400_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61050220();

   return behavior;
}

Behavior __61049600;

Behavior make__61049600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61049600 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_47353280_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   trig__w_47353280_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   trig__w_47353280_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(trig__w_47353280_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,trig__w_47353280_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
trig__w_47353280_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[trig__w_47353280_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61049760();

   return behavior;
}

Behavior __61049400;

Behavior make__61049400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61049400 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58128_53462460_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61049560();

   return behavior;
}

Behavior __61048840;

Behavior make__61048840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61048840 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[abus__w_48936920_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61049060();

   return behavior;
}

Behavior __61048600;

Behavior make__61048600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61048600 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58129_53462380_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61048780();

   return behavior;
}

Behavior __61048080;

Behavior make__61048080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61048080 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48937180_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   dbus__w_48937180_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   dbus__w_48937180_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(dbus__w_48937180_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,dbus__w_48937180_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
dbus__w_48937180_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[dbus__w_48937180_channel__w1_58112_47123800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61048240();

   return behavior;
}

Behavior __61047880;

Behavior make__61047880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61047880 = behavior;
   behavior->owner = (Object)channel__w1_58112_47123800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_53595340_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58130_53595340_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58130_53595340_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58130_53595340_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58130_53595340_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58130_53595340_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58130_53595340_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61048040();

   return behavior;
}

Scope makechannel__w1_58112_47123800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_47123800 = scope;
   scope->owner = (Object)layer0_58_84_45288580;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47353400();
   scope->inners[1] = maketrig__w_47353280();
   scope->inners[2] = makedbus__r_47858580();
   scope->inners[3] = makedbus__w_48937180();
   scope->inners[4] = makeabus__r_48937020();
   scope->inners[5] = makeabus__w_48936920();
   scope->inners[6] = makemem_49334000();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_47123400();
   scope->scopes[1] = makewaddr_58118_47122980();
   scope->scopes[2] = makerinc_58123_47122480();
   scope->scopes[3] = makewinc_58127_47121880();
   scope->scopes[4] = makerdec_58131_47121420();
   scope->scopes[5] = makewdec_58136_47356960();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47337720();
   scope->behaviors[1] = make__61051780();
   scope->behaviors[2] = make__61051580();
   scope->behaviors[3] = make__61051060();
   scope->behaviors[4] = make__61050780();
   scope->behaviors[5] = make__61050260();
   scope->behaviors[6] = make__61050060();
   scope->behaviors[7] = make__61049600();
   scope->behaviors[8] = make__61049400();
   scope->behaviors[9] = make__61048840();
   scope->behaviors[10] = make__61048600();
   scope->behaviors[11] = make__61048080();
   scope->behaviors[12] = make__61047880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_47334580;

SignalI reg__0_47591340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makereg__0_47591340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47591340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__accum_58141_47334580;
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

SignalI reg__1_47900180_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makereg__1_47900180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47900180_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__accum_58141_47334580;
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

Scope anum_58142_47357040;

Scope makeanum_58142_47357040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_47357040 = scope;
   scope->owner = (Object)channel__accum_58141_47334580;
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

Scope raddr_58145_47352440;

Scope makeraddr_58145_47352440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_47352440 = scope;
   scope->owner = (Object)channel__accum_58141_47334580;
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

Scope waddr_58149_47374060;

Scope makewaddr_58149_47374060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_47374060 = scope;
   scope->owner = (Object)channel__accum_58141_47334580;
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

Scope rinc_58153_47372340;

SignalI abus__r_47371680_rinc_58153_47372340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__r_47371680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47371680_rinc_58153_47372340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rinc_58153_47372340;
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

Scope makerinc_58153_47372340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_47372340 = scope;
   scope->owner = (Object)channel__accum_58141_47334580;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47371680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_47371380;

SignalI abus__w_47370780_winc_58158_47371380_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__w_47370780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47370780_winc_58158_47371380_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)winc_58158_47371380;
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

Scope makewinc_58158_47371380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_47371380 = scope;
   scope->owner = (Object)channel__accum_58141_47334580;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47370780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_47370520;

SignalI abus__r_47370080_rdec_58163_47370520_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__r_47370080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47370080_rdec_58163_47370520_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rdec_58163_47370520;
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

Scope makerdec_58163_47370520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_47370520 = scope;
   scope->owner = (Object)channel__accum_58141_47334580;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47370080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_47369960;

SignalI abus__w_47369400_wdec_58168_47369960_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__w_47369400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47369400_wdec_58168_47369960_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)wdec_58168_47369960;
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

Scope makewdec_58168_47369960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_47369960 = scope;
   scope->owner = (Object)channel__accum_58141_47334580;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47369400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61111500;

Behavior make__61111500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61111500 = behavior;
   behavior->owner = (Object)channel__accum_58141_47334580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47591340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   reg__0_47591340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   reg__0_47591340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(reg__0_47591340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,reg__0_47591340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__0_47591340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[reg__0_47591340_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61111660();

   return behavior;
}

Behavior __61111300;

Behavior make__61111300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61111300 = behavior;
   behavior->owner = (Object)channel__accum_58141_47334580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58143_51779160_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61111460();

   return behavior;
}

Behavior __61110840;

Behavior make__61110840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61110840 = behavior;
   behavior->owner = (Object)channel__accum_58141_47334580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47900180_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   reg__1_47900180_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   reg__1_47900180_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(reg__1_47900180_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,reg__1_47900180_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__1_47900180_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[reg__1_47900180_channel__accum_58141_47334580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61111000();

   return behavior;
}

Behavior __61110640;

Behavior make__61110640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61110640 = behavior;
   behavior->owner = (Object)channel__accum_58141_47334580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58144_51912200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61110800();

   return behavior;
}

Scope makechannel__accum_58141_47334580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_47334580 = scope;
   scope->owner = (Object)layer0_58_84_45288580;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47591340();
   scope->inners[1] = makereg__1_47900180();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_47357040();
   scope->scopes[1] = makeraddr_58145_47352440();
   scope->scopes[2] = makewaddr_58149_47374060();
   scope->scopes[3] = makerinc_58153_47372340();
   scope->scopes[4] = makewinc_58158_47371380();
   scope->scopes[5] = makerdec_58163_47370520();
   scope->scopes[6] = makewdec_58168_47369960();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61111500();
   scope->behaviors[1] = make__61111300();
   scope->behaviors[2] = make__61110840();
   scope->behaviors[3] = make__61110640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_49370900;

SignalI lv0_49472980_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makelv0_49472980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49472980_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58173_49370900;
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

SignalI lv1_49609980_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makelv1_49609980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49609980_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58173_49370900;
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

SignalI av0_49724220_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeav0_49724220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49724220_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58173_49370900;
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

SignalI av1_49848200_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeav1_49848200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_49848200_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58173_49370900;
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

SignalI rv_51612400_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makerv_51612400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_51612400_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58173_49370900;
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

SignalI lvok0_51612380_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makelvok0_51612380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_51612380_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58173_49370900;
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

SignalI lvok1_51612360_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makelvok1_51612360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_51612360_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58173_49370900;
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

SignalI rvok_51612340_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makervok_51612340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_51612340_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58173_49370900;
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

SignalI run_51612320_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makerun_51612320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_51612320_mac__n1_58173_49370900_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58173_49370900;
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

Behavior __48949060;

Behavior make__48949060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48949060 = behavior;
   behavior->owner = (Object)mac__n1_58173_49370900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos = realloc(clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos[clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__51612200();

   return behavior;
}

Scope makemac__n1_58173_49370900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_49370900 = scope;
   scope->owner = (Object)layer0_58_84_45288580;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49472980();
   scope->inners[1] = makelv1_49609980();
   scope->inners[2] = makeav0_49724220();
   scope->inners[3] = makeav1_49848200();
   scope->inners[4] = makerv_51612400();
   scope->inners[5] = makelvok0_51612380();
   scope->inners[6] = makelvok1_51612360();
   scope->inners[7] = makervok_51612340();
   scope->inners[8] = makerun_51612320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48949060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58180_48948920;

SignalI reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makereg__0_49267880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__bias_58180_48948920;
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

SignalI reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makereg__1_49403480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__bias_58180_48948920;
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

Scope anum_58181_48948420;

Scope makeanum_58181_48948420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58181_48948420 = scope;
   scope->owner = (Object)channel__bias_58180_48948920;
   scope->name = "anum:181";
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

Scope raddr_58184_48947680;

Scope makeraddr_58184_48947680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58184_48947680 = scope;
   scope->owner = (Object)channel__bias_58180_48948920;
   scope->name = "raddr:184";
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

Scope waddr_58188_48970960;

Scope makewaddr_58188_48970960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58188_48970960 = scope;
   scope->owner = (Object)channel__bias_58180_48948920;
   scope->name = "waddr:188";
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

Scope rinc_58192_48970380;

SignalI abus__r_48969960_rinc_58192_48970380_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__r_48969960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48969960_rinc_58192_48970380_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rinc_58192_48970380;
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

Scope makerinc_58192_48970380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_48970380 = scope;
   scope->owner = (Object)channel__bias_58180_48948920;
   scope->name = "rinc:192";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48969960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58196_48969800;

SignalI abus__w_48969200_winc_58196_48969800_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__w_48969200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48969200_winc_58196_48969800_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)winc_58196_48969800;
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

Behavior __61104200;

Behavior make__61104200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61104200 = behavior;
   behavior->owner = (Object)winc_58196_48969800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48969200_winc_58196_48969800_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   abus__w_48969200_winc_58196_48969800_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   abus__w_48969200_winc_58196_48969800_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(abus__w_48969200_winc_58196_48969800_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,abus__w_48969200_winc_58196_48969800_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
abus__w_48969200_winc_58196_48969800_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[abus__w_48969200_winc_58196_48969800_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61104400();

   return behavior;
}

Behavior __61161240;

Behavior make__61161240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61161240 = behavior;
   behavior->owner = (Object)winc_58196_48969800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58199_53370600_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61104160();

   return behavior;
}

Scope makewinc_58196_48969800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58196_48969800 = scope;
   scope->owner = (Object)channel__bias_58180_48948920;
   scope->name = "winc:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48969200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61104200();
   scope->behaviors[1] = make__61161240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58200_48968820;

SignalI abus__r_48968320_rdec_58200_48968820_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__r_48968320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48968320_rdec_58200_48968820_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rdec_58200_48968820;
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

Scope makerdec_58200_48968820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58200_48968820 = scope;
   scope->owner = (Object)channel__bias_58180_48948920;
   scope->name = "rdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48968320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58205_48968120;

SignalI abus__w_48967260_wdec_58205_48968120_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__w_48967260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48967260_wdec_58205_48968120_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)wdec_58205_48968120;
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

Scope makewdec_58205_48968120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58205_48968120 = scope;
   scope->owner = (Object)channel__bias_58180_48948920;
   scope->name = "wdec:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48967260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61108560;

Behavior make__61108560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61108560 = behavior;
   behavior->owner = (Object)channel__bias_58180_48948920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61108720();

   return behavior;
}

Behavior __61108320;

Behavior make__61108320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61108320 = behavior;
   behavior->owner = (Object)channel__bias_58180_48948920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_52093020_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58182_52093020_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58182_52093020_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58182_52093020_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58182_52093020_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58182_52093020_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58182_52093020_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61108500();

   return behavior;
}

Behavior __61107800;

Behavior make__61107800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61107800 = behavior;
   behavior->owner = (Object)channel__bias_58180_48948920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61107960();

   return behavior;
}

Behavior __61107560;

Behavior make__61107560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61107560 = behavior;
   behavior->owner = (Object)channel__bias_58180_48948920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_52259080_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58183_52259080_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58183_52259080_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58183_52259080_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58183_52259080_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58183_52259080_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58183_52259080_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61107740();

   return behavior;
}

Behavior __61107040;

Behavior make__61107040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61107040 = behavior;
   behavior->owner = (Object)channel__bias_58180_48948920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[reg__0_49267880_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61107200();

   return behavior;
}

Behavior __61106840;

Behavior make__61106840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61106840 = behavior;
   behavior->owner = (Object)channel__bias_58180_48948920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58197_53264260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58197_53264260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58197_53264260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58197_53264260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58197_53264260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58197_53264260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58197_53264260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61107000();

   return behavior;
}

Behavior __61106360;

Behavior make__61106360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61106360 = behavior;
   behavior->owner = (Object)channel__bias_58180_48948920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[reg__1_49403480_channel__bias_58180_48948920_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61106540();

   return behavior;
}

Behavior __61106080;

Behavior make__61106080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61106080 = behavior;
   behavior->owner = (Object)channel__bias_58180_48948920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_53370820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58198_53370820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58198_53370820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58198_53370820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58198_53370820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58198_53370820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58198_53370820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61106300();

   return behavior;
}

Scope makechannel__bias_58180_48948920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58180_48948920 = scope;
   scope->owner = (Object)layer0_58_84_45288580;
   scope->name = "channel_bias:180";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49267880();
   scope->inners[1] = makereg__1_49403480();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58181_48948420();
   scope->scopes[1] = makeraddr_58184_48947680();
   scope->scopes[2] = makewaddr_58188_48970960();
   scope->scopes[3] = makerinc_58192_48970380();
   scope->scopes[4] = makewinc_58196_48969800();
   scope->scopes[5] = makerdec_58200_48968820();
   scope->scopes[6] = makewdec_58205_48968120();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61108560();
   scope->behaviors[1] = make__61108320();
   scope->behaviors[2] = make__61107800();
   scope->behaviors[3] = make__61107560();
   scope->behaviors[4] = make__61107040();
   scope->behaviors[5] = make__61106840();
   scope->behaviors[6] = make__61106360();
   scope->behaviors[7] = make__61106080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58210_52047280;

SignalI reg__0_52161020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makereg__0_52161020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52161020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__z_58210_52047280;
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

SignalI reg__1_52426980_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makereg__1_52426980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_52426980_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__z_58210_52047280;
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

Scope anum_58211_52046980;

Scope makeanum_58211_52046980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58211_52046980 = scope;
   scope->owner = (Object)channel__z_58210_52047280;
   scope->name = "anum:211";
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

Scope raddr_58214_52046520;

Scope makeraddr_58214_52046520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58214_52046520 = scope;
   scope->owner = (Object)channel__z_58210_52047280;
   scope->name = "raddr:214";
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

Scope waddr_58218_52046040;

Scope makewaddr_58218_52046040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58218_52046040 = scope;
   scope->owner = (Object)channel__z_58210_52047280;
   scope->name = "waddr:218";
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

Scope rinc_58222_52045620;

SignalI abus__r_52045240_rinc_58222_52045620_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__r_52045240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52045240_rinc_58222_52045620_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rinc_58222_52045620;
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

Scope makerinc_58222_52045620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58222_52045620 = scope;
   scope->owner = (Object)channel__z_58210_52047280;
   scope->name = "rinc:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52045240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58226_52045120;

SignalI abus__w_52044740_winc_58226_52045120_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__w_52044740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52044740_winc_58226_52045120_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)winc_58226_52045120;
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

Scope makewinc_58226_52045120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58226_52045120 = scope;
   scope->owner = (Object)channel__z_58210_52047280;
   scope->name = "winc:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52044740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58230_52044620;

SignalI abus__r_52044140_rdec_58230_52044620_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__r_52044140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52044140_rdec_58230_52044620_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rdec_58230_52044620;
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

Scope makerdec_58230_52044620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58230_52044620 = scope;
   scope->owner = (Object)channel__z_58210_52047280;
   scope->name = "rdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52044140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58235_52044020;

SignalI abus__w_52084560_wdec_58235_52044020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeabus__w_52084560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52084560_wdec_58235_52044020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)wdec_58235_52044020;
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

Scope makewdec_58235_52044020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58235_52044020 = scope;
   scope->owner = (Object)channel__z_58210_52047280;
   scope->name = "wdec:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52084560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61159860;

Behavior make__61159860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61159860 = behavior;
   behavior->owner = (Object)channel__z_58210_52047280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52161020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   reg__0_52161020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   reg__0_52161020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(reg__0_52161020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,reg__0_52161020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__0_52161020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[reg__0_52161020_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61160020();

   return behavior;
}

Behavior __61159660;

Behavior make__61159660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61159660 = behavior;
   behavior->owner = (Object)channel__z_58210_52047280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58212_52456780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61159820();

   return behavior;
}

Behavior __61159100;

Behavior make__61159100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61159100 = behavior;
   behavior->owner = (Object)channel__z_58210_52047280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52426980_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   reg__1_52426980_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   reg__1_52426980_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(reg__1_52426980_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,reg__1_52426980_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__1_52426980_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[reg__1_52426980_channel__z_58210_52047280_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61159300();

   return behavior;
}

Behavior __61158900;

Behavior make__61158900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61158900 = behavior;
   behavior->owner = (Object)channel__z_58210_52047280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_58213_52606480_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61159060();

   return behavior;
}

Scope makechannel__z_58210_52047280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58210_52047280 = scope;
   scope->owner = (Object)layer0_58_84_45288580;
   scope->name = "channel_z:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52161020();
   scope->inners[1] = makereg__1_52426980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58211_52046980();
   scope->scopes[1] = makeraddr_58214_52046520();
   scope->scopes[2] = makewaddr_58218_52046040();
   scope->scopes[3] = makerinc_58222_52045620();
   scope->scopes[4] = makewinc_58226_52045120();
   scope->scopes[5] = makerdec_58230_52044620();
   scope->scopes[6] = makewdec_58235_52044020();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61159860();
   scope->behaviors[1] = make__61159660();
   scope->behaviors[2] = make__61159100();
   scope->behaviors[3] = make__61158900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58240_52817720;

SignalI lv0_52911360_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makelv0_52911360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52911360_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58240_52817720;
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

SignalI lv1_53005400_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makelv1_53005400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_53005400_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58240_52817720;
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

SignalI rv0_53263100_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makerv0_53263100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_53263100_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58240_52817720;
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

SignalI rv1_53340280_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makerv1_53340280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_53340280_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58240_52817720;
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

SignalI lvok0_53340260_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makelvok0_53340260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53340260_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58240_52817720;
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

SignalI lvok1_53340240_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makelvok1_53340240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_53340240_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58240_52817720;
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

SignalI rvok0_53340220_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makervok0_53340220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_53340220_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58240_52817720;
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

SignalI rvok1_53340200_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makervok1_53340200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_53340200_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58240_52817720;
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

SignalI run_53340180_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makerun_53340180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53340180_add__n_58240_52817720_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58240_52817720;
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

Behavior __49807540;

Behavior make__49807540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49807540 = behavior;
   behavior->owner = (Object)add__n_58240_52817720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos = realloc(clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos[clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__53340060();

   return behavior;
}

Scope makeadd__n_58240_52817720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58240_52817720 = scope;
   scope->owner = (Object)layer0_58_84_45288580;
   scope->name = "add_n:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52911360();
   scope->inners[1] = makelv1_53005400();
   scope->inners[2] = makerv0_53263100();
   scope->inners[3] = makerv1_53340280();
   scope->inners[4] = makelvok0_53340260();
   scope->inners[5] = makelvok1_53340240();
   scope->inners[6] = makervok0_53340220();
   scope->inners[7] = makervok1_53340200();
   scope->inners[8] = makerun_53340180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49807540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __49555600;

Behavior make__49555600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49555600 = behavior;
   behavior->owner = (Object)layer0_58_84_45288580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos = realloc(clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos[clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__47401960();

   return behavior;
}

Behavior __52084020;

Behavior make__52084020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52084020 = behavior;
   behavior->owner = (Object)layer0_58_84_45288580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos = realloc(clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos[clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__49555380();

   return behavior;
}

Behavior __52924360;

Behavior make__52924360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52924360 = behavior;
   behavior->owner = (Object)layer0_58_84_45288580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos = realloc(clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos[clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__52083820();

   return behavior;
}

Behavior __60992300;

Behavior make__60992300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60992300 = behavior;
   behavior->owner = (Object)layer0_58_84_45288580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_52920460_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   req_52920460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   req_52920460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(req_52920460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,req_52920460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
req_52920460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[req_52920460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_49831780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   ack__mac_49831780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   ack__mac_49831780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(ack__mac_49831780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,ack__mac_49831780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
ack__mac_49831780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[ack__mac_49831780_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60992580();

   return behavior;
}

Behavior __61009820;

Behavior make__61009820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61009820 = behavior;
   behavior->owner = (Object)layer0_58_84_45288580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[ack_49831820_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_52698800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   value__z0_52698800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   value__z0_52698800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(value__z0_52698800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,value__z0_52698800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
value__z0_52698800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[value__z0_52698800_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_52799260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   value__z1_52799260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   value__z1_52799260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(value__z1_52799260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,value__z1_52799260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
value__z1_52799260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[value__z1_52799260_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_53008200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   ack__a0_53008200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   ack__a0_53008200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(ack__a0_53008200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,ack__a0_53008200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
ack__a0_53008200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[ack__a0_53008200_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_53008180_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   ack__a1_53008180_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   ack__a1_53008180_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(ack__a1_53008180_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,ack__a1_53008180_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
ack__a1_53008180_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[ack__a1_53008180_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60992860();

   return behavior;
}

Behavior __61009660;

Behavior make__61009660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61009660 = behavior;
   behavior->owner = (Object)layer0_58_84_45288580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_53677380_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   ack__mac_53677380_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   ack__mac_53677380_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(ack__mac_53677380_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,ack__mac_53677380_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
ack__mac_53677380_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[ack__mac_53677380_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_53758780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   a_53758780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   a_53758780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(a_53758780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,a_53758780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
a_53758780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[a_53758780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_52682480_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   a_52682480_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   a_52682480_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(a_52682480_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,a_52682480_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
a_52682480_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[a_52682480_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60992740();

   return behavior;
}

Scope makelayer0_58_84_45288580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_45288580 = scope;
   scope->owner = (Object)layer0_58_840_52923660;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_53677240();
   scope->systemIs[1] = makefunc0_53758620();
   scope->systemIs[2] = makefunc1_52682280();
   scope->num_inners = 33;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_49831840();
   scope->inners[1] = makeack_49831820();
   scope->inners[2] = makeack__mac_49831780();
   scope->inners[3] = makeack__add_49831760();
   scope->inners[4] = make_5897_48854920();
   scope->inners[5] = make_5895_48854900();
   scope->inners[6] = make_5896_48854820();
   scope->inners[7] = make_58143_51779160();
   scope->inners[8] = make_58144_51912200();
   scope->inners[9] = make_58126_51995520();
   scope->inners[10] = make_58124_51995500();
   scope->inners[11] = make_58125_51995400();
   scope->inners[12] = make_58182_52093020();
   scope->inners[13] = make_58183_52259080();
   scope->inners[14] = make_58212_52456780();
   scope->inners[15] = make_58213_52606480();
   scope->inners[16] = makevalue__z0_52698800();
   scope->inners[17] = makevalue__z1_52799260();
   scope->inners[18] = makevalue__a0_52874980();
   scope->inners[19] = makevalue__a1_53008260();
   scope->inners[20] = makeflag__z0_53008240();
   scope->inners[21] = makeflag__z1_53008220();
   scope->inners[22] = makeack__a0_53008200();
   scope->inners[23] = makeack__a1_53008180();
   scope->inners[24] = make_58197_53264260();
   scope->inners[25] = make_58198_53370820();
   scope->inners[26] = make_58199_53370600();
   scope->inners[27] = make_5899_53370580();
   scope->inners[28] = make_58100_53370500();
   scope->inners[29] = make_58101_53462480();
   scope->inners[30] = make_58128_53462460();
   scope->inners[31] = make_58129_53462380();
   scope->inners[32] = make_58130_53595340();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_45286320();
   scope->scopes[1] = makechannel__w1_58112_47123800();
   scope->scopes[2] = makechannel__accum_58141_47334580();
   scope->scopes[3] = makemac__n1_58173_49370900();
   scope->scopes[4] = makechannel__bias_58180_48948920();
   scope->scopes[5] = makechannel__z_58210_52047280();
   scope->scopes[6] = makeadd__n_58240_52817720();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49555600();
   scope->behaviors[1] = make__52084020();
   scope->behaviors[2] = make__52924360();
   scope->behaviors[3] = make__60992300();
   scope->behaviors[4] = make__61009820();
   scope->behaviors[5] = make__61009660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_52923660() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_52923660 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52920540();
   systemT->inputs[1] = makerst_52920500();
   systemT->inputs[2] = makefill_52920480();
   systemT->inputs[3] = makereq_52920460();
   systemT->inputs[4] = make_5815_53312580();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_53312520();
   systemT->outputs[1] = make_5813_53312480();
   systemT->outputs[2] = make_5814_53312360();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5832_53465460();
   systemT->inouts[1] = make_5833_53729160();

   systemT->scope = makelayer0_58_84_45288580();

   return systemT;
}