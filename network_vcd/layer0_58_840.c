#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_55559360;

SignalI clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeclk_55621960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_840_55559360;
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

SignalI rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makerst_55621940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_840_55559360;
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

SignalI req_55621920_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makereq_55621920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_55621920_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_840_55559360;
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

SignalI _5859_55706400_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_5859_55706400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5859_55706400_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_840_55559360;
   signalI->name = ":59";
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

SignalI ack__layer_55706360_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeack__layer_55706360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_55706360_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_840_55559360;
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

SignalI _5857_55706340_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_5857_55706340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5857_55706340_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_840_55559360;
   signalI->name = ":57";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5858_55706240_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_5858_55706240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5858_55706240_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_840_55559360;
   signalI->name = ":58";
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

SignalI _58113_55790400_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58113_55790400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58113_55790400_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_840_55559360;
   signalI->name = ":113";
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

SignalI _58114_55920900_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58114_55920900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58114_55920900_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_840_55559360;
   signalI->name = ":114";
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

Block __54127060;

Block __54126800;

void code__54126800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65227400(),ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65227320(),ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65227260(),ack__add_50097060_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__54126800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54126800 = block;
   block->owner = (Object)__54127060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54126800;

   return block;
};

void code__54127060() {
   {
      Value cond = rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54126800();
   }
      }
   }
}

Block make__54127060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54127060 = block;
   block->owner = (Object)__54125440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54127060;

   return block;
};

Block __54125280;

Block __54165240;

Block __54164960;

void code__54164960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,value__z0_54174280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65226960(),flag__z0_54406540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__54164960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54164960 = block;
   block->owner = (Object)__54165240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54164960;

   return block;
};

Block __54323000;

void code__54323000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,value__z1_54243540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65226760(),flag__z1_54406520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__54323000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54323000 = block;
   block->owner = (Object)__54165240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54323000;

   return block;
};

void code__54165240() {
 code__54164960();
 code__54323000();
}

Block make__54165240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54165240 = block;
   block->owner = (Object)__54125280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54165240;

   return block;
};

Block __54125040;

void code__54125040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65226560(),flag__z0_54406540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65226360(),flag__z1_54406520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__54125040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54125040 = block;
   block->owner = (Object)__54125280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54125040;

   return block;
};

void code__54125280() {
   {
      Value cond = ack__add_50097060_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54165240();
   }
   else {
  code__54125040();
   }
      }
   }
}

Block make__54125280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54125280 = block;
   block->owner = (Object)__54640960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54125280;

   return block;
};

Block __54640820;

Block __54665040;

void code__54665040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65226160(),ack__a0_54406500_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65226100(),ack__a1_54406480_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__54665040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54665040 = block;
   block->owner = (Object)__54640820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54665040;

   return block;
};

Block __54664160;

Block __54663880;

void code__54663880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_54304820_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58113_55790400_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65225740(),ack__a0_54406500_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__54663880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54663880 = block;
   block->owner = (Object)__54664160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54663880;

   return block;
};

Block __54912480;

void code__54912480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_54406560_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58114_55920900_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65225520(),ack__a1_54406480_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__54912480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54912480 = block;
   block->owner = (Object)__54664160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54912480;

   return block;
};

void code__54664160() {
 code__54663880();
 code__54912480();
}

Block make__54664160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54664160 = block;
   block->owner = (Object)__54640820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54664160;

   return block;
};

void code__54640820() {
   {
      Value cond = rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54665040();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_54406540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         src1 = flag__z1_54406520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__54664160();
   }
      }
   }
}

Block make__54640820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54640820 = block;
   block->owner = (Object)__55559760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54640820;

   return block;
};

Block __64883700;

void code__64883700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_55621920_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_50097160_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64883700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64883700 = block;
   block->owner = (Object)__64883380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64883700;

   return block;
};

Block __64884040;

void code__64884040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,clk_54424760_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,ack_54424740_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,rst_54424720_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_54174280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_54243540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_54406500_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      src1 = ack__a1_54406480_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_55706360_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64884040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64884040 = block;
   block->owner = (Object)__64897700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64884040;

   return block;
};

Block __64883960;

void code__64883960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_54424680_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58215_53685040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58230_54121400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_55225460_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,value__a0_54304820_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49693520_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,value__a1_54406560_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64883960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64883960 = block;
   block->owner = (Object)__64897540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64883960;

   return block;
};

Block __49647040;

void code__49647040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49334920_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            idx = value2integer(abus__r_48303980_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48304060_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__49647040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49647040 = block;
   block->owner = (Object)__50033760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49647040;

   return block;
};

Block __64920860;

void code__64920860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48304060_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58150_50211340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64920860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64920860 = block;
   block->owner = (Object)__64920700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64920860;

   return block;
};

Block __64920660;

void code__64920660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58150_50211340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,dbus__r_48304060_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64920660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64920660 = block;
   block->owner = (Object)__64920480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64920660;

   return block;
};

Block __64920100;

void code__64920100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48015200_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64920100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64920100 = block;
   block->owner = (Object)__64919940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64920100;

   return block;
};

Block __64919900;

void code__64919900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,trig__r_48015200_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64919900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64919900 = block;
   block->owner = (Object)__64919740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64919900;

   return block;
};

Block __64919440;

void code__64919440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48303980_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64919440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64919440 = block;
   block->owner = (Object)__64919260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64919440;

   return block;
};

Block __64919200;

void code__64919200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,abus__r_48303980_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64919200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64919200 = block;
   block->owner = (Object)__64918480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64919200;

   return block;
};

Block __48486580;

void code__48486580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48082940_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            idx = value2integer(abus__r_50150740_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50150840_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__48486580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48486580 = block;
   block->owner = (Object)__49243980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48486580;

   return block;
};

Block __64916780;

void code__64916780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50150840_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58165_53574780_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64916780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64916780 = block;
   block->owner = (Object)__64916540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64916780;

   return block;
};

Block __64916500;

void code__64916500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58165_53574780_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,dbus__r_50150840_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64916500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64916500 = block;
   block->owner = (Object)__64916300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64916500;

   return block;
};

Block __64915720;

void code__64915720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50031720_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64915720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64915720 = block;
   block->owner = (Object)__64915460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64915720;

   return block;
};

Block __64915420;

void code__64915420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,trig__r_50031720_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64915420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64915420 = block;
   block->owner = (Object)__64915200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64915420;

   return block;
};

Block __64914900;

void code__64914900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50150740_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64914900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64914900 = block;
   block->owner = (Object)__64914700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64914900;

   return block;
};

Block __64914660;

void code__64914660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,abus__r_50150740_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64914660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64914660 = block;
   block->owner = (Object)__64914440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64914660;

   return block;
};

Block __64953700;

void code__64953700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49434860_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64953700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64953700 = block;
   block->owner = (Object)__64953440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64953700;

   return block;
};

Block __64953400;

void code__64953400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,reg__0_49434860_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64953400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64953400 = block;
   block->owner = (Object)__64953160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64953400;

   return block;
};

Block __64952360;

void code__64952360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49613740_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64952360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64952360 = block;
   block->owner = (Object)__64952140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64952360;

   return block;
};

Block __64952100;

void code__64952100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,reg__1_49613740_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64952100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64952100 = block;
   block->owner = (Object)__64951880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64952100;

   return block;
};

Block __47784800;

Block __47784520;

Block __47784080;

void code__47784080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65179400(),_58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__47784080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47784080 = block;
   block->owner = (Object)__47784520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47784080;

   return block;
};

void code__47784520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65179500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47784080();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65179340(),_58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__47784520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47784520 = block;
   block->owner = (Object)__47784800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47784520;

   return block;
};

Block __49053100;

Block __49052780;

void code__49052780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65179120(),_58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__49052780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49052780 = block;
   block->owner = (Object)__49053100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49052780;

   return block;
};

void code__49053100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65179200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49052780();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65179060(),_58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__49053100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49053100 = block;
   block->owner = (Object)__47784800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49053100;

   return block;
};

Block __49052020;

Block __49051140;

void code__49051140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65178900(),_5858_55706240_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__49051140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49051140 = block;
   block->owner = (Object)__49052020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49051140;

   return block;
};

void code__49052020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65178980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49051140();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65178840(),_5857_55706340_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__49052020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49052020 = block;
   block->owner = (Object)__47784800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49052020;

   return block;
};

Block __49048520;

void code__49048520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65178580(),rvok_47785100_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65178480(),lvok0_47785140_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65178400(),wok0_47785080_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65178340(),lvok1_47785120_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65178160(),wok1_47785040_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__49048520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49048520 = block;
   block->owner = (Object)__47784800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49048520;

   return block;
};

Block __49881880;

Block __49881280;

Block __49921980;

Block __49921280;

Block __49918860;

Block __49918400;

void code__49918400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5859_55706400_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,rv_47785160_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__65177360(),rvok_47785100_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__49918400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49918400 = block;
   block->owner = (Object)__49918860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49918400;

   return block;
};

void code__49918860() {
 code__49918400();
}

Block make__49918860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49918860 = block;
   block->owner = (Object)__49921280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49918860;

   return block;
};

Block __49921120;

void code__49921120() {
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
                  src0 = _5858_55706240_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                  src1 = make__65177240();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__65177160();
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
                        src0 = _5858_55706240_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__65176880();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__65176820();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5858_55706240_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65176640(),_5857_55706340_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__49921120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49921120 = block;
   block->owner = (Object)__49921280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49921120;

   return block;
};

void code__49921280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5857_55706340_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65177700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49918860();
   }
   else {
  code__49921120();
   }
      }
   }
}

Block make__49921280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49921280 = block;
   block->owner = (Object)__49921980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49921280;

   return block;
};

void code__49921980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65177840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49921280();
   }
      }
   }
}

Block make__49921980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49921980 = block;
   block->owner = (Object)__49881280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49921980;

   return block;
};

void code__49881280() {
 code__49921980();
}

Block make__49881280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49881280 = block;
   block->owner = (Object)__49881880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49881280;

   return block;
};

Block __46438560;

Block __46438360;

Block __46438000;

Block __46435320;

Block __46435120;

void code__46435120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58150_50211340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,lv0_50225520_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__65176140(),lvok0_47785140_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__46435120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46435120 = block;
   block->owner = (Object)__46435320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46435120;

   return block;
};

void code__46435320() {
 code__46435120();
}

Block make__46435320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46435320 = block;
   block->owner = (Object)__46438000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46435320;

   return block;
};

Block __46437780;

void code__46437780() {
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
                  src0 = _58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                  src1 = make__65175940();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__65175900();
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
                        src0 = _58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__65175660();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__65175600();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65200020(),_58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__46437780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46437780 = block;
   block->owner = (Object)__46438000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46437780;

   return block;
};

void code__46438000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65176360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46435320();
   }
   else {
  code__46437780();
   }
      }
   }
}

Block make__46438000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46438000 = block;
   block->owner = (Object)__46438360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46438000;

   return block;
};

void code__46438360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65176500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46438000();
   }
      }
   }
}

Block make__46438360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46438360 = block;
   block->owner = (Object)__46438560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46438360;

   return block;
};

void code__46438560() {
 code__46438360();
}

Block make__46438560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46438560 = block;
   block->owner = (Object)__49881880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46438560;

   return block;
};

Block __48402960;

Block __48400680;

Block __48400000;

void code__48400000() {
}

Block make__48400000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48400000 = block;
   block->owner = (Object)__48400680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48400000;

   return block;
};

Block __50272300;

void code__50272300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_47937860_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65198880(),wok0_47785080_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__50272300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50272300 = block;
   block->owner = (Object)__48400680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50272300;

   return block;
};

void code__48400680() {
 code__48400000();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_47937860_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
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
                              src0 = lv0_50225520_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_47785160_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__65199100();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_47937860_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
 code__50272300();
}

Block make__48400680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48400680 = block;
   block->owner = (Object)__48402960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48400680;

   return block;
};

void code__48402960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65199620(),ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65199520(),run_47785020_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
 code__48400680();
}

Block make__48402960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48402960 = block;
   block->owner = (Object)__49881880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48402960;

   return block;
};

Block __46265040;

void code__46265040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65198620(),wok0_47785080_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65198460(),wok1_47785040_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65198340(),lvok0_47785140_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65198280(),lvok1_47785120_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65198220(),rvok_47785100_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__46265040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46265040 = block;
   block->owner = (Object)__49881880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46265040;

   return block;
};

Block __46374060;

Block __46372500;

Block __46371840;

Block __46390280;

Block __46389560;

void code__46389560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58165_53574780_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,lv1_45848620_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__65197820(),lvok1_47785120_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__46389560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46389560 = block;
   block->owner = (Object)__46390280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46389560;

   return block;
};

void code__46390280() {
 code__46389560();
}

Block make__46390280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46390280 = block;
   block->owner = (Object)__46371840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46390280;

   return block;
};

Block __46371360;

void code__46371360() {
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
                  src0 = _58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                  src1 = make__65197720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__65197660();
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
                        src0 = _58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__65197300();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__65197200();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65197040(),_58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__46371360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46371360 = block;
   block->owner = (Object)__46371840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46371360;

   return block;
};

void code__46371840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65197980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46390280();
   }
   else {
  code__46371360();
   }
      }
   }
}

Block make__46371840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46371840 = block;
   block->owner = (Object)__46372500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46371840;

   return block;
};

void code__46372500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65198080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46371840();
   }
      }
   }
}

Block make__46372500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46372500 = block;
   block->owner = (Object)__46374060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46372500;

   return block;
};

void code__46374060() {
 code__46372500();
}

Block make__46374060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46374060 = block;
   block->owner = (Object)__49881880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46374060;

   return block;
};

Block __48303400;

Block __48302740;

Block __48302500;

void code__48302500() {
}

Block make__48302500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48302500 = block;
   block->owner = (Object)__48302740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48302500;

   return block;
};

Block __49497480;

void code__49497480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_48518940_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65195900(),wok1_47785040_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__49497480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49497480 = block;
   block->owner = (Object)__48302740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49497480;

   return block;
};

void code__48302740() {
 code__48302500();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_48518940_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
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
                              src0 = lv1_45848620_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_47785160_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__65196120();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_48518940_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
 code__49497480();
}

Block make__48302740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48302740 = block;
   block->owner = (Object)__48303400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48302740;

   return block;
};

void code__48303400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65196680(),ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65196620(),run_47785020_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
 code__48302740();
}

Block make__48303400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48303400 = block;
   block->owner = (Object)__49881880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48303400;

   return block;
};

Block __49819980;

void code__49819980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65195700(),wok0_47785080_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65195640(),wok1_47785040_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65195580(),lvok0_47785140_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65195520(),lvok1_47785120_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65195460(),rvok_47785100_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__49819980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49819980 = block;
   block->owner = (Object)__49881880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49819980;

   return block;
};

void code__49881880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65178000(),run_47785020_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_47785100_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49881280();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47785140_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46438560();
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
               src0 = lvok0_47785140_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               src1 = rvok_47785100_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_47785080_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48402960();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_47785080_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         src1 = wok1_47785040_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46265040();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_47785120_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46374060();
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
               src0 = lvok1_47785120_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               src1 = rvok_47785100_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_47785040_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48303400();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_47785080_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         src1 = wok1_47785040_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49819980();
   }
      }
   }
}

Block make__49881880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49881880 = block;
   block->owner = (Object)__47784800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49881880;

   return block;
};

Block __49233460;

void code__49233460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65195380(),av0_47937860_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65195300(),av1_48518940_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__49233460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49233460 = block;
   block->owner = (Object)__47784800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49233460;

   return block;
};

void code__47784800() {
 code__47784520();
 code__49053100();
 code__49052020();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65178780(),ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65178720(),run_47785020_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_47785020_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49048520();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_50097160_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         src1 = run_47785020_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49881880();
   }
   else {
  code__49233460();
   }
      }
   }
}

Block make__47784800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47784800 = block;
   block->owner = (Object)__49816760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47784800;

   return block;
};

Block __53508080;

void code__53508080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50272940_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            idx = value2integer(abus__r_50018980_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50019060_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__53508080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53508080 = block;
   block->owner = (Object)__53900400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53508080;

   return block;
};

Block __64949560;

void code__64949560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50019060_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58214_53685080_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64949560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64949560 = block;
   block->owner = (Object)__64949380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64949560;

   return block;
};

Block __64949320;

void code__64949320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_53685080_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,dbus__r_50019060_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64949320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64949320 = block;
   block->owner = (Object)__64949140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64949320;

   return block;
};

Block __64948720;

void code__64948720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49837580_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64948720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64948720 = block;
   block->owner = (Object)__64948440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64948720;

   return block;
};

Block __64948400;

void code__64948400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,trig__r_49837580_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64948400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64948400 = block;
   block->owner = (Object)__64948180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64948400;

   return block;
};

Block __64947720;

void code__64947720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50018980_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58213_53684940_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64947720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64947720 = block;
   block->owner = (Object)__64947540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64947720;

   return block;
};

Block __64947480;

void code__64947480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_53684940_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,abus__r_50018980_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64947480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64947480 = block;
   block->owner = (Object)__64947280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64947480;

   return block;
};

Block __54326220;

void code__54326220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54193180_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            idx = value2integer(abus__r_54002320_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54002400_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__54326220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54326220 = block;
   block->owner = (Object)__54644860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54326220;

   return block;
};

Block __64970200;

void code__64970200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54002400_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58229_54121420_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64970200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64970200 = block;
   block->owner = (Object)__64970000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64970200;

   return block;
};

Block __64969920;

void code__64969920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_54121420_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,dbus__r_54002400_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64969920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64969920 = block;
   block->owner = (Object)__64969640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64969920;

   return block;
};

Block __64969320;

void code__64969320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53898700_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64969320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64969320 = block;
   block->owner = (Object)__64969120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64969320;

   return block;
};

Block __64969040;

void code__64969040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,trig__r_53898700_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64969040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64969040 = block;
   block->owner = (Object)__64968820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64969040;

   return block;
};

Block __64968460;

void code__64968460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54002320_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58228_54121300_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64968460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64968460 = block;
   block->owner = (Object)__64968240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64968460;

   return block;
};

Block __64968180;

void code__64968180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58228_54121300_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,abus__r_54002320_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64968180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64968180 = block;
   block->owner = (Object)__64967820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64968180;

   return block;
};

Block __64966120;

void code__64966120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54744820_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64966120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64966120 = block;
   block->owner = (Object)__64965900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64966120;

   return block;
};

Block __64965860;

void code__64965860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,reg__0_54744820_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64965860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64965860 = block;
   block->owner = (Object)__64965700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64965860;

   return block;
};

Block __64965300;

void code__64965300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_54823940_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,_58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64965300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64965300 = block;
   block->owner = (Object)__64965000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64965300;

   return block;
};

Block __64964960;

void code__64964960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,reg__1_54823940_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__64964960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64964960 = block;
   block->owner = (Object)__64964600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64964960;

   return block;
};

Block __55906640;

Block __55906480;

void code__55906480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65192020(),_58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__55906480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55906480 = block;
   block->owner = (Object)__55906640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55906480;

   return block;
};

Block __55906160;

void code__55906160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65191960(),_58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__55906160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55906160 = block;
   block->owner = (Object)__55906640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55906160;

   return block;
};

Block __55904580;

Block __55904260;

void code__55904260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,lv0_55702240_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65232340(),lvok0_55906840_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__55904260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55904260 = block;
   block->owner = (Object)__55904580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55904260;

   return block;
};

Block __56086660;

Block __56086340;

Block __56085480;

void code__56085480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_53685080_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,rv0_55827700_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65232000(),_58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65231920(),rvok0_55906800_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__56085480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56085480 = block;
   block->owner = (Object)__56086340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56085480;

   return block;
};

Block __56086180;

void code__56086180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65231860(),_58213_53684940_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65231760(),_58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__56086180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56086180 = block;
   block->owner = (Object)__56086340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56086180;

   return block;
};

void code__56086340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65232160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56085480();
   }
   else {
  code__56086180();
   }
      }
   }
}

Block make__56086340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56086340 = block;
   block->owner = (Object)__56086660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56086340;

   return block;
};

void code__56086660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58215_53685040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65232260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56086340();
   }
      }
   }
}

Block make__56086660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56086660 = block;
   block->owner = (Object)__55904580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56086660;

   return block;
};

Block __56365700;

Block __56365220;

void code__56365220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_55702240_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      src1 = rv0_55827700_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__56365220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56365220 = block;
   block->owner = (Object)__56365700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56365220;

   return block;
};

void code__56365700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65231480(),run_55906760_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65231360(),ack__add_50097060_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
 code__56365220();
}

Block make__56365700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56365700 = block;
   block->owner = (Object)__55904580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56365700;

   return block;
};

Block __48339900;

void code__48339900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,lv1_55740400_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65230960(),lvok1_55906820_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__48339900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48339900 = block;
   block->owner = (Object)__55904580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48339900;

   return block;
};

Block __48772880;

Block __48772520;

Block __48771320;

void code__48771320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_54121420_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,rv1_55906860_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65230400(),_58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65230340(),rvok1_55906780_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__48771320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48771320 = block;
   block->owner = (Object)__48772520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48771320;

   return block;
};

Block __48772260;

void code__48772260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65230260(),_58228_54121300_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65230000(),_58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__48772260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48772260 = block;
   block->owner = (Object)__48772520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48772260;

   return block;
};

void code__48772520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65230720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48771320();
   }
   else {
  code__48772260();
   }
      }
   }
}

Block make__48772520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48772520 = block;
   block->owner = (Object)__48772880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48772520;

   return block;
};

void code__48772880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58230_54121400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65230840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48772520();
   }
      }
   }
}

Block make__48772880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48772880 = block;
   block->owner = (Object)__55904580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48772880;

   return block;
};

Block __49417960;

Block __49417020;

void code__49417020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_55740400_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      src1 = rv1_55906860_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__49417020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49417020 = block;
   block->owner = (Object)__49417960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49417020;

   return block;
};

void code__49417960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65229840(),run_55906760_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65229780(),ack__add_50097060_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
 code__49417020();
}

Block make__49417960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49417960 = block;
   block->owner = (Object)__55904580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49417960;

   return block;
};

void code__55904580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65232480(),run_55906760_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
 code__55904260();
 code__56086660();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_55906840_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         src1 = rvok0_55906800_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56365700();
   }
      }
   }
 code__48339900();
 code__48772880();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_55906820_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         src1 = rvok1_55906780_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49417960();
   }
      }
   }
}

Block make__55904580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55904580 = block;
   block->owner = (Object)__55906640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55904580;

   return block;
};

Block __55905520;

void code__55905520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65229540(),lvok0_55906840_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65229460(),rvok0_55906800_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65229360(),lvok1_55906820_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65229280(),rvok1_55906780_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__55905520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55905520 = block;
   block->owner = (Object)__55906640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55905520;

   return block;
};

void code__55906640() {
 code__55906480();
 code__55906160();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65232780(),ack__add_50097060_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65232640(),run_55906760_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         src1 = run_55906760_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55904580();
   }
   else {
  code__55905520();
   }
      }
   }
}

Block make__55906640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55906640 = block;
   block->owner = (Object)__50097520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55906640;

   return block;
};

Value make__65160920() {
   static unsigned long long data[] = { 9ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__65160900() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__65181660() {
   static unsigned long long data[] = { 9ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__65181640() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__65195280() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__65193920() {
   static unsigned long long data[] = { 4294967290ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__65179500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65179400() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__65179340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65179200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65179120() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__65179060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65178980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65178900() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__65178840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65178780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65178720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65178580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65178480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65178400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65178340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65178160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65178000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65177840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65177700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65177360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65177240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65177160() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65176880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65176820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__65176640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65176500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65176360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65176140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65175940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65175900() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65175660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65175600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__65200020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65199620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65199520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65199100() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65198880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65198620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65198460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65198340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65198280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65198220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65198080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65197980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65197820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65197720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65197660() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65197300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65197200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__65197040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65196680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65196620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65196120() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65195900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65195700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65195640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65195580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65195520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65195460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65195380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__65195300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__65192020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65191960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65232780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65232640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65232480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65232340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65232260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65232160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65232000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65231920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65231860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__65231760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65231480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65231360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65230960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65230840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65230720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65230400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65230340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65230260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__65230000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65229840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65229780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65229540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65229460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65229360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65229280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65227400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65227320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65227260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65226960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65226760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65226560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65226360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65226160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65226100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65225740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65225520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_48021300;

SignalI req__mac_50097160_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makereq__mac_50097160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_50097160_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SignalI ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeack_50097120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SignalI ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeack__mac_50097100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SignalI ack__add_50097060_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeack__add_50097060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_50097060_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SignalI _58150_50211340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58150_50211340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58150_50211340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":150";
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

SignalI _58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58148_50211320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":148";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58149_50211240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":149";
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

SignalI _58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58173_52584520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":173";
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

SignalI _58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58174_53473040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SignalI _58165_53574780_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58165_53574780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58165_53574780_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":165";
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

SignalI _58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58163_53574760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":163";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58164_53574680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":164";
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

SignalI _58214_53685080_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58214_53685080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58214_53685080_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":214";
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

SignalI _58215_53685040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58215_53685040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58215_53685040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":215";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58212_53685020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":212";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58213_53684940_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58213_53684940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_53684940_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":213";
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

SignalI _58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58242_53885380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":242";
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

SignalI _58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58243_53986620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":243";
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

SignalI _58229_54121420_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58229_54121420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58229_54121420_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":229";
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

SignalI _58230_54121400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58230_54121400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58230_54121400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":230";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58227_54121380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":227";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58228_54121300_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI make_58228_54121300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58228_54121300_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
   signalI->name = ":228";
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

SignalI value__z0_54174280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makevalue__z0_54174280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_54174280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SignalI value__z1_54243540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makevalue__z1_54243540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_54243540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SignalI value__a0_54304820_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makevalue__a0_54304820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_54304820_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SignalI value__a1_54406560_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makevalue__a1_54406560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_54406560_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SignalI flag__z0_54406540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeflag__z0_54406540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_54406540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SignalI flag__z1_54406520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeflag__z1_54406520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_54406520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SignalI ack__a0_54406500_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeack__a0_54406500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_54406500_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SignalI ack__a1_54406480_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeack__a1_54406480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_54406480_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)layer0_58_84_48021300;
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

SystemI counter_54424540;

SystemI makecounter_54424540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_54424540 = systemI;
   systemI->owner = (Object)layer0_58_84_48021300;
   systemI->name = "counter";
   systemI->system = counter_58_841_54426700;

   return systemI;
};

SystemI func0_55225220;

SystemI makefunc0_55225220() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_55225220 = systemI;
   systemI->owner = (Object)layer0_58_84_48021300;
   systemI->name = "func0";
   systemI->system = func0_58_841_54826640;

   return systemI;
};

SystemI func1_48970840;

SystemI makefunc1_48970840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_48970840 = systemI;
   systemI->owner = (Object)layer0_58_84_48021300;
   systemI->name = "func1";
   systemI->system = func1_58_841_47784020;

   return systemI;
};

Scope channel__w0_58141_48020240;

SignalI trig__r_48015200_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI maketrig__r_48015200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48015200_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__w0_58141_48020240;
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

SignalI dbus__r_48304060_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makedbus__r_48304060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48304060_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__w0_58141_48020240;
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

SignalI abus__r_48303980_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeabus__r_48303980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48303980_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__w0_58141_48020240;
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

SignalI mem_49334920_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makemem_49334920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49334920_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__w0_58141_48020240;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__65160920();
         src1 = make__65160900();
         concat_value(2,0,dst,src0,src1);
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

Scope raddr_58142_48019760;

Scope makeraddr_58142_48019760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58142_48019760 = scope;
   scope->owner = (Object)channel__w0_58141_48020240;
   scope->name = "raddr:142";
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

Scope rinc_58147_48018520;

Scope makerinc_58147_48018520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58147_48018520 = scope;
   scope->owner = (Object)channel__w0_58141_48020240;
   scope->name = "rinc:147";
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

Scope rdec_58151_48015740;

Scope makerdec_58151_48015740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58151_48015740 = scope;
   scope->owner = (Object)channel__w0_58141_48020240;
   scope->name = "rdec:151";
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

Behavior __50033760;

Behavior make__50033760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50033760 = behavior;
   behavior->owner = (Object)channel__w0_58141_48020240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg += 1;
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg = realloc(clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg*sizeof(Object));
clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg[clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg-1] = (Object)behavior;
   behavior->block = make__49647040();

   return behavior;
}

Behavior __64920700;

Behavior make__64920700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64920700 = behavior;
   behavior->owner = (Object)channel__w0_58141_48020240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48304060_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   dbus__r_48304060_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   dbus__r_48304060_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(dbus__r_48304060_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,dbus__r_48304060_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
dbus__r_48304060_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[dbus__r_48304060_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64920860();

   return behavior;
}

Behavior __64920480;

Behavior make__64920480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64920480 = behavior;
   behavior->owner = (Object)channel__w0_58141_48020240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58150_50211340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58150_50211340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58150_50211340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58150_50211340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58150_50211340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58150_50211340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58150_50211340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64920660();

   return behavior;
}

Behavior __64919940;

Behavior make__64919940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64919940 = behavior;
   behavior->owner = (Object)channel__w0_58141_48020240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48015200_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   trig__r_48015200_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   trig__r_48015200_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(trig__r_48015200_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,trig__r_48015200_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
trig__r_48015200_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[trig__r_48015200_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64920100();

   return behavior;
}

Behavior __64919740;

Behavior make__64919740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64919740 = behavior;
   behavior->owner = (Object)channel__w0_58141_48020240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58148_50211320_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64919900();

   return behavior;
}

Behavior __64919260;

Behavior make__64919260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64919260 = behavior;
   behavior->owner = (Object)channel__w0_58141_48020240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48303980_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   abus__r_48303980_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   abus__r_48303980_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(abus__r_48303980_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,abus__r_48303980_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
abus__r_48303980_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[abus__r_48303980_channel__w0_58141_48020240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64919440();

   return behavior;
}

Behavior __64918480;

Behavior make__64918480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64918480 = behavior;
   behavior->owner = (Object)channel__w0_58141_48020240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58149_50211240_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64919200();

   return behavior;
}

Scope makechannel__w0_58141_48020240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58141_48020240 = scope;
   scope->owner = (Object)layer0_58_84_48021300;
   scope->name = "channel_w0:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48015200();
   scope->inners[1] = makedbus__r_48304060();
   scope->inners[2] = makeabus__r_48303980();
   scope->inners[3] = makemem_49334920();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58142_48019760();
   scope->scopes[1] = makerinc_58147_48018520();
   scope->scopes[2] = makerdec_58151_48015740();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50033760();
   scope->behaviors[1] = make__64920700();
   scope->behaviors[2] = make__64920480();
   scope->behaviors[3] = make__64919940();
   scope->behaviors[4] = make__64919740();
   scope->behaviors[5] = make__64919260();
   scope->behaviors[6] = make__64918480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58156_50033640;

SignalI trig__r_50031720_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI maketrig__r_50031720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50031720_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__w1_58156_50033640;
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

SignalI dbus__r_50150840_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makedbus__r_50150840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50150840_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__w1_58156_50033640;
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

SignalI abus__r_50150740_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeabus__r_50150740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50150740_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__w1_58156_50033640;
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

SignalI mem_48082940_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makemem_48082940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48082940_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__w1_58156_50033640;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__65181660();
         src1 = make__65181640();
         concat_value(2,0,dst,src0,src1);
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

Scope raddr_58157_50033340;

Scope makeraddr_58157_50033340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58157_50033340 = scope;
   scope->owner = (Object)channel__w1_58156_50033640;
   scope->name = "raddr:157";
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

Scope rinc_58162_50032880;

Scope makerinc_58162_50032880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58162_50032880 = scope;
   scope->owner = (Object)channel__w1_58156_50033640;
   scope->name = "rinc:162";
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

Scope rdec_58166_50032320;

Scope makerdec_58166_50032320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58166_50032320 = scope;
   scope->owner = (Object)channel__w1_58156_50033640;
   scope->name = "rdec:166";
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

Behavior __49243980;

Behavior make__49243980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49243980 = behavior;
   behavior->owner = (Object)channel__w1_58156_50033640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg += 1;
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg = realloc(clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg*sizeof(Object));
clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg[clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg-1] = (Object)behavior;
   behavior->block = make__48486580();

   return behavior;
}

Behavior __64916540;

Behavior make__64916540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64916540 = behavior;
   behavior->owner = (Object)channel__w1_58156_50033640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50150840_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   dbus__r_50150840_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   dbus__r_50150840_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(dbus__r_50150840_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,dbus__r_50150840_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
dbus__r_50150840_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[dbus__r_50150840_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64916780();

   return behavior;
}

Behavior __64916300;

Behavior make__64916300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64916300 = behavior;
   behavior->owner = (Object)channel__w1_58156_50033640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58165_53574780_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58165_53574780_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58165_53574780_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58165_53574780_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58165_53574780_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58165_53574780_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58165_53574780_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64916500();

   return behavior;
}

Behavior __64915460;

Behavior make__64915460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64915460 = behavior;
   behavior->owner = (Object)channel__w1_58156_50033640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50031720_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   trig__r_50031720_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   trig__r_50031720_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(trig__r_50031720_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,trig__r_50031720_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
trig__r_50031720_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[trig__r_50031720_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64915720();

   return behavior;
}

Behavior __64915200;

Behavior make__64915200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64915200 = behavior;
   behavior->owner = (Object)channel__w1_58156_50033640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58163_53574760_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64915420();

   return behavior;
}

Behavior __64914700;

Behavior make__64914700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64914700 = behavior;
   behavior->owner = (Object)channel__w1_58156_50033640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50150740_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   abus__r_50150740_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   abus__r_50150740_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(abus__r_50150740_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,abus__r_50150740_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
abus__r_50150740_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[abus__r_50150740_channel__w1_58156_50033640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64914900();

   return behavior;
}

Behavior __64914440;

Behavior make__64914440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64914440 = behavior;
   behavior->owner = (Object)channel__w1_58156_50033640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58164_53574680_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64914660();

   return behavior;
}

Scope makechannel__w1_58156_50033640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58156_50033640 = scope;
   scope->owner = (Object)layer0_58_84_48021300;
   scope->name = "channel_w1:156";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50031720();
   scope->inners[1] = makedbus__r_50150840();
   scope->inners[2] = makeabus__r_50150740();
   scope->inners[3] = makemem_48082940();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58157_50033340();
   scope->scopes[1] = makerinc_58162_50032880();
   scope->scopes[2] = makerdec_58166_50032320();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49243980();
   scope->behaviors[1] = make__64916540();
   scope->behaviors[2] = make__64916300();
   scope->behaviors[3] = make__64915460();
   scope->behaviors[4] = make__64915200();
   scope->behaviors[5] = make__64914700();
   scope->behaviors[6] = make__64914440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58171_49266340;

SignalI reg__0_49434860_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makereg__0_49434860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49434860_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__accum_58171_49266340;
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

SignalI reg__1_49613740_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makereg__1_49613740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49613740_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__accum_58171_49266340;
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

Scope anum_58172_49265080;

Scope makeanum_58172_49265080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58172_49265080 = scope;
   scope->owner = (Object)channel__accum_58171_49266340;
   scope->name = "anum:172";
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

Scope raddr_58175_49264160;

Scope makeraddr_58175_49264160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58175_49264160 = scope;
   scope->owner = (Object)channel__accum_58171_49266340;
   scope->name = "raddr:175";
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

Scope waddr_58179_49263640;

Scope makewaddr_58179_49263640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58179_49263640 = scope;
   scope->owner = (Object)channel__accum_58171_49266340;
   scope->name = "waddr:179";
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

Scope rinc_58183_49263180;

SignalI abus__r_49261960_rinc_58183_49263180_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeabus__r_49261960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49261960_rinc_58183_49263180_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)rinc_58183_49263180;
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

Scope makerinc_58183_49263180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58183_49263180 = scope;
   scope->owner = (Object)channel__accum_58171_49266340;
   scope->name = "rinc:183";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49261960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58188_49261800;

SignalI abus__w_49261380_winc_58188_49261800_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeabus__w_49261380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49261380_winc_58188_49261800_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)winc_58188_49261800;
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

Scope makewinc_58188_49261800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58188_49261800 = scope;
   scope->owner = (Object)channel__accum_58171_49266340;
   scope->name = "winc:188";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49261380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58193_49261240;

SignalI abus__r_49260720_rdec_58193_49261240_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeabus__r_49260720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49260720_rdec_58193_49261240_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)rdec_58193_49261240;
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

Scope makerdec_58193_49261240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58193_49261240 = scope;
   scope->owner = (Object)channel__accum_58171_49266340;
   scope->name = "rdec:193";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49260720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58198_49260600;

SignalI abus__w_49260100_wdec_58198_49260600_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeabus__w_49260100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49260100_wdec_58198_49260600_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)wdec_58198_49260600;
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

Scope makewdec_58198_49260600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58198_49260600 = scope;
   scope->owner = (Object)channel__accum_58171_49266340;
   scope->name = "wdec:198";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49260100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __64953440;

Behavior make__64953440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64953440 = behavior;
   behavior->owner = (Object)channel__accum_58171_49266340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49434860_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   reg__0_49434860_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   reg__0_49434860_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(reg__0_49434860_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,reg__0_49434860_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
reg__0_49434860_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[reg__0_49434860_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64953700();

   return behavior;
}

Behavior __64953160;

Behavior make__64953160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64953160 = behavior;
   behavior->owner = (Object)channel__accum_58171_49266340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58173_52584520_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64953400();

   return behavior;
}

Behavior __64952140;

Behavior make__64952140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64952140 = behavior;
   behavior->owner = (Object)channel__accum_58171_49266340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49613740_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   reg__1_49613740_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   reg__1_49613740_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(reg__1_49613740_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,reg__1_49613740_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
reg__1_49613740_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[reg__1_49613740_channel__accum_58171_49266340_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64952360();

   return behavior;
}

Behavior __64951880;

Behavior make__64951880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64951880 = behavior;
   behavior->owner = (Object)channel__accum_58171_49266340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58174_53473040_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64952100();

   return behavior;
}

Scope makechannel__accum_58171_49266340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58171_49266340 = scope;
   scope->owner = (Object)layer0_58_84_48021300;
   scope->name = "channel_accum:171";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49434860();
   scope->inners[1] = makereg__1_49613740();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58172_49265080();
   scope->scopes[1] = makeraddr_58175_49264160();
   scope->scopes[2] = makewaddr_58179_49263640();
   scope->scopes[3] = makerinc_58183_49263180();
   scope->scopes[4] = makewinc_58188_49261800();
   scope->scopes[5] = makerdec_58193_49261240();
   scope->scopes[6] = makewdec_58198_49260600();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__64953440();
   scope->behaviors[1] = make__64953160();
   scope->behaviors[2] = make__64952140();
   scope->behaviors[3] = make__64951880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58203_50128280;

SignalI lv0_50225520_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makelv0_50225520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_50225520_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)mac__n1_58203_50128280;
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

SignalI lv1_45848620_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makelv1_45848620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_45848620_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)mac__n1_58203_50128280;
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

SignalI av0_47937860_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeav0_47937860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_47937860_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)mac__n1_58203_50128280;
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

SignalI av1_48518940_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeav1_48518940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_48518940_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)mac__n1_58203_50128280;
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

SignalI rv_47785160_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makerv_47785160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_47785160_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)mac__n1_58203_50128280;
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

SignalI lvok0_47785140_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makelvok0_47785140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47785140_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)mac__n1_58203_50128280;
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

SignalI lvok1_47785120_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makelvok1_47785120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_47785120_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)mac__n1_58203_50128280;
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

SignalI rvok_47785100_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makervok_47785100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_47785100_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)mac__n1_58203_50128280;
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

SignalI wok0_47785080_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makewok0_47785080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_47785080_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)mac__n1_58203_50128280;
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

SignalI wok1_47785040_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makewok1_47785040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_47785040_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)mac__n1_58203_50128280;
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

SignalI run_47785020_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makerun_47785020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47785020_mac__n1_58203_50128280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)mac__n1_58203_50128280;
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

Behavior __49816760;

Behavior make__49816760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49816760 = behavior;
   behavior->owner = (Object)mac__n1_58203_50128280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos += 1;
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos = realloc(clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos*sizeof(Object));
clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos[clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos-1] = (Object)behavior;
   behavior->block = make__47784800();

   return behavior;
}

Scope makemac__n1_58203_50128280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58203_50128280 = scope;
   scope->owner = (Object)layer0_58_84_48021300;
   scope->name = "mac_n1:203";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_50225520();
   scope->inners[1] = makelv1_45848620();
   scope->inners[2] = makeav0_47937860();
   scope->inners[3] = makeav1_48518940();
   scope->inners[4] = makerv_47785160();
   scope->inners[5] = makelvok0_47785140();
   scope->inners[6] = makelvok1_47785120();
   scope->inners[7] = makervok_47785100();
   scope->inners[8] = makewok0_47785080();
   scope->inners[9] = makewok1_47785040();
   scope->inners[10] = makerun_47785020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49816760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58210_49816600;

SignalI trig__r_49837580_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI maketrig__r_49837580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49837580_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__b0_58210_49816600;
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

SignalI dbus__r_50019060_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makedbus__r_50019060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50019060_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__b0_58210_49816600;
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

SignalI abus__r_50018980_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeabus__r_50018980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50018980_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__b0_58210_49816600;
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

SignalI mem_50272940_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makemem_50272940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50272940_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__b0_58210_49816600;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__65195280(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58211_49815980;

Scope makeraddr_58211_49815980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58211_49815980 = scope;
   scope->owner = (Object)channel__b0_58210_49816600;
   scope->name = "raddr:211";
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

Scope rinc_58216_49839740;

Scope makerinc_58216_49839740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58216_49839740 = scope;
   scope->owner = (Object)channel__b0_58210_49816600;
   scope->name = "rinc:216";
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

Scope rdec_58220_49838740;

Scope makerdec_58220_49838740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58220_49838740 = scope;
   scope->owner = (Object)channel__b0_58210_49816600;
   scope->name = "rdec:220";
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

Behavior __53900400;

Behavior make__53900400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53900400 = behavior;
   behavior->owner = (Object)channel__b0_58210_49816600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg += 1;
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg = realloc(clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg*sizeof(Object));
clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg[clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg-1] = (Object)behavior;
   behavior->block = make__53508080();

   return behavior;
}

Behavior __64949380;

Behavior make__64949380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64949380 = behavior;
   behavior->owner = (Object)channel__b0_58210_49816600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50019060_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   dbus__r_50019060_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   dbus__r_50019060_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(dbus__r_50019060_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,dbus__r_50019060_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
dbus__r_50019060_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[dbus__r_50019060_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64949560();

   return behavior;
}

Behavior __64949140;

Behavior make__64949140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64949140 = behavior;
   behavior->owner = (Object)channel__b0_58210_49816600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58214_53685080_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58214_53685080_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58214_53685080_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58214_53685080_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58214_53685080_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58214_53685080_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58214_53685080_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64949320();

   return behavior;
}

Behavior __64948440;

Behavior make__64948440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64948440 = behavior;
   behavior->owner = (Object)channel__b0_58210_49816600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49837580_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   trig__r_49837580_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   trig__r_49837580_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(trig__r_49837580_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,trig__r_49837580_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
trig__r_49837580_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[trig__r_49837580_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64948720();

   return behavior;
}

Behavior __64948180;

Behavior make__64948180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64948180 = behavior;
   behavior->owner = (Object)channel__b0_58210_49816600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58212_53685020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64948400();

   return behavior;
}

Behavior __64947540;

Behavior make__64947540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64947540 = behavior;
   behavior->owner = (Object)channel__b0_58210_49816600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50018980_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   abus__r_50018980_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   abus__r_50018980_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(abus__r_50018980_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,abus__r_50018980_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
abus__r_50018980_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[abus__r_50018980_channel__b0_58210_49816600_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64947720();

   return behavior;
}

Behavior __64947280;

Behavior make__64947280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64947280 = behavior;
   behavior->owner = (Object)channel__b0_58210_49816600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_53684940_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58213_53684940_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58213_53684940_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58213_53684940_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58213_53684940_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58213_53684940_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58213_53684940_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64947480();

   return behavior;
}

Scope makechannel__b0_58210_49816600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58210_49816600 = scope;
   scope->owner = (Object)layer0_58_84_48021300;
   scope->name = "channel_b0:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49837580();
   scope->inners[1] = makedbus__r_50019060();
   scope->inners[2] = makeabus__r_50018980();
   scope->inners[3] = makemem_50272940();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58211_49815980();
   scope->scopes[1] = makerinc_58216_49839740();
   scope->scopes[2] = makerdec_58220_49838740();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53900400();
   scope->behaviors[1] = make__64949380();
   scope->behaviors[2] = make__64949140();
   scope->behaviors[3] = make__64948440();
   scope->behaviors[4] = make__64948180();
   scope->behaviors[5] = make__64947540();
   scope->behaviors[6] = make__64947280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58225_53900280;

SignalI trig__r_53898700_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI maketrig__r_53898700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53898700_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__b1_58225_53900280;
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

SignalI dbus__r_54002400_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makedbus__r_54002400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54002400_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__b1_58225_53900280;
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

SignalI abus__r_54002320_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeabus__r_54002320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54002320_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__b1_58225_53900280;
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

SignalI mem_54193180_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makemem_54193180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54193180_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__b1_58225_53900280;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__65193920(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58226_53899980;

Scope makeraddr_58226_53899980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58226_53899980 = scope;
   scope->owner = (Object)channel__b1_58225_53900280;
   scope->name = "raddr:226";
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

Scope rinc_58231_53899560;

Scope makerinc_58231_53899560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58231_53899560 = scope;
   scope->owner = (Object)channel__b1_58225_53900280;
   scope->name = "rinc:231";
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

Scope rdec_58235_53899140;

Scope makerdec_58235_53899140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58235_53899140 = scope;
   scope->owner = (Object)channel__b1_58225_53900280;
   scope->name = "rdec:235";
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

Behavior __54644860;

Behavior make__54644860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54644860 = behavior;
   behavior->owner = (Object)channel__b1_58225_53900280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg += 1;
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg = realloc(clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg*sizeof(Object));
clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg[clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg-1] = (Object)behavior;
   behavior->block = make__54326220();

   return behavior;
}

Behavior __64970000;

Behavior make__64970000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64970000 = behavior;
   behavior->owner = (Object)channel__b1_58225_53900280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54002400_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   dbus__r_54002400_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   dbus__r_54002400_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(dbus__r_54002400_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,dbus__r_54002400_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
dbus__r_54002400_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[dbus__r_54002400_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64970200();

   return behavior;
}

Behavior __64969640;

Behavior make__64969640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64969640 = behavior;
   behavior->owner = (Object)channel__b1_58225_53900280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58229_54121420_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58229_54121420_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58229_54121420_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58229_54121420_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58229_54121420_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58229_54121420_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58229_54121420_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64969920();

   return behavior;
}

Behavior __64969120;

Behavior make__64969120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64969120 = behavior;
   behavior->owner = (Object)channel__b1_58225_53900280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53898700_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   trig__r_53898700_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   trig__r_53898700_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(trig__r_53898700_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,trig__r_53898700_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
trig__r_53898700_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[trig__r_53898700_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64969320();

   return behavior;
}

Behavior __64968820;

Behavior make__64968820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64968820 = behavior;
   behavior->owner = (Object)channel__b1_58225_53900280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58227_54121380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64969040();

   return behavior;
}

Behavior __64968240;

Behavior make__64968240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64968240 = behavior;
   behavior->owner = (Object)channel__b1_58225_53900280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54002320_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   abus__r_54002320_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   abus__r_54002320_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(abus__r_54002320_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,abus__r_54002320_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
abus__r_54002320_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[abus__r_54002320_channel__b1_58225_53900280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64968460();

   return behavior;
}

Behavior __64967820;

Behavior make__64967820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64967820 = behavior;
   behavior->owner = (Object)channel__b1_58225_53900280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58228_54121300_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58228_54121300_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58228_54121300_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58228_54121300_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58228_54121300_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58228_54121300_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58228_54121300_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64968180();

   return behavior;
}

Scope makechannel__b1_58225_53900280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58225_53900280 = scope;
   scope->owner = (Object)layer0_58_84_48021300;
   scope->name = "channel_b1:225";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53898700();
   scope->inners[1] = makedbus__r_54002400();
   scope->inners[2] = makeabus__r_54002320();
   scope->inners[3] = makemem_54193180();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58226_53899980();
   scope->scopes[1] = makerinc_58231_53899560();
   scope->scopes[2] = makerdec_58235_53899140();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54644860();
   scope->behaviors[1] = make__64970000();
   scope->behaviors[2] = make__64969640();
   scope->behaviors[3] = make__64969120();
   scope->behaviors[4] = make__64968820();
   scope->behaviors[5] = make__64968240();
   scope->behaviors[6] = make__64967820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58240_54644740;

SignalI reg__0_54744820_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makereg__0_54744820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54744820_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__z_58240_54644740;
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

SignalI reg__1_54823940_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makereg__1_54823940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_54823940_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)channel__z_58240_54644740;
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

Scope anum_58241_54644440;

Scope makeanum_58241_54644440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58241_54644440 = scope;
   scope->owner = (Object)channel__z_58240_54644740;
   scope->name = "anum:241";
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

Scope raddr_58244_54644020;

Scope makeraddr_58244_54644020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58244_54644020 = scope;
   scope->owner = (Object)channel__z_58240_54644740;
   scope->name = "raddr:244";
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

Scope waddr_58248_54643600;

Scope makewaddr_58248_54643600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58248_54643600 = scope;
   scope->owner = (Object)channel__z_58240_54644740;
   scope->name = "waddr:248";
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

Scope rinc_58252_54643180;

SignalI abus__r_54642800_rinc_58252_54643180_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeabus__r_54642800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54642800_rinc_58252_54643180_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)rinc_58252_54643180;
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

Scope makerinc_58252_54643180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58252_54643180 = scope;
   scope->owner = (Object)channel__z_58240_54644740;
   scope->name = "rinc:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54642800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58256_54642680;

SignalI abus__w_54642300_winc_58256_54642680_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeabus__w_54642300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54642300_winc_58256_54642680_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)winc_58256_54642680;
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

Scope makewinc_58256_54642680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58256_54642680 = scope;
   scope->owner = (Object)channel__z_58240_54644740;
   scope->name = "winc:256";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54642300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58260_54642180;

SignalI abus__r_54641800_rdec_58260_54642180_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeabus__r_54641800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54641800_rdec_58260_54642180_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)rdec_58260_54642180;
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

Scope makerdec_58260_54642180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58260_54642180 = scope;
   scope->owner = (Object)channel__z_58240_54644740;
   scope->name = "rdec:260";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54641800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58265_54641680;

SignalI abus__w_54641300_wdec_58265_54641680_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeabus__w_54641300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54641300_wdec_58265_54641680_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)wdec_58265_54641680;
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

Scope makewdec_58265_54641680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58265_54641680 = scope;
   scope->owner = (Object)channel__z_58240_54644740;
   scope->name = "wdec:265";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54641300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __64965900;

Behavior make__64965900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64965900 = behavior;
   behavior->owner = (Object)channel__z_58240_54644740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54744820_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   reg__0_54744820_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   reg__0_54744820_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(reg__0_54744820_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,reg__0_54744820_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
reg__0_54744820_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[reg__0_54744820_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64966120();

   return behavior;
}

Behavior __64965700;

Behavior make__64965700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64965700 = behavior;
   behavior->owner = (Object)channel__z_58240_54644740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58242_53885380_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64965860();

   return behavior;
}

Behavior __64965000;

Behavior make__64965000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64965000 = behavior;
   behavior->owner = (Object)channel__z_58240_54644740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_54823940_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   reg__1_54823940_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   reg__1_54823940_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(reg__1_54823940_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,reg__1_54823940_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
reg__1_54823940_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[reg__1_54823940_channel__z_58240_54644740_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64965300();

   return behavior;
}

Behavior __64964600;

Behavior make__64964600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64964600 = behavior;
   behavior->owner = (Object)channel__z_58240_54644740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   _58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   _58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(_58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,_58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
_58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[_58243_53986620_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64964960();

   return behavior;
}

Scope makechannel__z_58240_54644740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58240_54644740 = scope;
   scope->owner = (Object)layer0_58_84_48021300;
   scope->name = "channel_z:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54744820();
   scope->inners[1] = makereg__1_54823940();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58241_54644440();
   scope->scopes[1] = makeraddr_58244_54644020();
   scope->scopes[2] = makewaddr_58248_54643600();
   scope->scopes[3] = makerinc_58252_54643180();
   scope->scopes[4] = makewinc_58256_54642680();
   scope->scopes[5] = makerdec_58260_54642180();
   scope->scopes[6] = makewdec_58265_54641680();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__64965900();
   scope->behaviors[1] = make__64965700();
   scope->behaviors[2] = make__64965000();
   scope->behaviors[3] = make__64964600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58270_55623400;

SignalI lv0_55702240_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makelv0_55702240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_55702240_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)add__n_58270_55623400;
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

SignalI lv1_55740400_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makelv1_55740400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_55740400_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)add__n_58270_55623400;
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

SignalI rv0_55827700_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makerv0_55827700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_55827700_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)add__n_58270_55623400;
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

SignalI rv1_55906860_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makerv1_55906860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_55906860_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)add__n_58270_55623400;
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

SignalI lvok0_55906840_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makelvok0_55906840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_55906840_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)add__n_58270_55623400;
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

SignalI lvok1_55906820_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makelvok1_55906820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_55906820_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)add__n_58270_55623400;
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

SignalI rvok0_55906800_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makervok0_55906800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_55906800_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)add__n_58270_55623400;
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

SignalI rvok1_55906780_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makervok1_55906780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_55906780_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)add__n_58270_55623400;
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

SignalI run_55906760_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makerun_55906760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_55906760_add__n_58270_55623400_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)add__n_58270_55623400;
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

Behavior __50097520;

Behavior make__50097520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50097520 = behavior;
   behavior->owner = (Object)add__n_58270_55623400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos += 1;
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos = realloc(clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos*sizeof(Object));
clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos[clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos-1] = (Object)behavior;
   behavior->block = make__55906640();

   return behavior;
}

Scope makeadd__n_58270_55623400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58270_55623400 = scope;
   scope->owner = (Object)layer0_58_84_48021300;
   scope->name = "add_n:270";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_55702240();
   scope->inners[1] = makelv1_55740400();
   scope->inners[2] = makerv0_55827700();
   scope->inners[3] = makerv1_55906860();
   scope->inners[4] = makelvok0_55906840();
   scope->inners[5] = makelvok1_55906820();
   scope->inners[6] = makervok0_55906800();
   scope->inners[7] = makervok1_55906780();
   scope->inners[8] = makerun_55906760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50097520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54125440;

Behavior make__54125440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54125440 = behavior;
   behavior->owner = (Object)layer0_58_84_48021300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos += 1;
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos = realloc(clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos*sizeof(Object));
clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos[clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos-1] = (Object)behavior;
   behavior->block = make__54127060();

   return behavior;
}

Behavior __54640960;

Behavior make__54640960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54640960 = behavior;
   behavior->owner = (Object)layer0_58_84_48021300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos += 1;
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos = realloc(clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos*sizeof(Object));
clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos[clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos-1] = (Object)behavior;
   behavior->block = make__54125280();

   return behavior;
}

Behavior __55559760;

Behavior make__55559760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55559760 = behavior;
   behavior->owner = (Object)layer0_58_84_48021300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos += 1;
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos = realloc(clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos*sizeof(Object));
clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->pos[clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_pos-1] = (Object)behavior;
   behavior->block = make__54640820();

   return behavior;
}

Behavior __64883380;

Behavior make__64883380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64883380 = behavior;
   behavior->owner = (Object)layer0_58_84_48021300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_55621920_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   req_55621920_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   req_55621920_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(req_55621920_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,req_55621920_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
req_55621920_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[req_55621920_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[ack__mac_50097100_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64883700();

   return behavior;
}

Behavior __64897700;

Behavior make__64897700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64897700 = behavior;
   behavior->owner = (Object)layer0_58_84_48021300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[clk_55621960_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[ack_50097120_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_54174280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   value__z0_54174280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   value__z0_54174280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(value__z0_54174280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,value__z0_54174280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
value__z0_54174280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[value__z0_54174280_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_54243540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   value__z1_54243540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   value__z1_54243540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(value__z1_54243540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,value__z1_54243540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
value__z1_54243540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[value__z1_54243540_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_54406500_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   ack__a0_54406500_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   ack__a0_54406500_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(ack__a0_54406500_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,ack__a0_54406500_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
ack__a0_54406500_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[ack__a0_54406500_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_54406480_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   ack__a1_54406480_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   ack__a1_54406480_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(ack__a1_54406480_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,ack__a1_54406480_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
ack__a1_54406480_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[ack__a1_54406480_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64884040();

   return behavior;
}

Behavior __64897540;

Behavior make__64897540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64897540 = behavior;
   behavior->owner = (Object)layer0_58_84_48021300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_54424680_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   ack__mac_54424680_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   ack__mac_54424680_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(ack__mac_54424680_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,ack__mac_54424680_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
ack__mac_54424680_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[ack__mac_54424680_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[rst_55621940_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_55225460_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   a_55225460_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   a_55225460_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(a_55225460_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,a_55225460_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
a_55225460_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[a_55225460_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_49693520_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   a_49693520_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   a_49693520_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(a_49693520_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,a_49693520_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
a_49693520_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[a_49693520_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__64883960();

   return behavior;
}

Scope makelayer0_58_84_48021300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_48021300 = scope;
   scope->owner = (Object)layer0_58_840_55559360;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_54424540();
   scope->systemIs[1] = makefunc0_55225220();
   scope->systemIs[2] = makefunc1_48970840();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_50097160();
   scope->inners[1] = makeack_50097120();
   scope->inners[2] = makeack__mac_50097100();
   scope->inners[3] = makeack__add_50097060();
   scope->inners[4] = make_58150_50211340();
   scope->inners[5] = make_58148_50211320();
   scope->inners[6] = make_58149_50211240();
   scope->inners[7] = make_58173_52584520();
   scope->inners[8] = make_58174_53473040();
   scope->inners[9] = make_58165_53574780();
   scope->inners[10] = make_58163_53574760();
   scope->inners[11] = make_58164_53574680();
   scope->inners[12] = make_58214_53685080();
   scope->inners[13] = make_58215_53685040();
   scope->inners[14] = make_58212_53685020();
   scope->inners[15] = make_58213_53684940();
   scope->inners[16] = make_58242_53885380();
   scope->inners[17] = make_58243_53986620();
   scope->inners[18] = make_58229_54121420();
   scope->inners[19] = make_58230_54121400();
   scope->inners[20] = make_58227_54121380();
   scope->inners[21] = make_58228_54121300();
   scope->inners[22] = makevalue__z0_54174280();
   scope->inners[23] = makevalue__z1_54243540();
   scope->inners[24] = makevalue__a0_54304820();
   scope->inners[25] = makevalue__a1_54406560();
   scope->inners[26] = makeflag__z0_54406540();
   scope->inners[27] = makeflag__z1_54406520();
   scope->inners[28] = makeack__a0_54406500();
   scope->inners[29] = makeack__a1_54406480();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58141_48020240();
   scope->scopes[1] = makechannel__w1_58156_50033640();
   scope->scopes[2] = makechannel__accum_58171_49266340();
   scope->scopes[3] = makemac__n1_58203_50128280();
   scope->scopes[4] = makechannel__b0_58210_49816600();
   scope->scopes[5] = makechannel__b1_58225_53900280();
   scope->scopes[6] = makechannel__z_58240_54644740();
   scope->scopes[7] = makeadd__n_58270_55623400();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54125440();
   scope->behaviors[1] = make__54640960();
   scope->behaviors[2] = make__55559760();
   scope->behaviors[3] = make__64883380();
   scope->behaviors[4] = make__64897700();
   scope->behaviors[5] = make__64897540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_55559360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_55559360 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_55621960();
   systemT->inputs[1] = makerst_55621940();
   systemT->inputs[2] = makereq_55621920();
   systemT->inputs[3] = make_5859_55706400();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_55706360();
   systemT->outputs[1] = make_5857_55706340();
   systemT->outputs[2] = make_5858_55706240();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58113_55790400();
   systemT->inouts[1] = make_58114_55920900();

   systemT->scope = makelayer0_58_84_48021300();

   return systemT;
}