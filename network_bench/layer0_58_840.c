#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_57475580;

SignalI clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeclk_57514660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_840_57475580;
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

SignalI rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerst_57514640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_840_57475580;
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

SignalI fill_57514620_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makefill_57514620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_57514620_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_840_57475580;
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

SignalI req_57514600_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereq_57514600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_57514600_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_840_57475580;
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

SignalI _5815_57651060_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5815_57651060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_57651060_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_840_57475580;
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

SignalI ack__layer_57651020_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack__layer_57651020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_57651020_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_840_57475580;
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

SignalI _5813_57651000_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5813_57651000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_57651000_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_840_57475580;
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

SignalI _5814_57650920_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5814_57650920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_57650920_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_840_57475580;
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

SignalI _5855_57746420_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5855_57746420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5855_57746420_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_840_57475580;
   signalI->name = ":55";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5856_57817320_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5856_57817320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5856_57817320_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_840_57475580;
   signalI->name = ":56";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __50920860;

Block __50918480;

Block __50917240;

void code__50917240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,value__z0_49720000_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59084900(),flag__z0_51060540_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__50917240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50917240 = block;
   block->owner = (Object)__50918480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50917240;

   return block;
};

Block __51428500;

void code__51428500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,value__z1_49833580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59084760(),flag__z1_51060520_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51428500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51428500 = block;
   block->owner = (Object)__50918480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51428500;

   return block;
};

void code__50918480() {
 code__50917240();
 code__51428500();
}

Block make__50918480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50918480 = block;
   block->owner = (Object)__50920860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50918480;

   return block;
};

Block __50920080;

void code__50920080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59084700(),flag__z0_51060540_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59084640(),flag__z1_51060520_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__50920080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50920080 = block;
   block->owner = (Object)__50920860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50920080;

   return block;
};

void code__50920860() {
   {
      Value cond = ack__add_53025980_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50918480();
   }
   else {
  code__50920080();
   }
      }
   }
}

Block make__50920860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50920860 = block;
   block->owner = (Object)__51981200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50920860;

   return block;
};

Block __51980720;

Block __51979820;

Block __51979480;

void code__51979480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_50890280_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_5855_57746420_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59084360(),ack__a0_51060500_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51979480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51979480 = block;
   block->owner = (Object)__51979820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51979480;

   return block;
};

Block __52621020;

void code__52621020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_51060560_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_5856_57817320_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59084160(),ack__a1_51060480_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__52621020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52621020 = block;
   block->owner = (Object)__51979820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52621020;

   return block;
};

void code__51979820() {
 code__51979480();
 code__52621020();
}

Block make__51979820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51979820 = block;
   block->owner = (Object)__51980720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51979820;

   return block;
};

void code__51980720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_51060540_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         src1 = flag__z1_51060520_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51979820();
   }
      }
   }
}

Block make__51980720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51980720 = block;
   block->owner = (Object)__53044540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51980720;

   return block;
};

Block __53044400;

Block __53043960;

Block __53043240;

void code__53043240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59083960(),_58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__53043240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53043240 = block;
   block->owner = (Object)__53043960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53043240;

   return block;
};

void code__53043960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59084060();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53043240();
   }
      }
   }
}

Block make__53043960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53043960 = block;
   block->owner = (Object)__53044400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53043960;

   return block;
};

Block __53082880;

Block __53082340;

void code__53082340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59083720(),_58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__53082340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53082340 = block;
   block->owner = (Object)__53082880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53082340;

   return block;
};

void code__53082880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59083860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53082340();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59083640(),_58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__53082880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53082880 = block;
   block->owner = (Object)__53044400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53082880;

   return block;
};

Block __53081340;

Block __53080700;

void code__53080700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59083460(),_58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__53080700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53080700 = block;
   block->owner = (Object)__53081340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53080700;

   return block;
};

void code__53081340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59083560();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53080700();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59083360(),_5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__53081340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53081340 = block;
   block->owner = (Object)__53044400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53081340;

   return block;
};

Block __53078960;

Block __53078800;

Block __53078280;

void code__53078280() {
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
                  src0 = _58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59083060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59082960(),_5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59082840(),_58101_51421720_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__53078280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53078280 = block;
   block->owner = (Object)__53078800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53078280;

   return block;
};

void code__53078800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59083240();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53078280();
   }
      }
   }
}

Block make__53078800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53078800 = block;
   block->owner = (Object)__53078960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53078800;

   return block;
};

Block __57242200;

Block __57241880;

void code__57241880() {
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
                  src0 = _58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59082620();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59082520(),_58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59082460(),_58130_51657640_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__57241880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57241880 = block;
   block->owner = (Object)__57242200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57241880;

   return block;
};

void code__57242200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59082760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57241880();
   }
      }
   }
}

Block make__57242200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57242200 = block;
   block->owner = (Object)__53078960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57242200;

   return block;
};

Block __57336420;

Block __57336100;

Block __57351980;

void code__57351980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59082160(),_58197_51239220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__57351980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57351980 = block;
   block->owner = (Object)__57336100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57351980;

   return block;
};

Block __57414300;

void code__57414300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59082080(),_58198_51350300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__57414300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57414300 = block;
   block->owner = (Object)__57336100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57414300;

   return block;
};

void code__57336100() {
{
      Value value = _58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__59082240())) {
    code__57351980();
         }
         else if (value2integer(value) == value2integer(make__59082140())) {
    code__57414300();
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
                  src0 = _58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59081860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__57336100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57336100 = block;
   block->owner = (Object)__57336420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57336100;

   return block;
};

void code__57336420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59082380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57336100();
   }
      }
   }
}

Block make__57336420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57336420 = block;
   block->owner = (Object)__53078960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57336420;

   return block;
};

void code__53078960() {
 code__53078800();
 code__57242200();
 code__57336420();
}

Block make__53078960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53078960 = block;
   block->owner = (Object)__53044400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53078960;

   return block;
};

void code__53044400() {
 code__53043960();
 code__53082880();
 code__53081340();
   {
      Value cond = fill_57514620_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53078960();
   }
      }
   }
}

Block make__53044400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53044400 = block;
   block->owner = (Object)__57475900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53044400;

   return block;
};

Block __58631600;

void code__58631600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_57514600_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_53026020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_53026060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58631600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58631600 = block;
   block->owner = (Object)__58631360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58631600;

   return block;
};

Block __58631880;

void code__58631880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,ack_51705020_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,rst_51705000_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_49720000_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_49833580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_51060500_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      src1 = ack__a1_51060480_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_57651020_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58631880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58631880 = block;
   block->owner = (Object)__58664260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58631880;

   return block;
};

Block __58631820;

void code__58631820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_51704780_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,ack__mac_53026020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49346860_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,value__a0_50890280_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52525040_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,value__a1_51060560_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58631820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58631820 = block;
   block->owner = (Object)__58664080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58631820;

   return block;
};

Block __52155180;

Block __52572240;

void code__52572240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_51425020_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,make_ref_rangeS(mem_51553100_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280,value2integer(abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value),value2integer(abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__52572240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52572240 = block;
   block->owner = (Object)__52155180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52572240;

   return block;
};

void code__52155180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51553100_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
            idx = value2integer(abus__r_51424940_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51370480_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_51283200_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52572240();
   }
      }
   }
}

Block make__52155180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52155180 = block;
   block->owner = (Object)__52833460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52155180;

   return block;
};

Block __58663200;

void code__58663200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51370480_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_5897_53163260_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58663200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58663200 = block;
   block->owner = (Object)__58663020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58663200;

   return block;
};

Block __58662980;

void code__58662980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_53163260_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,dbus__r_51370480_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58662980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58662980 = block;
   block->owner = (Object)__58687340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58662980;

   return block;
};

Block __58686960;

void code__58686960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_51283220_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58686960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58686960 = block;
   block->owner = (Object)__58686760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58686960;

   return block;
};

Block __58686680;

void code__58686680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,trig__r_51283220_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58686680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58686680 = block;
   block->owner = (Object)__58686520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58686680;

   return block;
};

Block __58686120;

void code__58686120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51424940_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58686120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58686120 = block;
   block->owner = (Object)__58685860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58686120;

   return block;
};

Block __58685820;

void code__58685820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,abus__r_51424940_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58685820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58685820 = block;
   block->owner = (Object)__58685660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58685820;

   return block;
};

Block __58685320;

void code__58685320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_51283200_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58685320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58685320 = block;
   block->owner = (Object)__58685100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58685320;

   return block;
};

Block __58685060;

void code__58685060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,trig__w_51283200_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58685060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58685060 = block;
   block->owner = (Object)__58684900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58685060;

   return block;
};

Block __58684560;

void code__58684560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58684560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58684560 = block;
   block->owner = (Object)__58684100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58684560;

   return block;
};

Block __58684040;

void code__58684040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58684040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58684040 = block;
   block->owner = (Object)__58683860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58684040;

   return block;
};

Block __58683460;

void code__58683460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_51425020_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58101_51421720_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58683460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58683460 = block;
   block->owner = (Object)__58683220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58683460;

   return block;
};

Block __58683180;

void code__58683180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_51421720_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,dbus__w_51425020_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58683180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58683180 = block;
   block->owner = (Object)__58682960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58683180;

   return block;
};

Block __48755500;

Block __49331800;

void code__49331800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_53021480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,make_ref_rangeS(mem_53165880_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280,value2integer(abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value),value2integer(abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49331800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49331800 = block;
   block->owner = (Object)__48755500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49331800;

   return block;
};

void code__48755500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_53165880_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
            idx = value2integer(abus__r_53021400_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_52942340_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_52830480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49331800();
   }
      }
   }
}

Block make__48755500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48755500 = block;
   block->owner = (Object)__49737260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48755500;

   return block;
};

Block __58680320;

void code__58680320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_52942340_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58126_48758200_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58680320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58680320 = block;
   block->owner = (Object)__58680100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58680320;

   return block;
};

Block __58680060;

void code__58680060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_48758200_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,dbus__r_52942340_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58680060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58680060 = block;
   block->owner = (Object)__58679900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58680060;

   return block;
};

Block __58679600;

void code__58679600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_52830500_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58679600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58679600 = block;
   block->owner = (Object)__58679440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58679600;

   return block;
};

Block __58679400;

void code__58679400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,trig__r_52830500_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58679400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58679400 = block;
   block->owner = (Object)__58703760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58679400;

   return block;
};

Block __58703340;

void code__58703340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53021400_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58703340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58703340 = block;
   block->owner = (Object)__58703120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58703340;

   return block;
};

Block __58703080;

void code__58703080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,abus__r_53021400_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58703080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58703080 = block;
   block->owner = (Object)__58702880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58703080;

   return block;
};

Block __58702480;

void code__58702480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_52830480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58702480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58702480 = block;
   block->owner = (Object)__58702260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58702480;

   return block;
};

Block __58702220;

void code__58702220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,trig__w_52830480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58702220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58702220 = block;
   block->owner = (Object)__58702060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58702220;

   return block;
};

Block __58701760;

void code__58701760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58701760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58701760 = block;
   block->owner = (Object)__58701560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58701760;

   return block;
};

Block __58701520;

void code__58701520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58701520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58701520 = block;
   block->owner = (Object)__58701280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58701520;

   return block;
};

Block __58700900;

void code__58700900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_53021480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58130_51657640_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58700900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58700900 = block;
   block->owner = (Object)__58700700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58700900;

   return block;
};

Block __58700660;

void code__58700660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_51657640_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,dbus__w_53021480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58700660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58700660 = block;
   block->owner = (Object)__58700440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58700660;

   return block;
};

Block __58698160;

void code__58698160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49835660_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58698160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58698160 = block;
   block->owner = (Object)__58698000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58698160;

   return block;
};

Block __58697960;

void code__58697960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,reg__0_49835660_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58697960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58697960 = block;
   block->owner = (Object)__58697800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58697960;

   return block;
};

Block __58697480;

void code__58697480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50668280_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58697480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58697480 = block;
   block->owner = (Object)__58697260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58697480;

   return block;
};

Block __58697160;

void code__58697160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,reg__1_50668280_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58697160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58697160 = block;
   block->owner = (Object)__58696940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58697160;

   return block;
};

Block __51984400;

Block __51984240;

Block __51983880;

void code__51983880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59048000(),_58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51983880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51983880 = block;
   block->owner = (Object)__51984240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51983880;

   return block;
};

void code__51984240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59048100();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51983880();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59072380(),_58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51984240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51984240 = block;
   block->owner = (Object)__51984400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51984240;

   return block;
};

Block __51983180;

Block __51982860;

void code__51982860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59072220(),_5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51982860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51982860 = block;
   block->owner = (Object)__51983180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51982860;

   return block;
};

void code__51983180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59072300();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51982860();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59072160(),_5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51983180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51983180 = block;
   block->owner = (Object)__51984400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51983180;

   return block;
};

Block __51982240;

Block __51981920;

void code__51981920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59071960(),_5814_57650920_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51981920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51981920 = block;
   block->owner = (Object)__51982240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51981920;

   return block;
};

void code__51982240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59072060();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51981920();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59071880(),_5813_57651000_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51982240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51982240 = block;
   block->owner = (Object)__51984400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51982240;

   return block;
};

Block __51980800;

void code__51980800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59071500(),rvok_51984540_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59071440(),lvok0_51984580_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59071380(),av0_51789040_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59071320(),lvok1_51984560_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59071260(),av1_51833340_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51980800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51980800 = block;
   block->owner = (Object)__51984400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51980800;

   return block;
};

Block __52355840;

Block __52355520;

Block __52355200;

Block __52395800;

void code__52395800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_57651060_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,rv_51984600_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59070760(),rvok_51984540_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__52395800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52395800 = block;
   block->owner = (Object)__52355200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52395800;

   return block;
};

void code__52355200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_57651000_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59070920();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52395800();
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
                  src0 = _5814_57650920_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59070580();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_57650920_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59070460(),_5813_57651000_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__52355200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52355200 = block;
   block->owner = (Object)__52355520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52355200;

   return block;
};

void code__52355520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59071020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52355200();
   }
      }
   }
}

Block make__52355520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52355520 = block;
   block->owner = (Object)__52355840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52355520;

   return block;
};

Block __52623200;

Block __52622840;

Block __52622460;

void code__52622460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_53163260_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,lv0_51478320_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59069560(),lvok0_51984580_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__52622460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52622460 = block;
   block->owner = (Object)__52622840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52622460;

   return block;
};

void code__52622840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59069860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52622460();
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
                  src0 = _5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59069440();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59069340(),_5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__52622840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52622840 = block;
   block->owner = (Object)__52623200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52622840;

   return block;
};

void code__52623200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59070220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52622840();
   }
      }
   }
}

Block make__52623200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52623200 = block;
   block->owner = (Object)__52355840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52623200;

   return block;
};

Block __52832840;

Block __52832000;

Block __52831840;

void code__52831840() {
}

Block make__52831840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52831840 = block;
   block->owner = (Object)__52832000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52831840;

   return block;
};

Block __48793580;

void code__48793580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_51789040_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__48793580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48793580 = block;
   block->owner = (Object)__52832000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48793580;

   return block;
};

void code__52832000() {
 code__52831840();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_51789040_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
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
                              src0 = lv0_51478320_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_51984600_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59068580();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_51789040_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__48793580();
}

Block make__52832000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52832000 = block;
   block->owner = (Object)__52832840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52832000;

   return block;
};

void code__52832840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59069120(),ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59069040(),run_51984520_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__52832000();
}

Block make__52832840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52832840 = block;
   block->owner = (Object)__52355840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52832840;

   return block;
};

Block __49293980;

Block __49293620;

Block __49293240;

void code__49293240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_48758200_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,lv1_51572260_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59068120(),lvok1_51984560_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__49293240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49293240 = block;
   block->owner = (Object)__49293620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49293240;

   return block;
};

void code__49293620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59068280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49293240();
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
                  src0 = _58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59067980();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59067820(),_58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__49293620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49293620 = block;
   block->owner = (Object)__49293980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49293620;

   return block;
};

void code__49293980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59068380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49293620();
   }
      }
   }
}

Block make__49293980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49293980 = block;
   block->owner = (Object)__52355840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49293980;

   return block;
};

Block __49522760;

Block __49522280;

Block __49522120;

void code__49522120() {
}

Block make__49522120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49522120 = block;
   block->owner = (Object)__49522280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49522120;

   return block;
};

Block __51384260;

void code__51384260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_51833340_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51384260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51384260 = block;
   block->owner = (Object)__49522280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51384260;

   return block;
};

void code__49522280() {
 code__49522120();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_51833340_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
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
                              src0 = lv1_51572260_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_51984600_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59067140();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_51833340_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__51384260();
}

Block make__49522280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49522280 = block;
   block->owner = (Object)__49522760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49522280;

   return block;
};

void code__49522760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59067540(),ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59067480(),run_51984520_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__49522280();
}

Block make__49522760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49522760 = block;
   block->owner = (Object)__52355840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49522760;

   return block;
};

void code__52355840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59071100(),run_51984520_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__52355520();
 code__52623200();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_51984580_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         src1 = rvok_51984540_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52832840();
   }
      }
   }
 code__49293980();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_51984560_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         src1 = rvok_51984540_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49522760();
   }
      }
   }
}

Block make__52355840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52355840 = block;
   block->owner = (Object)__51984400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52355840;

   return block;
};

void code__51984400() {
 code__51984240();
 code__51983180();
 code__51982240();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59071740(),ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59071680(),run_51984520_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_51984520_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51980800();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_53026060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         src1 = run_51984520_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52355840();
   }
      }
   }
}

Block make__51984400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51984400 = block;
   block->owner = (Object)__51707340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51984400;

   return block;
};

Block __58735820;

void code__58735820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58182_49044300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58735820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58735820 = block;
   block->owner = (Object)__58735640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58735820;

   return block;
};

Block __58735600;

void code__58735600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_49044300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58735600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58735600 = block;
   block->owner = (Object)__58735360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58735600;

   return block;
};

Block __58734880;

void code__58734880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58183_49180120_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58734880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58734880 = block;
   block->owner = (Object)__58734720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58734880;

   return block;
};

Block __58734680;

void code__58734680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_49180120_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58734680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58734680 = block;
   block->owner = (Object)__58734520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58734680;

   return block;
};

Block __58734180;

void code__58734180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58197_51239220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58734180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58734180 = block;
   block->owner = (Object)__58733960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58734180;

   return block;
};

Block __58733920;

void code__58733920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58197_51239220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58733920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58733920 = block;
   block->owner = (Object)__58733760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58733920;

   return block;
};

Block __58733440;

void code__58733440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58198_51350300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58733440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58733440 = block;
   block->owner = (Object)__58733260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58733440;

   return block;
};

Block __58733220;

void code__58733220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_51350300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58733220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58733220 = block;
   block->owner = (Object)__58732920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58733220;

   return block;
};

Block __58730940;

void code__58730940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51704580_winc_58196_51704960_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58730940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58730940 = block;
   block->owner = (Object)__58730740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58730940;

   return block;
};

Block __58730680;

void code__58730680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,abus__w_51704580_winc_58196_51704960_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58730680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58730680 = block;
   block->owner = (Object)__58730340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58730680;

   return block;
};

Block __58729060;

void code__58729060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53179680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58729060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58729060 = block;
   block->owner = (Object)__58728900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58729060;

   return block;
};

Block __58728860;

void code__58728860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,reg__0_53179680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58728860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58728860 = block;
   block->owner = (Object)__58728700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58728860;

   return block;
};

Block __58752840;

void code__58752840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45722820_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58752840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58752840 = block;
   block->owner = (Object)__58752520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58752840;

   return block;
};

Block __58752440;

void code__58752440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,reg__1_45722820_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58752440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58752440 = block;
   block->owner = (Object)__58752240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58752440;

   return block;
};

Block __49822080;

Block __49820180;

Block __49819860;

void code__49819860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,lv0_49343120_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59088340(),lvok0_49822460_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__49819860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49819860 = block;
   block->owner = (Object)__49820180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49819860;

   return block;
};

Block __50964580;

void code__50964580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_49044300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,rv0_49671540_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59088140(),rvok0_49822420_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__50964580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50964580 = block;
   block->owner = (Object)__49820180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50964580;

   return block;
};

Block __51298840;

Block __51322740;

void code__51322740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_49343120_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      src1 = rv0_49671540_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51322740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51322740 = block;
   block->owner = (Object)__51298840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51322740;

   return block;
};

void code__51298840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59087840(),run_49822380_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59087740(),ack__add_53025980_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__51322740();
}

Block make__51298840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51298840 = block;
   block->owner = (Object)__49820180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51298840;

   return block;
};

Block __51836940;

void code__51836940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,lv1_49478240_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59087360(),lvok1_49822440_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51836940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51836940 = block;
   block->owner = (Object)__49820180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51836940;

   return block;
};

Block __52211340;

void code__52211340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_49180120_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,rv1_49822480_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59087220(),rvok1_49822400_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__52211340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52211340 = block;
   block->owner = (Object)__49820180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52211340;

   return block;
};

Block __52570780;

Block __52570200;

void code__52570200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_49478240_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      src1 = rv1_49822480_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__52570200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52570200 = block;
   block->owner = (Object)__52570780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52570200;

   return block;
};

void code__52570780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59087060(),run_49822380_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59087000(),ack__add_53025980_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__52570200();
}

Block make__52570780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52570780 = block;
   block->owner = (Object)__49820180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52570780;

   return block;
};

void code__49820180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59088480(),run_49822380_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__49819860();
 code__50964580();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49822460_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         src1 = rvok0_49822420_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51298840();
   }
      }
   }
 code__51836940();
 code__52211340();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49822440_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         src1 = rvok1_49822400_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52570780();
   }
      }
   }
}

Block make__49820180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49820180 = block;
   block->owner = (Object)__49822080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49820180;

   return block;
};

Block __49821420;

void code__49821420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59086720(),lvok0_49822460_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59086660(),rvok0_49822420_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59086580(),lvok1_49822440_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59086480(),rvok1_49822400_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__49821420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49821420 = block;
   block->owner = (Object)__49822080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49821420;

   return block;
};

void code__49822080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59088700(),ack__add_53025980_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59088640(),run_49822380_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_53026020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         src1 = run_49822380_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49820180();
   }
   else {
  code__49821420();
   }
      }
   }
}

Block make__49822080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49822080 = block;
   block->owner = (Object)__53026220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49822080;

   return block;
};

Value make__59048100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59048000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59072380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59072300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59072220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59072160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59072060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59071960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59071880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59071740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59071680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59071500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59071440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59071380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59071320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59071260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59071100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59071020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59070920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59070760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59070580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59070460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59070220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59069860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59069560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59069440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59069340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59069120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59069040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59068580() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59068380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59068280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59068120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59067980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59067820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59067540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59067480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59067140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59088700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59088640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59088480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59088340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59088140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59087840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59087740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59087360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59087220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59087060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59087000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59086720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59086660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59086580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59086480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59084900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59084760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59084700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59084640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59084360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59084160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59084060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59083960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59083860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59083720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59083640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59083560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59083460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59083360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59083240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59083060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59082960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59082840() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59082760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59082620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59082520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59082460() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59082380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59082240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59082160() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59082140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59082080() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59081860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer0_58_84_51286360;

SignalI req__mac_53026060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereq__mac_53026060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_53026060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack_53026040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI ack__mac_53026020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack__mac_53026020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53026020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI ack__add_53025980_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack__add_53025980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_53025980_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _5897_53163260_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5897_53163260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_53163260_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5895_53163240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5896_53163160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58143_45606580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58144_47880700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58126_48758200_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58126_48758200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_48758200_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58124_48758180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58125_48758080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58182_49044300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58182_49044300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_49044300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58183_49180120_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58183_49180120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_49180120_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58212_49363020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58213_49472740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI value__z0_49720000_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makevalue__z0_49720000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_49720000_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI value__z1_49833580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makevalue__z1_49833580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_49833580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI value__a0_50890280_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makevalue__a0_50890280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_50890280_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI value__a1_51060560_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makevalue__a1_51060560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_51060560_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI flag__z0_51060540_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeflag__z0_51060540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_51060540_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI flag__z1_51060520_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeflag__z1_51060520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_51060520_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI ack__a0_51060500_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack__a0_51060500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_51060500_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI ack__a1_51060480_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack__a1_51060480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_51060480_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58197_51239220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58197_51239220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58197_51239220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58198_51350300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58198_51350300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_51350300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58199_51350180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5899_51350160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58100_51350020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58101_51421720_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58101_51421720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_51421720_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58128_51421700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58129_51421620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SignalI _58130_51657640_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58130_51657640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_51657640_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer0_58_84_51286360;
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

SystemI counter_51704640;

SystemI makecounter_51704640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_51704640 = systemI;
   systemI->owner = (Object)layer0_58_84_51286360;
   systemI->name = "counter";
   systemI->system = counter_58_841_51651340;

   return systemI;
};

SystemI func0_49346440;

SystemI makefunc0_49346440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_49346440 = systemI;
   systemI->owner = (Object)layer0_58_84_51286360;
   systemI->name = "func0";
   systemI->system = func0_58_841_48771380;

   return systemI;
};

SystemI func1_52524760;

SystemI makefunc1_52524760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_52524760 = systemI;
   systemI->owner = (Object)layer0_58_84_51286360;
   systemI->name = "func1";
   systemI->system = func1_58_840_51236080;

   return systemI;
};

Scope channel__w0_5883_51286060;

SignalI trig__r_51283220_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI maketrig__r_51283220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51283220_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_5883_51286060;
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

SignalI trig__w_51283200_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI maketrig__w_51283200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_51283200_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_5883_51286060;
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

SignalI dbus__r_51370480_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makedbus__r_51370480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51370480_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_5883_51286060;
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

SignalI dbus__w_51425020_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makedbus__w_51425020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_51425020_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_5883_51286060;
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

SignalI abus__r_51424940_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_51424940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51424940_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_5883_51286060;
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

SignalI abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_51424860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_5883_51286060;
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

SignalI mem_51553100_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makemem_51553100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51553100_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_5883_51286060;
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

Scope raddr_5884_51285760;

Scope makeraddr_5884_51285760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_51285760 = scope;
   scope->owner = (Object)channel__w0_5883_51286060;
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

Scope waddr_5889_51285340;

Scope makewaddr_5889_51285340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_51285340 = scope;
   scope->owner = (Object)channel__w0_5883_51286060;
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

Scope rinc_5894_51284920;

Scope makerinc_5894_51284920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_51284920 = scope;
   scope->owner = (Object)channel__w0_5883_51286060;
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

Scope winc_5898_51284500;

Scope makewinc_5898_51284500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_51284500 = scope;
   scope->owner = (Object)channel__w0_5883_51286060;
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

Scope rdec_58102_51284080;

Scope makerdec_58102_51284080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_51284080 = scope;
   scope->owner = (Object)channel__w0_5883_51286060;
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

Scope wdec_58107_51283660;

Scope makewdec_58107_51283660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_51283660 = scope;
   scope->owner = (Object)channel__w0_5883_51286060;
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

Behavior __52833460;

Behavior make__52833460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52833460 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg += 1;
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg = realloc(clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg*sizeof(Object));
clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg[clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg-1] = (Object)behavior;
   behavior->block = make__52155180();

   return behavior;
}

Behavior __58663020;

Behavior make__58663020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58663020 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51370480_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   dbus__r_51370480_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   dbus__r_51370480_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(dbus__r_51370480_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,dbus__r_51370480_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
dbus__r_51370480_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[dbus__r_51370480_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58663200();

   return behavior;
}

Behavior __58687340;

Behavior make__58687340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58687340 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_53163260_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _5897_53163260_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _5897_53163260_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_5897_53163260_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_5897_53163260_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_5897_53163260_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_5897_53163260_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58662980();

   return behavior;
}

Behavior __58686760;

Behavior make__58686760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58686760 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_51283220_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   trig__r_51283220_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   trig__r_51283220_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(trig__r_51283220_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,trig__r_51283220_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
trig__r_51283220_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[trig__r_51283220_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58686960();

   return behavior;
}

Behavior __58686520;

Behavior make__58686520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58686520 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_5895_53163240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58686680();

   return behavior;
}

Behavior __58685860;

Behavior make__58685860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58685860 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51424940_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   abus__r_51424940_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   abus__r_51424940_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(abus__r_51424940_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,abus__r_51424940_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
abus__r_51424940_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[abus__r_51424940_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58686120();

   return behavior;
}

Behavior __58685660;

Behavior make__58685660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58685660 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_5896_53163160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58685820();

   return behavior;
}

Behavior __58685100;

Behavior make__58685100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58685100 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_51283200_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   trig__w_51283200_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   trig__w_51283200_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(trig__w_51283200_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,trig__w_51283200_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
trig__w_51283200_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[trig__w_51283200_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58685320();

   return behavior;
}

Behavior __58684900;

Behavior make__58684900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58684900 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_5899_51350160_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58685060();

   return behavior;
}

Behavior __58684100;

Behavior make__58684100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58684100 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[abus__w_51424860_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58684560();

   return behavior;
}

Behavior __58683860;

Behavior make__58683860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58683860 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58100_51350020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58684040();

   return behavior;
}

Behavior __58683220;

Behavior make__58683220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58683220 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_51425020_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   dbus__w_51425020_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   dbus__w_51425020_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(dbus__w_51425020_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,dbus__w_51425020_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
dbus__w_51425020_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[dbus__w_51425020_channel__w0_5883_51286060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58683460();

   return behavior;
}

Behavior __58682960;

Behavior make__58682960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58682960 = behavior;
   behavior->owner = (Object)channel__w0_5883_51286060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_51421720_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58101_51421720_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58101_51421720_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58101_51421720_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58101_51421720_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58101_51421720_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58101_51421720_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58683180();

   return behavior;
}

Scope makechannel__w0_5883_51286060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_51286060 = scope;
   scope->owner = (Object)layer0_58_84_51286360;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51283220();
   scope->inners[1] = maketrig__w_51283200();
   scope->inners[2] = makedbus__r_51370480();
   scope->inners[3] = makedbus__w_51425020();
   scope->inners[4] = makeabus__r_51424940();
   scope->inners[5] = makeabus__w_51424860();
   scope->inners[6] = makemem_51553100();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_51285760();
   scope->scopes[1] = makewaddr_5889_51285340();
   scope->scopes[2] = makerinc_5894_51284920();
   scope->scopes[3] = makewinc_5898_51284500();
   scope->scopes[4] = makerdec_58102_51284080();
   scope->scopes[5] = makewdec_58107_51283660();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52833460();
   scope->behaviors[1] = make__58663020();
   scope->behaviors[2] = make__58687340();
   scope->behaviors[3] = make__58686760();
   scope->behaviors[4] = make__58686520();
   scope->behaviors[5] = make__58685860();
   scope->behaviors[6] = make__58685660();
   scope->behaviors[7] = make__58685100();
   scope->behaviors[8] = make__58684900();
   scope->behaviors[9] = make__58684100();
   scope->behaviors[10] = make__58683860();
   scope->behaviors[11] = make__58683220();
   scope->behaviors[12] = make__58682960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_52833340;

SignalI trig__r_52830500_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI maketrig__r_52830500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52830500_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w1_58112_52833340;
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

SignalI trig__w_52830480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI maketrig__w_52830480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_52830480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w1_58112_52833340;
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

SignalI dbus__r_52942340_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makedbus__r_52942340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_52942340_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w1_58112_52833340;
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

SignalI dbus__w_53021480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makedbus__w_53021480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_53021480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w1_58112_52833340;
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

SignalI abus__r_53021400_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_53021400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53021400_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w1_58112_52833340;
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

SignalI abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_53021320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w1_58112_52833340;
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

SignalI mem_53165880_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makemem_53165880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_53165880_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w1_58112_52833340;
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

Scope raddr_58113_52833040;

Scope makeraddr_58113_52833040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_52833040 = scope;
   scope->owner = (Object)channel__w1_58112_52833340;
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

Scope waddr_58118_52832620;

Scope makewaddr_58118_52832620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_52832620 = scope;
   scope->owner = (Object)channel__w1_58112_52833340;
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

Scope rinc_58123_52832200;

Scope makerinc_58123_52832200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_52832200 = scope;
   scope->owner = (Object)channel__w1_58112_52833340;
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

Scope winc_58127_52831780;

Scope makewinc_58127_52831780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_52831780 = scope;
   scope->owner = (Object)channel__w1_58112_52833340;
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

Scope rdec_58131_52831360;

Scope makerdec_58131_52831360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_52831360 = scope;
   scope->owner = (Object)channel__w1_58112_52833340;
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

Scope wdec_58136_52830940;

Scope makewdec_58136_52830940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_52830940 = scope;
   scope->owner = (Object)channel__w1_58112_52833340;
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

Behavior __49737260;

Behavior make__49737260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49737260 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg += 1;
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg = realloc(clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg*sizeof(Object));
clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg[clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg-1] = (Object)behavior;
   behavior->block = make__48755500();

   return behavior;
}

Behavior __58680100;

Behavior make__58680100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58680100 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_52942340_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   dbus__r_52942340_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   dbus__r_52942340_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(dbus__r_52942340_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,dbus__r_52942340_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
dbus__r_52942340_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[dbus__r_52942340_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58680320();

   return behavior;
}

Behavior __58679900;

Behavior make__58679900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58679900 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_48758200_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58126_48758200_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58126_48758200_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58126_48758200_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58126_48758200_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58126_48758200_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58126_48758200_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58680060();

   return behavior;
}

Behavior __58679440;

Behavior make__58679440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58679440 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_52830500_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   trig__r_52830500_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   trig__r_52830500_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(trig__r_52830500_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,trig__r_52830500_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
trig__r_52830500_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[trig__r_52830500_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58679600();

   return behavior;
}

Behavior __58703760;

Behavior make__58703760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58703760 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58124_48758180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58679400();

   return behavior;
}

Behavior __58703120;

Behavior make__58703120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58703120 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53021400_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   abus__r_53021400_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   abus__r_53021400_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(abus__r_53021400_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,abus__r_53021400_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
abus__r_53021400_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[abus__r_53021400_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58703340();

   return behavior;
}

Behavior __58702880;

Behavior make__58702880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58702880 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58125_48758080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58703080();

   return behavior;
}

Behavior __58702260;

Behavior make__58702260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58702260 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_52830480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   trig__w_52830480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   trig__w_52830480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(trig__w_52830480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,trig__w_52830480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
trig__w_52830480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[trig__w_52830480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58702480();

   return behavior;
}

Behavior __58702060;

Behavior make__58702060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58702060 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58128_51421700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58702220();

   return behavior;
}

Behavior __58701560;

Behavior make__58701560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58701560 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[abus__w_53021320_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58701760();

   return behavior;
}

Behavior __58701280;

Behavior make__58701280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58701280 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58129_51421620_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58701520();

   return behavior;
}

Behavior __58700700;

Behavior make__58700700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58700700 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_53021480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   dbus__w_53021480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   dbus__w_53021480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(dbus__w_53021480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,dbus__w_53021480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
dbus__w_53021480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[dbus__w_53021480_channel__w1_58112_52833340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58700900();

   return behavior;
}

Behavior __58700440;

Behavior make__58700440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58700440 = behavior;
   behavior->owner = (Object)channel__w1_58112_52833340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_51657640_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58130_51657640_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58130_51657640_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58130_51657640_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58130_51657640_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58130_51657640_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58130_51657640_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58700660();

   return behavior;
}

Scope makechannel__w1_58112_52833340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_52833340 = scope;
   scope->owner = (Object)layer0_58_84_51286360;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52830500();
   scope->inners[1] = maketrig__w_52830480();
   scope->inners[2] = makedbus__r_52942340();
   scope->inners[3] = makedbus__w_53021480();
   scope->inners[4] = makeabus__r_53021400();
   scope->inners[5] = makeabus__w_53021320();
   scope->inners[6] = makemem_53165880();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_52833040();
   scope->scopes[1] = makewaddr_58118_52832620();
   scope->scopes[2] = makerinc_58123_52832200();
   scope->scopes[3] = makewinc_58127_52831780();
   scope->scopes[4] = makerdec_58131_52831360();
   scope->scopes[5] = makewdec_58136_52830940();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49737260();
   scope->behaviors[1] = make__58680100();
   scope->behaviors[2] = make__58679900();
   scope->behaviors[3] = make__58679440();
   scope->behaviors[4] = make__58703760();
   scope->behaviors[5] = make__58703120();
   scope->behaviors[6] = make__58702880();
   scope->behaviors[7] = make__58702260();
   scope->behaviors[8] = make__58702060();
   scope->behaviors[9] = make__58701560();
   scope->behaviors[10] = make__58701280();
   scope->behaviors[11] = make__58700700();
   scope->behaviors[12] = make__58700440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_49737060;

SignalI reg__0_49835660_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereg__0_49835660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49835660_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__accum_58141_49737060;
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

SignalI reg__1_50668280_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereg__1_50668280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50668280_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__accum_58141_49737060;
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

Scope anum_58142_49736640;

Scope makeanum_58142_49736640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_49736640 = scope;
   scope->owner = (Object)channel__accum_58141_49737060;
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

Scope raddr_58145_49735980;

Scope makeraddr_58145_49735980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_49735980 = scope;
   scope->owner = (Object)channel__accum_58141_49737060;
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

Scope waddr_58149_49735320;

Scope makewaddr_58149_49735320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_49735320 = scope;
   scope->owner = (Object)channel__accum_58141_49737060;
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

Scope rinc_58153_49734300;

SignalI abus__r_49757980_rinc_58153_49734300_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_49757980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49757980_rinc_58153_49734300_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)rinc_58153_49734300;
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

Scope makerinc_58153_49734300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_49734300 = scope;
   scope->owner = (Object)channel__accum_58141_49737060;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49757980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_49757860;

SignalI abus__w_49757320_winc_58158_49757860_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_49757320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49757320_winc_58158_49757860_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)winc_58158_49757860;
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

Scope makewinc_58158_49757860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_49757860 = scope;
   scope->owner = (Object)channel__accum_58141_49737060;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49757320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_49757080;

SignalI abus__r_49756340_rdec_58163_49757080_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_49756340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49756340_rdec_58163_49757080_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)rdec_58163_49757080;
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

Scope makerdec_58163_49757080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_49757080 = scope;
   scope->owner = (Object)channel__accum_58141_49737060;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49756340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_49756220;

SignalI abus__w_49755820_wdec_58168_49756220_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_49755820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49755820_wdec_58168_49756220_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)wdec_58168_49756220;
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

Scope makewdec_58168_49756220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_49756220 = scope;
   scope->owner = (Object)channel__accum_58141_49737060;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49755820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58698000;

Behavior make__58698000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58698000 = behavior;
   behavior->owner = (Object)channel__accum_58141_49737060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49835660_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   reg__0_49835660_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   reg__0_49835660_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(reg__0_49835660_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,reg__0_49835660_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
reg__0_49835660_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[reg__0_49835660_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58698160();

   return behavior;
}

Behavior __58697800;

Behavior make__58697800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58697800 = behavior;
   behavior->owner = (Object)channel__accum_58141_49737060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58143_45606580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58697960();

   return behavior;
}

Behavior __58697260;

Behavior make__58697260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58697260 = behavior;
   behavior->owner = (Object)channel__accum_58141_49737060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50668280_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   reg__1_50668280_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   reg__1_50668280_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(reg__1_50668280_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,reg__1_50668280_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
reg__1_50668280_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[reg__1_50668280_channel__accum_58141_49737060_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58697480();

   return behavior;
}

Behavior __58696940;

Behavior make__58696940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58696940 = behavior;
   behavior->owner = (Object)channel__accum_58141_49737060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58144_47880700_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58697160();

   return behavior;
}

Scope makechannel__accum_58141_49737060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_49737060 = scope;
   scope->owner = (Object)layer0_58_84_51286360;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49835660();
   scope->inners[1] = makereg__1_50668280();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_49736640();
   scope->scopes[1] = makeraddr_58145_49735980();
   scope->scopes[2] = makewaddr_58149_49735320();
   scope->scopes[3] = makerinc_58153_49734300();
   scope->scopes[4] = makewinc_58158_49757860();
   scope->scopes[5] = makerdec_58163_49757080();
   scope->scopes[6] = makewdec_58168_49756220();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58698000();
   scope->behaviors[1] = make__58697800();
   scope->behaviors[2] = make__58697260();
   scope->behaviors[3] = make__58696940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_51368420;

SignalI lv0_51478320_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makelv0_51478320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51478320_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58173_51368420;
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

SignalI lv1_51572260_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makelv1_51572260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_51572260_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58173_51368420;
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

SignalI av0_51789040_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeav0_51789040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_51789040_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58173_51368420;
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

SignalI av1_51833340_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeav1_51833340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_51833340_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58173_51368420;
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

SignalI rv_51984600_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerv_51984600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_51984600_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58173_51368420;
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

SignalI lvok0_51984580_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makelvok0_51984580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_51984580_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58173_51368420;
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

SignalI lvok1_51984560_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makelvok1_51984560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_51984560_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58173_51368420;
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

SignalI rvok_51984540_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makervok_51984540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_51984540_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58173_51368420;
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

SignalI run_51984520_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerun_51984520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_51984520_mac__n1_58173_51368420_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58173_51368420;
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

Behavior __51707340;

Behavior make__51707340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51707340 = behavior;
   behavior->owner = (Object)mac__n1_58173_51368420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos += 1;
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos = realloc(clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos*sizeof(Object));
clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos[clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos-1] = (Object)behavior;
   behavior->block = make__51984400();

   return behavior;
}

Scope makemac__n1_58173_51368420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_51368420 = scope;
   scope->owner = (Object)layer0_58_84_51286360;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51478320();
   scope->inners[1] = makelv1_51572260();
   scope->inners[2] = makeav0_51789040();
   scope->inners[3] = makeav1_51833340();
   scope->inners[4] = makerv_51984600();
   scope->inners[5] = makelvok0_51984580();
   scope->inners[6] = makelvok1_51984560();
   scope->inners[7] = makervok_51984540();
   scope->inners[8] = makerun_51984520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51707340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58180_51707220;

SignalI reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereg__0_51819880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__bias_58180_51707220;
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

SignalI reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereg__1_51968760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__bias_58180_51707220;
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

Scope anum_58181_51706920;

Scope makeanum_58181_51706920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58181_51706920 = scope;
   scope->owner = (Object)channel__bias_58180_51707220;
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

Scope raddr_58184_51706460;

Scope makeraddr_58184_51706460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58184_51706460 = scope;
   scope->owner = (Object)channel__bias_58180_51707220;
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

Scope waddr_58188_51705880;

Scope makewaddr_58188_51705880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58188_51705880 = scope;
   scope->owner = (Object)channel__bias_58180_51707220;
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

Scope rinc_58192_51705460;

SignalI abus__r_51705080_rinc_58192_51705460_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_51705080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51705080_rinc_58192_51705460_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)rinc_58192_51705460;
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

Scope makerinc_58192_51705460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_51705460 = scope;
   scope->owner = (Object)channel__bias_58180_51707220;
   scope->name = "rinc:192";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51705080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58196_51704960;

SignalI abus__w_51704580_winc_58196_51704960_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_51704580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51704580_winc_58196_51704960_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)winc_58196_51704960;
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

Behavior __58730740;

Behavior make__58730740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58730740 = behavior;
   behavior->owner = (Object)winc_58196_51704960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51704580_winc_58196_51704960_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   abus__w_51704580_winc_58196_51704960_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   abus__w_51704580_winc_58196_51704960_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(abus__w_51704580_winc_58196_51704960_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,abus__w_51704580_winc_58196_51704960_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
abus__w_51704580_winc_58196_51704960_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[abus__w_51704580_winc_58196_51704960_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58730940();

   return behavior;
}

Behavior __58730340;

Behavior make__58730340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58730340 = behavior;
   behavior->owner = (Object)winc_58196_51704960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58199_51350180_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58730680();

   return behavior;
}

Scope makewinc_58196_51704960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58196_51704960 = scope;
   scope->owner = (Object)channel__bias_58180_51707220;
   scope->name = "winc:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51704580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58730740();
   scope->behaviors[1] = make__58730340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58200_51704060;

SignalI abus__r_51703620_rdec_58200_51704060_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_51703620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51703620_rdec_58200_51704060_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)rdec_58200_51704060;
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

Scope makerdec_58200_51704060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58200_51704060 = scope;
   scope->owner = (Object)channel__bias_58180_51707220;
   scope->name = "rdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51703620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58205_51703500;

SignalI abus__w_51703120_wdec_58205_51703500_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_51703120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51703120_wdec_58205_51703500_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)wdec_58205_51703500;
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

Scope makewdec_58205_51703500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58205_51703500 = scope;
   scope->owner = (Object)channel__bias_58180_51707220;
   scope->name = "wdec:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51703120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58735640;

Behavior make__58735640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58735640 = behavior;
   behavior->owner = (Object)channel__bias_58180_51707220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58735820();

   return behavior;
}

Behavior __58735360;

Behavior make__58735360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58735360 = behavior;
   behavior->owner = (Object)channel__bias_58180_51707220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_49044300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58182_49044300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58182_49044300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58182_49044300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58182_49044300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58182_49044300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58182_49044300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58735600();

   return behavior;
}

Behavior __58734720;

Behavior make__58734720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58734720 = behavior;
   behavior->owner = (Object)channel__bias_58180_51707220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58734880();

   return behavior;
}

Behavior __58734520;

Behavior make__58734520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58734520 = behavior;
   behavior->owner = (Object)channel__bias_58180_51707220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_49180120_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58183_49180120_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58183_49180120_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58183_49180120_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58183_49180120_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58183_49180120_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58183_49180120_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58734680();

   return behavior;
}

Behavior __58733960;

Behavior make__58733960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58733960 = behavior;
   behavior->owner = (Object)channel__bias_58180_51707220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[reg__0_51819880_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58734180();

   return behavior;
}

Behavior __58733760;

Behavior make__58733760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58733760 = behavior;
   behavior->owner = (Object)channel__bias_58180_51707220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58197_51239220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58197_51239220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58197_51239220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58197_51239220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58197_51239220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58197_51239220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58197_51239220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58733920();

   return behavior;
}

Behavior __58733260;

Behavior make__58733260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58733260 = behavior;
   behavior->owner = (Object)channel__bias_58180_51707220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[reg__1_51968760_channel__bias_58180_51707220_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58733440();

   return behavior;
}

Behavior __58732920;

Behavior make__58732920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58732920 = behavior;
   behavior->owner = (Object)channel__bias_58180_51707220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_51350300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58198_51350300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58198_51350300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58198_51350300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58198_51350300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58198_51350300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58198_51350300_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58733220();

   return behavior;
}

Scope makechannel__bias_58180_51707220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58180_51707220 = scope;
   scope->owner = (Object)layer0_58_84_51286360;
   scope->name = "channel_bias:180";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51819880();
   scope->inners[1] = makereg__1_51968760();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58181_51706920();
   scope->scopes[1] = makeraddr_58184_51706460();
   scope->scopes[2] = makewaddr_58188_51705880();
   scope->scopes[3] = makerinc_58192_51705460();
   scope->scopes[4] = makewinc_58196_51704960();
   scope->scopes[5] = makerdec_58200_51704060();
   scope->scopes[6] = makewdec_58205_51703500();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58735640();
   scope->behaviors[1] = make__58735360();
   scope->behaviors[2] = make__58734720();
   scope->behaviors[3] = make__58734520();
   scope->behaviors[4] = make__58733960();
   scope->behaviors[5] = make__58733760();
   scope->behaviors[6] = make__58733260();
   scope->behaviors[7] = make__58732920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58210_53050440;

SignalI reg__0_53179680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereg__0_53179680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53179680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__z_58210_53050440;
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

SignalI reg__1_45722820_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereg__1_45722820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_45722820_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__z_58210_53050440;
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

Scope anum_58211_53050140;

Scope makeanum_58211_53050140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58211_53050140 = scope;
   scope->owner = (Object)channel__z_58210_53050440;
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

Scope raddr_58214_53049620;

Scope makeraddr_58214_53049620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58214_53049620 = scope;
   scope->owner = (Object)channel__z_58210_53050440;
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

Scope waddr_58218_53049100;

Scope makewaddr_58218_53049100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58218_53049100 = scope;
   scope->owner = (Object)channel__z_58210_53050440;
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

Scope rinc_58222_53048680;

SignalI abus__r_53048300_rinc_58222_53048680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_53048300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53048300_rinc_58222_53048680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)rinc_58222_53048680;
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

Scope makerinc_58222_53048680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58222_53048680 = scope;
   scope->owner = (Object)channel__z_58210_53050440;
   scope->name = "rinc:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53048300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58226_53048180;

SignalI abus__w_53047760_winc_58226_53048180_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_53047760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53047760_winc_58226_53048180_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)winc_58226_53048180;
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

Scope makewinc_58226_53048180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58226_53048180 = scope;
   scope->owner = (Object)channel__z_58210_53050440;
   scope->name = "winc:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53047760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58230_53047580;

SignalI abus__r_53047160_rdec_58230_53047580_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_53047160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53047160_rdec_58230_53047580_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)rdec_58230_53047580;
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

Scope makerdec_58230_53047580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58230_53047580 = scope;
   scope->owner = (Object)channel__z_58210_53050440;
   scope->name = "rdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53047160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58235_53046980;

SignalI abus__w_53046600_wdec_58235_53046980_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_53046600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53046600_wdec_58235_53046980_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)wdec_58235_53046980;
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

Scope makewdec_58235_53046980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58235_53046980 = scope;
   scope->owner = (Object)channel__z_58210_53050440;
   scope->name = "wdec:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53046600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58728900;

Behavior make__58728900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58728900 = behavior;
   behavior->owner = (Object)channel__z_58210_53050440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53179680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   reg__0_53179680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   reg__0_53179680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(reg__0_53179680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,reg__0_53179680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
reg__0_53179680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[reg__0_53179680_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58729060();

   return behavior;
}

Behavior __58728700;

Behavior make__58728700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58728700 = behavior;
   behavior->owner = (Object)channel__z_58210_53050440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58212_49363020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58728860();

   return behavior;
}

Behavior __58752520;

Behavior make__58752520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58752520 = behavior;
   behavior->owner = (Object)channel__z_58210_53050440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_45722820_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   reg__1_45722820_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   reg__1_45722820_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(reg__1_45722820_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,reg__1_45722820_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
reg__1_45722820_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[reg__1_45722820_channel__z_58210_53050440_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58752840();

   return behavior;
}

Behavior __58752240;

Behavior make__58752240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58752240 = behavior;
   behavior->owner = (Object)channel__z_58210_53050440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58213_49472740_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58752440();

   return behavior;
}

Scope makechannel__z_58210_53050440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58210_53050440 = scope;
   scope->owner = (Object)layer0_58_84_51286360;
   scope->name = "channel_z:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53179680();
   scope->inners[1] = makereg__1_45722820();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58211_53050140();
   scope->scopes[1] = makeraddr_58214_53049620();
   scope->scopes[2] = makewaddr_58218_53049100();
   scope->scopes[3] = makerinc_58222_53048680();
   scope->scopes[4] = makewinc_58226_53048180();
   scope->scopes[5] = makerdec_58230_53047580();
   scope->scopes[6] = makewdec_58235_53046980();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58728900();
   scope->behaviors[1] = make__58728700();
   scope->behaviors[2] = make__58752520();
   scope->behaviors[3] = make__58752240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58240_49181240;

SignalI lv0_49343120_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makelv0_49343120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49343120_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58240_49181240;
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

SignalI lv1_49478240_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makelv1_49478240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49478240_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58240_49181240;
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

SignalI rv0_49671540_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerv0_49671540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_49671540_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58240_49181240;
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

SignalI rv1_49822480_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerv1_49822480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_49822480_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58240_49181240;
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

SignalI lvok0_49822460_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makelvok0_49822460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49822460_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58240_49181240;
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

SignalI lvok1_49822440_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makelvok1_49822440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49822440_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58240_49181240;
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

SignalI rvok0_49822420_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makervok0_49822420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49822420_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58240_49181240;
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

SignalI rvok1_49822400_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makervok1_49822400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_49822400_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58240_49181240;
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

SignalI run_49822380_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerun_49822380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49822380_add__n_58240_49181240_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58240_49181240;
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

Behavior __53026220;

Behavior make__53026220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53026220 = behavior;
   behavior->owner = (Object)add__n_58240_49181240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos += 1;
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos = realloc(clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos*sizeof(Object));
clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos[clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos-1] = (Object)behavior;
   behavior->block = make__49822080();

   return behavior;
}

Scope makeadd__n_58240_49181240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58240_49181240 = scope;
   scope->owner = (Object)layer0_58_84_51286360;
   scope->name = "add_n:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49343120();
   scope->inners[1] = makelv1_49478240();
   scope->inners[2] = makerv0_49671540();
   scope->inners[3] = makerv1_49822480();
   scope->inners[4] = makelvok0_49822460();
   scope->inners[5] = makelvok1_49822440();
   scope->inners[6] = makervok0_49822420();
   scope->inners[7] = makervok1_49822400();
   scope->inners[8] = makerun_49822380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53026220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51981200;

Behavior make__51981200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51981200 = behavior;
   behavior->owner = (Object)layer0_58_84_51286360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos += 1;
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos = realloc(clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos*sizeof(Object));
clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos[clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos-1] = (Object)behavior;
   behavior->block = make__50920860();

   return behavior;
}

Behavior __53044540;

Behavior make__53044540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53044540 = behavior;
   behavior->owner = (Object)layer0_58_84_51286360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos += 1;
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos = realloc(clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos*sizeof(Object));
clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos[clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos-1] = (Object)behavior;
   behavior->block = make__51980720();

   return behavior;
}

Behavior __57475900;

Behavior make__57475900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57475900 = behavior;
   behavior->owner = (Object)layer0_58_84_51286360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos += 1;
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos = realloc(clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos*sizeof(Object));
clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos[clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos-1] = (Object)behavior;
   behavior->block = make__53044400();

   return behavior;
}

Behavior __58631360;

Behavior make__58631360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58631360 = behavior;
   behavior->owner = (Object)layer0_58_84_51286360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_57514600_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   req_57514600_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   req_57514600_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(req_57514600_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,req_57514600_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
req_57514600_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[req_57514600_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_53026020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   ack__mac_53026020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   ack__mac_53026020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(ack__mac_53026020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,ack__mac_53026020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
ack__mac_53026020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[ack__mac_53026020_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58631600();

   return behavior;
}

Behavior __58664260;

Behavior make__58664260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58664260 = behavior;
   behavior->owner = (Object)layer0_58_84_51286360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[clk_57514660_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[ack_53026040_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[rst_57514640_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_49720000_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   value__z0_49720000_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   value__z0_49720000_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(value__z0_49720000_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,value__z0_49720000_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
value__z0_49720000_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[value__z0_49720000_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_49833580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   value__z1_49833580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   value__z1_49833580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(value__z1_49833580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,value__z1_49833580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
value__z1_49833580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[value__z1_49833580_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_51060500_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   ack__a0_51060500_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   ack__a0_51060500_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(ack__a0_51060500_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,ack__a0_51060500_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
ack__a0_51060500_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[ack__a0_51060500_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_51060480_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   ack__a1_51060480_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   ack__a1_51060480_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(ack__a1_51060480_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,ack__a1_51060480_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
ack__a1_51060480_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[ack__a1_51060480_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58631880();

   return behavior;
}

Behavior __58664080;

Behavior make__58664080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58664080 = behavior;
   behavior->owner = (Object)layer0_58_84_51286360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_51704780_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   ack__mac_51704780_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   ack__mac_51704780_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(ack__mac_51704780_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,ack__mac_51704780_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
ack__mac_51704780_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[ack__mac_51704780_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_49346860_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   a_49346860_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   a_49346860_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(a_49346860_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,a_49346860_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
a_49346860_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[a_49346860_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_52525040_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   a_52525040_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   a_52525040_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(a_52525040_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,a_52525040_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
a_52525040_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[a_52525040_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__58631820();

   return behavior;
}

Scope makelayer0_58_84_51286360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_51286360 = scope;
   scope->owner = (Object)layer0_58_840_57475580;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_51704640();
   scope->systemIs[1] = makefunc0_49346440();
   scope->systemIs[2] = makefunc1_52524760();
   scope->num_inners = 33;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_53026060();
   scope->inners[1] = makeack_53026040();
   scope->inners[2] = makeack__mac_53026020();
   scope->inners[3] = makeack__add_53025980();
   scope->inners[4] = make_5897_53163260();
   scope->inners[5] = make_5895_53163240();
   scope->inners[6] = make_5896_53163160();
   scope->inners[7] = make_58143_45606580();
   scope->inners[8] = make_58144_47880700();
   scope->inners[9] = make_58126_48758200();
   scope->inners[10] = make_58124_48758180();
   scope->inners[11] = make_58125_48758080();
   scope->inners[12] = make_58182_49044300();
   scope->inners[13] = make_58183_49180120();
   scope->inners[14] = make_58212_49363020();
   scope->inners[15] = make_58213_49472740();
   scope->inners[16] = makevalue__z0_49720000();
   scope->inners[17] = makevalue__z1_49833580();
   scope->inners[18] = makevalue__a0_50890280();
   scope->inners[19] = makevalue__a1_51060560();
   scope->inners[20] = makeflag__z0_51060540();
   scope->inners[21] = makeflag__z1_51060520();
   scope->inners[22] = makeack__a0_51060500();
   scope->inners[23] = makeack__a1_51060480();
   scope->inners[24] = make_58197_51239220();
   scope->inners[25] = make_58198_51350300();
   scope->inners[26] = make_58199_51350180();
   scope->inners[27] = make_5899_51350160();
   scope->inners[28] = make_58100_51350020();
   scope->inners[29] = make_58101_51421720();
   scope->inners[30] = make_58128_51421700();
   scope->inners[31] = make_58129_51421620();
   scope->inners[32] = make_58130_51657640();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_51286060();
   scope->scopes[1] = makechannel__w1_58112_52833340();
   scope->scopes[2] = makechannel__accum_58141_49737060();
   scope->scopes[3] = makemac__n1_58173_51368420();
   scope->scopes[4] = makechannel__bias_58180_51707220();
   scope->scopes[5] = makechannel__z_58210_53050440();
   scope->scopes[6] = makeadd__n_58240_49181240();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51981200();
   scope->behaviors[1] = make__53044540();
   scope->behaviors[2] = make__57475900();
   scope->behaviors[3] = make__58631360();
   scope->behaviors[4] = make__58664260();
   scope->behaviors[5] = make__58664080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_57475580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_57475580 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_57514660();
   systemT->inputs[1] = makerst_57514640();
   systemT->inputs[2] = makefill_57514620();
   systemT->inputs[3] = makereq_57514600();
   systemT->inputs[4] = make_5815_57651060();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_57651020();
   systemT->outputs[1] = make_5813_57651000();
   systemT->outputs[2] = make_5814_57650920();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5855_57746420();
   systemT->inouts[1] = make_5856_57817320();

   systemT->scope = makelayer0_58_84_51286360();

   return systemT;
}