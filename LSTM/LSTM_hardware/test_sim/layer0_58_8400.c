#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_8400_113977660;

SignalI clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeclk_113995220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_8400_113977660;
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

SignalI rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makerst_113995140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_8400_113977660;
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

SignalI req_113995120_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makereq_113995120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_113995120_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_8400_113977660;
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

SignalI _581790_114238340_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581790_114238340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581790_114238340_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_8400_113977660;
   signalI->name = ":1790";
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

SignalI ack__layer_114238300_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeack__layer_114238300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_114238300_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_8400_113977660;
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

SignalI _581788_114238280_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581788_114238280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581788_114238280_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_8400_113977660;
   signalI->name = ":1788";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _581789_114238140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581789_114238140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581789_114238140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_8400_113977660;
   signalI->name = ":1789";
   signalI->type = get_type_vector(get_type_bit(),3);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _581879_114553440_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581879_114553440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581879_114553440_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_8400_113977660;
   signalI->name = ":1879";
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

SignalI _581880_114755680_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581880_114755680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581880_114755680_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_8400_113977660;
   signalI->name = ":1880";
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

Block __110520940;

Block __110520600;

void code__110520600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176356320(),ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176356180(),ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176356080(),ack__add_113198200_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__110520600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __110520600 = block;
   block->owner = (Object)__110520940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__110520600;

   return block;
};

void code__110520940() {
   {
      Value cond = rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__110520600();
   }
      }
   }
}

Block make__110520940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __110520940 = block;
   block->owner = (Object)__110518980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__110520940;

   return block;
};

Block __110518840;

Block __76848140;

Block __76847960;

void code__76847960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,value__z0_116973940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176355660(),flag__z0_53188680_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__76847960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76847960 = block;
   block->owner = (Object)__76848140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76847960;

   return block;
};

Block __112525720;

void code__112525720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,value__z1_117314540_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176355280(),flag__z1_53188640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__112525720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __112525720 = block;
   block->owner = (Object)__76848140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__112525720;

   return block;
};

void code__76848140() {
 code__76847960();
 code__112525720();
}

Block make__76848140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76848140 = block;
   block->owner = (Object)__110518840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76848140;

   return block;
};

Block __110518620;

void code__110518620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176355220(),flag__z0_53188680_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176355140(),flag__z1_53188640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__110518620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __110518620 = block;
   block->owner = (Object)__110518840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__110518620;

   return block;
};

void code__110518840() {
   {
      Value cond = ack__add_113198200_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76848140();
   }
   else {
  code__110518620();
   }
      }
   }
}

Block make__110518840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __110518840 = block;
   block->owner = (Object)__113039100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__110518840;

   return block;
};

Block __113038900;

Block __113038340;

void code__113038340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176355000(),ack__a0_53188500_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176354820(),ack__a1_53188480_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__113038340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __113038340 = block;
   block->owner = (Object)__113038900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__113038340;

   return block;
};

Block __113037220;

Block __113037020;

void code__113037020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_117834000_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581879_114553440_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176354200(),ack__a0_53188500_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__113037020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __113037020 = block;
   block->owner = (Object)__113037220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__113037020;

   return block;
};

Block __113438140;

void code__113438140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_53188700_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581880_114755680_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176354060(),ack__a1_53188480_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__113438140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __113438140 = block;
   block->owner = (Object)__113037220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__113438140;

   return block;
};

void code__113037220() {
 code__113037020();
 code__113438140();
}

Block make__113037220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __113037220 = block;
   block->owner = (Object)__113038900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__113037220;

   return block;
};

void code__113038900() {
   {
      Value cond = rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__113038340();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_53188680_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         src1 = flag__z1_53188640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__113037220();
   }
      }
   }
}

Block make__113038900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __113038900 = block;
   block->owner = (Object)__113979280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__113038900;

   return block;
};

Block __175435080;

void code__175435080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_113995120_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_113198300_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175435080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175435080 = block;
   block->owner = (Object)__175434480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175435080;

   return block;
};

Block __175435340;

void code__175435340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,clk_53632800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,ack_53632680_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,rst_53632200_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_116973940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_117314540_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_53188500_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      src1 = ack__a1_53188480_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_114238300_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175435340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175435340 = block;
   block->owner = (Object)__175604900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175435340;

   return block;
};

Block __175435280;

void code__175435280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_53631800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581981_115365940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581996_116592600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_113502100_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,value__a0_117834000_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_108646760_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,value__a1_53188700_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175435280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175435280 = block;
   block->owner = (Object)__175604520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175435280;

   return block;
};

Block __117568360;

void code__117568360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_117207500_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(abus__r_113807960_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_113808060_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__117568360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __117568360 = block;
   block->owner = (Object)__55747480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__117568360;

   return block;
};

Block __175627560;

void code__175627560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_113808060_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581916_113777640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175627560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175627560 = block;
   block->owner = (Object)__175627260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175627560;

   return block;
};

Block __175627100;

void code__175627100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581916_113777640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,dbus__r_113808060_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175627100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175627100 = block;
   block->owner = (Object)__175626840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175627100;

   return block;
};

Block __175625980;

void code__175625980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_113652600_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175625980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175625980 = block;
   block->owner = (Object)__175625760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175625980;

   return block;
};

Block __175625720;

void code__175625720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,trig__r_113652600_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175625720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175625720 = block;
   block->owner = (Object)__175625540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175625720;

   return block;
};

Block __175624900;

void code__175624900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_113807960_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175624900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175624900 = block;
   block->owner = (Object)__175624700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175624900;

   return block;
};

Block __175624560;

void code__175624560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,abus__r_113807960_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175624560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175624560 = block;
   block->owner = (Object)__175624180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175624560;

   return block;
};

Block __101733060;

void code__101733060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_71001640_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(abus__r_59856280_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_59856560_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__101733060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __101733060 = block;
   block->owner = (Object)__103210080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__101733060;

   return block;
};

Block __175621200;

void code__175621200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_59856560_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581931_115017180_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175621200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175621200 = block;
   block->owner = (Object)__175620940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175621200;

   return block;
};

Block __175620880;

void code__175620880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581931_115017180_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,dbus__r_59856560_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175620880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175620880 = block;
   block->owner = (Object)__175620680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175620880;

   return block;
};

Block __175620120;

void code__175620120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55910660_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175620120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175620120 = block;
   block->owner = (Object)__175636160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175620120;

   return block;
};

Block __175636020;

void code__175636020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,trig__r_55910660_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175636020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175636020 = block;
   block->owner = (Object)__175635480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175636020;

   return block;
};

Block __175634840;

void code__175634840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_59856280_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175634840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175634840 = block;
   block->owner = (Object)__175634400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175634840;

   return block;
};

Block __175634340;

void code__175634340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,abus__r_59856280_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175634340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175634340 = block;
   block->owner = (Object)__175634060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175634340;

   return block;
};

Block __175631840;

void code__175631840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_103635220_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175631840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175631840 = block;
   block->owner = (Object)__175631380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175631840;

   return block;
};

Block __175631180;

void code__175631180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,reg__0_103635220_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175631180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175631180 = block;
   block->owner = (Object)__175630840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175631180;

   return block;
};

Block __175630180;

void code__175630180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_103925200_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175630180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175630180 = block;
   block->owner = (Object)__175629900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175630180;

   return block;
};

Block __175629820;

void code__175629820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,reg__1_103925200_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175629820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175629820 = block;
   block->owner = (Object)__175629540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175629820;

   return block;
};

Block __107756620;

Block __107756460;

Block __107755840;

void code__107755840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176237820(),_581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176237740(),_581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__107755840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107755840 = block;
   block->owner = (Object)__107756460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107755840;

   return block;
};

void code__107756460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176237920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__107755840();
   }
      }
   }
}

Block make__107756460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107756460 = block;
   block->owner = (Object)__107756620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107756460;

   return block;
};

Block __107755000;

Block __107754280;

void code__107754280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176237460(),_581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176237240(),_581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__107754280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107754280 = block;
   block->owner = (Object)__107755000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107754280;

   return block;
};

void code__107755000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176237560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__107754280();
   }
      }
   }
}

Block make__107755000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107755000 = block;
   block->owner = (Object)__107756620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107755000;

   return block;
};

Block __107752540;

Block __107752120;

void code__107752120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176236820(),_581789_114238140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__107752120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107752120 = block;
   block->owner = (Object)__107752540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107752120;

   return block;
};

void code__107752540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176237000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__107752120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176236700(),_581788_114238280_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__107752540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107752540 = block;
   block->owner = (Object)__107756620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107752540;

   return block;
};

Block __107750300;

void code__107750300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176236220(),rvok_107756820_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176236020(),lvok0_107756860_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176235940(),wok0_107756800_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176235780(),lvok1_107756840_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176235580(),wok1_107756780_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__107750300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107750300 = block;
   block->owner = (Object)__107756620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107750300;

   return block;
};

Block __108676020;

Block __108675500;

Block __108675260;

Block __108715600;

Block __108712700;

Block __108712520;

void code__108712520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_581790_114238340_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,rv_107756880_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__176234620(),rvok_107756820_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__108712520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108712520 = block;
   block->owner = (Object)__108712700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108712520;

   return block;
};

void code__108712700() {
 code__108712520();
}

Block make__108712700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108712700 = block;
   block->owner = (Object)__108715600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108712700;

   return block;
};

Block __108715360;

void code__108715360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _581789_114238140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
                  src1 = make__176291680();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__176291600();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _581789_114238140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__176290680();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),3),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__176290600();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_581789_114238140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176290480(),_581788_114238280_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__108715360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108715360 = block;
   block->owner = (Object)__108715600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108715360;

   return block;
};

void code__108715600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _581788_114238280_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176234840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__108712700();
   }
   else {
  code__108715360();
   }
      }
   }
}

Block make__108715600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108715600 = block;
   block->owner = (Object)__108675260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108715600;

   return block;
};

void code__108675260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176235020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__108715600();
   }
      }
   }
}

Block make__108675260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108675260 = block;
   block->owner = (Object)__108675500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108675260;

   return block;
};

void code__108675500() {
 code__108675260();
}

Block make__108675500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108675500 = block;
   block->owner = (Object)__108676020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108675500;

   return block;
};

Block __109626500;

Block __109626280;

Block __109625760;

Block __109696600;

Block __109696340;

void code__109696340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__176289920(),_581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_581916_113777640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,lv0_106244660_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__176289720(),lvok0_107756860_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__109696340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __109696340 = block;
   block->owner = (Object)__109696600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__109696340;

   return block;
};

void code__109696600() {
 code__109696340();
}

Block make__109696600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __109696600 = block;
   block->owner = (Object)__109625760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__109696600;

   return block;
};

Block __109625480;

void code__109625480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
                  src1 = make__176289440();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__176289400();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__176288500();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),3),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__176288300();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176288000(),_581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__109625480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __109625480 = block;
   block->owner = (Object)__109625760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__109625480;

   return block;
};

void code__109625760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176290100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__109696600();
   }
   else {
  code__109625480();
   }
      }
   }
}

Block make__109625760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __109625760 = block;
   block->owner = (Object)__109626280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__109625760;

   return block;
};

void code__109626280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176290200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__109625760();
   }
      }
   }
}

Block make__109626280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __109626280 = block;
   block->owner = (Object)__109626500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__109626280;

   return block;
};

void code__109626500() {
 code__109626280();
}

Block make__109626500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __109626500 = block;
   block->owner = (Object)__108676020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__109626500;

   return block;
};

Block __110475120;

Block __110474300;

Block __110474080;

void code__110474080() {
}

Block make__110474080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __110474080 = block;
   block->owner = (Object)__110474300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__110474080;

   return block;
};

Block __113993820;

void code__113993820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_107179060_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176286380(),wok0_107756800_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__113993820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __113993820 = block;
   block->owner = (Object)__110474300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__113993820;

   return block;
};

void code__110474300() {
 code__110474080();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_107179060_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
            set_value_pos(pool_state);
         dst; });
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
                              src0 = lv0_106244660_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_107756880_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__176286700();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_107179060_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
 code__113993820();
}

Block make__110474300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __110474300 = block;
   block->owner = (Object)__110475120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__110474300;

   return block;
};

void code__110475120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176287280(),ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176287160(),run_107756760_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
 code__110474300();
}

Block make__110475120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __110475120 = block;
   block->owner = (Object)__108676020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__110475120;

   return block;
};

Block __114843240;

void code__114843240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176286180(),wok0_107756800_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176286080(),wok1_107756780_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176285960(),lvok0_107756860_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176285800(),lvok1_107756840_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176285740(),rvok_107756820_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__114843240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __114843240 = block;
   block->owner = (Object)__108676020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__114843240;

   return block;
};

Block __114841380;

Block __114841180;

Block __114840640;

Block __114837760;

Block __114837480;

void code__114837480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__176284620(),_581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_581931_115017180_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,lv1_106762060_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__176284160(),lvok1_107756840_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__114837480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __114837480 = block;
   block->owner = (Object)__114837760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__114837480;

   return block;
};

void code__114837760() {
 code__114837480();
}

Block make__114837760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __114837760 = block;
   block->owner = (Object)__114840640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__114837760;

   return block;
};

Block __114840440;

void code__114840440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
                  src1 = make__176283940();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__176283860();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__176308040();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),3),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__176307820();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176307680(),_581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__114840440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __114840440 = block;
   block->owner = (Object)__114840640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__114840440;

   return block;
};

void code__114840640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176285220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__114837760();
   }
   else {
  code__114840440();
   }
      }
   }
}

Block make__114840640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __114840640 = block;
   block->owner = (Object)__114841180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__114840640;

   return block;
};

void code__114841180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176285420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__114840640();
   }
      }
   }
}

Block make__114841180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __114841180 = block;
   block->owner = (Object)__114841380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__114841180;

   return block;
};

void code__114841380() {
 code__114841180();
}

Block make__114841380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __114841380 = block;
   block->owner = (Object)__108676020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__114841380;

   return block;
};

Block __115750300;

Block __115749560;

Block __115749160;

void code__115749160() {
}

Block make__115749160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __115749160 = block;
   block->owner = (Object)__115749560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__115749160;

   return block;
};

Block __117820400;

void code__117820400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_107443520_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176306160(),wok1_107756780_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__117820400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __117820400 = block;
   block->owner = (Object)__115749560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__117820400;

   return block;
};

void code__115749560() {
 code__115749160();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_107443520_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
            set_value_pos(pool_state);
         dst; });
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
                              src0 = lv1_106762060_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_107756880_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__176306540();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_107443520_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
 code__117820400();
}

Block make__115749560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __115749560 = block;
   block->owner = (Object)__115750300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__115749560;

   return block;
};

void code__115750300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176307260(),ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176307180(),run_107756760_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
 code__115749560();
}

Block make__115750300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __115750300 = block;
   block->owner = (Object)__108676020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__115750300;

   return block;
};

Block __59639380;

void code__59639380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176305780(),wok0_107756800_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176305540(),wok1_107756780_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176305360(),lvok0_107756860_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176305300(),lvok1_107756840_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176305120(),rvok_107756820_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__59639380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59639380 = block;
   block->owner = (Object)__108676020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59639380;

   return block;
};

void code__108676020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176235280(),run_107756760_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_107756820_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__108675500();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_107756860_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__109626500();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0,src1,dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = lvok0_107756860_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               src1 = rvok_107756820_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_107756800_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__110475120();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_107756800_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         src1 = wok1_107756780_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__114843240();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_107756840_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__114841380();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0,src1,dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = lvok1_107756840_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               src1 = rvok_107756820_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_107756780_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__115750300();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_107756800_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         src1 = wok1_107756780_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59639380();
   }
      }
   }
}

Block make__108676020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108676020 = block;
   block->owner = (Object)__107756620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108676020;

   return block;
};

Block __107806300;

void code__107806300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176304880(),av0_107179060_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176304820(),av1_107443520_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__107806300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107806300 = block;
   block->owner = (Object)__107756620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107806300;

   return block;
};

void code__107756620() {
 code__107756460();
 code__107755000();
 code__107752540();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176236540(),ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176236480(),run_107756760_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_107756760_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__107750300();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_113198300_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         src1 = run_107756760_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__108676020();
   }
   else {
  code__107806300();
   }
      }
   }
}

Block make__107756620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107756620 = block;
   block->owner = (Object)__59505140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107756620;

   return block;
};

Block __76504460;

void code__76504460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_65321420_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(abus__r_62694980_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_62695160_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__76504460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76504460 = block;
   block->owner = (Object)__78762900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76504460;

   return block;
};

Block __175650060;

void code__175650060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_62695160_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581980_115365960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175650060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175650060 = block;
   block->owner = (Object)__175649880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175650060;

   return block;
};

Block __175649800;

void code__175649800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581980_115365960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,dbus__r_62695160_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175649800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175649800 = block;
   block->owner = (Object)__175649180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175649800;

   return block;
};

Block __175647920;

void code__175647920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_60587220_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175647920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175647920 = block;
   block->owner = (Object)__175647420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175647920;

   return block;
};

Block __175647380;

void code__175647380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,trig__r_60587220_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175647380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175647380 = block;
   block->owner = (Object)__175646920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175647380;

   return block;
};

Block __175646180;

void code__175646180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_62694980_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581979_115365840_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175646180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175646180 = block;
   block->owner = (Object)__175645780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175646180;

   return block;
};

Block __175645600;

void code__175645600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581979_115365840_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,abus__r_62694980_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175645600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175645600 = block;
   block->owner = (Object)__175645420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175645600;

   return block;
};

Block __83758520;

void code__83758520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_81663760_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(abus__r_79720140_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_79720320_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__83758520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83758520 = block;
   block->owner = (Object)__86585120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83758520;

   return block;
};

Block __175667100;

void code__175667100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_79720320_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581995_116592640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175667100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175667100 = block;
   block->owner = (Object)__175666820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175667100;

   return block;
};

Block __175666680;

void code__175666680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581995_116592640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,dbus__r_79720320_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175666680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175666680 = block;
   block->owner = (Object)__175666320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175666680;

   return block;
};

Block __175665220;

void code__175665220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_79191000_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175665220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175665220 = block;
   block->owner = (Object)__175664880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175665220;

   return block;
};

Block __175664820;

void code__175664820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,trig__r_79191000_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175664820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175664820 = block;
   block->owner = (Object)__175664500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175664820;

   return block;
};

Block __175664160;

void code__175664160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_79720140_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_581994_116592420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175664160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175664160 = block;
   block->owner = (Object)__175663880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175664160;

   return block;
};

Block __175663800;

void code__175663800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581994_116592420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,abus__r_79720140_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175663800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175663800 = block;
   block->owner = (Object)__175663500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175663800;

   return block;
};

Block __175709880;

void code__175709880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_95540900_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175709880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175709880 = block;
   block->owner = (Object)__175709680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175709880;

   return block;
};

Block __175709520;

void code__175709520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,reg__0_95540900_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175709520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175709520 = block;
   block->owner = (Object)__175709340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175709520;

   return block;
};

Block __175708680;

void code__175708680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_101428080_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,_582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175708680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175708680 = block;
   block->owner = (Object)__175708420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175708680;

   return block;
};

Block __175708360;

void code__175708360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,reg__1_101428080_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175708360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175708360 = block;
   block->owner = (Object)__175708120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175708360;

   return block;
};

Block __105282560;

Block __105282380;

void code__105282380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176340800(),_581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__105282380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __105282380 = block;
   block->owner = (Object)__105282560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__105282380;

   return block;
};

Block __105281860;

void code__105281860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176340740(),_581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__105281860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __105281860 = block;
   block->owner = (Object)__105282560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__105281860;

   return block;
};

Block __105279160;

Block __105278280;

void code__105278280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,lv0_103619520_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176339900(),lvok0_105282860_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__105278280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __105278280 = block;
   block->owner = (Object)__105279160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__105278280;

   return block;
};

Block __106146400;

Block __106145520;

Block __106144160;

void code__106144160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581980_115365960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,rv0_104513040_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176339040(),_581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176338940(),rvok0_105282760_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__106144160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __106144160 = block;
   block->owner = (Object)__106145520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__106144160;

   return block;
};

Block __106145200;

void code__106145200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176338720(),_581979_115365840_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176338440(),_581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__106145200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __106145200 = block;
   block->owner = (Object)__106145520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__106145200;

   return block;
};

void code__106145520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176339460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__106144160();
   }
   else {
  code__106145200();
   }
      }
   }
}

Block make__106145520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __106145520 = block;
   block->owner = (Object)__106146400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__106145520;

   return block;
};

void code__106146400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _581981_115365940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176339620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__106145520();
   }
      }
   }
}

Block make__106146400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __106146400 = block;
   block->owner = (Object)__105279160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__106146400;

   return block;
};

Block __107079700;

Block __107078840;

void code__107078840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_103619520_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      src1 = rv0_104513040_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__107078840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107078840 = block;
   block->owner = (Object)__107079700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107078840;

   return block;
};

void code__107079700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176338240(),run_105282680_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176338160(),ack__add_113198200_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
 code__107078840();
}

Block make__107079700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107079700 = block;
   block->owner = (Object)__105279160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107079700;

   return block;
};

Block __108495160;

void code__108495160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,lv1_104005940_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176337000(),lvok1_105282840_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__108495160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108495160 = block;
   block->owner = (Object)__105279160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108495160;

   return block;
};

Block __109546260;

Block __109545820;

Block __109544520;

void code__109544520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_581995_116592640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,rv1_105282900_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176336320(),_581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176336240(),rvok1_105282740_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__109544520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __109544520 = block;
   block->owner = (Object)__109545820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__109544520;

   return block;
};

Block __109545620;

void code__109545620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176336120(),_581994_116592420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176335960(),_581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__109545620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __109545620 = block;
   block->owner = (Object)__109545820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__109545620;

   return block;
};

void code__109545820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176336680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__109544520();
   }
   else {
  code__109545620();
   }
      }
   }
}

Block make__109545820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __109545820 = block;
   block->owner = (Object)__109546260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__109545820;

   return block;
};

void code__109546260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _581996_116592600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176336840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__109545820();
   }
      }
   }
}

Block make__109546260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __109546260 = block;
   block->owner = (Object)__105279160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__109546260;

   return block;
};

Block __110361620;

Block __110360560;

void code__110360560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_104005940_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      src1 = rv1_105282900_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__110360560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __110360560 = block;
   block->owner = (Object)__110361620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__110360560;

   return block;
};

void code__110361620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176335580(),run_105282680_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176335440(),ack__add_113198200_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
 code__110360560();
}

Block make__110361620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __110361620 = block;
   block->owner = (Object)__105279160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__110361620;

   return block;
};

void code__105279160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176340220(),run_105282680_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
 code__105278280();
 code__106146400();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_105282860_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         src1 = rvok0_105282760_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__107079700();
   }
      }
   }
 code__108495160();
 code__109546260();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_105282840_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         src1 = rvok1_105282740_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__110361620();
   }
      }
   }
}

Block make__105279160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __105279160 = block;
   block->owner = (Object)__105282560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__105279160;

   return block;
};

Block __105280840;

void code__105280840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176334940(),lvok0_105282860_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176334880(),rvok0_105282760_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176334800(),lvok1_105282840_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176334720(),rvok1_105282740_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__105280840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __105280840 = block;
   block->owner = (Object)__105282560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__105280840;

   return block;
};

void code__105282560() {
 code__105282380();
 code__105281860();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176340660(),ack__add_113198200_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176340520(),run_105282680_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         src1 = run_105282680_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__105279160();
   }
   else {
  code__105280840();
   }
      }
   }
}

Block make__105282560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __105282560 = block;
   block->owner = (Object)__113198480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__105282560;

   return block;
};

Value make__176187420() {
   static unsigned long long data[] = { 4294967238ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176187400() {
   static unsigned long long data[] = { 4294967242ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176187380() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176187320() {
   static unsigned long long data[] = { 4294967271ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176187280() {
   static unsigned long long data[] = { 4294967238ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176187260() {
   static unsigned long long data[] = { 4294967242ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176187220() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176187180() {
   static unsigned long long data[] = { 4294967271ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176241960() {
   static unsigned long long data[] = { 4294967238ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176241900() {
   static unsigned long long data[] = { 4294967242ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176241860() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176241800() {
   static unsigned long long data[] = { 4294967271ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176241740() {
   static unsigned long long data[] = { 4294967238ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176241700() {
   static unsigned long long data[] = { 4294967242ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176241680() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176241620() {
   static unsigned long long data[] = { 4294967271ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176304800() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__176303260() {
   static unsigned long long data[] = { 33ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__176237920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176237820() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),3),1,data);
}

Value make__176237740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176237560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176237460() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),3),1,data);
}

Value make__176237240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176237000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176236820() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),3),1,data);
}

Value make__176236700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176236540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176236480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176236220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176236020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176235940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176235780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176235580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176235280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176235020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176234840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176234620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176291680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176291600() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176290680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176290600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),3),1,data);
}

Value make__176290480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176290200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176290100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176289920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176289720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176289440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176289400() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176288500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176288300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),3),1,data);
}

Value make__176288000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176287280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176287160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176286700() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176286380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176286180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176286080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176285960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176285800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176285740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176285420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176285220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176284620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176284160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176283940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176283860() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176308040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176307820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),3),1,data);
}

Value make__176307680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176307260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176307180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176306540() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176306160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176305780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176305540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176305360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176305300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176305120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176304880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176304820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__176340800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176340740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176340660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176340520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176340220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176339900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176339620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176339460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176339040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176338940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176338720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176338440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176338240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176338160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176337000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176336840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176336680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176336320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176336240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176336120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176335960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176335580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176335440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176334940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176334880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176334800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176334720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176356320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176356180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176356080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176355660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176355280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176355220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176355140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176355000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176354820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176354200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176354060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_840_113655200;

SignalI req__mac_113198300_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makereq__mac_113198300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_113198300_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
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

SignalI ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeack_113198280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
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

SignalI ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeack__mac_113198220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
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

SignalI ack__add_113198200_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeack__add_113198200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_113198200_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
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

SignalI _581916_113777640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581916_113777640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581916_113777640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1916";
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

SignalI _581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581914_113777580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1914";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581915_113777360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1915";
   signalI->type = get_type_vector(get_type_bit(),3);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581939_114009420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1939";
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

SignalI _581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581940_114555020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1940";
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

SignalI _581931_115017180_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581931_115017180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581931_115017180_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1931";
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

SignalI _581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581929_115017160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1929";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581930_115017080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1930";
   signalI->type = get_type_vector(get_type_bit(),3);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _581980_115365960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581980_115365960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581980_115365960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1980";
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

SignalI _581981_115365940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581981_115365940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581981_115365940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1981";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581978_115365920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1978";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _581979_115365840_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581979_115365840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581979_115365840_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1979";
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

SignalI _582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_582008_115632920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":2008";
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

SignalI _582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_582009_116062280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":2009";
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

SignalI _581995_116592640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581995_116592640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581995_116592640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1995";
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

SignalI _581996_116592600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581996_116592600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581996_116592600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1996";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581993_116592520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1993";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _581994_116592420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI make_581994_116592420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _581994_116592420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
   signalI->name = ":1994";
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

SignalI value__z0_116973940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makevalue__z0_116973940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_116973940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
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

SignalI value__z1_117314540_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makevalue__z1_117314540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_117314540_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
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

SignalI value__a0_117834000_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makevalue__a0_117834000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_117834000_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
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

SignalI value__a1_53188700_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makevalue__a1_53188700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_53188700_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
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

SignalI flag__z0_53188680_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeflag__z0_53188680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_53188680_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
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

SignalI flag__z1_53188640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeflag__z1_53188640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_53188640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
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

SignalI ack__a0_53188500_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeack__a0_53188500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_53188500_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
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

SignalI ack__a1_53188480_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeack__a1_53188480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_53188480_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)layer0_58_840_113655200;
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

SystemI counter_53629400;

SystemI makecounter_53629400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_53629400 = systemI;
   systemI->owner = (Object)layer0_58_840_113655200;
   systemI->name = "counter";
   systemI->system = counter_58_8410_53040240;

   return systemI;
};

SystemI func0_113501940;

SystemI makefunc0_113501940() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_113501940 = systemI;
   systemI->owner = (Object)layer0_58_840_113655200;
   systemI->name = "func0";
   systemI->system = func0_58_8410_113104340;

   return systemI;
};

SystemI func1_108646400;

SystemI makefunc1_108646400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_108646400 = systemI;
   systemI->owner = (Object)layer0_58_840_113655200;
   systemI->name = "func1";
   systemI->system = func1_58_8410_108075820;

   return systemI;
};

Scope channel__w0_581907_113654800;

SignalI trig__r_113652600_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI maketrig__r_113652600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_113652600_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__w0_581907_113654800;
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

SignalI dbus__r_113808060_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makedbus__r_113808060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_113808060_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__w0_581907_113654800;
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

SignalI abus__r_113807960_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeabus__r_113807960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_113807960_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__w0_581907_113654800;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),3);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI mem_117207500_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makemem_117207500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_117207500_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__w0_581907_113654800;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__176187420();
         src1 = make__176187400();
         src2 = make__176187380();
         src3 = make__176187320();
         src4 = make__176187280();
         src5 = make__176187260();
         src6 = make__176187220();
         src7 = make__176187180();
         concat_value(8,0,dst,src0,src1,src2,src3,src4,src5,src6,src7);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_581908_113654420;

Scope makeraddr_581908_113654420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_581908_113654420 = scope;
   scope->owner = (Object)channel__w0_581907_113654800;
   scope->name = "raddr:1908";
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

Scope rinc_581913_113653680;

Scope makerinc_581913_113653680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_581913_113653680 = scope;
   scope->owner = (Object)channel__w0_581907_113654800;
   scope->name = "rinc:1913";
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

Scope rdec_581917_113653100;

Scope makerdec_581917_113653100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_581917_113653100 = scope;
   scope->owner = (Object)channel__w0_581907_113654800;
   scope->name = "rdec:1917";
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

Behavior __55747480;

Behavior make__55747480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55747480 = behavior;
   behavior->owner = (Object)channel__w0_581907_113654800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg += 1;
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg = realloc(clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg*sizeof(Object));
clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg[clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg-1] = (Object)behavior;
   behavior->block = make__117568360();

   return behavior;
}

Behavior __175627260;

Behavior make__175627260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175627260 = behavior;
   behavior->owner = (Object)channel__w0_581907_113654800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_113808060_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   dbus__r_113808060_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   dbus__r_113808060_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(dbus__r_113808060_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,dbus__r_113808060_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
dbus__r_113808060_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[dbus__r_113808060_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175627560();

   return behavior;
}

Behavior __175626840;

Behavior make__175626840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175626840 = behavior;
   behavior->owner = (Object)channel__w0_581907_113654800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581916_113777640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581916_113777640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581916_113777640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581916_113777640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581916_113777640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581916_113777640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581916_113777640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175627100();

   return behavior;
}

Behavior __175625760;

Behavior make__175625760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175625760 = behavior;
   behavior->owner = (Object)channel__w0_581907_113654800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_113652600_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   trig__r_113652600_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   trig__r_113652600_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(trig__r_113652600_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,trig__r_113652600_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
trig__r_113652600_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[trig__r_113652600_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175625980();

   return behavior;
}

Behavior __175625540;

Behavior make__175625540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175625540 = behavior;
   behavior->owner = (Object)channel__w0_581907_113654800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581914_113777580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175625720();

   return behavior;
}

Behavior __175624700;

Behavior make__175624700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175624700 = behavior;
   behavior->owner = (Object)channel__w0_581907_113654800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_113807960_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   abus__r_113807960_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   abus__r_113807960_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(abus__r_113807960_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,abus__r_113807960_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
abus__r_113807960_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[abus__r_113807960_channel__w0_581907_113654800_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175624900();

   return behavior;
}

Behavior __175624180;

Behavior make__175624180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175624180 = behavior;
   behavior->owner = (Object)channel__w0_581907_113654800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581915_113777360_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175624560();

   return behavior;
}

Scope makechannel__w0_581907_113654800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_581907_113654800 = scope;
   scope->owner = (Object)layer0_58_840_113655200;
   scope->name = "channel_w0:1907";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_113652600();
   scope->inners[1] = makedbus__r_113808060();
   scope->inners[2] = makeabus__r_113807960();
   scope->inners[3] = makemem_117207500();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_581908_113654420();
   scope->scopes[1] = makerinc_581913_113653680();
   scope->scopes[2] = makerdec_581917_113653100();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55747480();
   scope->behaviors[1] = make__175627260();
   scope->behaviors[2] = make__175626840();
   scope->behaviors[3] = make__175625760();
   scope->behaviors[4] = make__175625540();
   scope->behaviors[5] = make__175624700();
   scope->behaviors[6] = make__175624180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_581922_55786860;

SignalI trig__r_55910660_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI maketrig__r_55910660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55910660_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__w1_581922_55786860;
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

SignalI dbus__r_59856560_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makedbus__r_59856560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_59856560_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__w1_581922_55786860;
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

SignalI abus__r_59856280_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeabus__r_59856280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59856280_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__w1_581922_55786860;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),3);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI mem_71001640_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makemem_71001640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_71001640_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__w1_581922_55786860;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__176241960();
         src1 = make__176241900();
         src2 = make__176241860();
         src3 = make__176241800();
         src4 = make__176241740();
         src5 = make__176241700();
         src6 = make__176241680();
         src7 = make__176241620();
         concat_value(8,0,dst,src0,src1,src2,src3,src4,src5,src6,src7);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_581923_55817120;

Scope makeraddr_581923_55817120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_581923_55817120 = scope;
   scope->owner = (Object)channel__w1_581922_55786860;
   scope->name = "raddr:1923";
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

Scope rinc_581928_55851080;

Scope makerinc_581928_55851080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_581928_55851080 = scope;
   scope->owner = (Object)channel__w1_581922_55786860;
   scope->name = "rinc:1928";
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

Scope rdec_581932_55845660;

Scope makerdec_581932_55845660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_581932_55845660 = scope;
   scope->owner = (Object)channel__w1_581922_55786860;
   scope->name = "rdec:1932";
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

Behavior __103210080;

Behavior make__103210080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __103210080 = behavior;
   behavior->owner = (Object)channel__w1_581922_55786860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg += 1;
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg = realloc(clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg*sizeof(Object));
clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg[clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg-1] = (Object)behavior;
   behavior->block = make__101733060();

   return behavior;
}

Behavior __175620940;

Behavior make__175620940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175620940 = behavior;
   behavior->owner = (Object)channel__w1_581922_55786860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_59856560_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   dbus__r_59856560_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   dbus__r_59856560_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(dbus__r_59856560_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,dbus__r_59856560_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
dbus__r_59856560_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[dbus__r_59856560_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175621200();

   return behavior;
}

Behavior __175620680;

Behavior make__175620680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175620680 = behavior;
   behavior->owner = (Object)channel__w1_581922_55786860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581931_115017180_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581931_115017180_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581931_115017180_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581931_115017180_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581931_115017180_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581931_115017180_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581931_115017180_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175620880();

   return behavior;
}

Behavior __175636160;

Behavior make__175636160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175636160 = behavior;
   behavior->owner = (Object)channel__w1_581922_55786860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55910660_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   trig__r_55910660_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   trig__r_55910660_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(trig__r_55910660_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,trig__r_55910660_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
trig__r_55910660_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[trig__r_55910660_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175620120();

   return behavior;
}

Behavior __175635480;

Behavior make__175635480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175635480 = behavior;
   behavior->owner = (Object)channel__w1_581922_55786860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581929_115017160_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175636020();

   return behavior;
}

Behavior __175634400;

Behavior make__175634400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175634400 = behavior;
   behavior->owner = (Object)channel__w1_581922_55786860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_59856280_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   abus__r_59856280_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   abus__r_59856280_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(abus__r_59856280_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,abus__r_59856280_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
abus__r_59856280_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[abus__r_59856280_channel__w1_581922_55786860_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175634840();

   return behavior;
}

Behavior __175634060;

Behavior make__175634060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175634060 = behavior;
   behavior->owner = (Object)channel__w1_581922_55786860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581930_115017080_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175634340();

   return behavior;
}

Scope makechannel__w1_581922_55786860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_581922_55786860 = scope;
   scope->owner = (Object)layer0_58_840_113655200;
   scope->name = "channel_w1:1922";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55910660();
   scope->inners[1] = makedbus__r_59856560();
   scope->inners[2] = makeabus__r_59856280();
   scope->inners[3] = makemem_71001640();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_581923_55817120();
   scope->scopes[1] = makerinc_581928_55851080();
   scope->scopes[2] = makerdec_581932_55845660();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__103210080();
   scope->behaviors[1] = make__175620940();
   scope->behaviors[2] = make__175620680();
   scope->behaviors[3] = make__175636160();
   scope->behaviors[4] = make__175635480();
   scope->behaviors[5] = make__175634400();
   scope->behaviors[6] = make__175634060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_581937_103209960;

SignalI reg__0_103635220_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makereg__0_103635220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_103635220_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__accum_581937_103209960;
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

SignalI reg__1_103925200_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makereg__1_103925200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_103925200_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__accum_581937_103209960;
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

Scope anum_581938_103209320;

Scope makeanum_581938_103209320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_581938_103209320 = scope;
   scope->owner = (Object)channel__accum_581937_103209960;
   scope->name = "anum:1938";
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

Scope raddr_581941_103208240;

Scope makeraddr_581941_103208240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_581941_103208240 = scope;
   scope->owner = (Object)channel__accum_581937_103209960;
   scope->name = "raddr:1941";
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

Scope waddr_581945_103207700;

Scope makewaddr_581945_103207700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_581945_103207700 = scope;
   scope->owner = (Object)channel__accum_581937_103209960;
   scope->name = "waddr:1945";
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

Scope rinc_581949_103207020;

SignalI abus__r_103206400_rinc_581949_103207020_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeabus__r_103206400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_103206400_rinc_581949_103207020_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)rinc_581949_103207020;
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

Scope makerinc_581949_103207020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_581949_103207020 = scope;
   scope->owner = (Object)channel__accum_581937_103209960;
   scope->name = "rinc:1949";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_103206400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_581954_103206260;

SignalI abus__w_103205600_winc_581954_103206260_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeabus__w_103205600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_103205600_winc_581954_103206260_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)winc_581954_103206260;
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

Scope makewinc_581954_103206260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_581954_103206260 = scope;
   scope->owner = (Object)channel__accum_581937_103209960;
   scope->name = "winc:1954";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_103205600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_581959_103205280;

SignalI abus__r_103204720_rdec_581959_103205280_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeabus__r_103204720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_103204720_rdec_581959_103205280_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)rdec_581959_103205280;
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

Scope makerdec_581959_103205280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_581959_103205280 = scope;
   scope->owner = (Object)channel__accum_581937_103209960;
   scope->name = "rdec:1959";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_103204720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_581964_103204580;

SignalI abus__w_103204000_wdec_581964_103204580_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeabus__w_103204000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_103204000_wdec_581964_103204580_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)wdec_581964_103204580;
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

Scope makewdec_581964_103204580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_581964_103204580 = scope;
   scope->owner = (Object)channel__accum_581937_103209960;
   scope->name = "wdec:1964";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_103204000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __175631380;

Behavior make__175631380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175631380 = behavior;
   behavior->owner = (Object)channel__accum_581937_103209960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_103635220_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   reg__0_103635220_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   reg__0_103635220_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(reg__0_103635220_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,reg__0_103635220_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
reg__0_103635220_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[reg__0_103635220_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175631840();

   return behavior;
}

Behavior __175630840;

Behavior make__175630840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175630840 = behavior;
   behavior->owner = (Object)channel__accum_581937_103209960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581939_114009420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175631180();

   return behavior;
}

Behavior __175629900;

Behavior make__175629900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175629900 = behavior;
   behavior->owner = (Object)channel__accum_581937_103209960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_103925200_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   reg__1_103925200_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   reg__1_103925200_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(reg__1_103925200_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,reg__1_103925200_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
reg__1_103925200_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[reg__1_103925200_channel__accum_581937_103209960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175630180();

   return behavior;
}

Behavior __175629540;

Behavior make__175629540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175629540 = behavior;
   behavior->owner = (Object)channel__accum_581937_103209960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581940_114555020_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175629820();

   return behavior;
}

Scope makechannel__accum_581937_103209960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_581937_103209960 = scope;
   scope->owner = (Object)layer0_58_840_113655200;
   scope->name = "channel_accum:1937";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_103635220();
   scope->inners[1] = makereg__1_103925200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_581938_103209320();
   scope->scopes[1] = makeraddr_581941_103208240();
   scope->scopes[2] = makewaddr_581945_103207700();
   scope->scopes[3] = makerinc_581949_103207020();
   scope->scopes[4] = makewinc_581954_103206260();
   scope->scopes[5] = makerdec_581959_103205280();
   scope->scopes[6] = makewdec_581964_103204580();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__175631380();
   scope->behaviors[1] = make__175630840();
   scope->behaviors[2] = make__175629900();
   scope->behaviors[3] = make__175629540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_581969_105867140;

SignalI lv0_106244660_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makelv0_106244660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_106244660_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)mac__n1_581969_105867140;
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

SignalI lv1_106762060_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makelv1_106762060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_106762060_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)mac__n1_581969_105867140;
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

SignalI av0_107179060_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeav0_107179060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_107179060_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)mac__n1_581969_105867140;
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

SignalI av1_107443520_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeav1_107443520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_107443520_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)mac__n1_581969_105867140;
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

SignalI rv_107756880_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makerv_107756880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_107756880_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)mac__n1_581969_105867140;
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

SignalI lvok0_107756860_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makelvok0_107756860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_107756860_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)mac__n1_581969_105867140;
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

SignalI lvok1_107756840_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makelvok1_107756840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_107756840_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)mac__n1_581969_105867140;
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

SignalI rvok_107756820_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makervok_107756820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_107756820_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)mac__n1_581969_105867140;
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

SignalI wok0_107756800_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makewok0_107756800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_107756800_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)mac__n1_581969_105867140;
   signalI->name = "wok0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI wok1_107756780_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makewok1_107756780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_107756780_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)mac__n1_581969_105867140;
   signalI->name = "wok1";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI run_107756760_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makerun_107756760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_107756760_mac__n1_581969_105867140_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)mac__n1_581969_105867140;
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

Behavior __59505140;

Behavior make__59505140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59505140 = behavior;
   behavior->owner = (Object)mac__n1_581969_105867140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos += 1;
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos = realloc(clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos*sizeof(Object));
clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos[clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos-1] = (Object)behavior;
   behavior->block = make__107756620();

   return behavior;
}

Scope makemac__n1_581969_105867140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_581969_105867140 = scope;
   scope->owner = (Object)layer0_58_840_113655200;
   scope->name = "mac_n1:1969";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_106244660();
   scope->inners[1] = makelv1_106762060();
   scope->inners[2] = makeav0_107179060();
   scope->inners[3] = makeav1_107443520();
   scope->inners[4] = makerv_107756880();
   scope->inners[5] = makelvok0_107756860();
   scope->inners[6] = makelvok1_107756840();
   scope->inners[7] = makervok_107756820();
   scope->inners[8] = makewok0_107756800();
   scope->inners[9] = makewok1_107756780();
   scope->inners[10] = makerun_107756760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59505140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_581976_59504600;

SignalI trig__r_60587220_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI maketrig__r_60587220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_60587220_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__b0_581976_59504600;
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

SignalI dbus__r_62695160_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makedbus__r_62695160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_62695160_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__b0_581976_59504600;
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

SignalI abus__r_62694980_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeabus__r_62694980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62694980_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__b0_581976_59504600;
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

SignalI mem_65321420_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makemem_65321420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_65321420_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__b0_581976_59504600;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__176304800(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_581977_59502860;

Scope makeraddr_581977_59502860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_581977_59502860 = scope;
   scope->owner = (Object)channel__b0_581976_59504600;
   scope->name = "raddr:1977";
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

Scope rinc_581982_59498680;

Scope makerinc_581982_59498680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_581982_59498680 = scope;
   scope->owner = (Object)channel__b0_581976_59504600;
   scope->name = "rinc:1982";
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

Scope rdec_581986_59470020;

Scope makerdec_581986_59470020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_581986_59470020 = scope;
   scope->owner = (Object)channel__b0_581976_59504600;
   scope->name = "rdec:1986";
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

Behavior __78762900;

Behavior make__78762900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78762900 = behavior;
   behavior->owner = (Object)channel__b0_581976_59504600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg += 1;
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg = realloc(clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg*sizeof(Object));
clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg[clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg-1] = (Object)behavior;
   behavior->block = make__76504460();

   return behavior;
}

Behavior __175649880;

Behavior make__175649880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175649880 = behavior;
   behavior->owner = (Object)channel__b0_581976_59504600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_62695160_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   dbus__r_62695160_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   dbus__r_62695160_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(dbus__r_62695160_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,dbus__r_62695160_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
dbus__r_62695160_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[dbus__r_62695160_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175650060();

   return behavior;
}

Behavior __175649180;

Behavior make__175649180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175649180 = behavior;
   behavior->owner = (Object)channel__b0_581976_59504600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581980_115365960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581980_115365960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581980_115365960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581980_115365960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581980_115365960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581980_115365960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581980_115365960_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175649800();

   return behavior;
}

Behavior __175647420;

Behavior make__175647420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175647420 = behavior;
   behavior->owner = (Object)channel__b0_581976_59504600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_60587220_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   trig__r_60587220_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   trig__r_60587220_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(trig__r_60587220_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,trig__r_60587220_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
trig__r_60587220_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[trig__r_60587220_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175647920();

   return behavior;
}

Behavior __175646920;

Behavior make__175646920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175646920 = behavior;
   behavior->owner = (Object)channel__b0_581976_59504600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581978_115365920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175647380();

   return behavior;
}

Behavior __175645780;

Behavior make__175645780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175645780 = behavior;
   behavior->owner = (Object)channel__b0_581976_59504600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_62694980_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   abus__r_62694980_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   abus__r_62694980_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(abus__r_62694980_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,abus__r_62694980_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
abus__r_62694980_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[abus__r_62694980_channel__b0_581976_59504600_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175646180();

   return behavior;
}

Behavior __175645420;

Behavior make__175645420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175645420 = behavior;
   behavior->owner = (Object)channel__b0_581976_59504600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581979_115365840_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581979_115365840_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581979_115365840_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581979_115365840_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581979_115365840_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581979_115365840_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581979_115365840_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175645600();

   return behavior;
}

Scope makechannel__b0_581976_59504600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_581976_59504600 = scope;
   scope->owner = (Object)layer0_58_840_113655200;
   scope->name = "channel_b0:1976";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_60587220();
   scope->inners[1] = makedbus__r_62695160();
   scope->inners[2] = makeabus__r_62694980();
   scope->inners[3] = makemem_65321420();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_581977_59502860();
   scope->scopes[1] = makerinc_581982_59498680();
   scope->scopes[2] = makerdec_581986_59470020();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78762900();
   scope->behaviors[1] = make__175649880();
   scope->behaviors[2] = make__175649180();
   scope->behaviors[3] = make__175647420();
   scope->behaviors[4] = make__175646920();
   scope->behaviors[5] = make__175645780();
   scope->behaviors[6] = make__175645420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_581991_78762580;

SignalI trig__r_79191000_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI maketrig__r_79191000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_79191000_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__b1_581991_78762580;
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

SignalI dbus__r_79720320_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makedbus__r_79720320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_79720320_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__b1_581991_78762580;
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

SignalI abus__r_79720140_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeabus__r_79720140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_79720140_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__b1_581991_78762580;
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

SignalI mem_81663760_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makemem_81663760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_81663760_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__b1_581991_78762580;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__176303260(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_581992_78762060;

Scope makeraddr_581992_78762060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_581992_78762060 = scope;
   scope->owner = (Object)channel__b1_581991_78762580;
   scope->name = "raddr:1992";
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

Scope rinc_581997_78760120;

Scope makerinc_581997_78760120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_581997_78760120 = scope;
   scope->owner = (Object)channel__b1_581991_78762580;
   scope->name = "rinc:1997";
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

Scope rdec_582001_78758500;

Scope makerdec_582001_78758500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_582001_78758500 = scope;
   scope->owner = (Object)channel__b1_581991_78762580;
   scope->name = "rdec:2001";
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

Behavior __86585120;

Behavior make__86585120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __86585120 = behavior;
   behavior->owner = (Object)channel__b1_581991_78762580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg += 1;
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg = realloc(clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg*sizeof(Object));
clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg[clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg-1] = (Object)behavior;
   behavior->block = make__83758520();

   return behavior;
}

Behavior __175666820;

Behavior make__175666820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175666820 = behavior;
   behavior->owner = (Object)channel__b1_581991_78762580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_79720320_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   dbus__r_79720320_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   dbus__r_79720320_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(dbus__r_79720320_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,dbus__r_79720320_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
dbus__r_79720320_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[dbus__r_79720320_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175667100();

   return behavior;
}

Behavior __175666320;

Behavior make__175666320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175666320 = behavior;
   behavior->owner = (Object)channel__b1_581991_78762580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581995_116592640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581995_116592640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581995_116592640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581995_116592640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581995_116592640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581995_116592640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581995_116592640_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175666680();

   return behavior;
}

Behavior __175664880;

Behavior make__175664880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175664880 = behavior;
   behavior->owner = (Object)channel__b1_581991_78762580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_79191000_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   trig__r_79191000_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   trig__r_79191000_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(trig__r_79191000_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,trig__r_79191000_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
trig__r_79191000_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[trig__r_79191000_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175665220();

   return behavior;
}

Behavior __175664500;

Behavior make__175664500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175664500 = behavior;
   behavior->owner = (Object)channel__b1_581991_78762580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581993_116592520_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175664820();

   return behavior;
}

Behavior __175663880;

Behavior make__175663880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175663880 = behavior;
   behavior->owner = (Object)channel__b1_581991_78762580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_79720140_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   abus__r_79720140_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   abus__r_79720140_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(abus__r_79720140_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,abus__r_79720140_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
abus__r_79720140_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[abus__r_79720140_channel__b1_581991_78762580_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175664160();

   return behavior;
}

Behavior __175663500;

Behavior make__175663500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175663500 = behavior;
   behavior->owner = (Object)channel__b1_581991_78762580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_581994_116592420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _581994_116592420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _581994_116592420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_581994_116592420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_581994_116592420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_581994_116592420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_581994_116592420_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175663800();

   return behavior;
}

Scope makechannel__b1_581991_78762580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_581991_78762580 = scope;
   scope->owner = (Object)layer0_58_840_113655200;
   scope->name = "channel_b1:1991";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_79191000();
   scope->inners[1] = makedbus__r_79720320();
   scope->inners[2] = makeabus__r_79720140();
   scope->inners[3] = makemem_81663760();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_581992_78762060();
   scope->scopes[1] = makerinc_581997_78760120();
   scope->scopes[2] = makerdec_582001_78758500();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__86585120();
   scope->behaviors[1] = make__175666820();
   scope->behaviors[2] = make__175666320();
   scope->behaviors[3] = make__175664880();
   scope->behaviors[4] = make__175664500();
   scope->behaviors[5] = make__175663880();
   scope->behaviors[6] = make__175663500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_582006_86584920;

SignalI reg__0_95540900_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makereg__0_95540900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_95540900_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__z_582006_86584920;
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

SignalI reg__1_101428080_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makereg__1_101428080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_101428080_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)channel__z_582006_86584920;
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

Scope anum_582007_86584220;

Scope makeanum_582007_86584220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_582007_86584220 = scope;
   scope->owner = (Object)channel__z_582006_86584920;
   scope->name = "anum:2007";
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

Scope raddr_582010_86582180;

Scope makeraddr_582010_86582180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582010_86582180 = scope;
   scope->owner = (Object)channel__z_582006_86584920;
   scope->name = "raddr:2010";
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

Scope waddr_582014_86490680;

Scope makewaddr_582014_86490680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_582014_86490680 = scope;
   scope->owner = (Object)channel__z_582006_86584920;
   scope->name = "waddr:2014";
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

Scope rinc_582018_86490020;

SignalI abus__r_86488340_rinc_582018_86490020_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeabus__r_86488340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_86488340_rinc_582018_86490020_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)rinc_582018_86490020;
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

Scope makerinc_582018_86490020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_582018_86490020 = scope;
   scope->owner = (Object)channel__z_582006_86584920;
   scope->name = "rinc:2018";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_86488340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_582022_86487960;

SignalI abus__w_86486220_winc_582022_86487960_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeabus__w_86486220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_86486220_winc_582022_86487960_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)winc_582022_86487960;
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

Scope makewinc_582022_86487960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_582022_86487960 = scope;
   scope->owner = (Object)channel__z_582006_86584920;
   scope->name = "winc:2022";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_86486220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_582026_86486000;

SignalI abus__r_86484920_rdec_582026_86486000_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeabus__r_86484920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_86484920_rdec_582026_86486000_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)rdec_582026_86486000;
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

Scope makerdec_582026_86486000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_582026_86486000 = scope;
   scope->owner = (Object)channel__z_582006_86584920;
   scope->name = "rdec:2026";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_86484920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_582031_86484540;

SignalI abus__w_86457740_wdec_582031_86484540_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeabus__w_86457740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_86457740_wdec_582031_86484540_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)wdec_582031_86484540;
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

Scope makewdec_582031_86484540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_582031_86484540 = scope;
   scope->owner = (Object)channel__z_582006_86584920;
   scope->name = "wdec:2031";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_86457740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __175709680;

Behavior make__175709680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175709680 = behavior;
   behavior->owner = (Object)channel__z_582006_86584920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_95540900_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   reg__0_95540900_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   reg__0_95540900_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(reg__0_95540900_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,reg__0_95540900_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
reg__0_95540900_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[reg__0_95540900_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175709880();

   return behavior;
}

Behavior __175709340;

Behavior make__175709340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175709340 = behavior;
   behavior->owner = (Object)channel__z_582006_86584920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_582008_115632920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175709520();

   return behavior;
}

Behavior __175708420;

Behavior make__175708420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175708420 = behavior;
   behavior->owner = (Object)channel__z_582006_86584920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_101428080_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   reg__1_101428080_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   reg__1_101428080_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(reg__1_101428080_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,reg__1_101428080_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
reg__1_101428080_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[reg__1_101428080_channel__z_582006_86584920_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175708680();

   return behavior;
}

Behavior __175708120;

Behavior make__175708120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175708120 = behavior;
   behavior->owner = (Object)channel__z_582006_86584920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   _582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   _582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(_582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,_582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
_582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[_582009_116062280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175708360();

   return behavior;
}

Scope makechannel__z_582006_86584920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_582006_86584920 = scope;
   scope->owner = (Object)layer0_58_840_113655200;
   scope->name = "channel_z:2006";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_95540900();
   scope->inners[1] = makereg__1_101428080();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_582007_86584220();
   scope->scopes[1] = makeraddr_582010_86582180();
   scope->scopes[2] = makewaddr_582014_86490680();
   scope->scopes[3] = makerinc_582018_86490020();
   scope->scopes[4] = makewinc_582022_86487960();
   scope->scopes[5] = makerdec_582026_86486000();
   scope->scopes[6] = makewdec_582031_86484540();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__175709680();
   scope->behaviors[1] = make__175709340();
   scope->behaviors[2] = make__175708420();
   scope->behaviors[3] = make__175708120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_582036_103221900;

SignalI lv0_103619520_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makelv0_103619520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_103619520_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)add__n_582036_103221900;
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

SignalI lv1_104005940_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makelv1_104005940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_104005940_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)add__n_582036_103221900;
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

SignalI rv0_104513040_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makerv0_104513040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_104513040_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)add__n_582036_103221900;
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

SignalI rv1_105282900_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makerv1_105282900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_105282900_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)add__n_582036_103221900;
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

SignalI lvok0_105282860_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makelvok0_105282860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_105282860_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)add__n_582036_103221900;
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

SignalI lvok1_105282840_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makelvok1_105282840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_105282840_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)add__n_582036_103221900;
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

SignalI rvok0_105282760_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makervok0_105282760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_105282760_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)add__n_582036_103221900;
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

SignalI rvok1_105282740_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makervok1_105282740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_105282740_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)add__n_582036_103221900;
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

SignalI run_105282680_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makerun_105282680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_105282680_add__n_582036_103221900_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)add__n_582036_103221900;
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

Behavior __113198480;

Behavior make__113198480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __113198480 = behavior;
   behavior->owner = (Object)add__n_582036_103221900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos += 1;
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos = realloc(clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos*sizeof(Object));
clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos[clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos-1] = (Object)behavior;
   behavior->block = make__105282560();

   return behavior;
}

Scope makeadd__n_582036_103221900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_582036_103221900 = scope;
   scope->owner = (Object)layer0_58_840_113655200;
   scope->name = "add_n:2036";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_103619520();
   scope->inners[1] = makelv1_104005940();
   scope->inners[2] = makerv0_104513040();
   scope->inners[3] = makerv1_105282900();
   scope->inners[4] = makelvok0_105282860();
   scope->inners[5] = makelvok1_105282840();
   scope->inners[6] = makervok0_105282760();
   scope->inners[7] = makervok1_105282740();
   scope->inners[8] = makerun_105282680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__113198480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __110518980;

Behavior make__110518980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __110518980 = behavior;
   behavior->owner = (Object)layer0_58_840_113655200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos += 1;
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos = realloc(clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos*sizeof(Object));
clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos[clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos-1] = (Object)behavior;
   behavior->block = make__110520940();

   return behavior;
}

Behavior __113039100;

Behavior make__113039100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __113039100 = behavior;
   behavior->owner = (Object)layer0_58_840_113655200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos += 1;
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos = realloc(clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos*sizeof(Object));
clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos[clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos-1] = (Object)behavior;
   behavior->block = make__110518840();

   return behavior;
}

Behavior __113979280;

Behavior make__113979280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __113979280 = behavior;
   behavior->owner = (Object)layer0_58_840_113655200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos += 1;
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos = realloc(clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos*sizeof(Object));
clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->pos[clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_pos-1] = (Object)behavior;
   behavior->block = make__113038900();

   return behavior;
}

Behavior __175434480;

Behavior make__175434480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175434480 = behavior;
   behavior->owner = (Object)layer0_58_840_113655200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_113995120_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   req_113995120_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   req_113995120_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(req_113995120_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,req_113995120_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
req_113995120_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[req_113995120_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[ack__mac_113198220_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175435080();

   return behavior;
}

Behavior __175604900;

Behavior make__175604900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175604900 = behavior;
   behavior->owner = (Object)layer0_58_840_113655200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[clk_113995220_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[ack_113198280_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_116973940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   value__z0_116973940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   value__z0_116973940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(value__z0_116973940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,value__z0_116973940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
value__z0_116973940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[value__z0_116973940_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_117314540_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   value__z1_117314540_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   value__z1_117314540_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(value__z1_117314540_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,value__z1_117314540_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
value__z1_117314540_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[value__z1_117314540_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_53188500_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   ack__a0_53188500_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   ack__a0_53188500_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(ack__a0_53188500_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,ack__a0_53188500_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
ack__a0_53188500_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[ack__a0_53188500_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_53188480_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   ack__a1_53188480_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   ack__a1_53188480_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(ack__a1_53188480_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,ack__a1_53188480_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
ack__a1_53188480_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[ack__a1_53188480_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175435340();

   return behavior;
}

Behavior __175604520;

Behavior make__175604520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __175604520 = behavior;
   behavior->owner = (Object)layer0_58_840_113655200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_53631800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   ack__mac_53631800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   ack__mac_53631800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(ack__mac_53631800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,ack__mac_53631800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
ack__mac_53631800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[ack__mac_53631800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[rst_113995140_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_113502100_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   a_113502100_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   a_113502100_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(a_113502100_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,a_113502100_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
a_113502100_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[a_113502100_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_108646760_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   a_108646760_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   a_108646760_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(a_108646760_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,a_108646760_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
a_108646760_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[a_108646760_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__175435280();

   return behavior;
}

Scope makelayer0_58_840_113655200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_840_113655200 = scope;
   scope->owner = (Object)layer0_58_8400_113977660;
   scope->name = "layer0:T0";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_53629400();
   scope->systemIs[1] = makefunc0_113501940();
   scope->systemIs[2] = makefunc1_108646400();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_113198300();
   scope->inners[1] = makeack_113198280();
   scope->inners[2] = makeack__mac_113198220();
   scope->inners[3] = makeack__add_113198200();
   scope->inners[4] = make_581916_113777640();
   scope->inners[5] = make_581914_113777580();
   scope->inners[6] = make_581915_113777360();
   scope->inners[7] = make_581939_114009420();
   scope->inners[8] = make_581940_114555020();
   scope->inners[9] = make_581931_115017180();
   scope->inners[10] = make_581929_115017160();
   scope->inners[11] = make_581930_115017080();
   scope->inners[12] = make_581980_115365960();
   scope->inners[13] = make_581981_115365940();
   scope->inners[14] = make_581978_115365920();
   scope->inners[15] = make_581979_115365840();
   scope->inners[16] = make_582008_115632920();
   scope->inners[17] = make_582009_116062280();
   scope->inners[18] = make_581995_116592640();
   scope->inners[19] = make_581996_116592600();
   scope->inners[20] = make_581993_116592520();
   scope->inners[21] = make_581994_116592420();
   scope->inners[22] = makevalue__z0_116973940();
   scope->inners[23] = makevalue__z1_117314540();
   scope->inners[24] = makevalue__a0_117834000();
   scope->inners[25] = makevalue__a1_53188700();
   scope->inners[26] = makeflag__z0_53188680();
   scope->inners[27] = makeflag__z1_53188640();
   scope->inners[28] = makeack__a0_53188500();
   scope->inners[29] = makeack__a1_53188480();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_581907_113654800();
   scope->scopes[1] = makechannel__w1_581922_55786860();
   scope->scopes[2] = makechannel__accum_581937_103209960();
   scope->scopes[3] = makemac__n1_581969_105867140();
   scope->scopes[4] = makechannel__b0_581976_59504600();
   scope->scopes[5] = makechannel__b1_581991_78762580();
   scope->scopes[6] = makechannel__z_582006_86584920();
   scope->scopes[7] = makeadd__n_582036_103221900();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__110518980();
   scope->behaviors[1] = make__113039100();
   scope->behaviors[2] = make__113979280();
   scope->behaviors[3] = make__175434480();
   scope->behaviors[4] = make__175604900();
   scope->behaviors[5] = make__175604520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_8400_113977660() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_8400_113977660 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_113995220();
   systemT->inputs[1] = makerst_113995140();
   systemT->inputs[2] = makereq_113995120();
   systemT->inputs[3] = make_581790_114238340();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_114238300();
   systemT->outputs[1] = make_581788_114238280();
   systemT->outputs[2] = make_581789_114238140();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_581879_114553440();
   systemT->inouts[1] = make_581880_114755680();

   systemT->scope = makelayer0_58_840_113655200();

   return systemT;
}