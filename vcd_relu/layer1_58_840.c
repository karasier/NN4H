#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_49886080;

SignalI clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeclk_50600820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_840_49886080;
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

SignalI rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makerst_50600800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_840_49886080;
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

SignalI req_50600780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makereq_50600780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_50600780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_840_49886080;
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

SignalI _58110_50398160_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_58110_50398160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58110_50398160_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_840_49886080;
   signalI->name = ":110";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58111_50980900_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_58111_50980900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58111_50980900_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_840_49886080;
   signalI->name = ":111";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_50980780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack__layer_50980780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_50980780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_840_49886080;
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

SignalI _58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_58112_50980460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_840_49886080;
   signalI->name = ":112";
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

SignalI _5876_51305180_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_5876_51305180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5876_51305180_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_840_49886080;
   signalI->name = ":76";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __58222360;

Block __58221880;

void code__58221880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57757520(),ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57757420(),ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57757360(),ack__add_47740140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58221880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58221880 = block;
   block->owner = (Object)__58222360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58221880;

   return block;
};

void code__58222360() {
   {
      Value cond = rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58221880();
   }
      }
   }
}

Block make__58222360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58222360 = block;
   block->owner = (Object)__58367880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58222360;

   return block;
};

Block __58367680;

Block __58366320;

Block __58366100;

void code__58366100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,value__z0_50447860_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57757160(),flag__z0_50979500_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58366100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58366100 = block;
   block->owner = (Object)__58366320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58366100;

   return block;
};

void code__58366320() {
 code__58366100();
}

Block make__58366320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58366320 = block;
   block->owner = (Object)__58367680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58366320;

   return block;
};

Block __58367360;

void code__58367360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57757080(),flag__z0_50979500_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58367360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58367360 = block;
   block->owner = (Object)__58367680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58367360;

   return block;
};

void code__58367680() {
   {
      Value cond = ack__add_47740140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58366320();
   }
   else {
  code__58367360();
   }
      }
   }
}

Block make__58367680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58367680 = block;
   block->owner = (Object)__49022460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58367680;

   return block;
};

Block __49022040;

Block __49021400;

void code__49021400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57756940(),ack__a0_50979480_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__49021400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49021400 = block;
   block->owner = (Object)__49022040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49021400;

   return block;
};

Block __49044520;

Block __49044180;

void code__49044180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_50979560_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_5876_51305180_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57756560(),ack__a0_50979480_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__49044180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49044180 = block;
   block->owner = (Object)__49044520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49044180;

   return block;
};

void code__49044520() {
 code__49044180();
}

Block make__49044520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49044520 = block;
   block->owner = (Object)__49022040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49044520;

   return block;
};

void code__49022040() {
   {
      Value cond = rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49021400();
   }
   else if (value2integer(flag__z0_50979500_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value)) {
  code__49044520();
   }
      }
   }
}

Block make__49022040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49022040 = block;
   block->owner = (Object)__49886580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49022040;

   return block;
};

Block __56797160;

void code__56797160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_50600780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_47741320_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56797160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56797160 = block;
   block->owner = (Object)__56796340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56797160;

   return block;
};

Block __56798320;

void code__56798320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,clk_51032020_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,ack_51031980_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,rst_51031900_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_50447860_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_50979480_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,ack__layer_50980780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56798320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56798320 = block;
   block->owner = (Object)__56883400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56798320;

   return block;
};

Block __56798140;

void code__56798140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_51031860_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58317_48884700_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_57470020_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,value__a0_50979560_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56798140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56798140 = block;
   block->owner = (Object)__56883240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56798140;

   return block;
};

Block __55499760;

void code__55499760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51333880_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            idx = value2integer(abus__r_49443460_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49443560_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__55499760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55499760 = block;
   block->owner = (Object)__56211080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55499760;

   return block;
};

Block __56881380;

void code__56881380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49443560_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58276_49073540_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56881380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56881380 = block;
   block->owner = (Object)__56881060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56881380;

   return block;
};

Block __56881020;

void code__56881020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58276_49073540_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,dbus__r_49443560_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56881020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56881020 = block;
   block->owner = (Object)__56880760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56881020;

   return block;
};

Block __56880180;

void code__56880180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49505980_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56880180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56880180 = block;
   block->owner = (Object)__56879940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56880180;

   return block;
};

Block __56879900;

void code__56879900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,trig__r_49505980_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56879900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56879900 = block;
   block->owner = (Object)__56879700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56879900;

   return block;
};

Block __56879060;

void code__56879060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49443460_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56879060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56879060 = block;
   block->owner = (Object)__56878800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56879060;

   return block;
};

Block __56878700;

void code__56878700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,abus__r_49443460_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56878700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56878700 = block;
   block->owner = (Object)__56878460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56878700;

   return block;
};

Block __56974780;

void code__56974780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56355840_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56974780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56974780 = block;
   block->owner = (Object)__56974500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56974780;

   return block;
};

Block __56974420;

void code__56974420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,reg__0_56355840_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56974420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56974420 = block;
   block->owner = (Object)__56973960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56974420;

   return block;
};

Block __57017700;

Block __57017520;

Block __57017120;

void code__57017120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57586660(),_58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57586600(),_58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57017120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57017120 = block;
   block->owner = (Object)__57017520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57017120;

   return block;
};

void code__57017520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57586820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57017120();
   }
      }
   }
}

Block make__57017520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57017520 = block;
   block->owner = (Object)__57017700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57017520;

   return block;
};

Block __57073600;

Block __57073280;

void code__57073280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57586320(),_58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57073280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57073280 = block;
   block->owner = (Object)__57073600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57073280;

   return block;
};

void code__57073600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57586480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57073280();
   }
      }
   }
}

Block make__57073600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57073600 = block;
   block->owner = (Object)__57017700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57073600;

   return block;
};

Block __57072120;

void code__57072120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57585780(),rvok_57017980_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57585700(),lvok0_57018000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57585560(),wok0_57017960_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57072120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57072120 = block;
   block->owner = (Object)__57017700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57072120;

   return block;
};

Block __57456300;

Block __57455620;

Block __57455400;

Block __57455080;

Block __57454580;

void code__57454580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58110_50398160_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,rv_57018020_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57454580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57454580 = block;
   block->owner = (Object)__57455080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57454580;

   return block;
};

Block __57758720;

void code__57758720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58111_50980900_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,rv_57018020_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57758720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57758720 = block;
   block->owner = (Object)__57455080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57758720;

   return block;
};

void code__57455080() {
{
      Value value = _58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__57584200())) {
    code__57454580();
         }
         else if (value2integer(value) == value2integer(make__57583920())) {
    code__57758720();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57582160(),rvok_57017980_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
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
                  src0 = _58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                  src1 = make__57712500();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57712400();
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
                        src0 = _58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__57711980();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__57711860();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57455080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57455080 = block;
   block->owner = (Object)__57455400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57455080;

   return block;
};

void code__57455400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57584780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57455080();
   }
      }
   }
}

Block make__57455400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57455400 = block;
   block->owner = (Object)__57455620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57455400;

   return block;
};

void code__57455620() {
 code__57455400();
}

Block make__57455620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57455620 = block;
   block->owner = (Object)__57456300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57455620;

   return block;
};

Block __58053680;

Block __58053520;

Block __58053080;

Block __58050500;

Block __58050300;

void code__58050300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57711420(),_58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58276_49073540_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,lv0_56785560_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57711280(),lvok0_57018000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58050300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58050300 = block;
   block->owner = (Object)__58050500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58050300;

   return block;
};

void code__58050500() {
 code__58050300();
}

Block make__58050500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58050500 = block;
   block->owner = (Object)__58053080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58050500;

   return block;
};

Block __58052860;

void code__58052860() {
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
                  src0 = _58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                  src1 = make__57711180();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57711140();
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
                        src0 = _58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__57710760();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__57709960();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57709600(),_58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58052860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58052860 = block;
   block->owner = (Object)__58053080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58052860;

   return block;
};

void code__58053080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57711500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58050500();
   }
   else {
  code__58052860();
   }
      }
   }
}

Block make__58053080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58053080 = block;
   block->owner = (Object)__58053520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58053080;

   return block;
};

void code__58053520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57711600();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58053080();
   }
      }
   }
}

Block make__58053520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58053520 = block;
   block->owner = (Object)__58053680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58053520;

   return block;
};

void code__58053680() {
 code__58053520();
}

Block make__58053680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58053680 = block;
   block->owner = (Object)__57456300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58053680;

   return block;
};

Block __58510620;

Block __58510000;

Block __58509740;

void code__58509740() {
}

Block make__58509740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58509740 = block;
   block->owner = (Object)__58510000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58509740;

   return block;
};

Block __49739960;

void code__49739960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_56885000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57708300(),wok0_57017960_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__49739960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49739960 = block;
   block->owner = (Object)__58510000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49739960;

   return block;
};

void code__58510000() {
 code__58509740();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_56885000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
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
                              src0 = lv0_56785560_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_57018020_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57708520();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_56885000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
 code__49739960();
}

Block make__58510000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58510000 = block;
   block->owner = (Object)__58510620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58510000;

   return block;
};

void code__58510620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57709140(),ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57709000(),run_57017940_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
 code__58510000();
}

Block make__58510620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58510620 = block;
   block->owner = (Object)__57456300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58510620;

   return block;
};

Block __50464740;

void code__50464740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57708080(),wok0_57017960_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57707980(),lvok0_57018000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57707860(),rvok_57017980_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__50464740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50464740 = block;
   block->owner = (Object)__57456300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50464740;

   return block;
};

void code__57456300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57585280(),run_57017940_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_57017980_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57455620();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_57018000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58053680();
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
               src0 = lvok0_57018000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               src1 = rvok_57017980_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_57017960_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58510620();
   }
      }
   }
   {
      Value cond = wok0_57017960_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50464740();
   }
      }
   }
}

Block make__57456300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57456300 = block;
   block->owner = (Object)__57017700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57456300;

   return block;
};

Block __57071200;

void code__57071200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57707620(),av0_56885000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57071200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57071200 = block;
   block->owner = (Object)__57017700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57071200;

   return block;
};

void code__57017700() {
 code__57017520();
 code__57073600();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57586220(),ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57586080(),run_57017940_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_57017940_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57072120();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_47741320_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
         src1 = run_57017940_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57456300();
   }
   else {
  code__57071200();
   }
      }
   }
}

Block make__57017700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57017700 = block;
   block->owner = (Object)__50773660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57017700;

   return block;
};

Block __55662220;

void code__55662220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51398440_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            idx = value2integer(abus__r_51015940_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51016080_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__55662220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55662220 = block;
   block->owner = (Object)__56342320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55662220;

   return block;
};

Block __56970740;

void code__56970740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51016080_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58316_48884760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56970740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56970740 = block;
   block->owner = (Object)__56970500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56970740;

   return block;
};

Block __56970420;

void code__56970420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_48884760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,dbus__r_51016080_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56970420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56970420 = block;
   block->owner = (Object)__56970040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56970420;

   return block;
};

Block __56969380;

void code__56969380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50769660_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56969380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56969380 = block;
   block->owner = (Object)__56969080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56969380;

   return block;
};

Block __56969040;

void code__56969040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,trig__r_50769660_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56969040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56969040 = block;
   block->owner = (Object)__56968840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56969040;

   return block;
};

Block __56968460;

void code__56968460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51015940_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58315_48884020_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56968460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56968460 = block;
   block->owner = (Object)__56968240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56968460;

   return block;
};

Block __56968120;

void code__56968120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_48884020_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,abus__r_51015940_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56968120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56968120 = block;
   block->owner = (Object)__56967840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56968120;

   return block;
};

Block __57022740;

void code__57022740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56467600_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57022740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57022740 = block;
   block->owner = (Object)__57022400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57022740;

   return block;
};

Block __57022360;

void code__57022360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,reg__0_56467600_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57022360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57022360 = block;
   block->owner = (Object)__57022080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57022360;

   return block;
};

Block __57067060;

Block __57066900;

void code__57066900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57705000(),_58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57066900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57066900 = block;
   block->owner = (Object)__57067060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57066900;

   return block;
};

Block __57089820;

Block __57089260;

void code__57089260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,lv0_56881720_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57761740(),lvok0_57067320_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57089260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57089260 = block;
   block->owner = (Object)__57089820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57089260;

   return block;
};

Block __57584960;

Block __57584560;

Block __57583020;

void code__57583020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_48884760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,rv0_57067360_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57761080(),_58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57760980(),rvok0_57067240_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57583020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57583020 = block;
   block->owner = (Object)__57584560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57583020;

   return block;
};

Block __57584340;

void code__57584340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57760900(),_58315_48884020_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57760820(),_58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57584340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57584340 = block;
   block->owner = (Object)__57584560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57584340;

   return block;
};

void code__57584560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57761420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57583020();
   }
   else {
  code__57584340();
   }
      }
   }
}

Block make__57584560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57584560 = block;
   block->owner = (Object)__57584960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57584560;

   return block;
};

void code__57584960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58317_48884700_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57761580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57584560();
   }
      }
   }
}

Block make__57584960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57584960 = block;
   block->owner = (Object)__57089820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57584960;

   return block;
};

Block __57989020;

Block __57988320;

void code__57988320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_56881720_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      src1 = rv0_57067360_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57988320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57988320 = block;
   block->owner = (Object)__57989020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57988320;

   return block;
};

void code__57989020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57760600(),run_57067220_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57760480(),ack__add_47740140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
 code__57988320();
}

Block make__57989020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57989020 = block;
   block->owner = (Object)__57089820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57989020;

   return block;
};

void code__57089820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57704580(),run_57067220_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
 code__57089260();
 code__57584960();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_57067320_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
         src1 = rvok0_57067240_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57989020();
   }
      }
   }
}

Block make__57089820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57089820 = block;
   block->owner = (Object)__57067060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57089820;

   return block;
};

Block __57066220;

void code__57066220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57760160(),lvok0_57067320_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57760040(),rvok0_57067240_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57066220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57066220 = block;
   block->owner = (Object)__57067060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57066220;

   return block;
};

void code__57067060() {
 code__57066900();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57704940(),ack__add_47740140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57704840(),run_57067220_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
         src1 = run_57067220_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57089820();
   }
   else {
  code__57066220();
   }
      }
   }
}

Block make__57067060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57067060 = block;
   block->owner = (Object)__47742560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57067060;

   return block;
};

Value make__57589160() {
   static unsigned long long data[] = { 20ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57589140() {
   static unsigned long long data[] = { 13ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57707600() {
   static unsigned long long data[] = { 4294967294ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__57586820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57586660() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57586600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57586480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57586320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57586220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57586080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57585780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57585700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57585560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57585280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57584780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57584200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57583920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57582160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57712500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57712400() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57711980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57711860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57711600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57711500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57711420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57711280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57711180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57711140() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57710760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57709960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57709600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57709140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57709000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57708520() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57708300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57708080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57707980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57707860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57707620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57705000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57704940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57704840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57704580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57761740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57761580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57761420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57761080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57760980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57760900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57760820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57760600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57760480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57760160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57760040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57757520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57757420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57757360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57757160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57757080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57756940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57756560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_49488840;

SignalI req__mac_47741320_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makereq__mac_47741320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_47741320_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
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

SignalI ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack_47741160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
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

SignalI ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack__mac_47740940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
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

SignalI ack__add_47740140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack__add_47740140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_47740140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
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

SignalI _58276_49073540_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_58276_49073540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58276_49073540_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
   signalI->name = ":276";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_58274_49073460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
   signalI->name = ":274";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_58275_49073340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
   signalI->name = ":275";
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

SignalI _58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_58284_49425580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
   signalI->name = ":284";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58316_48884760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_58316_48884760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58316_48884760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
   signalI->name = ":316";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58317_48884700_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_58317_48884700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58317_48884700_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
   signalI->name = ":317";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_58314_48884640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
   signalI->name = ":314";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58315_48884020_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_58315_48884020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_48884020_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
   signalI->name = ":315";
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

SignalI _58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_58329_49993040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
   signalI->name = ":329";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_50447860_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makevalue__z0_50447860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_50447860_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
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

SignalI value__a0_50979560_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makevalue__a0_50979560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_50979560_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
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

SignalI flag__z0_50979500_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeflag__z0_50979500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_50979500_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
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

SignalI ack__a0_50979480_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack__a0_50979480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_50979480_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)layer1_58_84_49488840;
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

SystemI counter_51031640;

SystemI makecounter_51031640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_51031640 = systemI;
   systemI->owner = (Object)layer1_58_84_49488840;
   systemI->name = "counter";
   systemI->system = counter_58_8400_51013760;

   return systemI;
};

SystemI func0_57469740;

SystemI makefunc0_57469740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_57469740 = systemI;
   systemI->owner = (Object)layer1_58_84_49488840;
   systemI->name = "func0";
   systemI->system = func0_58_8400_56813300;

   return systemI;
};

Scope channel__w0_58267_49488380;

SignalI trig__r_49505980_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI maketrig__r_49505980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49505980_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__w0_58267_49488380;
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

SignalI dbus__r_49443560_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makedbus__r_49443560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49443560_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__w0_58267_49488380;
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

SignalI abus__r_49443460_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__r_49443460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49443460_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__w0_58267_49488380;
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

SignalI mem_51333880_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makemem_51333880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51333880_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__w0_58267_49488380;
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
         src0 = make__57589160();
         src1 = make__57589140();
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

Scope raddr_58268_49511540;

Scope makeraddr_58268_49511540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58268_49511540 = scope;
   scope->owner = (Object)channel__w0_58267_49488380;
   scope->name = "raddr:268";
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

Scope rinc_58273_49507500;

Scope makerinc_58273_49507500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_49507500 = scope;
   scope->owner = (Object)channel__w0_58267_49488380;
   scope->name = "rinc:273";
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

Scope rdec_58277_49506540;

Scope makerdec_58277_49506540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58277_49506540 = scope;
   scope->owner = (Object)channel__w0_58267_49488380;
   scope->name = "rdec:277";
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

Behavior __56211080;

Behavior make__56211080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56211080 = behavior;
   behavior->owner = (Object)channel__w0_58267_49488380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg += 1;
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg = realloc(clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg*sizeof(Object));
clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg[clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg-1] = (Object)behavior;
   behavior->block = make__55499760();

   return behavior;
}

Behavior __56881060;

Behavior make__56881060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56881060 = behavior;
   behavior->owner = (Object)channel__w0_58267_49488380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49443560_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   dbus__r_49443560_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   dbus__r_49443560_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(dbus__r_49443560_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,dbus__r_49443560_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
dbus__r_49443560_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[dbus__r_49443560_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56881380();

   return behavior;
}

Behavior __56880760;

Behavior make__56880760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56880760 = behavior;
   behavior->owner = (Object)channel__w0_58267_49488380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58276_49073540_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _58276_49073540_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _58276_49073540_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_58276_49073540_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_58276_49073540_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_58276_49073540_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_58276_49073540_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56881020();

   return behavior;
}

Behavior __56879940;

Behavior make__56879940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56879940 = behavior;
   behavior->owner = (Object)channel__w0_58267_49488380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49505980_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   trig__r_49505980_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   trig__r_49505980_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(trig__r_49505980_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,trig__r_49505980_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
trig__r_49505980_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[trig__r_49505980_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56880180();

   return behavior;
}

Behavior __56879700;

Behavior make__56879700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56879700 = behavior;
   behavior->owner = (Object)channel__w0_58267_49488380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_58274_49073460_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56879900();

   return behavior;
}

Behavior __56878800;

Behavior make__56878800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56878800 = behavior;
   behavior->owner = (Object)channel__w0_58267_49488380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49443460_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   abus__r_49443460_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   abus__r_49443460_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(abus__r_49443460_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,abus__r_49443460_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
abus__r_49443460_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[abus__r_49443460_channel__w0_58267_49488380_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56879060();

   return behavior;
}

Behavior __56878460;

Behavior make__56878460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56878460 = behavior;
   behavior->owner = (Object)channel__w0_58267_49488380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_58275_49073340_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56878700();

   return behavior;
}

Scope makechannel__w0_58267_49488380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58267_49488380 = scope;
   scope->owner = (Object)layer1_58_84_49488840;
   scope->name = "channel_w0:267";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49505980();
   scope->inners[1] = makedbus__r_49443560();
   scope->inners[2] = makeabus__r_49443460();
   scope->inners[3] = makemem_51333880();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58268_49511540();
   scope->scopes[1] = makerinc_58273_49507500();
   scope->scopes[2] = makerdec_58277_49506540();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56211080();
   scope->behaviors[1] = make__56881060();
   scope->behaviors[2] = make__56880760();
   scope->behaviors[3] = make__56879940();
   scope->behaviors[4] = make__56879700();
   scope->behaviors[5] = make__56878800();
   scope->behaviors[6] = make__56878460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58282_56210940;

SignalI reg__0_56355840_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makereg__0_56355840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56355840_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__accum_58282_56210940;
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

Scope anum_58283_56210560;

Scope makeanum_58283_56210560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58283_56210560 = scope;
   scope->owner = (Object)channel__accum_58282_56210940;
   scope->name = "anum:283";
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

Scope raddr_58285_56210060;

Scope makeraddr_58285_56210060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58285_56210060 = scope;
   scope->owner = (Object)channel__accum_58282_56210940;
   scope->name = "raddr:285";
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

Scope waddr_58288_56209600;

Scope makewaddr_58288_56209600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58288_56209600 = scope;
   scope->owner = (Object)channel__accum_58282_56210940;
   scope->name = "waddr:288";
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

Scope rinc_58291_56208880;

SignalI abus__r_56208440_rinc_58291_56208880_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__r_56208440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56208440_rinc_58291_56208880_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)rinc_58291_56208880;
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

Scope makerinc_58291_56208880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58291_56208880 = scope;
   scope->owner = (Object)channel__accum_58282_56210940;
   scope->name = "rinc:291";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56208440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58295_56208280;

SignalI abus__w_56207840_winc_58295_56208280_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__w_56207840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56207840_winc_58295_56208280_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)winc_58295_56208280;
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

Scope makewinc_58295_56208280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58295_56208280 = scope;
   scope->owner = (Object)channel__accum_58282_56210940;
   scope->name = "winc:295";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56207840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58299_56207720;

SignalI abus__r_56207300_rdec_58299_56207720_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__r_56207300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56207300_rdec_58299_56207720_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)rdec_58299_56207720;
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

Scope makerdec_58299_56207720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58299_56207720 = scope;
   scope->owner = (Object)channel__accum_58282_56210940;
   scope->name = "rdec:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56207300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58303_56207120;

SignalI abus__w_56206260_wdec_58303_56207120_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__w_56206260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56206260_wdec_58303_56207120_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)wdec_58303_56207120;
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

Scope makewdec_58303_56207120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58303_56207120 = scope;
   scope->owner = (Object)channel__accum_58282_56210940;
   scope->name = "wdec:303";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56206260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56974500;

Behavior make__56974500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56974500 = behavior;
   behavior->owner = (Object)channel__accum_58282_56210940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56355840_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   reg__0_56355840_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   reg__0_56355840_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(reg__0_56355840_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,reg__0_56355840_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
reg__0_56355840_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[reg__0_56355840_channel__accum_58282_56210940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56974780();

   return behavior;
}

Behavior __56973960;

Behavior make__56973960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56973960 = behavior;
   behavior->owner = (Object)channel__accum_58282_56210940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_58284_49425580_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56974420();

   return behavior;
}

Scope makechannel__accum_58282_56210940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58282_56210940 = scope;
   scope->owner = (Object)layer1_58_84_49488840;
   scope->name = "channel_accum:282";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56355840();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58283_56210560();
   scope->scopes[1] = makeraddr_58285_56210060();
   scope->scopes[2] = makewaddr_58288_56209600();
   scope->scopes[3] = makerinc_58291_56208880();
   scope->scopes[4] = makewinc_58295_56208280();
   scope->scopes[5] = makerdec_58299_56207720();
   scope->scopes[6] = makewdec_58303_56207120();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56974500();
   scope->behaviors[1] = make__56973960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58307_56678640;

SignalI lv0_56785560_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makelv0_56785560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_56785560_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)mac__n1_58307_56678640;
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

SignalI av0_56885000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeav0_56885000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_56885000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)mac__n1_58307_56678640;
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

SignalI rv_57018020_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makerv_57018020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_57018020_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)mac__n1_58307_56678640;
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

SignalI lvok0_57018000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makelvok0_57018000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_57018000_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)mac__n1_58307_56678640;
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

SignalI rvok_57017980_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makervok_57017980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_57017980_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)mac__n1_58307_56678640;
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

SignalI wok0_57017960_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makewok0_57017960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_57017960_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)mac__n1_58307_56678640;
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

SignalI run_57017940_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makerun_57017940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_57017940_mac__n1_58307_56678640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)mac__n1_58307_56678640;
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

Behavior __50773660;

Behavior make__50773660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50773660 = behavior;
   behavior->owner = (Object)mac__n1_58307_56678640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos += 1;
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos = realloc(clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos*sizeof(Object));
clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos[clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos-1] = (Object)behavior;
   behavior->block = make__57017700();

   return behavior;
}

Scope makemac__n1_58307_56678640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58307_56678640 = scope;
   scope->owner = (Object)layer1_58_84_49488840;
   scope->name = "mac_n1:307";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_56785560();
   scope->inners[1] = makeav0_56885000();
   scope->inners[2] = makerv_57018020();
   scope->inners[3] = makelvok0_57018000();
   scope->inners[4] = makervok_57017980();
   scope->inners[5] = makewok0_57017960();
   scope->inners[6] = makerun_57017940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50773660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58312_50773520;

SignalI trig__r_50769660_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI maketrig__r_50769660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50769660_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__b0_58312_50773520;
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

SignalI dbus__r_51016080_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makedbus__r_51016080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51016080_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__b0_58312_50773520;
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

SignalI abus__r_51015940_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__r_51015940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51015940_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__b0_58312_50773520;
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

SignalI mem_51398440_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makemem_51398440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51398440_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__b0_58312_50773520;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__57707600(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58313_50772780;

Scope makeraddr_58313_50772780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58313_50772780 = scope;
   scope->owner = (Object)channel__b0_58312_50773520;
   scope->name = "raddr:313";
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

Scope rinc_58318_50771460;

Scope makerinc_58318_50771460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58318_50771460 = scope;
   scope->owner = (Object)channel__b0_58312_50773520;
   scope->name = "rinc:318";
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

Scope rdec_58322_50770780;

Scope makerdec_58322_50770780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58322_50770780 = scope;
   scope->owner = (Object)channel__b0_58312_50773520;
   scope->name = "rdec:322";
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

Behavior __56342320;

Behavior make__56342320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56342320 = behavior;
   behavior->owner = (Object)channel__b0_58312_50773520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg += 1;
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg = realloc(clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg*sizeof(Object));
clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg[clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg-1] = (Object)behavior;
   behavior->block = make__55662220();

   return behavior;
}

Behavior __56970500;

Behavior make__56970500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56970500 = behavior;
   behavior->owner = (Object)channel__b0_58312_50773520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51016080_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   dbus__r_51016080_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   dbus__r_51016080_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(dbus__r_51016080_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,dbus__r_51016080_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
dbus__r_51016080_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[dbus__r_51016080_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56970740();

   return behavior;
}

Behavior __56970040;

Behavior make__56970040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56970040 = behavior;
   behavior->owner = (Object)channel__b0_58312_50773520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58316_48884760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _58316_48884760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _58316_48884760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_58316_48884760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_58316_48884760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_58316_48884760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_58316_48884760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56970420();

   return behavior;
}

Behavior __56969080;

Behavior make__56969080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56969080 = behavior;
   behavior->owner = (Object)channel__b0_58312_50773520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50769660_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   trig__r_50769660_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   trig__r_50769660_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(trig__r_50769660_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,trig__r_50769660_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
trig__r_50769660_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[trig__r_50769660_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56969380();

   return behavior;
}

Behavior __56968840;

Behavior make__56968840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56968840 = behavior;
   behavior->owner = (Object)channel__b0_58312_50773520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_58314_48884640_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56969040();

   return behavior;
}

Behavior __56968240;

Behavior make__56968240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56968240 = behavior;
   behavior->owner = (Object)channel__b0_58312_50773520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51015940_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   abus__r_51015940_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   abus__r_51015940_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(abus__r_51015940_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,abus__r_51015940_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
abus__r_51015940_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[abus__r_51015940_channel__b0_58312_50773520_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56968460();

   return behavior;
}

Behavior __56967840;

Behavior make__56967840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56967840 = behavior;
   behavior->owner = (Object)channel__b0_58312_50773520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_48884020_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _58315_48884020_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _58315_48884020_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_58315_48884020_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_58315_48884020_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_58315_48884020_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_58315_48884020_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56968120();

   return behavior;
}

Scope makechannel__b0_58312_50773520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58312_50773520 = scope;
   scope->owner = (Object)layer1_58_84_49488840;
   scope->name = "channel_b0:312";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50769660();
   scope->inners[1] = makedbus__r_51016080();
   scope->inners[2] = makeabus__r_51015940();
   scope->inners[3] = makemem_51398440();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58313_50772780();
   scope->scopes[1] = makerinc_58318_50771460();
   scope->scopes[2] = makerdec_58322_50770780();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56342320();
   scope->behaviors[1] = make__56970500();
   scope->behaviors[2] = make__56970040();
   scope->behaviors[3] = make__56969080();
   scope->behaviors[4] = make__56968840();
   scope->behaviors[5] = make__56968240();
   scope->behaviors[6] = make__56967840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58327_56342140;

SignalI reg__0_56467600_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makereg__0_56467600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56467600_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__z_58327_56342140;
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

Scope anum_58328_56341840;

Scope makeanum_58328_56341840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58328_56341840 = scope;
   scope->owner = (Object)channel__z_58327_56342140;
   scope->name = "anum:328";
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

Scope raddr_58330_56341320;

Scope makeraddr_58330_56341320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58330_56341320 = scope;
   scope->owner = (Object)channel__z_58327_56342140;
   scope->name = "raddr:330";
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

Scope waddr_58333_56340420;

Scope makewaddr_58333_56340420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58333_56340420 = scope;
   scope->owner = (Object)channel__z_58327_56342140;
   scope->name = "waddr:333";
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

Scope rinc_58336_56339860;

SignalI abus__r_56339380_rinc_58336_56339860_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__r_56339380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56339380_rinc_58336_56339860_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)rinc_58336_56339860;
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

Scope makerinc_58336_56339860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58336_56339860 = scope;
   scope->owner = (Object)channel__z_58327_56342140;
   scope->name = "rinc:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56339380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58339_56339260;

SignalI abus__w_56338820_winc_58339_56339260_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__w_56338820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56338820_winc_58339_56339260_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)winc_58339_56339260;
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

Scope makewinc_58339_56339260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58339_56339260 = scope;
   scope->owner = (Object)channel__z_58327_56342140;
   scope->name = "winc:339";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56338820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58342_56338640;

SignalI abus__r_56338000_rdec_58342_56338640_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__r_56338000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56338000_rdec_58342_56338640_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)rdec_58342_56338640;
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

Scope makerdec_58342_56338640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58342_56338640 = scope;
   scope->owner = (Object)channel__z_58327_56342140;
   scope->name = "rdec:342";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56338000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58346_56337760;

SignalI abus__w_56337380_wdec_58346_56337760_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__w_56337380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56337380_wdec_58346_56337760_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)wdec_58346_56337760;
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

Scope makewdec_58346_56337760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58346_56337760 = scope;
   scope->owner = (Object)channel__z_58327_56342140;
   scope->name = "wdec:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56337380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57022400;

Behavior make__57022400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57022400 = behavior;
   behavior->owner = (Object)channel__z_58327_56342140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56467600_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   reg__0_56467600_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   reg__0_56467600_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(reg__0_56467600_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,reg__0_56467600_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
reg__0_56467600_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[reg__0_56467600_channel__z_58327_56342140_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__57022740();

   return behavior;
}

Behavior __57022080;

Behavior make__57022080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57022080 = behavior;
   behavior->owner = (Object)channel__z_58327_56342140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_58329_49993040_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__57022360();

   return behavior;
}

Scope makechannel__z_58327_56342140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58327_56342140 = scope;
   scope->owner = (Object)layer1_58_84_49488840;
   scope->name = "channel_z:327";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56467600();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58328_56341840();
   scope->scopes[1] = makeraddr_58330_56341320();
   scope->scopes[2] = makewaddr_58333_56340420();
   scope->scopes[3] = makerinc_58336_56339860();
   scope->scopes[4] = makewinc_58339_56339260();
   scope->scopes[5] = makerdec_58342_56338640();
   scope->scopes[6] = makewdec_58346_56337760();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57022400();
   scope->behaviors[1] = make__57022080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58350_56784900;

SignalI lv0_56881720_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makelv0_56881720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_56881720_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)add__n_58350_56784900;
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

SignalI rv0_57067360_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makerv0_57067360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_57067360_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)add__n_58350_56784900;
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

SignalI lvok0_57067320_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makelvok0_57067320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_57067320_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)add__n_58350_56784900;
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

SignalI rvok0_57067240_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makervok0_57067240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_57067240_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)add__n_58350_56784900;
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

SignalI run_57067220_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makerun_57067220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_57067220_add__n_58350_56784900_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)add__n_58350_56784900;
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

Behavior __47742560;

Behavior make__47742560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47742560 = behavior;
   behavior->owner = (Object)add__n_58350_56784900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos += 1;
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos = realloc(clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos*sizeof(Object));
clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos[clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos-1] = (Object)behavior;
   behavior->block = make__57067060();

   return behavior;
}

Scope makeadd__n_58350_56784900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58350_56784900 = scope;
   scope->owner = (Object)layer1_58_84_49488840;
   scope->name = "add_n:350";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_56881720();
   scope->inners[1] = makerv0_57067360();
   scope->inners[2] = makelvok0_57067320();
   scope->inners[3] = makervok0_57067240();
   scope->inners[4] = makerun_57067220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47742560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58367880;

Behavior make__58367880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58367880 = behavior;
   behavior->owner = (Object)layer1_58_84_49488840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos += 1;
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos = realloc(clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos*sizeof(Object));
clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos[clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos-1] = (Object)behavior;
   behavior->block = make__58222360();

   return behavior;
}

Behavior __49022460;

Behavior make__49022460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49022460 = behavior;
   behavior->owner = (Object)layer1_58_84_49488840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos += 1;
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos = realloc(clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos*sizeof(Object));
clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos[clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos-1] = (Object)behavior;
   behavior->block = make__58367680();

   return behavior;
}

Behavior __49886580;

Behavior make__49886580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49886580 = behavior;
   behavior->owner = (Object)layer1_58_84_49488840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos += 1;
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos = realloc(clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos*sizeof(Object));
clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos[clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos-1] = (Object)behavior;
   behavior->block = make__49022040();

   return behavior;
}

Behavior __56796340;

Behavior make__56796340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56796340 = behavior;
   behavior->owner = (Object)layer1_58_84_49488840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_50600780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   req_50600780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   req_50600780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(req_50600780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,req_50600780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
req_50600780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[req_50600780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[ack__mac_47740940_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56797160();

   return behavior;
}

Behavior __56883400;

Behavior make__56883400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56883400 = behavior;
   behavior->owner = (Object)layer1_58_84_49488840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[ack_47741160_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_50447860_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   value__z0_50447860_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   value__z0_50447860_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(value__z0_50447860_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,value__z0_50447860_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
value__z0_50447860_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[value__z0_50447860_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_50979480_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   ack__a0_50979480_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   ack__a0_50979480_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(ack__a0_50979480_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,ack__a0_50979480_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
ack__a0_50979480_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[ack__a0_50979480_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56798320();

   return behavior;
}

Behavior __56883240;

Behavior make__56883240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56883240 = behavior;
   behavior->owner = (Object)layer1_58_84_49488840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_51031860_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   ack__mac_51031860_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   ack__mac_51031860_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(ack__mac_51031860_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,ack__mac_51031860_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
ack__mac_51031860_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[ack__mac_51031860_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_57470020_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   a_57470020_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   a_57470020_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(a_57470020_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,a_57470020_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
a_57470020_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[a_57470020_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56798140();

   return behavior;
}

Scope makelayer1_58_84_49488840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_49488840 = scope;
   scope->owner = (Object)layer1_58_840_49886080;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_51031640();
   scope->systemIs[1] = makefunc0_57469740();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_47741320();
   scope->inners[1] = makeack_47741160();
   scope->inners[2] = makeack__mac_47740940();
   scope->inners[3] = makeack__add_47740140();
   scope->inners[4] = make_58276_49073540();
   scope->inners[5] = make_58274_49073460();
   scope->inners[6] = make_58275_49073340();
   scope->inners[7] = make_58284_49425580();
   scope->inners[8] = make_58316_48884760();
   scope->inners[9] = make_58317_48884700();
   scope->inners[10] = make_58314_48884640();
   scope->inners[11] = make_58315_48884020();
   scope->inners[12] = make_58329_49993040();
   scope->inners[13] = makevalue__z0_50447860();
   scope->inners[14] = makevalue__a0_50979560();
   scope->inners[15] = makeflag__z0_50979500();
   scope->inners[16] = makeack__a0_50979480();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58267_49488380();
   scope->scopes[1] = makechannel__accum_58282_56210940();
   scope->scopes[2] = makemac__n1_58307_56678640();
   scope->scopes[3] = makechannel__b0_58312_50773520();
   scope->scopes[4] = makechannel__z_58327_56342140();
   scope->scopes[5] = makeadd__n_58350_56784900();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58367880();
   scope->behaviors[1] = make__49022460();
   scope->behaviors[2] = make__49886580();
   scope->behaviors[3] = make__56796340();
   scope->behaviors[4] = make__56883400();
   scope->behaviors[5] = make__56883240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_49886080() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_49886080 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_50600820();
   systemT->inputs[1] = makerst_50600800();
   systemT->inputs[2] = makereq_50600780();
   systemT->inputs[3] = make_58110_50398160();
   systemT->inputs[4] = make_58111_50980900();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_50980780();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58112_50980460();
   systemT->inouts[1] = make_5876_51305180();

   systemT->scope = makelayer1_58_84_49488840();

   return systemT;
}