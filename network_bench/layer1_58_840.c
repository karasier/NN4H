#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_58121640;

SignalI clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeclk_58119220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_840_58121640;
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

SignalI rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerst_58119200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_840_58121640;
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

SignalI fill_58119180_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makefill_58119180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_58119180_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_840_58121640;
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

SignalI req_58119160_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereq_58119160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_58119160_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_840_58121640;
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

SignalI _5866_58196540_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_5866_58196540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_58196540_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_840_58121640;
   signalI->name = ":66";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5867_58383200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_5867_58383200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_58383200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_840_58121640;
   signalI->name = ":67";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_58383140_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__layer_58383140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_58383140_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_840_58121640;
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

SignalI _5868_58383020_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_5868_58383020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_58383020_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_840_58121640;
   signalI->name = ":68";
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

SignalI _5832_58583560_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_5832_58583560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_58583560_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_840_58121640;
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

Block __57088800;

Block __57088580;

void code__57088580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49135900(),ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49192820(),ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49192680(),ack__add_59492500_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57088580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57088580 = block;
   block->owner = (Object)__57088800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57088580;

   return block;
};

void code__57088800() {
   {
      Value cond = rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57088580();
   }
      }
   }
}

Block make__57088800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57088800 = block;
   block->owner = (Object)__57087380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57088800;

   return block;
};

Block __57086840;

Block __57086060;

Block __57085900;

void code__57085900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,value__z0_45775440_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49191040(),flag__z0_48805560_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57085900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57085900 = block;
   block->owner = (Object)__57086060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57085900;

   return block;
};

void code__57086060() {
 code__57085900();
}

Block make__57086060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57086060 = block;
   block->owner = (Object)__57086840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57086060;

   return block;
};

Block __57086620;

void code__57086620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49190580(),flag__z0_48805560_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57086620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57086620 = block;
   block->owner = (Object)__57086840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57086620;

   return block;
};

void code__57086840() {
   {
      Value cond = ack__add_59492500_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57086060();
   }
   else {
  code__57086620();
   }
      }
   }
}

Block make__57086840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57086840 = block;
   block->owner = (Object)__57314220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57086840;

   return block;
};

Block __57314040;

Block __57313700;

void code__57313700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49190060(),ack__a0_48805480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57313700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57313700 = block;
   block->owner = (Object)__57314040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57313700;

   return block;
};

Block __57313180;

Block __57312980;

void code__57312980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_48805580_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_5832_58583560_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49189240(),ack__a0_48805480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57312980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57312980 = block;
   block->owner = (Object)__57313180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57312980;

   return block;
};

void code__57313180() {
 code__57312980();
}

Block make__57313180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57313180 = block;
   block->owner = (Object)__57314040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57313180;

   return block;
};

void code__57314040() {
   {
      Value cond = rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57313700();
   }
   else if (value2integer(flag__z0_48805560_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value)) {
  code__57313180();
   }
      }
   }
}

Block make__57314040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57314040 = block;
   block->owner = (Object)__57586200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57314040;

   return block;
};

Block __57586000;

Block __57585820;

Block __57585340;

void code__57585340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49184800(),_58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57585340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57585340 = block;
   block->owner = (Object)__57585820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57585340;

   return block;
};

void code__57585820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49185560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57585340();
   }
      }
   }
}

Block make__57585820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57585820 = block;
   block->owner = (Object)__57586000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57585820;

   return block;
};

Block __57959200;

void code__57959200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49208740(),address__bias_48805200_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49208100(),ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57959200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57959200 = block;
   block->owner = (Object)__57586000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57959200;

   return block;
};

Block __57584820;

Block __57584560;

Block __57584320;

Block __57584160;

Block __57583700;

Block __57582900;

void code__57582900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_50723820_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            idx = value2integer(address__bias_48805200_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58280_49005680_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57582900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57582900 = block;
   block->owner = (Object)__57583700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57582900;

   return block;
};

void code__57583700() {
{
      Value value = _58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__49207180())) {
    code__57582900();
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
                  src0 = _58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49206040();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57583700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57583700 = block;
   block->owner = (Object)__57584160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57583700;

   return block;
};

void code__57584160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49207320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57583700();
   }
      }
   }
}

Block make__57584160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57584160 = block;
   block->owner = (Object)__57584320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57584160;

   return block;
};

void code__57584320() {
 code__57584160();
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
                  src0 = address__bias_48805200_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49205380();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_48805200_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57584320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57584320 = block;
   block->owner = (Object)__57584560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57584320;

   return block;
};

void code__57584560() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57584320();
   }
      }
   }
}

Block make__57584560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57584560 = block;
   block->owner = (Object)__57584820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57584560;

   return block;
};

Block __57959820;

void code__57959820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49204760(),ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57959820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57959820 = block;
   block->owner = (Object)__57584820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57959820;

   return block;
};

void code__57584820() {
   {
      Value cond = fill__channel_59492480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57584560();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__bias_48805200_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49205200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57959820();
   }
      }
   }
}

Block make__57584820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57584820 = block;
   block->owner = (Object)__57586000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57584820;

   return block;
};

void code__57586000() {
 code__57585820();
   {
      Value cond = rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57959200();
   }
   else {
  code__57584820();
   }
      }
   }
}

Block make__57586000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57586000 = block;
   block->owner = (Object)__58122020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57586000;

   return block;
};

Block __47393100;

void code__47393100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_58119160_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_59492560_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47393100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47393100 = block;
   block->owner = (Object)__47408720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47393100;

   return block;
};

Block __47619040;

void code__47619040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_58119180_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_59492480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47619040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47619040 = block;
   block->owner = (Object)__47618400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47619040;

   return block;
};

Block __47232900;

void code__47232900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,clk_50751560_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,ack_50751480_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,rst_50751460_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_45775440_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_48805480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,ack__layer_58383140_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47232900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47232900 = block;
   block->owner = (Object)__47614740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47232900;

   return block;
};

Block __47300100;

void code__47300100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_50751400_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52306720_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,value__a0_48805580_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47300100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47300100 = block;
   block->owner = (Object)__47614200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47300100;

   return block;
};

Block __59495360;

void code__59495360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_59214860_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            idx = value2integer(abus__r_58664000_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_58664080_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59495360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59495360 = block;
   block->owner = (Object)__59912300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59495360;

   return block;
};

Block __47633560;

void code__47633560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_58664080_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58231_59750280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47633560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47633560 = block;
   block->owner = (Object)__47631580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47633560;

   return block;
};

Block __47631480;

void code__47631480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58231_59750280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,dbus__r_58664080_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47631480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47631480 = block;
   block->owner = (Object)__47652080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47631480;

   return block;
};

Block __47666640;

void code__47666640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_58601320_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47666640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47666640 = block;
   block->owner = (Object)__47663520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47666640;

   return block;
};

Block __47662040;

void code__47662040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,trig__r_58601320_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47662040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47662040 = block;
   block->owner = (Object)__47696360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47662040;

   return block;
};

Block __47695780;

void code__47695780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_58664000_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47695780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47695780 = block;
   block->owner = (Object)__47694860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47695780;

   return block;
};

Block __47694820;

void code__47694820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,abus__r_58664000_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47694820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47694820 = block;
   block->owner = (Object)__47912880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47694820;

   return block;
};

Block __48705700;

void code__48705700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_60110600_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48705700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48705700 = block;
   block->owner = (Object)__48519500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48705700;

   return block;
};

Block __48517520;

void code__48517520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,reg__0_60110600_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48517520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48517520 = block;
   block->owner = (Object)__48534140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48517520;

   return block;
};

Block __49446120;

Block __49445940;

Block __49445300;

void code__49445300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49037660(),_58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49445300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49445300 = block;
   block->owner = (Object)__49445940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49445300;

   return block;
};

void code__49445940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49038200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49445300();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49037400(),_58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49445940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49445940 = block;
   block->owner = (Object)__49446120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49445940;

   return block;
};

Block __49441540;

Block __49441080;

void code__49441080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49061540(),_5868_58383020_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49441080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49441080 = block;
   block->owner = (Object)__49441540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49441080;

   return block;
};

void code__49441540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49061700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49441080();
   }
      }
   }
}

Block make__49441540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49441540 = block;
   block->owner = (Object)__49446120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49441540;

   return block;
};

Block __49460160;

void code__49460160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49060860(),rvok_49446320_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49060780(),lvok0_49446360_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49060680(),wok0_49446300_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49460160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49460160 = block;
   block->owner = (Object)__49446120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49460160;

   return block;
};

Block __50523960;

Block __50522600;

Block __50522260;

Block __50521820;

Block __50521000;

void code__50521000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_58196540_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,rv_49446380_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__50521000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50521000 = block;
   block->owner = (Object)__50521820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50521000;

   return block;
};

Block __51032900;

void code__51032900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_58383200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,rv_49446380_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__51032900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51032900 = block;
   block->owner = (Object)__50521820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51032900;

   return block;
};

void code__50521820() {
{
      Value value = _5868_58383020_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__49058280())) {
    code__50521000();
         }
         else if (value2integer(value) == value2integer(make__49057920())) {
    code__51032900();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49057260(),rvok_49446320_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
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
                  src0 = _5868_58383020_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49057000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5868_58383020_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__50521820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50521820 = block;
   block->owner = (Object)__50522260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50521820;

   return block;
};

void code__50522260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49059040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50521820();
   }
      }
   }
}

Block make__50522260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50522260 = block;
   block->owner = (Object)__50522600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50522260;

   return block;
};

void code__50522600() {
 code__50522260();
}

Block make__50522600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50522600 = block;
   block->owner = (Object)__50523960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50522600;

   return block;
};

Block __51579400;

Block __51579200;

Block __51578600;

Block __51577940;

void code__51577940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58231_59750280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,lv0_48865840_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49077840(),lvok0_49446360_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__51577940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51577940 = block;
   block->owner = (Object)__51578600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51577940;

   return block;
};

void code__51578600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49055140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51577940();
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
                  src0 = _58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49077560();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49077360(),_58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__51578600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51578600 = block;
   block->owner = (Object)__51579200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51578600;

   return block;
};

void code__51579200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49056580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51578600();
   }
      }
   }
}

Block make__51579200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51579200 = block;
   block->owner = (Object)__51579400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51579200;

   return block;
};

void code__51579400() {
 code__51579200();
}

Block make__51579400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51579400 = block;
   block->owner = (Object)__50523960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51579400;

   return block;
};

Block __52284860;

Block __52284140;

Block __52283660;

void code__52283660() {
}

Block make__52283660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52283660 = block;
   block->owner = (Object)__52284140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52283660;

   return block;
};

Block __57087240;

void code__57087240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49091340_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49072940(),wok0_49446300_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57087240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57087240 = block;
   block->owner = (Object)__52284140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57087240;

   return block;
};

void code__52284140() {
 code__52283660();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_49091340_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
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
                              src0 = lv0_48865840_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49446380_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49073180();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49091340_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
 code__57087240();
}

Block make__52284140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52284140 = block;
   block->owner = (Object)__52284860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52284140;

   return block;
};

void code__52284860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49074660(),ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49074440(),run_49446240_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
 code__52284140();
}

Block make__52284860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52284860 = block;
   block->owner = (Object)__50523960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52284860;

   return block;
};

Block __57265420;

void code__57265420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49072840(),wok0_49446300_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49072740(),lvok0_49446360_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49072600(),rvok_49446320_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57265420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57265420 = block;
   block->owner = (Object)__50523960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57265420;

   return block;
};

void code__50523960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49059780(),run_49446240_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_49446320_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50522600();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49446360_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51579400();
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
               src0 = lvok0_49446360_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               src1 = rvok_49446320_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_49446300_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52284860();
   }
      }
   }
   {
      Value cond = wok0_49446300_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57265420();
   }
      }
   }
}

Block make__50523960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50523960 = block;
   block->owner = (Object)__49446120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50523960;

   return block;
};

Block __49457500;

void code__49457500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49072540(),av0_49091340_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49457500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49457500 = block;
   block->owner = (Object)__49446120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49457500;

   return block;
};

void code__49446120() {
 code__49445940();
 code__49441540();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49061340(),ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49061200(),run_49446240_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_49446240_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49460160();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_59492560_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         src1 = run_49446240_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50523960();
   }
   else {
  code__49457500();
   }
      }
   }
}

Block make__49446120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49446120 = block;
   block->owner = (Object)__57264400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49446120;

   return block;
};

Block __48620900;

void code__48620900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58269_59960780_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48620900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48620900 = block;
   block->owner = (Object)__48620280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48620900;

   return block;
};

Block __48620240;

void code__48620240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_59960780_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48620240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48620240 = block;
   block->owner = (Object)__48791240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48620240;

   return block;
};

Block __48788540;

void code__48788540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58280_49005680_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48788540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48788540 = block;
   block->owner = (Object)__48788000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48788540;

   return block;
};

Block __48787920;

void code__48787920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58280_49005680_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48787920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48787920 = block;
   block->owner = (Object)__48787300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48787920;

   return block;
};

Block __48799880;

void code__48799880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_57302640_winc_58279_57262120_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48799880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48799880 = block;
   block->owner = (Object)__48823480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48799880;

   return block;
};

Block __48823360;

void code__48823360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,abus__w_57302640_winc_58279_57262120_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48823360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48823360 = block;
   block->owner = (Object)__48823020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48823360;

   return block;
};

Block __48818700;

void code__48818700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57948820_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48818700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48818700 = block;
   block->owner = (Object)__48817960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48818700;

   return block;
};

Block __48817640;

void code__48817640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,reg__0_57948820_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48817640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48817640 = block;
   block->owner = (Object)__48816680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48817640;

   return block;
};

Block __58517220;

Block __58516100;

Block __58515700;

void code__58515700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,lv0_58382460_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49104840(),lvok0_58517380_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__58515700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58515700 = block;
   block->owner = (Object)__58516100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58515700;

   return block;
};

Block __58808520;

void code__58808520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_59960780_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,rv0_58517400_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49104440(),rvok0_58517360_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__58808520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58808520 = block;
   block->owner = (Object)__58516100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58808520;

   return block;
};

Block __58995940;

Block __58995380;

void code__58995380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_58382460_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      src1 = rv0_58517400_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__58995380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58995380 = block;
   block->owner = (Object)__58995940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58995380;

   return block;
};

void code__58995940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49104040(),run_58517340_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49103940(),ack__add_59492500_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
 code__58995380();
}

Block make__58995940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58995940 = block;
   block->owner = (Object)__58516100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58995940;

   return block;
};

void code__58516100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49105080(),run_58517340_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
 code__58515700();
 code__58808520();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_58517380_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         src1 = rvok0_58517360_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58995940();
   }
      }
   }
}

Block make__58516100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58516100 = block;
   block->owner = (Object)__58517220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58516100;

   return block;
};

Block __58516740;

void code__58516740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49123140(),lvok0_58517380_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49122860(),rvok0_58517360_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__58516740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58516740 = block;
   block->owner = (Object)__58517220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58516740;

   return block;
};

void code__58517220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49105480(),ack__add_59492500_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49105280(),run_58517340_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         src1 = run_58517340_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58516100();
   }
   else {
  code__58516740();
   }
      }
   }
}

Block make__58517220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58517220 = block;
   block->owner = (Object)__59492700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58517220;

   return block;
};

Value make__49120760() {
   static unsigned long long data[] = { 34ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49043720() {
   static unsigned long long data[] = { 26ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49043360() {
   static unsigned long long data[] = { 4294967271ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49038200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49037660() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49037400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49061700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49061540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49061340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49061200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49060860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49060780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49060680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49059780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49059040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49058280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49057920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49057260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49057000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49056580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49055140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49077840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49077560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49077360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49074660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49074440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49073180() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49072940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49072840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49072740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49072600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49072540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49105480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49105280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49105080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49104840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49104440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49104040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49103940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49123140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49122860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49135900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49192820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49192680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49191040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49190580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49190060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49189240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49185560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49184800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__49208740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49208100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49207320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49207180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__49206040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49205380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49205200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49204760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_58603200;

SignalI req__mac_59492560_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereq__mac_59492560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_59492560_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
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

SignalI ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack_59492540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
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

SignalI ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__mac_59492520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
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

SignalI ack__add_59492500_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__add_59492500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_59492500_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
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

SignalI fill__channel_59492480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makefill__channel_59492480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_59492480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
   signalI->name = "fill_channel";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58231_59750280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58231_59750280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58231_59750280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
   signalI->name = ":231";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58229_59750260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
   signalI->name = ":229";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58230_59750120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
   signalI->name = ":230";
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

SignalI _58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58239_59852420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
   signalI->name = ":239";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58269_59960780_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58269_59960780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_59960780_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
   signalI->name = ":269";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58292_60128360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
   signalI->name = ":292";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_45775440_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makevalue__z0_45775440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_45775440_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
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

SignalI value__a0_48805580_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makevalue__a0_48805580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_48805580_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
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

SignalI flag__z0_48805560_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeflag__z0_48805560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_48805560_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
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

SignalI ack__a0_48805480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__a0_48805480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_48805480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
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

SignalI address__bias_48805200_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeaddress__bias_48805200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_48805200_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
   signalI->name = "address_bias";
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

SignalI ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__bias_48805120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
   signalI->name = "ack_bias";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58280_49005680_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58280_49005680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58280_49005680_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
   signalI->name = ":280";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58281_49004740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
   signalI->name = ":281";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI b_50723820_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeb_50723820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_50723820_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer1_58_84_58603200;
   signalI->name = "b";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__49120760();
         concat_value(1,1,dst,src0);
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

SystemI counter_50751040;

SystemI makecounter_50751040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_50751040 = systemI;
   systemI->owner = (Object)layer1_58_84_58603200;
   systemI->name = "counter";
   systemI->system = counter_58_8400_50756060;

   return systemI;
};

SystemI func0_52306480;

SystemI makefunc0_52306480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_52306480 = systemI;
   systemI->owner = (Object)layer1_58_84_58603200;
   systemI->name = "func0";
   systemI->system = func0_58_8400_51446360;

   return systemI;
};

Scope channel__w0_58222_58602900;

SignalI trig__r_58601320_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI maketrig__r_58601320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_58601320_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__w0_58222_58602900;
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

SignalI dbus__r_58664080_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makedbus__r_58664080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_58664080_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__w0_58222_58602900;
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

SignalI abus__r_58664000_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_58664000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58664000_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__w0_58222_58602900;
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

SignalI mem_59214860_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makemem_59214860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_59214860_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__w0_58222_58602900;
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
         src0 = make__49043720();
         src1 = make__49043360();
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

Scope raddr_58223_58602600;

Scope makeraddr_58223_58602600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58223_58602600 = scope;
   scope->owner = (Object)channel__w0_58222_58602900;
   scope->name = "raddr:223";
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

Scope rinc_58228_58602180;

Scope makerinc_58228_58602180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58228_58602180 = scope;
   scope->owner = (Object)channel__w0_58222_58602900;
   scope->name = "rinc:228";
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

Scope rdec_58232_58601760;

Scope makerdec_58232_58601760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58232_58601760 = scope;
   scope->owner = (Object)channel__w0_58222_58602900;
   scope->name = "rdec:232";
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

Behavior __59912300;

Behavior make__59912300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59912300 = behavior;
   behavior->owner = (Object)channel__w0_58222_58602900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg += 1;
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg = realloc(clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg*sizeof(Object));
clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg[clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg-1] = (Object)behavior;
   behavior->block = make__59495360();

   return behavior;
}

Behavior __47631580;

Behavior make__47631580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47631580 = behavior;
   behavior->owner = (Object)channel__w0_58222_58602900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_58664080_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   dbus__r_58664080_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   dbus__r_58664080_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(dbus__r_58664080_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,dbus__r_58664080_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
dbus__r_58664080_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[dbus__r_58664080_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__47633560();

   return behavior;
}

Behavior __47652080;

Behavior make__47652080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47652080 = behavior;
   behavior->owner = (Object)channel__w0_58222_58602900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58231_59750280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58231_59750280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58231_59750280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58231_59750280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58231_59750280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58231_59750280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58231_59750280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__47631480();

   return behavior;
}

Behavior __47663520;

Behavior make__47663520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47663520 = behavior;
   behavior->owner = (Object)channel__w0_58222_58602900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_58601320_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   trig__r_58601320_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   trig__r_58601320_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(trig__r_58601320_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,trig__r_58601320_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
trig__r_58601320_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[trig__r_58601320_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__47666640();

   return behavior;
}

Behavior __47696360;

Behavior make__47696360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47696360 = behavior;
   behavior->owner = (Object)channel__w0_58222_58602900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58229_59750260_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__47662040();

   return behavior;
}

Behavior __47694860;

Behavior make__47694860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47694860 = behavior;
   behavior->owner = (Object)channel__w0_58222_58602900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_58664000_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   abus__r_58664000_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   abus__r_58664000_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(abus__r_58664000_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,abus__r_58664000_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
abus__r_58664000_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[abus__r_58664000_channel__w0_58222_58602900_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__47695780();

   return behavior;
}

Behavior __47912880;

Behavior make__47912880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47912880 = behavior;
   behavior->owner = (Object)channel__w0_58222_58602900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58230_59750120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__47694820();

   return behavior;
}

Scope makechannel__w0_58222_58602900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58222_58602900 = scope;
   scope->owner = (Object)layer1_58_84_58603200;
   scope->name = "channel_w0:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_58601320();
   scope->inners[1] = makedbus__r_58664080();
   scope->inners[2] = makeabus__r_58664000();
   scope->inners[3] = makemem_59214860();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58223_58602600();
   scope->scopes[1] = makerinc_58228_58602180();
   scope->scopes[2] = makerdec_58232_58601760();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59912300();
   scope->behaviors[1] = make__47631580();
   scope->behaviors[2] = make__47652080();
   scope->behaviors[3] = make__47663520();
   scope->behaviors[4] = make__47696360();
   scope->behaviors[5] = make__47694860();
   scope->behaviors[6] = make__47912880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58237_59912180;

SignalI reg__0_60110600_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereg__0_60110600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_60110600_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__accum_58237_59912180;
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

Scope anum_58238_59911880;

Scope makeanum_58238_59911880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58238_59911880 = scope;
   scope->owner = (Object)channel__accum_58237_59912180;
   scope->name = "anum:238";
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

Scope raddr_58240_59911460;

Scope makeraddr_58240_59911460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58240_59911460 = scope;
   scope->owner = (Object)channel__accum_58237_59912180;
   scope->name = "raddr:240";
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

Scope waddr_58243_59911040;

Scope makewaddr_58243_59911040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58243_59911040 = scope;
   scope->owner = (Object)channel__accum_58237_59912180;
   scope->name = "waddr:243";
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

Scope rinc_58246_59910620;

SignalI abus__r_59910240_rinc_58246_59910620_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_59910240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59910240_rinc_58246_59910620_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)rinc_58246_59910620;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerinc_58246_59910620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_59910620 = scope;
   scope->owner = (Object)channel__accum_58237_59912180;
   scope->name = "rinc:246";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59910240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58250_59910120;

SignalI abus__w_59909740_winc_58250_59910120_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__w_59909740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59909740_winc_58250_59910120_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)winc_58250_59910120;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewinc_58250_59910120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58250_59910120 = scope;
   scope->owner = (Object)channel__accum_58237_59912180;
   scope->name = "winc:250";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59909740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58254_59909620;

SignalI abus__r_59909240_rdec_58254_59909620_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_59909240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59909240_rdec_58254_59909620_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)rdec_58254_59909620;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerdec_58254_59909620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58254_59909620 = scope;
   scope->owner = (Object)channel__accum_58237_59912180;
   scope->name = "rdec:254";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59909240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58258_59909120;

SignalI abus__w_59908740_wdec_58258_59909120_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__w_59908740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59908740_wdec_58258_59909120_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)wdec_58258_59909120;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewdec_58258_59909120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58258_59909120 = scope;
   scope->owner = (Object)channel__accum_58237_59912180;
   scope->name = "wdec:258";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59908740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48519500;

Behavior make__48519500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48519500 = behavior;
   behavior->owner = (Object)channel__accum_58237_59912180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_60110600_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   reg__0_60110600_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   reg__0_60110600_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(reg__0_60110600_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,reg__0_60110600_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
reg__0_60110600_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[reg__0_60110600_channel__accum_58237_59912180_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__48705700();

   return behavior;
}

Behavior __48534140;

Behavior make__48534140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48534140 = behavior;
   behavior->owner = (Object)channel__accum_58237_59912180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58239_59852420_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__48517520();

   return behavior;
}

Scope makechannel__accum_58237_59912180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58237_59912180 = scope;
   scope->owner = (Object)layer1_58_84_58603200;
   scope->name = "channel_accum:237";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_60110600();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58238_59911880();
   scope->scopes[1] = makeraddr_58240_59911460();
   scope->scopes[2] = makewaddr_58243_59911040();
   scope->scopes[3] = makerinc_58246_59910620();
   scope->scopes[4] = makewinc_58250_59910120();
   scope->scopes[5] = makerdec_58254_59909620();
   scope->scopes[6] = makewdec_58258_59909120();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48519500();
   scope->behaviors[1] = make__48534140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58262_47197800;

SignalI lv0_48865840_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelv0_48865840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48865840_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58262_47197800;
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

SignalI av0_49091340_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeav0_49091340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49091340_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58262_47197800;
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

SignalI rv_49446380_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerv_49446380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49446380_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58262_47197800;
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

SignalI lvok0_49446360_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelvok0_49446360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49446360_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58262_47197800;
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

SignalI rvok_49446320_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makervok_49446320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49446320_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58262_47197800;
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

SignalI wok0_49446300_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makewok0_49446300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_49446300_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58262_47197800;
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

SignalI run_49446240_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerun_49446240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49446240_mac__n1_58262_47197800_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58262_47197800;
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

Behavior __57264400;

Behavior make__57264400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57264400 = behavior;
   behavior->owner = (Object)mac__n1_58262_47197800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos += 1;
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos = realloc(clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos*sizeof(Object));
clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos[clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos-1] = (Object)behavior;
   behavior->block = make__49446120();

   return behavior;
}

Scope makemac__n1_58262_47197800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58262_47197800 = scope;
   scope->owner = (Object)layer1_58_84_58603200;
   scope->name = "mac_n1:262";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48865840();
   scope->inners[1] = makeav0_49091340();
   scope->inners[2] = makerv_49446380();
   scope->inners[3] = makelvok0_49446360();
   scope->inners[4] = makervok_49446320();
   scope->inners[5] = makewok0_49446300();
   scope->inners[6] = makerun_49446240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57264400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58267_57264280;

SignalI reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereg__0_57345600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__bias_58267_57264280;
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

Scope anum_58268_57263980;

Scope makeanum_58268_57263980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58268_57263980 = scope;
   scope->owner = (Object)channel__bias_58267_57264280;
   scope->name = "anum:268";
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

Scope raddr_58270_57263460;

Scope makeraddr_58270_57263460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58270_57263460 = scope;
   scope->owner = (Object)channel__bias_58267_57264280;
   scope->name = "raddr:270";
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

Scope waddr_58273_57263040;

Scope makewaddr_58273_57263040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58273_57263040 = scope;
   scope->owner = (Object)channel__bias_58267_57264280;
   scope->name = "waddr:273";
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

Scope rinc_58276_57262620;

SignalI abus__r_57262240_rinc_58276_57262620_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_57262240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57262240_rinc_58276_57262620_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)rinc_58276_57262620;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerinc_58276_57262620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58276_57262620 = scope;
   scope->owner = (Object)channel__bias_58267_57264280;
   scope->name = "rinc:276";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57262240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58279_57262120;

SignalI abus__w_57302640_winc_58279_57262120_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__w_57302640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57302640_winc_58279_57262120_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)winc_58279_57262120;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Behavior __48823480;

Behavior make__48823480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48823480 = behavior;
   behavior->owner = (Object)winc_58279_57262120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_57302640_winc_58279_57262120_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   abus__w_57302640_winc_58279_57262120_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   abus__w_57302640_winc_58279_57262120_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(abus__w_57302640_winc_58279_57262120_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,abus__w_57302640_winc_58279_57262120_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
abus__w_57302640_winc_58279_57262120_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[abus__w_57302640_winc_58279_57262120_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__48799880();

   return behavior;
}

Behavior __48823020;

Behavior make__48823020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48823020 = behavior;
   behavior->owner = (Object)winc_58279_57262120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58281_49004740_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__48823360();

   return behavior;
}

Scope makewinc_58279_57262120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58279_57262120 = scope;
   scope->owner = (Object)channel__bias_58267_57264280;
   scope->name = "winc:279";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57302640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48823480();
   scope->behaviors[1] = make__48823020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58282_57302180;

SignalI abus__r_57301800_rdec_58282_57302180_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_57301800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57301800_rdec_58282_57302180_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)rdec_58282_57302180;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerdec_58282_57302180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58282_57302180 = scope;
   scope->owner = (Object)channel__bias_58267_57264280;
   scope->name = "rdec:282";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57301800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58286_57301680;

SignalI abus__w_57301300_wdec_58286_57301680_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__w_57301300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57301300_wdec_58286_57301680_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)wdec_58286_57301680;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewdec_58286_57301680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58286_57301680 = scope;
   scope->owner = (Object)channel__bias_58267_57264280;
   scope->name = "wdec:286";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57301300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48620280;

Behavior make__48620280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48620280 = behavior;
   behavior->owner = (Object)channel__bias_58267_57264280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__48620900();

   return behavior;
}

Behavior __48791240;

Behavior make__48791240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48791240 = behavior;
   behavior->owner = (Object)channel__bias_58267_57264280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_59960780_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58269_59960780_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58269_59960780_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58269_59960780_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58269_59960780_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58269_59960780_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58269_59960780_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__48620240();

   return behavior;
}

Behavior __48788000;

Behavior make__48788000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48788000 = behavior;
   behavior->owner = (Object)channel__bias_58267_57264280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[reg__0_57345600_channel__bias_58267_57264280_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__48788540();

   return behavior;
}

Behavior __48787300;

Behavior make__48787300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48787300 = behavior;
   behavior->owner = (Object)channel__bias_58267_57264280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58280_49005680_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58280_49005680_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58280_49005680_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58280_49005680_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58280_49005680_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58280_49005680_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58280_49005680_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__48787920();

   return behavior;
}

Scope makechannel__bias_58267_57264280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58267_57264280 = scope;
   scope->owner = (Object)layer1_58_84_58603200;
   scope->name = "channel_bias:267";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57345600();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58268_57263980();
   scope->scopes[1] = makeraddr_58270_57263460();
   scope->scopes[2] = makewaddr_58273_57263040();
   scope->scopes[3] = makerinc_58276_57262620();
   scope->scopes[4] = makewinc_58279_57262120();
   scope->scopes[5] = makerdec_58282_57302180();
   scope->scopes[6] = makewdec_58286_57301680();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48620280();
   scope->behaviors[1] = make__48791240();
   scope->behaviors[2] = make__48788000();
   scope->behaviors[3] = make__48787300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58290_57875000;

SignalI reg__0_57948820_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereg__0_57948820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57948820_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__z_58290_57875000;
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

Scope anum_58291_57874700;

Scope makeanum_58291_57874700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58291_57874700 = scope;
   scope->owner = (Object)channel__z_58290_57875000;
   scope->name = "anum:291";
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

Scope raddr_58293_57874280;

Scope makeraddr_58293_57874280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58293_57874280 = scope;
   scope->owner = (Object)channel__z_58290_57875000;
   scope->name = "raddr:293";
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

Scope waddr_58296_57873760;

Scope makewaddr_58296_57873760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58296_57873760 = scope;
   scope->owner = (Object)channel__z_58290_57875000;
   scope->name = "waddr:296";
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

Scope rinc_58299_57873340;

SignalI abus__r_57872960_rinc_58299_57873340_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_57872960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57872960_rinc_58299_57873340_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)rinc_58299_57873340;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerinc_58299_57873340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58299_57873340 = scope;
   scope->owner = (Object)channel__z_58290_57875000;
   scope->name = "rinc:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57872960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58302_57872840;

SignalI abus__w_57872460_winc_58302_57872840_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__w_57872460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57872460_winc_58302_57872840_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)winc_58302_57872840;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewinc_58302_57872840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58302_57872840 = scope;
   scope->owner = (Object)channel__z_58290_57875000;
   scope->name = "winc:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57872460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58305_57872340;

SignalI abus__r_57871920_rdec_58305_57872340_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_57871920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57871920_rdec_58305_57872340_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)rdec_58305_57872340;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerdec_58305_57872340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58305_57872340 = scope;
   scope->owner = (Object)channel__z_58290_57875000;
   scope->name = "rdec:305";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57871920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58309_57871780;

SignalI abus__w_57871360_wdec_58309_57871780_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__w_57871360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57871360_wdec_58309_57871780_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)wdec_58309_57871780;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewdec_58309_57871780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58309_57871780 = scope;
   scope->owner = (Object)channel__z_58290_57875000;
   scope->name = "wdec:309";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57871360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48817960;

Behavior make__48817960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48817960 = behavior;
   behavior->owner = (Object)channel__z_58290_57875000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57948820_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   reg__0_57948820_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   reg__0_57948820_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(reg__0_57948820_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,reg__0_57948820_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
reg__0_57948820_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[reg__0_57948820_channel__z_58290_57875000_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__48818700();

   return behavior;
}

Behavior __48816680;

Behavior make__48816680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48816680 = behavior;
   behavior->owner = (Object)channel__z_58290_57875000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58292_60128360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__48817640();

   return behavior;
}

Scope makechannel__z_58290_57875000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58290_57875000 = scope;
   scope->owner = (Object)layer1_58_84_58603200;
   scope->name = "channel_z:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57948820();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58291_57874700();
   scope->scopes[1] = makeraddr_58293_57874280();
   scope->scopes[2] = makewaddr_58296_57873760();
   scope->scopes[3] = makerinc_58299_57873340();
   scope->scopes[4] = makewinc_58302_57872840();
   scope->scopes[5] = makerdec_58305_57872340();
   scope->scopes[6] = makewdec_58309_57871780();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48817960();
   scope->behaviors[1] = make__48816680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58313_58215220;

SignalI lv0_58382460_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelv0_58382460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_58382460_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58313_58215220;
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

SignalI rv0_58517400_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerv0_58517400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_58517400_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58313_58215220;
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

SignalI lvok0_58517380_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelvok0_58517380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_58517380_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58313_58215220;
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

SignalI rvok0_58517360_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makervok0_58517360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_58517360_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58313_58215220;
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

SignalI run_58517340_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerun_58517340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_58517340_add__n_58313_58215220_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58313_58215220;
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

Behavior __59492700;

Behavior make__59492700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59492700 = behavior;
   behavior->owner = (Object)add__n_58313_58215220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos += 1;
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos = realloc(clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos*sizeof(Object));
clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos[clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos-1] = (Object)behavior;
   behavior->block = make__58517220();

   return behavior;
}

Scope makeadd__n_58313_58215220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58313_58215220 = scope;
   scope->owner = (Object)layer1_58_84_58603200;
   scope->name = "add_n:313";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_58382460();
   scope->inners[1] = makerv0_58517400();
   scope->inners[2] = makelvok0_58517380();
   scope->inners[3] = makervok0_58517360();
   scope->inners[4] = makerun_58517340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59492700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57087380;

Behavior make__57087380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57087380 = behavior;
   behavior->owner = (Object)layer1_58_84_58603200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos += 1;
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos = realloc(clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos*sizeof(Object));
clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos[clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos-1] = (Object)behavior;
   behavior->block = make__57088800();

   return behavior;
}

Behavior __57314220;

Behavior make__57314220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57314220 = behavior;
   behavior->owner = (Object)layer1_58_84_58603200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos += 1;
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos = realloc(clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos*sizeof(Object));
clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos[clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos-1] = (Object)behavior;
   behavior->block = make__57086840();

   return behavior;
}

Behavior __57586200;

Behavior make__57586200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57586200 = behavior;
   behavior->owner = (Object)layer1_58_84_58603200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos += 1;
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos = realloc(clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos*sizeof(Object));
clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos[clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos-1] = (Object)behavior;
   behavior->block = make__57314040();

   return behavior;
}

Behavior __58122020;

Behavior make__58122020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58122020 = behavior;
   behavior->owner = (Object)layer1_58_84_58603200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos += 1;
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos = realloc(clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos*sizeof(Object));
clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos[clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos-1] = (Object)behavior;
   behavior->block = make__57586000();

   return behavior;
}

Behavior __47408720;

Behavior make__47408720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47408720 = behavior;
   behavior->owner = (Object)layer1_58_84_58603200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_58119160_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   req_58119160_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   req_58119160_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(req_58119160_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,req_58119160_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
req_58119160_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[req_58119160_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[ack__mac_59492520_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__47393100();

   return behavior;
}

Behavior __47618400;

Behavior make__47618400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47618400 = behavior;
   behavior->owner = (Object)layer1_58_84_58603200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_58119180_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   fill_58119180_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   fill_58119180_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(fill_58119180_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,fill_58119180_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
fill_58119180_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[fill_58119180_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[ack__bias_48805120_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__47619040();

   return behavior;
}

Behavior __47614740;

Behavior make__47614740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47614740 = behavior;
   behavior->owner = (Object)layer1_58_84_58603200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[clk_58119220_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[ack_59492540_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[rst_58119200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_45775440_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   value__z0_45775440_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   value__z0_45775440_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(value__z0_45775440_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,value__z0_45775440_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
value__z0_45775440_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[value__z0_45775440_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_48805480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   ack__a0_48805480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   ack__a0_48805480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(ack__a0_48805480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,ack__a0_48805480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
ack__a0_48805480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[ack__a0_48805480_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__47232900();

   return behavior;
}

Behavior __47614200;

Behavior make__47614200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47614200 = behavior;
   behavior->owner = (Object)layer1_58_84_58603200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_50751400_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   ack__mac_50751400_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   ack__mac_50751400_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(ack__mac_50751400_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,ack__mac_50751400_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
ack__mac_50751400_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[ack__mac_50751400_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_52306720_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   a_52306720_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   a_52306720_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(a_52306720_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,a_52306720_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
a_52306720_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[a_52306720_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__47300100();

   return behavior;
}

Scope makelayer1_58_84_58603200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_58603200 = scope;
   scope->owner = (Object)layer1_58_840_58121640;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_50751040();
   scope->systemIs[1] = makefunc0_52306480();
   scope->num_inners = 20;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_59492560();
   scope->inners[1] = makeack_59492540();
   scope->inners[2] = makeack__mac_59492520();
   scope->inners[3] = makeack__add_59492500();
   scope->inners[4] = makefill__channel_59492480();
   scope->inners[5] = make_58231_59750280();
   scope->inners[6] = make_58229_59750260();
   scope->inners[7] = make_58230_59750120();
   scope->inners[8] = make_58239_59852420();
   scope->inners[9] = make_58269_59960780();
   scope->inners[10] = make_58292_60128360();
   scope->inners[11] = makevalue__z0_45775440();
   scope->inners[12] = makevalue__a0_48805580();
   scope->inners[13] = makeflag__z0_48805560();
   scope->inners[14] = makeack__a0_48805480();
   scope->inners[15] = makeaddress__bias_48805200();
   scope->inners[16] = makeack__bias_48805120();
   scope->inners[17] = make_58280_49005680();
   scope->inners[18] = make_58281_49004740();
   scope->inners[19] = makeb_50723820();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58222_58602900();
   scope->scopes[1] = makechannel__accum_58237_59912180();
   scope->scopes[2] = makemac__n1_58262_47197800();
   scope->scopes[3] = makechannel__bias_58267_57264280();
   scope->scopes[4] = makechannel__z_58290_57875000();
   scope->scopes[5] = makeadd__n_58313_58215220();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57087380();
   scope->behaviors[1] = make__57314220();
   scope->behaviors[2] = make__57586200();
   scope->behaviors[3] = make__58122020();
   scope->behaviors[4] = make__47408720();
   scope->behaviors[5] = make__47618400();
   scope->behaviors[6] = make__47614740();
   scope->behaviors[7] = make__47614200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_58121640() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_58121640 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58119220();
   systemT->inputs[1] = makerst_58119200();
   systemT->inputs[2] = makefill_58119180();
   systemT->inputs[3] = makereq_58119160();
   systemT->inputs[4] = make_5866_58196540();
   systemT->inputs[5] = make_5867_58383200();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_58383140();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_58383020();
   systemT->inouts[1] = make_5832_58583560();

   systemT->scope = makelayer1_58_84_58603200();

   return systemT;
}