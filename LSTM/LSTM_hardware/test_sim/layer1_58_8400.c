#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_8400_68954800;

SignalI clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeclk_68952840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_8400_68954800;
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

SignalI rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makerst_68952820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_8400_68954800;
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

SignalI req_68952800_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereq_68952800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_68952800_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_8400_68954800;
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

SignalI _58458_67317900_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58458_67317900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58458_67317900_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_8400_68954800;
   signalI->name = ":458";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58459_72998520_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58459_72998520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58459_72998520_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_8400_68954800;
   signalI->name = ":459";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_72998480_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__layer_72998480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_72998480_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_8400_68954800;
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

SignalI _58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58460_72998380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_8400_68954800;
   signalI->name = ":460";
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

SignalI _58424_73092100_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58424_73092100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58424_73092100_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_8400_68954800;
   signalI->name = ":424";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __66583240;

Block __66582860;

void code__66582860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77780680(),ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77780620(),ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77780560(),ack__add_63901360_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__66582860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66582860 = block;
   block->owner = (Object)__66583240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66582860;

   return block;
};

void code__66583240() {
   {
      Value cond = rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66582860();
   }
      }
   }
}

Block make__66583240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66583240 = block;
   block->owner = (Object)__66580860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66583240;

   return block;
};

Block __66580200;

Block __66579020;

Block __66578580;

void code__66578580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,value__z0_65340340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77780380(),flag__z0_65637700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__66578580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66578580 = block;
   block->owner = (Object)__66579020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66578580;

   return block;
};

void code__66579020() {
 code__66578580();
}

Block make__66579020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66579020 = block;
   block->owner = (Object)__66580200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66579020;

   return block;
};

Block __66579940;

void code__66579940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77780300(),flag__z0_65637700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__66579940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66579940 = block;
   block->owner = (Object)__66580200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66579940;

   return block;
};

void code__66580200() {
   {
      Value cond = ack__add_63901360_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66579020();
   }
   else {
  code__66579940();
   }
      }
   }
}

Block make__66580200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66580200 = block;
   block->owner = (Object)__53098160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66580200;

   return block;
};

Block __53098040;

Block __53097820;

void code__53097820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77780180(),ack__a0_65637680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53097820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53097820 = block;
   block->owner = (Object)__53098040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53097820;

   return block;
};

Block __53097300;

Block __53097100;

void code__53097100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_65637720_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58424_73092100_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77779900(),ack__a0_65637680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53097100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53097100 = block;
   block->owner = (Object)__53097300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53097100;

   return block;
};

void code__53097300() {
 code__53097100();
}

Block make__53097300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53097300 = block;
   block->owner = (Object)__53098040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53097300;

   return block;
};

void code__53098040() {
   {
      Value cond = rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53097820();
   }
   else if (value2integer(flag__z0_65637700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value)) {
  code__53097300();
   }
      }
   }
}

Block make__53098040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53098040 = block;
   block->owner = (Object)__68955120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53098040;

   return block;
};

Block __77533480;

void code__77533480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_68952800_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_63901420_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77533480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77533480 = block;
   block->owner = (Object)__77533240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77533480;

   return block;
};

Block __77533760;

void code__77533760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,clk_65650780_counter_58_8420_65654340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,ack_65650740_counter_58_8420_65654340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,rst_65675180_counter_58_8420_65654340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_65340340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_65637680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,ack__layer_72998480_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77533760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77533760 = block;
   block->owner = (Object)__77568120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77533760;

   return block;
};

Block __77533680;

void code__77533680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_65675140_counter_58_8420_65654340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58665_64787620_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_65342640_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,value__a0_65637720_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77533680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77533680 = block;
   block->owner = (Object)__77567920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77533680;

   return block;
};

Block __55612320;

void code__55612320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51332680_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_65904260_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_65904360_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55612320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55612320 = block;
   block->owner = (Object)__62277480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55612320;

   return block;
};

Block __77567200;

void code__77567200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_65904360_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58624_64137220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77567200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77567200 = block;
   block->owner = (Object)__77567020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77567200;

   return block;
};

Block __77566980;

void code__77566980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58624_64137220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,dbus__r_65904360_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77566980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77566980 = block;
   block->owner = (Object)__77566820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77566980;

   return block;
};

Block __77566520;

void code__77566520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_65636780_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77566520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77566520 = block;
   block->owner = (Object)__77566360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77566520;

   return block;
};

Block __77566300;

void code__77566300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,trig__r_65636780_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77566300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77566300 = block;
   block->owner = (Object)__77566120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77566300;

   return block;
};

Block __77565760;

void code__77565760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_65904260_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77565760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77565760 = block;
   block->owner = (Object)__77565600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77565760;

   return block;
};

Block __77565560;

void code__77565560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,abus__r_65904260_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77565560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77565560 = block;
   block->owner = (Object)__77565400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77565560;

   return block;
};

Block __77564120;

void code__77564120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_62877200_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77564120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77564120 = block;
   block->owner = (Object)__77563940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77564120;

   return block;
};

Block __77563860;

void code__77563860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,reg__0_62877200_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77563860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77563860 = block;
   block->owner = (Object)__77563700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77563860;

   return block;
};

Block __65393380;

Block __65393080;

Block __65392400;

void code__65392400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77747680(),_58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65392400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65392400 = block;
   block->owner = (Object)__65393080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65392400;

   return block;
};

void code__65393080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77747780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65392400();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77747600(),_58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65393080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65393080 = block;
   block->owner = (Object)__65393380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65393080;

   return block;
};

Block __65391240;

Block __65390540;

void code__65390540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77747380(),_58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65390540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65390540 = block;
   block->owner = (Object)__65391240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65390540;

   return block;
};

void code__65391240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77747520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65390540();
   }
      }
   }
}

Block make__65391240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65391240 = block;
   block->owner = (Object)__65393380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65391240;

   return block;
};

Block __65389060;

void code__65389060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77747140(),rvok_65393740_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77747080(),lvok0_65393760_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77747020(),wok0_65393700_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65389060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65389060 = block;
   block->owner = (Object)__65393380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65389060;

   return block;
};

Block __66016520;

Block __66015840;

Block __66015620;

Block __66015000;

Block __66014080;

void code__66014080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58458_67317900_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,rv_65393800_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__66014080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66014080 = block;
   block->owner = (Object)__66015000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66014080;

   return block;
};

Block __50719860;

void code__50719860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58459_72998520_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,rv_65393800_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__50719860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50719860 = block;
   block->owner = (Object)__66015000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50719860;

   return block;
};

void code__66015000() {
{
      Value value = _58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__77746600())) {
    code__66014080();
         }
         else if (value2integer(value) == value2integer(make__77746500())) {
    code__50719860();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77746340(),rvok_65393740_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
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
                  src0 = _58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__77746240();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77746200();
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
                        src0 = _58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77745960();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77745900();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__66015000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66015000 = block;
   block->owner = (Object)__66015620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66015000;

   return block;
};

void code__66015620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77746720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66015000();
   }
      }
   }
}

Block make__66015620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66015620 = block;
   block->owner = (Object)__66015840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66015620;

   return block;
};

void code__66015840() {
 code__66015620();
}

Block make__66015840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66015840 = block;
   block->owner = (Object)__66016520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66015840;

   return block;
};

Block __54676800;

Block __54676400;

Block __54675600;

Block __54643320;

Block __54642620;

void code__54642620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58624_64137220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,lv0_64349300_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__77745380(),lvok0_65393760_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54642620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54642620 = block;
   block->owner = (Object)__54643320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54642620;

   return block;
};

void code__54643320() {
 code__54642620();
}

Block make__54643320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54643320 = block;
   block->owner = (Object)__54675600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54643320;

   return block;
};

Block __54674560;

void code__54674560() {
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
                  src0 = _58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__77745240();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77745200();
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
                        src0 = _58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77744960();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77744900();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77744780(),_58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54674560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54674560 = block;
   block->owner = (Object)__54675600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54674560;

   return block;
};

void code__54675600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77745560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54643320();
   }
   else {
  code__54674560();
   }
      }
   }
}

Block make__54675600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54675600 = block;
   block->owner = (Object)__54676400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54675600;

   return block;
};

void code__54676400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77745700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54675600();
   }
      }
   }
}

Block make__54676400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54676400 = block;
   block->owner = (Object)__54676800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54676400;

   return block;
};

void code__54676800() {
 code__54676400();
}

Block make__54676800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54676800 = block;
   block->owner = (Object)__66016520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54676800;

   return block;
};

Block __55137440;

Block __55136800;

Block __55136560;

void code__55136560() {
}

Block make__55136560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55136560 = block;
   block->owner = (Object)__55136800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55136560;

   return block;
};

Block __64047760;

void code__64047760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_64933180_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77743960(),wok0_65393700_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__64047760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64047760 = block;
   block->owner = (Object)__55136800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64047760;

   return block;
};

void code__55136800() {
 code__55136560();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_64933180_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
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
                              src0 = lv0_64349300_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_65393800_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77744140();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_64933180_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__64047760();
}

Block make__55136800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55136800 = block;
   block->owner = (Object)__55137440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55136800;

   return block;
};

void code__55137440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77744540(),ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77744480(),run_65393580_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__55136800();
}

Block make__55137440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55137440 = block;
   block->owner = (Object)__66016520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55137440;

   return block;
};

Block __65294400;

void code__65294400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77743860(),wok0_65393700_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77743800(),lvok0_65393760_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77743740(),rvok_65393740_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65294400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65294400 = block;
   block->owner = (Object)__66016520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65294400;

   return block;
};

void code__66016520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77746860(),run_65393580_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_65393740_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66015840();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_65393760_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54676800();
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
               src0 = lvok0_65393760_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               src1 = rvok_65393740_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_65393700_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55137440();
   }
      }
   }
   {
      Value cond = wok0_65393700_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65294400();
   }
      }
   }
}

Block make__66016520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66016520 = block;
   block->owner = (Object)__65393380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66016520;

   return block;
};

Block __65486040;

void code__65486040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77743680(),av0_64933180_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65486040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65486040 = block;
   block->owner = (Object)__65393380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65486040;

   return block;
};

void code__65393380() {
 code__65393080();
 code__65391240();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77747320(),ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77747260(),run_65393580_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_65393580_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65389060();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_63901420_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         src1 = run_65393580_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66016520();
   }
   else {
  code__65486040();
   }
      }
   }
}

Block make__65393380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65393380 = block;
   block->owner = (Object)__65292440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65393380;

   return block;
};

Block __50832580;

void code__50832580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_66580960_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_65693680_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_65693840_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__50832580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50832580 = block;
   block->owner = (Object)__54408860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50832580;

   return block;
};

Block __77561920;

void code__77561920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_65693840_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58664_64787660_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77561920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77561920 = block;
   block->owner = (Object)__77602620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77561920;

   return block;
};

Block __77602580;

void code__77602580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58664_64787660_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,dbus__r_65693840_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77602580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77602580 = block;
   block->owner = (Object)__77602420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77602580;

   return block;
};

Block __77602120;

void code__77602120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_65248240_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77602120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77602120 = block;
   block->owner = (Object)__77601960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77602120;

   return block;
};

Block __77601920;

void code__77601920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,trig__r_65248240_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77601920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77601920 = block;
   block->owner = (Object)__77601740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77601920;

   return block;
};

Block __77601440;

void code__77601440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_65693680_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58663_64787440_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77601440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77601440 = block;
   block->owner = (Object)__77601280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77601440;

   return block;
};

Block __77601240;

void code__77601240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58663_64787440_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,abus__r_65693680_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77601240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77601240 = block;
   block->owner = (Object)__77601080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77601240;

   return block;
};

Block __77599760;

void code__77599760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_55288040_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77599760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77599760 = block;
   block->owner = (Object)__77599580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77599760;

   return block;
};

Block __77599540;

void code__77599540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,reg__0_55288040_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77599540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77599540 = block;
   block->owner = (Object)__77599380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77599540;

   return block;
};

Block __50502780;

Block __50502440;

void code__50502440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77742380(),_58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__50502440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50502440 = block;
   block->owner = (Object)__50502780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50502440;

   return block;
};

Block __50499920;

Block __50499420;

void code__50499420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,lv0_57129480_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77782860(),lvok0_50502980_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__50499420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50499420 = block;
   block->owner = (Object)__50499920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50499420;

   return block;
};

Block __62229040;

Block __62228480;

Block __62226580;

void code__62226580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58664_64787660_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,rv0_50503040_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77782520(),_58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77782460(),rvok0_50502960_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62226580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62226580 = block;
   block->owner = (Object)__62228480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62226580;

   return block;
};

Block __62228120;

void code__62228120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77782380(),_58663_64787440_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77782300(),_58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62228120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62228120 = block;
   block->owner = (Object)__62228480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62228120;

   return block;
};

void code__62228480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77782680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62226580();
   }
   else {
  code__62228120();
   }
      }
   }
}

Block make__62228480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62228480 = block;
   block->owner = (Object)__62229040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62228480;

   return block;
};

void code__62229040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58665_64787620_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77782780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62228480();
   }
      }
   }
}

Block make__62229040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62229040 = block;
   block->owner = (Object)__50499920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62229040;

   return block;
};

Block __62862280;

Block __62861620;

void code__62861620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_57129480_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      src1 = rv0_50503040_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62861620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62861620 = block;
   block->owner = (Object)__62862280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62861620;

   return block;
};

void code__62862280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77782080(),run_50502940_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77782020(),ack__add_63901360_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__62861620();
}

Block make__62862280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62862280 = block;
   block->owner = (Object)__50499920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62862280;

   return block;
};

void code__50499920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77783000(),run_50502940_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__50499420();
 code__62229040();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_50502980_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         src1 = rvok0_50502960_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62862280();
   }
      }
   }
}

Block make__50499920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50499920 = block;
   block->owner = (Object)__50502780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50499920;

   return block;
};

Block __50501040;

void code__50501040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77781780(),lvok0_50502980_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77781720(),rvok0_50502960_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__50501040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50501040 = block;
   block->owner = (Object)__50502780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50501040;

   return block;
};

void code__50502780() {
 code__50502440();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77742320(),ack__add_63901360_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77742240(),run_50502940_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         src1 = run_50502940_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50499920();
   }
   else {
  code__50501040();
   }
      }
   }
}

Block make__50502780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50502780 = block;
   block->owner = (Object)__63901680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50502780;

   return block;
};

Value make__77749060() {
   static unsigned long long data[] = { 4294967273ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77749040() {
   static unsigned long long data[] = { 23ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77743660() {
   static unsigned long long data[] = { 4294967287ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__77747780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77747680() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77747600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77747520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77747380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77747320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77747260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77747140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77747080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77747020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77746860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77746720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77746600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77746500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77746340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77746240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77746200() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77745960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77745900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77745700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77745560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77745380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77745240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77745200() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77744960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77744900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77744780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77744540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77744480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77744140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77743960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77743860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77743800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77743740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77743680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77742380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77742320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77742240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77783000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77782860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77782780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77782680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77782520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77782460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77782380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77782300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77782080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77782020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77781780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77781720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77780680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77780620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77780560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77780380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77780300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77780180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77779900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_840_65640180;

SignalI req__mac_63901420_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereq__mac_63901420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_63901420_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
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

SignalI ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack_63901400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
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

SignalI ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__mac_63901380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
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

SignalI ack__add_63901360_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__add_63901360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_63901360_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
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

SignalI _58624_64137220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58624_64137220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58624_64137220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
   signalI->name = ":624";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58622_64137200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
   signalI->name = ":622";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58623_64136940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
   signalI->name = ":623";
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

SignalI _58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58632_64421560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
   signalI->name = ":632";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58664_64787660_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58664_64787660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58664_64787660_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
   signalI->name = ":664";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58665_64787620_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58665_64787620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58665_64787620_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
   signalI->name = ":665";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58662_64787560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
   signalI->name = ":662";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58663_64787440_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58663_64787440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58663_64787440_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
   signalI->name = ":663";
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

SignalI _58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58677_65128680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
   signalI->name = ":677";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_65340340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makevalue__z0_65340340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_65340340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
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

SignalI value__a0_65637720_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makevalue__a0_65637720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_65637720_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
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

SignalI flag__z0_65637700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeflag__z0_65637700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_65637700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
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

SignalI ack__a0_65637680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__a0_65637680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_65637680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_840_65640180;
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

SystemI counter_65674780;

SystemI makecounter_65674780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_65674780 = systemI;
   systemI->owner = (Object)layer1_58_840_65640180;
   systemI->name = "counter";
   systemI->system = counter_58_8420_65654340;

   return systemI;
};

SystemI func0_65342380;

SystemI makefunc0_65342380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_65342380 = systemI;
   systemI->owner = (Object)layer1_58_840_65640180;
   systemI->name = "func0";
   systemI->system = func0_58_8420_64736120;

   return systemI;
};

Scope channel__w0_58615_65639400;

SignalI trig__r_65636780_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI maketrig__r_65636780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_65636780_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58615_65639400;
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

SignalI dbus__r_65904360_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makedbus__r_65904360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_65904360_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58615_65639400;
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

SignalI abus__r_65904260_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_65904260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65904260_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58615_65639400;
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

SignalI mem_51332680_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makemem_51332680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51332680_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58615_65639400;
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
         src0 = make__77749060();
         src1 = make__77749040();
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

Scope raddr_58616_65639020;

Scope makeraddr_58616_65639020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58616_65639020 = scope;
   scope->owner = (Object)channel__w0_58615_65639400;
   scope->name = "raddr:616";
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

Scope rinc_58621_65638220;

Scope makerinc_58621_65638220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58621_65638220 = scope;
   scope->owner = (Object)channel__w0_58615_65639400;
   scope->name = "rinc:621";
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

Scope rdec_58625_65637480;

Scope makerdec_58625_65637480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58625_65637480 = scope;
   scope->owner = (Object)channel__w0_58615_65639400;
   scope->name = "rdec:625";
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

Behavior __62277480;

Behavior make__62277480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62277480 = behavior;
   behavior->owner = (Object)channel__w0_58615_65639400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg = realloc(clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg[clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__55612320();

   return behavior;
}

Behavior __77567020;

Behavior make__77567020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77567020 = behavior;
   behavior->owner = (Object)channel__w0_58615_65639400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_65904360_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   dbus__r_65904360_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_65904360_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(dbus__r_65904360_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,dbus__r_65904360_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_65904360_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[dbus__r_65904360_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77567200();

   return behavior;
}

Behavior __77566820;

Behavior make__77566820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77566820 = behavior;
   behavior->owner = (Object)channel__w0_58615_65639400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58624_64137220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58624_64137220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58624_64137220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58624_64137220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58624_64137220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58624_64137220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58624_64137220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77566980();

   return behavior;
}

Behavior __77566360;

Behavior make__77566360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77566360 = behavior;
   behavior->owner = (Object)channel__w0_58615_65639400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_65636780_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   trig__r_65636780_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   trig__r_65636780_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(trig__r_65636780_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,trig__r_65636780_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__r_65636780_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[trig__r_65636780_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77566520();

   return behavior;
}

Behavior __77566120;

Behavior make__77566120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77566120 = behavior;
   behavior->owner = (Object)channel__w0_58615_65639400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58622_64137200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77566300();

   return behavior;
}

Behavior __77565600;

Behavior make__77565600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77565600 = behavior;
   behavior->owner = (Object)channel__w0_58615_65639400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_65904260_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   abus__r_65904260_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_65904260_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(abus__r_65904260_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,abus__r_65904260_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_65904260_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[abus__r_65904260_channel__w0_58615_65639400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77565760();

   return behavior;
}

Behavior __77565400;

Behavior make__77565400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77565400 = behavior;
   behavior->owner = (Object)channel__w0_58615_65639400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58623_64136940_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77565560();

   return behavior;
}

Scope makechannel__w0_58615_65639400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58615_65639400 = scope;
   scope->owner = (Object)layer1_58_840_65640180;
   scope->name = "channel_w0:615";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_65636780();
   scope->inners[1] = makedbus__r_65904360();
   scope->inners[2] = makeabus__r_65904260();
   scope->inners[3] = makemem_51332680();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58616_65639020();
   scope->scopes[1] = makerinc_58621_65638220();
   scope->scopes[2] = makerdec_58625_65637480();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62277480();
   scope->behaviors[1] = make__77567020();
   scope->behaviors[2] = make__77566820();
   scope->behaviors[3] = make__77566360();
   scope->behaviors[4] = make__77566120();
   scope->behaviors[5] = make__77565600();
   scope->behaviors[6] = make__77565400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58630_62277120;

SignalI reg__0_62877200_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereg__0_62877200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_62877200_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__accum_58630_62277120;
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

Scope anum_58631_62276760;

Scope makeanum_58631_62276760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58631_62276760 = scope;
   scope->owner = (Object)channel__accum_58630_62277120;
   scope->name = "anum:631";
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

Scope raddr_58633_62276080;

Scope makeraddr_58633_62276080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58633_62276080 = scope;
   scope->owner = (Object)channel__accum_58630_62277120;
   scope->name = "raddr:633";
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

Scope waddr_58636_62316500;

Scope makewaddr_58636_62316500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58636_62316500 = scope;
   scope->owner = (Object)channel__accum_58630_62277120;
   scope->name = "waddr:636";
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

Scope rinc_58639_62315820;

SignalI abus__r_62313580_rinc_58639_62315820_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_62313580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62313580_rinc_58639_62315820_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rinc_58639_62315820;
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

Scope makerinc_58639_62315820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58639_62315820 = scope;
   scope->owner = (Object)channel__accum_58630_62277120;
   scope->name = "rinc:639";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62313580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58643_62313380;

SignalI abus__w_62312840_winc_58643_62313380_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_62312840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_62312840_winc_58643_62313380_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)winc_58643_62313380;
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

Scope makewinc_58643_62313380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58643_62313380 = scope;
   scope->owner = (Object)channel__accum_58630_62277120;
   scope->name = "winc:643";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_62312840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58647_62312620;

SignalI abus__r_62312020_rdec_58647_62312620_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_62312020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62312020_rdec_58647_62312620_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rdec_58647_62312620;
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

Scope makerdec_58647_62312620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58647_62312620 = scope;
   scope->owner = (Object)channel__accum_58630_62277120;
   scope->name = "rdec:647";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62312020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58651_62311760;

SignalI abus__w_62310880_wdec_58651_62311760_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_62310880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_62310880_wdec_58651_62311760_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)wdec_58651_62311760;
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

Scope makewdec_58651_62311760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58651_62311760 = scope;
   scope->owner = (Object)channel__accum_58630_62277120;
   scope->name = "wdec:651";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_62310880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __77563940;

Behavior make__77563940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77563940 = behavior;
   behavior->owner = (Object)channel__accum_58630_62277120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_62877200_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   reg__0_62877200_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   reg__0_62877200_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(reg__0_62877200_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,reg__0_62877200_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__0_62877200_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[reg__0_62877200_channel__accum_58630_62277120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77564120();

   return behavior;
}

Behavior __77563700;

Behavior make__77563700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77563700 = behavior;
   behavior->owner = (Object)channel__accum_58630_62277120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58632_64421560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77563860();

   return behavior;
}

Scope makechannel__accum_58630_62277120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58630_62277120 = scope;
   scope->owner = (Object)layer1_58_840_65640180;
   scope->name = "channel_accum:630";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_62877200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58631_62276760();
   scope->scopes[1] = makeraddr_58633_62276080();
   scope->scopes[2] = makewaddr_58636_62316500();
   scope->scopes[3] = makerinc_58639_62315820();
   scope->scopes[4] = makewinc_58643_62313380();
   scope->scopes[5] = makerdec_58647_62312620();
   scope->scopes[6] = makewdec_58651_62311760();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77563940();
   scope->behaviors[1] = make__77563700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58655_63784160;

SignalI lv0_64349300_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelv0_64349300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_64349300_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58655_63784160;
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

SignalI av0_64933180_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeav0_64933180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_64933180_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58655_63784160;
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

SignalI rv_65393800_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makerv_65393800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_65393800_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58655_63784160;
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

SignalI lvok0_65393760_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelvok0_65393760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_65393760_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58655_63784160;
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

SignalI rvok_65393740_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makervok_65393740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_65393740_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58655_63784160;
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

SignalI wok0_65393700_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makewok0_65393700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_65393700_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58655_63784160;
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

SignalI run_65393580_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makerun_65393580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_65393580_mac__n1_58655_63784160_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58655_63784160;
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

Behavior __65292440;

Behavior make__65292440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65292440 = behavior;
   behavior->owner = (Object)mac__n1_58655_63784160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__65393380();

   return behavior;
}

Scope makemac__n1_58655_63784160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58655_63784160 = scope;
   scope->owner = (Object)layer1_58_840_65640180;
   scope->name = "mac_n1:655";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_64349300();
   scope->inners[1] = makeav0_64933180();
   scope->inners[2] = makerv_65393800();
   scope->inners[3] = makelvok0_65393760();
   scope->inners[4] = makervok_65393740();
   scope->inners[5] = makewok0_65393700();
   scope->inners[6] = makerun_65393580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65292440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58660_65292200;

SignalI trig__r_65248240_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI maketrig__r_65248240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_65248240_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58660_65292200;
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

SignalI dbus__r_65693840_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makedbus__r_65693840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_65693840_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58660_65292200;
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

SignalI abus__r_65693680_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_65693680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65693680_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58660_65292200;
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

SignalI mem_66580960_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makemem_66580960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_66580960_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58660_65292200;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__77743660(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58661_65291620;

Scope makeraddr_58661_65291620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58661_65291620 = scope;
   scope->owner = (Object)channel__b0_58660_65292200;
   scope->name = "raddr:661";
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

Scope rinc_58666_65290780;

Scope makerinc_58666_65290780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58666_65290780 = scope;
   scope->owner = (Object)channel__b0_58660_65292200;
   scope->name = "rinc:666";
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

Scope rdec_58670_65248780;

Scope makerdec_58670_65248780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58670_65248780 = scope;
   scope->owner = (Object)channel__b0_58660_65292200;
   scope->name = "rdec:670";
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

Behavior __54408860;

Behavior make__54408860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54408860 = behavior;
   behavior->owner = (Object)channel__b0_58660_65292200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg = realloc(clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg[clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__50832580();

   return behavior;
}

Behavior __77602620;

Behavior make__77602620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77602620 = behavior;
   behavior->owner = (Object)channel__b0_58660_65292200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_65693840_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   dbus__r_65693840_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_65693840_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(dbus__r_65693840_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,dbus__r_65693840_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_65693840_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[dbus__r_65693840_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77561920();

   return behavior;
}

Behavior __77602420;

Behavior make__77602420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77602420 = behavior;
   behavior->owner = (Object)channel__b0_58660_65292200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58664_64787660_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58664_64787660_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58664_64787660_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58664_64787660_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58664_64787660_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58664_64787660_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58664_64787660_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77602580();

   return behavior;
}

Behavior __77601960;

Behavior make__77601960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77601960 = behavior;
   behavior->owner = (Object)channel__b0_58660_65292200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_65248240_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   trig__r_65248240_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   trig__r_65248240_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(trig__r_65248240_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,trig__r_65248240_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__r_65248240_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[trig__r_65248240_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77602120();

   return behavior;
}

Behavior __77601740;

Behavior make__77601740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77601740 = behavior;
   behavior->owner = (Object)channel__b0_58660_65292200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58662_64787560_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77601920();

   return behavior;
}

Behavior __77601280;

Behavior make__77601280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77601280 = behavior;
   behavior->owner = (Object)channel__b0_58660_65292200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_65693680_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   abus__r_65693680_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_65693680_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(abus__r_65693680_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,abus__r_65693680_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_65693680_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[abus__r_65693680_channel__b0_58660_65292200_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77601440();

   return behavior;
}

Behavior __77601080;

Behavior make__77601080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77601080 = behavior;
   behavior->owner = (Object)channel__b0_58660_65292200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58663_64787440_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58663_64787440_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58663_64787440_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58663_64787440_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58663_64787440_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58663_64787440_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58663_64787440_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77601240();

   return behavior;
}

Scope makechannel__b0_58660_65292200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58660_65292200 = scope;
   scope->owner = (Object)layer1_58_840_65640180;
   scope->name = "channel_b0:660";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_65248240();
   scope->inners[1] = makedbus__r_65693840();
   scope->inners[2] = makeabus__r_65693680();
   scope->inners[3] = makemem_66580960();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58661_65291620();
   scope->scopes[1] = makerinc_58666_65290780();
   scope->scopes[2] = makerdec_58670_65248780();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54408860();
   scope->behaviors[1] = make__77602620();
   scope->behaviors[2] = make__77602420();
   scope->behaviors[3] = make__77601960();
   scope->behaviors[4] = make__77601740();
   scope->behaviors[5] = make__77601280();
   scope->behaviors[6] = make__77601080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58675_54408700;

SignalI reg__0_55288040_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereg__0_55288040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_55288040_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__z_58675_54408700;
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

Scope anum_58676_54406320;

Scope makeanum_58676_54406320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58676_54406320 = scope;
   scope->owner = (Object)channel__z_58675_54408700;
   scope->name = "anum:676";
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

Scope raddr_58678_54404560;

Scope makeraddr_58678_54404560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58678_54404560 = scope;
   scope->owner = (Object)channel__z_58675_54408700;
   scope->name = "raddr:678";
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

Scope waddr_58681_54623140;

Scope makewaddr_58681_54623140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58681_54623140 = scope;
   scope->owner = (Object)channel__z_58675_54408700;
   scope->name = "waddr:681";
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

Scope rinc_58684_54622140;

SignalI abus__r_54620380_rinc_58684_54622140_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_54620380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54620380_rinc_58684_54622140_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rinc_58684_54622140;
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

Scope makerinc_58684_54622140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58684_54622140 = scope;
   scope->owner = (Object)channel__z_58675_54408700;
   scope->name = "rinc:684";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54620380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58687_54618480;

SignalI abus__w_54616980_winc_58687_54618480_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_54616980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54616980_winc_58687_54618480_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)winc_58687_54618480;
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

Scope makewinc_58687_54618480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58687_54618480 = scope;
   scope->owner = (Object)channel__z_58675_54408700;
   scope->name = "winc:687";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54616980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58690_54616600;

SignalI abus__r_54646780_rdec_58690_54616600_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_54646780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54646780_rdec_58690_54616600_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rdec_58690_54616600;
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

Scope makerdec_58690_54616600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58690_54616600 = scope;
   scope->owner = (Object)channel__z_58675_54408700;
   scope->name = "rdec:690";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54646780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58694_54645840;

SignalI abus__w_54641440_wdec_58694_54645840_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_54641440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54641440_wdec_58694_54645840_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)wdec_58694_54645840;
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

Scope makewdec_58694_54645840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58694_54645840 = scope;
   scope->owner = (Object)channel__z_58675_54408700;
   scope->name = "wdec:694";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54641440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __77599580;

Behavior make__77599580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77599580 = behavior;
   behavior->owner = (Object)channel__z_58675_54408700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_55288040_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   reg__0_55288040_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   reg__0_55288040_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(reg__0_55288040_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,reg__0_55288040_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__0_55288040_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[reg__0_55288040_channel__z_58675_54408700_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77599760();

   return behavior;
}

Behavior __77599380;

Behavior make__77599380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77599380 = behavior;
   behavior->owner = (Object)channel__z_58675_54408700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58677_65128680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77599540();

   return behavior;
}

Scope makechannel__z_58675_54408700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58675_54408700 = scope;
   scope->owner = (Object)layer1_58_840_65640180;
   scope->name = "channel_z:675";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_55288040();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58676_54406320();
   scope->scopes[1] = makeraddr_58678_54404560();
   scope->scopes[2] = makewaddr_58681_54623140();
   scope->scopes[3] = makerinc_58684_54622140();
   scope->scopes[4] = makewinc_58687_54618480();
   scope->scopes[5] = makerdec_58690_54616600();
   scope->scopes[6] = makewdec_58694_54645840();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77599580();
   scope->behaviors[1] = make__77599380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58698_56383220;

SignalI lv0_57129480_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelv0_57129480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_57129480_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58698_56383220;
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

SignalI rv0_50503040_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makerv0_50503040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_50503040_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58698_56383220;
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

SignalI lvok0_50502980_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelvok0_50502980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_50502980_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58698_56383220;
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

SignalI rvok0_50502960_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makervok0_50502960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_50502960_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58698_56383220;
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

SignalI run_50502940_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makerun_50502940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_50502940_add__n_58698_56383220_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58698_56383220;
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

Behavior __63901680;

Behavior make__63901680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63901680 = behavior;
   behavior->owner = (Object)add__n_58698_56383220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__50502780();

   return behavior;
}

Scope makeadd__n_58698_56383220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58698_56383220 = scope;
   scope->owner = (Object)layer1_58_840_65640180;
   scope->name = "add_n:698";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_57129480();
   scope->inners[1] = makerv0_50503040();
   scope->inners[2] = makelvok0_50502980();
   scope->inners[3] = makervok0_50502960();
   scope->inners[4] = makerun_50502940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63901680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __66580860;

Behavior make__66580860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66580860 = behavior;
   behavior->owner = (Object)layer1_58_840_65640180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__66583240();

   return behavior;
}

Behavior __53098160;

Behavior make__53098160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53098160 = behavior;
   behavior->owner = (Object)layer1_58_840_65640180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__66580200();

   return behavior;
}

Behavior __68955120;

Behavior make__68955120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __68955120 = behavior;
   behavior->owner = (Object)layer1_58_840_65640180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__53098040();

   return behavior;
}

Behavior __77533240;

Behavior make__77533240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77533240 = behavior;
   behavior->owner = (Object)layer1_58_840_65640180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_68952800_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   req_68952800_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   req_68952800_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(req_68952800_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,req_68952800_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
req_68952800_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[req_68952800_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__mac_63901380_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77533480();

   return behavior;
}

Behavior __77568120;

Behavior make__77568120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77568120 = behavior;
   behavior->owner = (Object)layer1_58_840_65640180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack_63901400_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_65340340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   value__z0_65340340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   value__z0_65340340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(value__z0_65340340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,value__z0_65340340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
value__z0_65340340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[value__z0_65340340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_65637680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__a0_65637680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__a0_65637680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__a0_65637680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__a0_65637680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__a0_65637680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__a0_65637680_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77533760();

   return behavior;
}

Behavior __77567920;

Behavior make__77567920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77567920 = behavior;
   behavior->owner = (Object)layer1_58_840_65640180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_65675140_counter_58_8420_65654340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__mac_65675140_counter_58_8420_65654340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__mac_65675140_counter_58_8420_65654340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__mac_65675140_counter_58_8420_65654340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__mac_65675140_counter_58_8420_65654340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__mac_65675140_counter_58_8420_65654340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__mac_65675140_counter_58_8420_65654340_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_65342640_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   a_65342640_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   a_65342640_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(a_65342640_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,a_65342640_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
a_65342640_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[a_65342640_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77533680();

   return behavior;
}

Scope makelayer1_58_840_65640180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_840_65640180 = scope;
   scope->owner = (Object)layer1_58_8400_68954800;
   scope->name = "layer1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_65674780();
   scope->systemIs[1] = makefunc0_65342380();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_63901420();
   scope->inners[1] = makeack_63901400();
   scope->inners[2] = makeack__mac_63901380();
   scope->inners[3] = makeack__add_63901360();
   scope->inners[4] = make_58624_64137220();
   scope->inners[5] = make_58622_64137200();
   scope->inners[6] = make_58623_64136940();
   scope->inners[7] = make_58632_64421560();
   scope->inners[8] = make_58664_64787660();
   scope->inners[9] = make_58665_64787620();
   scope->inners[10] = make_58662_64787560();
   scope->inners[11] = make_58663_64787440();
   scope->inners[12] = make_58677_65128680();
   scope->inners[13] = makevalue__z0_65340340();
   scope->inners[14] = makevalue__a0_65637720();
   scope->inners[15] = makeflag__z0_65637700();
   scope->inners[16] = makeack__a0_65637680();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58615_65639400();
   scope->scopes[1] = makechannel__accum_58630_62277120();
   scope->scopes[2] = makemac__n1_58655_63784160();
   scope->scopes[3] = makechannel__b0_58660_65292200();
   scope->scopes[4] = makechannel__z_58675_54408700();
   scope->scopes[5] = makeadd__n_58698_56383220();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__66580860();
   scope->behaviors[1] = make__53098160();
   scope->behaviors[2] = make__68955120();
   scope->behaviors[3] = make__77533240();
   scope->behaviors[4] = make__77568120();
   scope->behaviors[5] = make__77567920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_8400_68954800() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_8400_68954800 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T00";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_68952840();
   systemT->inputs[1] = makerst_68952820();
   systemT->inputs[2] = makereq_68952800();
   systemT->inputs[3] = make_58458_67317900();
   systemT->inputs[4] = make_58459_72998520();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_72998480();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58460_72998380();
   systemT->inouts[1] = make_58424_73092100();

   systemT->scope = makelayer1_58_840_65640180();

   return systemT;
}