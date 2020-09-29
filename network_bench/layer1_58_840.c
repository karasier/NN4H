#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_81073620;

SignalI clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeclk_81070480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_840_81073620;
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

SignalI rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makerst_81070440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_840_81073620;
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

SignalI fill_81070420_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makefill_81070420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_81070420_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_840_81073620;
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

SignalI req_81070400_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makereq_81070400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_81070400_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_840_81073620;
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

SignalI _5866_81317360_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_5866_81317360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_81317360_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_840_81073620;
   signalI->name = ":66";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5867_81465860_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_5867_81465860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_81465860_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_840_81073620;
   signalI->name = ":67";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_81465800_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack__layer_81465800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_81465800_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_840_81073620;
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

SignalI _5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_5868_81465640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_840_81073620;
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

SignalI _5832_81647000_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_5832_81647000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_81647000_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_840_81073620;
   signalI->name = ":32";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __78460580;

Block __78460360;

void code__78460360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57771980(),ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57771100(),ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57826880(),ack__add_84079620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__78460360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78460360 = block;
   block->owner = (Object)__78460580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78460360;

   return block;
};

void code__78460580() {
   {
      Value cond = rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__78460360();
   }
      }
   }
}

Block make__78460580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78460580 = block;
   block->owner = (Object)__78458800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78460580;

   return block;
};

Block __78458580;

Block __78457620;

Block __78457460;

void code__78457460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,value__z0_57115360_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57825280(),flag__z0_57676320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__78457460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78457460 = block;
   block->owner = (Object)__78457620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78457460;

   return block;
};

void code__78457620() {
 code__78457460();
}

Block make__78457620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78457620 = block;
   block->owner = (Object)__78458580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78457620;

   return block;
};

Block __78458060;

void code__78458060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57824720(),flag__z0_57676320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__78458060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78458060 = block;
   block->owner = (Object)__78458580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78458060;

   return block;
};

void code__78458580() {
   {
      Value cond = ack__add_84079620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__78457620();
   }
   else {
  code__78458060();
   }
      }
   }
}

Block make__78458580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78458580 = block;
   block->owner = (Object)__79013020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78458580;

   return block;
};

Block __79012740;

Block __79012380;

void code__79012380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57823480(),ack__a0_57676220_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79012380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79012380 = block;
   block->owner = (Object)__79012740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79012380;

   return block;
};

Block __79011880;

Block __79035860;

void code__79035860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_57676340_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_5832_81647000_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57821900(),ack__a0_57676220_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79035860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79035860 = block;
   block->owner = (Object)__79011880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79035860;

   return block;
};

void code__79011880() {
 code__79035860();
}

Block make__79011880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79011880 = block;
   block->owner = (Object)__79012740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79011880;

   return block;
};

void code__79012740() {
   {
      Value cond = rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79012380();
   }
   else if (value2integer(flag__z0_57676320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value)) {
  code__79011880();
   }
      }
   }
}

Block make__79012740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79012740 = block;
   block->owner = (Object)__79488000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79012740;

   return block;
};

Block __79487680;

Block __79487420;

Block __79487020;

void code__79487020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57820980(),_58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79487020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79487020 = block;
   block->owner = (Object)__79487420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79487020;

   return block;
};

void code__79487420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57821180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79487020();
   }
      }
   }
}

Block make__79487420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79487420 = block;
   block->owner = (Object)__79487680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79487420;

   return block;
};

Block __79510200;

Block __79509560;

void code__79509560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57819740(),_58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79509560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79509560 = block;
   block->owner = (Object)__79510200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79509560;

   return block;
};

void code__79510200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57820440();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79509560();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57819620(),_58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79510200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79510200 = block;
   block->owner = (Object)__79487680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79510200;

   return block;
};

Block __79508780;

void code__79508780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57859520(),address__weights0_57675440_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57859280(),ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57858900(),address__bias_57675120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57858380(),ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79508780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79508780 = block;
   block->owner = (Object)__79487680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79508780;

   return block;
};

Block __79506620;

Block __79506340;

Block __79506180;

Block __79505700;

void code__79505700() {
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
                  src0 = _58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57855880();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57855640(),_58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = w0_65456020_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            idx = value2integer(address__weights0_57675440_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),16),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),16),dst);
      set_value_pos(pool_state);
   dst; }),_58270_66544740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79505700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79505700 = block;
   block->owner = (Object)__79506180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79505700;

   return block;
};

void code__79506180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57856200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79505700();
   }
      }
   }
}

Block make__79506180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79506180 = block;
   block->owner = (Object)__79506340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79506180;

   return block;
};

void code__79506340() {
 code__79506180();
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
                  src0 = address__weights0_57675440_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57880800();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_57675440_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79506340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79506340 = block;
   block->owner = (Object)__79506620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79506340;

   return block;
};

Block __80320580;

Block __80320320;

Block __80319860;

Block __80319100;

void code__80319100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_66255000_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            idx = value2integer(address__bias_57675120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),16),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),16),dst);
      set_value_pos(pool_state);
   dst; }),_58324_58411320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__80319100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80319100 = block;
   block->owner = (Object)__80319860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80319100;

   return block;
};

void code__80319860() {
{
      Value value = _58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__57878860())) {
    code__80319100();
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
                  src0 = _58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57877080();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__80319860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80319860 = block;
   block->owner = (Object)__80320320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80319860;

   return block;
};

void code__80320320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57879240();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__80319860();
   }
      }
   }
}

Block make__80320320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80320320 = block;
   block->owner = (Object)__80320580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80320320;

   return block;
};

void code__80320580() {
 code__80320320();
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
                  src0 = address__bias_57675120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57898620();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_57675120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__80320580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80320580 = block;
   block->owner = (Object)__79506620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80320580;

   return block;
};

void code__79506620() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79506340();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__80320580();
   }
      }
   }
}

Block make__79506620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79506620 = block;
   block->owner = (Object)__79487680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79506620;

   return block;
};

Block __80945540;

void code__80945540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57897460(),ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__80945540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80945540 = block;
   block->owner = (Object)__79487680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80945540;

   return block;
};

Block __81075340;

void code__81075340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57896040(),ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__81075340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __81075340 = block;
   block->owner = (Object)__79487680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__81075340;

   return block;
};

void code__79487680() {
 code__79487420();
 code__79510200();
   {
      Value cond = rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79508780();
   }
      }
   }
   {
      Value cond = fill__channel_84079600_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79506620();
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
               src0 = address__weights0_57675440_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57897960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__80945540();
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
               src0 = address__bias_57675120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57896760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__81075340();
   }
      }
   }
}

Block make__79487680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79487680 = block;
   block->owner = (Object)__81074500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79487680;

   return block;
};

Block __50509580;

void code__50509580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_81070400_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_84079680_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50509580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50509580 = block;
   block->owner = (Object)__50525840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50509580;

   return block;
};

Block __50705680;

void code__50705680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_81070420_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                  src1 = ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                  dst = and_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_84079600_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50705680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50705680 = block;
   block->owner = (Object)__50701060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50705680;

   return block;
};

Block __50489700;

void code__50489700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,ack_66593520_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,rst_66593500_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_57115360_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_57676220_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,ack__layer_81465800_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50489700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50489700 = block;
   block->owner = (Object)__50723940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50489700;

   return block;
};

Block __50488140;

void code__50488140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_66593440_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_77845520_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,value__a0_57676340_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50488140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50488140 = block;
   block->owner = (Object)__50718720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50488140;

   return block;
};

Block __78132500;

Block __78344800;

void code__78344800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_77615380_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,make_ref_rangeS(mem_77759820_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760,value2integer(abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value),value2integer(abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__78344800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78344800 = block;
   block->owner = (Object)__78132500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78344800;

   return block;
};

void code__78132500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_77759820_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            idx = value2integer(abus__r_77615300_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),16),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),16),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_70654940_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_69948040_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__78344800();
   }
      }
   }
}

Block make__78132500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78132500 = block;
   block->owner = (Object)__78794380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78132500;

   return block;
};

Block __50754720;

void code__50754720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_70654940_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_58266_84174800_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50754720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50754720 = block;
   block->owner = (Object)__50769940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50754720;

   return block;
};

Block __50768660;

void code__50768660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_84174800_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,dbus__r_70654940_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50768660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50768660 = block;
   block->owner = (Object)__50766760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50768660;

   return block;
};

Block __50803880;

void code__50803880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_69948080_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50803880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50803880 = block;
   block->owner = (Object)__50802180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50803880;

   return block;
};

Block __50822320;

void code__50822320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,trig__r_69948080_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50822320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50822320 = block;
   block->owner = (Object)__50819580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50822320;

   return block;
};

Block __50832300;

void code__50832300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_77615300_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50832300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50832300 = block;
   block->owner = (Object)__50887560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50832300;

   return block;
};

Block __50887360;

void code__50887360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,abus__r_77615300_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50887360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50887360 = block;
   block->owner = (Object)__50886520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50887360;

   return block;
};

Block __50882760;

void code__50882760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_69948040_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50882760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50882760 = block;
   block->owner = (Object)__50881180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50882760;

   return block;
};

Block __50880880;

void code__50880880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,trig__w_69948040_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50880880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50880880 = block;
   block->owner = (Object)__50903620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50880880;

   return block;
};

Block __50918780;

void code__50918780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50918780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50918780 = block;
   block->owner = (Object)__50915540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50918780;

   return block;
};

Block __50915360;

void code__50915360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__50915360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50915360 = block;
   block->owner = (Object)__50914160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50915360;

   return block;
};

Block __51006040;

void code__51006040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_77615380_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_58270_66544740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__51006040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51006040 = block;
   block->owner = (Object)__51003960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51006040;

   return block;
};

Block __51003620;

void code__51003620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_66544740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,dbus__w_77615380_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__51003620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51003620 = block;
   block->owner = (Object)__51025160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51003620;

   return block;
};

Block __51131480;

void code__51131480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_79000900_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__51131480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51131480 = block;
   block->owner = (Object)__51128760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51131480;

   return block;
};

Block __51126700;

void code__51126700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,reg__0_79000900_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__51126700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51126700 = block;
   block->owner = (Object)__51147960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51126700;

   return block;
};

Block __79625200;

Block __79625040;

Block __79624720;

void code__79624720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57510860(),_58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79624720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79624720 = block;
   block->owner = (Object)__79625040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79624720;

   return block;
};

void code__79625040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57511180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79624720();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57510520(),_58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79625040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79625040 = block;
   block->owner = (Object)__79625200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79625040;

   return block;
};

Block __79624100;

Block __79623780;

void code__79623780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57532200(),_5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79623780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79623780 = block;
   block->owner = (Object)__79624100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79623780;

   return block;
};

void code__79624100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57507880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79623780();
   }
      }
   }
}

Block make__79624100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79624100 = block;
   block->owner = (Object)__79625200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79624100;

   return block;
};

Block __79622920;

void code__79622920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57527620(),rvok_79625340_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57526980(),lvok0_79625360_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57526520(),av0_79488920_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79622920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79622920 = block;
   block->owner = (Object)__79625200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79622920;

   return block;
};

Block __79668460;

Block __79668140;

Block __79667820;

Block __79667360;

void code__79667360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_81317360_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,rv_79625380_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79667360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79667360 = block;
   block->owner = (Object)__79667820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79667360;

   return block;
};

Block __80087380;

void code__80087380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_81465860_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,rv_79625380_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__80087380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80087380 = block;
   block->owner = (Object)__79667820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80087380;

   return block;
};

void code__79667820() {
{
      Value value = _5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__57548140())) {
    code__79667360();
         }
         else if (value2integer(value) == value2integer(make__57547200())) {
    code__80087380();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57546200(),rvok_79625340_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
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
                  src0 = _5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57543800();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__79667820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79667820 = block;
   block->owner = (Object)__79668140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79667820;

   return block;
};

void code__79668140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57524300();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79667820();
   }
      }
   }
}

Block make__79668140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79668140 = block;
   block->owner = (Object)__79668460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79668140;

   return block;
};

Block __80334800;

Block __80334480;

Block __80334160;

void code__80334160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_84174800_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,lv0_79311460_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57564660(),lvok0_79625360_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__80334160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80334160 = block;
   block->owner = (Object)__80334480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80334160;

   return block;
};

void code__80334480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57541000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__80334160();
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
                  src0 = _58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57564160();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57563720(),_58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__80334480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80334480 = block;
   block->owner = (Object)__80334800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80334480;

   return block;
};

void code__80334800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57541440();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__80334480();
   }
      }
   }
}

Block make__80334800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80334800 = block;
   block->owner = (Object)__79668460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80334800;

   return block;
};

Block __80564840;

Block __80564360;

Block __80564200;

void code__80564200() {
}

Block make__80564200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80564200 = block;
   block->owner = (Object)__80564360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80564200;

   return block;
};

Block __81461660;

void code__81461660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_79488920_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__81461660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __81461660 = block;
   block->owner = (Object)__80564360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__81461660;

   return block;
};

void code__80564360() {
 code__80564200();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_79488920_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
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
                              src0 = lv0_79311460_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),24),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_79625380_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),24),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57559880();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_79488920_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
 code__81461660();
}

Block make__80564360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80564360 = block;
   block->owner = (Object)__80564840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80564360;

   return block;
};

void code__80564840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57562640(),ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57561480(),run_79625320_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
 code__80564360();
}

Block make__80564840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80564840 = block;
   block->owner = (Object)__79668460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80564840;

   return block;
};

void code__79668460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57524420(),run_79625320_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
 code__79668140();
 code__80334800();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_79625360_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
         src1 = rvok_79625340_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__80564840();
   }
      }
   }
}

Block make__79668460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79668460 = block;
   block->owner = (Object)__79625200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79668460;

   return block;
};

void code__79625200() {
 code__79625040();
 code__79624100();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57530320(),ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57529660(),run_79625320_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_79625320_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79622920();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_84079680_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
         src1 = run_79625320_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79668460();
   }
      }
   }
}

Block make__79625200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79625200 = block;
   block->owner = (Object)__81660240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79625200;

   return block;
};

Block __51196440;

void code__51196440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_58313_50656700_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__51196440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51196440 = block;
   block->owner = (Object)__51195120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51196440;

   return block;
};

Block __51193740;

void code__51193740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_50656700_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__51193740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51193740 = block;
   block->owner = (Object)__51215760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51193740;

   return block;
};

Block __51209520;

void code__51209520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_58324_58411320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__51209520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51209520 = block;
   block->owner = (Object)__51232660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51209520;

   return block;
};

Block __51231900;

void code__51231900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_58411320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__51231900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51231900 = block;
   block->owner = (Object)__51229400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51231900;

   return block;
};

Block __51278660;

void code__51278660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_81682220_winc_58323_81658060_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__51278660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51278660 = block;
   block->owner = (Object)__51276940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51278660;

   return block;
};

Block __51276480;

void code__51276480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,abus__w_81682220_winc_58323_81658060_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__51276480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51276480 = block;
   block->owner = (Object)__51295760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51276480;

   return block;
};

Block __51356540;

void code__51356540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_82520300_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__51356540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51356540 = block;
   block->owner = (Object)__51378020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51356540;

   return block;
};

Block __51377760;

void code__51377760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,reg__0_82520300_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__51377760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51377760 = block;
   block->owner = (Object)__51374300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51377760;

   return block;
};

Block __83024480;

Block __83023380;

Block __83023060;

void code__83023060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,lv0_82920960_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57676740(),lvok0_83024640_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__83023060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83023060 = block;
   block->owner = (Object)__83023380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83023060;

   return block;
};

Block __83156300;

void code__83156300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_50656700_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,rv0_83024660_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57673940(),rvok0_83024620_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__83156300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83156300 = block;
   block->owner = (Object)__83023380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83156300;

   return block;
};

Block __83395900;

Block __83395420;

void code__83395420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_82920960_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      src1 = rv0_83024660_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__83395420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83395420 = block;
   block->owner = (Object)__83395900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83395420;

   return block;
};

void code__83395900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57672860(),run_83024600_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57671900(),ack__add_84079620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
 code__83395420();
}

Block make__83395900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83395900 = block;
   block->owner = (Object)__83023380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83395900;

   return block;
};

void code__83023380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57678920(),run_83024600_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
 code__83023060();
 code__83156300();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_83024640_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
         src1 = rvok0_83024620_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__83395900();
   }
      }
   }
}

Block make__83023380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83023380 = block;
   block->owner = (Object)__83024480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83023380;

   return block;
};

Block __83024000;

void code__83024000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57759260(),lvok0_83024640_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57759000(),rvok0_83024620_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__83024000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83024000 = block;
   block->owner = (Object)__83024480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83024000;

   return block;
};

void code__83024480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57622840(),ack__add_84079620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57679780(),run_83024600_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
         src1 = run_83024600_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__83023380();
   }
   else {
  code__83024000();
   }
      }
   }
}

Block make__83024480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83024480 = block;
   block->owner = (Object)__84079820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83024480;

   return block;
};

Value make__57756240() {
   static unsigned long long data[] = { 622ULL };
   return make_set_value(get_type_vector(get_type_signed(),16),1,data);
}

Value make__57755180() {
   static unsigned long long data[] = { 65492ULL };
   return make_set_value(get_type_vector(get_type_signed(),16),1,data);
}

Value make__57511180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57510860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57510520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57507880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57532200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57530320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57529660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57527620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57526980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57526520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),16),1,data);
}

Value make__57524420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57524300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57548140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57547200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57546200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57543800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57541440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57541000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57564660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57564160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57563720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57562640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57561480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57559880() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57622840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57679780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57678920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57676740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57673940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57672860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57671900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57759260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57759000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57771980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57771100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57826880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57825280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57824720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57823480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57821900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57821180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57820980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57820440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57819740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57819620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57859520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57859280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57858900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57858380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57856200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57855880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57855640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57880800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57879240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57878860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57877080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57898620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57897960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57897460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57896760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57896040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_69930240;

SignalI req__mac_84079680_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makereq__mac_84079680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_84079680_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
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

SignalI ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack_84079660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
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

SignalI ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack__mac_84079640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
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

SignalI ack__add_84079620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack__add_84079620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_84079620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
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

SignalI fill__channel_84079600_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makefill__channel_84079600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_84079600_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
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

SignalI _58266_84174800_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_58266_84174800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_84174800_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = ":266";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_58264_84174780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = ":264";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_58265_84174640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = ":265";
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

SignalI _58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_58283_49409080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = ":283";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58313_50656700_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_58313_50656700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_50656700_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = ":313";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_58336_51449380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = ":336";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_57115360_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makevalue__z0_57115360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_57115360_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = "value_z0";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__a0_57676340_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makevalue__a0_57676340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_57676340_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = "value_a0";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI flag__z0_57676320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeflag__z0_57676320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_57676320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
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

SignalI ack__a0_57676220_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack__a0_57676220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_57676220_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
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

SignalI address__weights0_57675440_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeaddress__weights0_57675440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_57675440_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = "address_weights0";
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

SignalI address__bias_57675120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeaddress__bias_57675120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_57675120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
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

SignalI ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack__weights0_57675060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = "ack_weights0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack__bias_57674880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
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

SignalI _58324_58411320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_58324_58411320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_58411320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = ":324";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_58325_58410880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = ":325";
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

SignalI w0_65456020_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makew0_65456020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_65456020_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = "w0";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),16),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__57756240();
         concat_value(1,0,dst,src0);
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

SignalI b_66255000_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeb_66255000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_66255000_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = "b";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),16),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__57755180();
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

SignalI _58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_58268_66254960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = ":268";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_58269_66254740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = ":269";
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

SignalI _58270_66544740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_58270_66544740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_66544740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)layer1_58_84_69930240;
   signalI->name = ":270";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SystemI counter_66593280;

SystemI makecounter_66593280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_66593280 = systemI;
   systemI->owner = (Object)layer1_58_84_69930240;
   systemI->name = "counter";
   systemI->system = counter_58_8400_66598620;

   return systemI;
};

SystemI func0_77845260;

SystemI makefunc0_77845260() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_77845260 = systemI;
   systemI->owner = (Object)layer1_58_84_69930240;
   systemI->name = "func0";
   systemI->system = func0_58_8400_68277280;

   return systemI;
};

Scope channel__w0_58252_69929720;

SignalI trig__r_69948080_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI maketrig__r_69948080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_69948080_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__w0_58252_69929720;
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

SignalI trig__w_69948040_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI maketrig__w_69948040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_69948040_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__w0_58252_69929720;
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

SignalI dbus__r_70654940_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makedbus__r_70654940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_70654940_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__w0_58252_69929720;
   signalI->name = "dbus_r";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__w_77615380_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makedbus__w_77615380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_77615380_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__w0_58252_69929720;
   signalI->name = "dbus_w";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__r_77615300_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__r_77615300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_77615300_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__w0_58252_69929720;
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

SignalI abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__w_77615220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__w0_58252_69929720;
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

SignalI mem_77759820_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makemem_77759820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_77759820_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__w0_58252_69929720;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),16),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58253_69928620;

Scope makeraddr_58253_69928620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_69928620 = scope;
   scope->owner = (Object)channel__w0_58252_69929720;
   scope->name = "raddr:253";
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

Scope waddr_58258_69927800;

Scope makewaddr_58258_69927800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_69927800 = scope;
   scope->owner = (Object)channel__w0_58252_69929720;
   scope->name = "waddr:258";
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

Scope rinc_58263_69926920;

Scope makerinc_58263_69926920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_69926920 = scope;
   scope->owner = (Object)channel__w0_58252_69929720;
   scope->name = "rinc:263";
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

Scope winc_58267_69950900;

Scope makewinc_58267_69950900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_69950900 = scope;
   scope->owner = (Object)channel__w0_58252_69929720;
   scope->name = "winc:267";
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

Scope rdec_58271_69949700;

Scope makerdec_58271_69949700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_69949700 = scope;
   scope->owner = (Object)channel__w0_58252_69929720;
   scope->name = "rdec:271";
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

Scope wdec_58276_69948860;

Scope makewdec_58276_69948860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_69948860 = scope;
   scope->owner = (Object)channel__w0_58252_69929720;
   scope->name = "wdec:276";
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

Behavior __78794380;

Behavior make__78794380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78794380 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_neg += 1;
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->neg = realloc(clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->neg,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_neg*sizeof(Object));
clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->neg[clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_neg-1] = (Object)behavior;
   behavior->block = make__78132500();

   return behavior;
}

Behavior __50769940;

Behavior make__50769940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50769940 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_70654940_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   dbus__r_70654940_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   dbus__r_70654940_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(dbus__r_70654940_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,dbus__r_70654940_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
dbus__r_70654940_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[dbus__r_70654940_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50754720();

   return behavior;
}

Behavior __50766760;

Behavior make__50766760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50766760 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_84174800_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _58266_84174800_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _58266_84174800_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_58266_84174800_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_58266_84174800_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_58266_84174800_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_58266_84174800_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50768660();

   return behavior;
}

Behavior __50802180;

Behavior make__50802180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50802180 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_69948080_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   trig__r_69948080_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   trig__r_69948080_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(trig__r_69948080_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,trig__r_69948080_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
trig__r_69948080_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[trig__r_69948080_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50803880();

   return behavior;
}

Behavior __50819580;

Behavior make__50819580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50819580 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_58264_84174780_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50822320();

   return behavior;
}

Behavior __50887560;

Behavior make__50887560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50887560 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_77615300_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   abus__r_77615300_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   abus__r_77615300_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(abus__r_77615300_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,abus__r_77615300_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
abus__r_77615300_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[abus__r_77615300_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50832300();

   return behavior;
}

Behavior __50886520;

Behavior make__50886520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50886520 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_58265_84174640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50887360();

   return behavior;
}

Behavior __50881180;

Behavior make__50881180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50881180 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_69948040_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   trig__w_69948040_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   trig__w_69948040_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(trig__w_69948040_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,trig__w_69948040_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
trig__w_69948040_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[trig__w_69948040_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50882760();

   return behavior;
}

Behavior __50903620;

Behavior make__50903620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50903620 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_58268_66254960_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50880880();

   return behavior;
}

Behavior __50915540;

Behavior make__50915540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50915540 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[abus__w_77615220_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50918780();

   return behavior;
}

Behavior __50914160;

Behavior make__50914160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50914160 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_58269_66254740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50915360();

   return behavior;
}

Behavior __51003960;

Behavior make__51003960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51003960 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_77615380_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   dbus__w_77615380_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   dbus__w_77615380_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(dbus__w_77615380_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,dbus__w_77615380_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
dbus__w_77615380_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[dbus__w_77615380_channel__w0_58252_69929720_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__51006040();

   return behavior;
}

Behavior __51025160;

Behavior make__51025160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51025160 = behavior;
   behavior->owner = (Object)channel__w0_58252_69929720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_66544740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _58270_66544740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _58270_66544740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_58270_66544740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_58270_66544740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_58270_66544740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_58270_66544740_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__51003620();

   return behavior;
}

Scope makechannel__w0_58252_69929720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_69929720 = scope;
   scope->owner = (Object)layer1_58_84_69930240;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_69948080();
   scope->inners[1] = maketrig__w_69948040();
   scope->inners[2] = makedbus__r_70654940();
   scope->inners[3] = makedbus__w_77615380();
   scope->inners[4] = makeabus__r_77615300();
   scope->inners[5] = makeabus__w_77615220();
   scope->inners[6] = makemem_77759820();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_69928620();
   scope->scopes[1] = makewaddr_58258_69927800();
   scope->scopes[2] = makerinc_58263_69926920();
   scope->scopes[3] = makewinc_58267_69950900();
   scope->scopes[4] = makerdec_58271_69949700();
   scope->scopes[5] = makewdec_58276_69948860();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78794380();
   scope->behaviors[1] = make__50769940();
   scope->behaviors[2] = make__50766760();
   scope->behaviors[3] = make__50802180();
   scope->behaviors[4] = make__50819580();
   scope->behaviors[5] = make__50887560();
   scope->behaviors[6] = make__50886520();
   scope->behaviors[7] = make__50881180();
   scope->behaviors[8] = make__50903620();
   scope->behaviors[9] = make__50915540();
   scope->behaviors[10] = make__50914160();
   scope->behaviors[11] = make__51003960();
   scope->behaviors[12] = make__51025160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_78794260;

SignalI reg__0_79000900_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makereg__0_79000900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_79000900_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__accum_58281_78794260;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope anum_58282_78793960;

Scope makeanum_58282_78793960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_78793960 = scope;
   scope->owner = (Object)channel__accum_58281_78794260;
   scope->name = "anum:282";
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

Scope raddr_58284_78793540;

Scope makeraddr_58284_78793540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_78793540 = scope;
   scope->owner = (Object)channel__accum_58281_78794260;
   scope->name = "raddr:284";
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

Scope waddr_58287_78793120;

Scope makewaddr_58287_78793120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_78793120 = scope;
   scope->owner = (Object)channel__accum_58281_78794260;
   scope->name = "waddr:287";
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

Scope rinc_58290_78792700;

SignalI abus__r_78792320_rinc_58290_78792700_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__r_78792320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_78792320_rinc_58290_78792700_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)rinc_58290_78792700;
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

Scope makerinc_58290_78792700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_78792700 = scope;
   scope->owner = (Object)channel__accum_58281_78794260;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_78792320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_78792200;

SignalI abus__w_78791820_winc_58294_78792200_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__w_78791820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_78791820_winc_58294_78792200_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)winc_58294_78792200;
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

Scope makewinc_58294_78792200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_78792200 = scope;
   scope->owner = (Object)channel__accum_58281_78794260;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_78791820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_78791700;

SignalI abus__r_78791320_rdec_58298_78791700_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__r_78791320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_78791320_rdec_58298_78791700_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)rdec_58298_78791700;
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

Scope makerdec_58298_78791700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_78791700 = scope;
   scope->owner = (Object)channel__accum_58281_78794260;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_78791320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_78791200;

SignalI abus__w_78790820_wdec_58302_78791200_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__w_78790820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_78790820_wdec_58302_78791200_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)wdec_58302_78791200;
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

Scope makewdec_58302_78791200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_78791200 = scope;
   scope->owner = (Object)channel__accum_58281_78794260;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_78790820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51128760;

Behavior make__51128760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51128760 = behavior;
   behavior->owner = (Object)channel__accum_58281_78794260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_79000900_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   reg__0_79000900_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   reg__0_79000900_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(reg__0_79000900_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,reg__0_79000900_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
reg__0_79000900_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[reg__0_79000900_channel__accum_58281_78794260_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__51131480();

   return behavior;
}

Behavior __51147960;

Behavior make__51147960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51147960 = behavior;
   behavior->owner = (Object)channel__accum_58281_78794260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_58283_49409080_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__51126700();

   return behavior;
}

Scope makechannel__accum_58281_78794260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_78794260 = scope;
   scope->owner = (Object)layer1_58_84_69930240;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_79000900();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_78793960();
   scope->scopes[1] = makeraddr_58284_78793540();
   scope->scopes[2] = makewaddr_58287_78793120();
   scope->scopes[3] = makerinc_58290_78792700();
   scope->scopes[4] = makewinc_58294_78792200();
   scope->scopes[5] = makerdec_58298_78791700();
   scope->scopes[6] = makewdec_58302_78791200();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51128760();
   scope->behaviors[1] = make__51147960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_79183480;

SignalI lv0_79311460_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makelv0_79311460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_79311460_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)mac__n1_58306_79183480;
   signalI->name = "lv0";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI av0_79488920_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeav0_79488920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_79488920_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)mac__n1_58306_79183480;
   signalI->name = "av0";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rv_79625380_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makerv_79625380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_79625380_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)mac__n1_58306_79183480;
   signalI->name = "rv";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI lvok0_79625360_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makelvok0_79625360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_79625360_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)mac__n1_58306_79183480;
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

SignalI rvok_79625340_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makervok_79625340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_79625340_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)mac__n1_58306_79183480;
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

SignalI run_79625320_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makerun_79625320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_79625320_mac__n1_58306_79183480_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)mac__n1_58306_79183480;
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

Behavior __81660240;

Behavior make__81660240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __81660240 = behavior;
   behavior->owner = (Object)mac__n1_58306_79183480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos += 1;
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos = realloc(clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos*sizeof(Object));
clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos[clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos-1] = (Object)behavior;
   behavior->block = make__79625200();

   return behavior;
}

Scope makemac__n1_58306_79183480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_79183480 = scope;
   scope->owner = (Object)layer1_58_84_69930240;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_79311460();
   scope->inners[1] = makeav0_79488920();
   scope->inners[2] = makerv_79625380();
   scope->inners[3] = makelvok0_79625360();
   scope->inners[4] = makervok_79625340();
   scope->inners[5] = makerun_79625320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__81660240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_81660120;

SignalI reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makereg__0_81882860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__bias_58311_81660120;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope anum_58312_81659820;

Scope makeanum_58312_81659820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_81659820 = scope;
   scope->owner = (Object)channel__bias_58311_81660120;
   scope->name = "anum:312";
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

Scope raddr_58314_81659400;

Scope makeraddr_58314_81659400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_81659400 = scope;
   scope->owner = (Object)channel__bias_58311_81660120;
   scope->name = "raddr:314";
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

Scope waddr_58317_81658980;

Scope makewaddr_58317_81658980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_81658980 = scope;
   scope->owner = (Object)channel__bias_58311_81660120;
   scope->name = "waddr:317";
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

Scope rinc_58320_81658560;

SignalI abus__r_81658180_rinc_58320_81658560_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__r_81658180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_81658180_rinc_58320_81658560_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)rinc_58320_81658560;
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

Scope makerinc_58320_81658560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_81658560 = scope;
   scope->owner = (Object)channel__bias_58311_81660120;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_81658180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_81658060;

SignalI abus__w_81682220_winc_58323_81658060_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__w_81682220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_81682220_winc_58323_81658060_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)winc_58323_81658060;
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

Behavior __51276940;

Behavior make__51276940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51276940 = behavior;
   behavior->owner = (Object)winc_58323_81658060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_81682220_winc_58323_81658060_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   abus__w_81682220_winc_58323_81658060_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   abus__w_81682220_winc_58323_81658060_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(abus__w_81682220_winc_58323_81658060_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,abus__w_81682220_winc_58323_81658060_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
abus__w_81682220_winc_58323_81658060_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[abus__w_81682220_winc_58323_81658060_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__51278660();

   return behavior;
}

Behavior __51295760;

Behavior make__51295760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51295760 = behavior;
   behavior->owner = (Object)winc_58323_81658060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_58325_58410880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__51276480();

   return behavior;
}

Scope makewinc_58323_81658060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_81658060 = scope;
   scope->owner = (Object)channel__bias_58311_81660120;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_81682220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51276940();
   scope->behaviors[1] = make__51295760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_81681840;

SignalI abus__r_81681460_rdec_58326_81681840_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__r_81681460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_81681460_rdec_58326_81681840_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)rdec_58326_81681840;
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

Scope makerdec_58326_81681840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_81681840 = scope;
   scope->owner = (Object)channel__bias_58311_81660120;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_81681460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_81681340;

SignalI abus__w_81680960_wdec_58330_81681340_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__w_81680960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_81680960_wdec_58330_81681340_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)wdec_58330_81681340;
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

Scope makewdec_58330_81681340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_81681340 = scope;
   scope->owner = (Object)channel__bias_58311_81660120;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_81680960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51195120;

Behavior make__51195120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51195120 = behavior;
   behavior->owner = (Object)channel__bias_58311_81660120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__51196440();

   return behavior;
}

Behavior __51215760;

Behavior make__51215760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51215760 = behavior;
   behavior->owner = (Object)channel__bias_58311_81660120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_50656700_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _58313_50656700_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _58313_50656700_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_58313_50656700_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_58313_50656700_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_58313_50656700_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_58313_50656700_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__51193740();

   return behavior;
}

Behavior __51232660;

Behavior make__51232660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51232660 = behavior;
   behavior->owner = (Object)channel__bias_58311_81660120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[reg__0_81882860_channel__bias_58311_81660120_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__51209520();

   return behavior;
}

Behavior __51229400;

Behavior make__51229400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51229400 = behavior;
   behavior->owner = (Object)channel__bias_58311_81660120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_58411320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _58324_58411320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _58324_58411320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_58324_58411320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_58324_58411320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_58324_58411320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_58324_58411320_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__51231900();

   return behavior;
}

Scope makechannel__bias_58311_81660120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_81660120 = scope;
   scope->owner = (Object)layer1_58_84_69930240;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_81882860();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_81659820();
   scope->scopes[1] = makeraddr_58314_81659400();
   scope->scopes[2] = makewaddr_58317_81658980();
   scope->scopes[3] = makerinc_58320_81658560();
   scope->scopes[4] = makewinc_58323_81658060();
   scope->scopes[5] = makerdec_58326_81681840();
   scope->scopes[6] = makewdec_58330_81681340();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51195120();
   scope->behaviors[1] = make__51215760();
   scope->behaviors[2] = make__51232660();
   scope->behaviors[3] = make__51229400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_82354660;

SignalI reg__0_82520300_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makereg__0_82520300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_82520300_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__z_58334_82354660;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope anum_58335_82354360;

Scope makeanum_58335_82354360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_82354360 = scope;
   scope->owner = (Object)channel__z_58334_82354660;
   scope->name = "anum:335";
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

Scope raddr_58337_82484980;

Scope makeraddr_58337_82484980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_82484980 = scope;
   scope->owner = (Object)channel__z_58334_82354660;
   scope->name = "raddr:337";
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

Scope waddr_58340_82484560;

Scope makewaddr_58340_82484560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_82484560 = scope;
   scope->owner = (Object)channel__z_58334_82354660;
   scope->name = "waddr:340";
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

Scope rinc_58343_82484140;

SignalI abus__r_82483760_rinc_58343_82484140_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__r_82483760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_82483760_rinc_58343_82484140_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)rinc_58343_82484140;
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

Scope makerinc_58343_82484140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_82484140 = scope;
   scope->owner = (Object)channel__z_58334_82354660;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_82483760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_82483640;

SignalI abus__w_82483260_winc_58346_82483640_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__w_82483260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_82483260_winc_58346_82483640_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)winc_58346_82483640;
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

Scope makewinc_58346_82483640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_82483640 = scope;
   scope->owner = (Object)channel__z_58334_82354660;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_82483260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_82483140;

SignalI abus__r_82482760_rdec_58349_82483140_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__r_82482760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_82482760_rdec_58349_82483140_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)rdec_58349_82483140;
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

Scope makerdec_58349_82483140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_82483140 = scope;
   scope->owner = (Object)channel__z_58334_82354660;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_82482760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_82482640;

SignalI abus__w_82482260_wdec_58353_82482640_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__w_82482260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_82482260_wdec_58353_82482640_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)wdec_58353_82482640;
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

Scope makewdec_58353_82482640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_82482640 = scope;
   scope->owner = (Object)channel__z_58334_82354660;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_82482260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51378020;

Behavior make__51378020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51378020 = behavior;
   behavior->owner = (Object)channel__z_58334_82354660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_82520300_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   reg__0_82520300_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   reg__0_82520300_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(reg__0_82520300_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,reg__0_82520300_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
reg__0_82520300_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[reg__0_82520300_channel__z_58334_82354660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__51356540();

   return behavior;
}

Behavior __51374300;

Behavior make__51374300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51374300 = behavior;
   behavior->owner = (Object)channel__z_58334_82354660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_58336_51449380_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__51377760();

   return behavior;
}

Scope makechannel__z_58334_82354660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_82354660 = scope;
   scope->owner = (Object)layer1_58_84_69930240;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_82520300();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_82354360();
   scope->scopes[1] = makeraddr_58337_82484980();
   scope->scopes[2] = makewaddr_58340_82484560();
   scope->scopes[3] = makerinc_58343_82484140();
   scope->scopes[4] = makewinc_58346_82483640();
   scope->scopes[5] = makerdec_58349_82483140();
   scope->scopes[6] = makewdec_58353_82482640();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51378020();
   scope->behaviors[1] = make__51374300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_82842140;

SignalI lv0_82920960_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makelv0_82920960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_82920960_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)add__n_58357_82842140;
   signalI->name = "lv0";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rv0_83024660_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makerv0_83024660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_83024660_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)add__n_58357_82842140;
   signalI->name = "rv0";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI lvok0_83024640_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makelvok0_83024640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_83024640_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)add__n_58357_82842140;
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

SignalI rvok0_83024620_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makervok0_83024620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_83024620_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)add__n_58357_82842140;
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

SignalI run_83024600_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makerun_83024600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_83024600_add__n_58357_82842140_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)add__n_58357_82842140;
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

Behavior __84079820;

Behavior make__84079820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __84079820 = behavior;
   behavior->owner = (Object)add__n_58357_82842140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos += 1;
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos = realloc(clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos*sizeof(Object));
clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos[clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos-1] = (Object)behavior;
   behavior->block = make__83024480();

   return behavior;
}

Scope makeadd__n_58357_82842140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_82842140 = scope;
   scope->owner = (Object)layer1_58_84_69930240;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_82920960();
   scope->inners[1] = makerv0_83024660();
   scope->inners[2] = makelvok0_83024640();
   scope->inners[3] = makervok0_83024620();
   scope->inners[4] = makerun_83024600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__84079820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78458800;

Behavior make__78458800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78458800 = behavior;
   behavior->owner = (Object)layer1_58_84_69930240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos += 1;
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos = realloc(clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos*sizeof(Object));
clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos[clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos-1] = (Object)behavior;
   behavior->block = make__78460580();

   return behavior;
}

Behavior __79013020;

Behavior make__79013020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79013020 = behavior;
   behavior->owner = (Object)layer1_58_84_69930240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos += 1;
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos = realloc(clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos*sizeof(Object));
clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos[clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos-1] = (Object)behavior;
   behavior->block = make__78458580();

   return behavior;
}

Behavior __79488000;

Behavior make__79488000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79488000 = behavior;
   behavior->owner = (Object)layer1_58_84_69930240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos += 1;
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos = realloc(clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos*sizeof(Object));
clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos[clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos-1] = (Object)behavior;
   behavior->block = make__79012740();

   return behavior;
}

Behavior __81074500;

Behavior make__81074500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __81074500 = behavior;
   behavior->owner = (Object)layer1_58_84_69930240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos += 1;
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos = realloc(clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos*sizeof(Object));
clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos[clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos-1] = (Object)behavior;
   behavior->block = make__79487680();

   return behavior;
}

Behavior __50525840;

Behavior make__50525840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50525840 = behavior;
   behavior->owner = (Object)layer1_58_84_69930240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_81070400_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   req_81070400_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   req_81070400_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(req_81070400_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,req_81070400_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
req_81070400_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[req_81070400_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[ack__mac_84079640_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50509580();

   return behavior;
}

Behavior __50701060;

Behavior make__50701060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50701060 = behavior;
   behavior->owner = (Object)layer1_58_84_69930240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_81070420_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   fill_81070420_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   fill_81070420_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(fill_81070420_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,fill_81070420_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
fill_81070420_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[fill_81070420_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[ack__weights0_57675060_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[ack__bias_57674880_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50705680();

   return behavior;
}

Behavior __50723940;

Behavior make__50723940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50723940 = behavior;
   behavior->owner = (Object)layer1_58_84_69930240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[ack_84079660_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_57115360_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   value__z0_57115360_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   value__z0_57115360_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(value__z0_57115360_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,value__z0_57115360_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
value__z0_57115360_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[value__z0_57115360_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_57676220_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   ack__a0_57676220_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   ack__a0_57676220_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(ack__a0_57676220_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,ack__a0_57676220_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
ack__a0_57676220_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[ack__a0_57676220_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50489700();

   return behavior;
}

Behavior __50718720;

Behavior make__50718720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50718720 = behavior;
   behavior->owner = (Object)layer1_58_84_69930240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_66593440_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   ack__mac_66593440_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   ack__mac_66593440_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(ack__mac_66593440_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,ack__mac_66593440_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
ack__mac_66593440_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[ack__mac_66593440_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_77845520_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   a_77845520_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   a_77845520_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(a_77845520_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,a_77845520_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
a_77845520_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[a_77845520_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__50488140();

   return behavior;
}

Scope makelayer1_58_84_69930240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_69930240 = scope;
   scope->owner = (Object)layer1_58_840_81073620;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_66593280();
   scope->systemIs[1] = makefunc0_77845260();
   scope->num_inners = 26;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_84079680();
   scope->inners[1] = makeack_84079660();
   scope->inners[2] = makeack__mac_84079640();
   scope->inners[3] = makeack__add_84079620();
   scope->inners[4] = makefill__channel_84079600();
   scope->inners[5] = make_58266_84174800();
   scope->inners[6] = make_58264_84174780();
   scope->inners[7] = make_58265_84174640();
   scope->inners[8] = make_58283_49409080();
   scope->inners[9] = make_58313_50656700();
   scope->inners[10] = make_58336_51449380();
   scope->inners[11] = makevalue__z0_57115360();
   scope->inners[12] = makevalue__a0_57676340();
   scope->inners[13] = makeflag__z0_57676320();
   scope->inners[14] = makeack__a0_57676220();
   scope->inners[15] = makeaddress__weights0_57675440();
   scope->inners[16] = makeaddress__bias_57675120();
   scope->inners[17] = makeack__weights0_57675060();
   scope->inners[18] = makeack__bias_57674880();
   scope->inners[19] = make_58324_58411320();
   scope->inners[20] = make_58325_58410880();
   scope->inners[21] = makew0_65456020();
   scope->inners[22] = makeb_66255000();
   scope->inners[23] = make_58268_66254960();
   scope->inners[24] = make_58269_66254740();
   scope->inners[25] = make_58270_66544740();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_69929720();
   scope->scopes[1] = makechannel__accum_58281_78794260();
   scope->scopes[2] = makemac__n1_58306_79183480();
   scope->scopes[3] = makechannel__bias_58311_81660120();
   scope->scopes[4] = makechannel__z_58334_82354660();
   scope->scopes[5] = makeadd__n_58357_82842140();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78458800();
   scope->behaviors[1] = make__79013020();
   scope->behaviors[2] = make__79488000();
   scope->behaviors[3] = make__81074500();
   scope->behaviors[4] = make__50525840();
   scope->behaviors[5] = make__50701060();
   scope->behaviors[6] = make__50723940();
   scope->behaviors[7] = make__50718720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_81073620() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_81073620 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_81070480();
   systemT->inputs[1] = makerst_81070440();
   systemT->inputs[2] = makefill_81070420();
   systemT->inputs[3] = makereq_81070400();
   systemT->inputs[4] = make_5866_81317360();
   systemT->inputs[5] = make_5867_81465860();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_81465800();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_81465640();
   systemT->inouts[1] = make_5832_81647000();

   systemT->scope = makelayer1_58_84_69930240();

   return systemT;
}