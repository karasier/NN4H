#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_59246680;

SignalI clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeclk_59268880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_840_59246680;
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

SignalI rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makerst_59268860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_840_59246680;
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

SignalI req_59268840_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makereq_59268840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_59268840_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_840_59246680;
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

SignalI _58110_59346480_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_58110_59346480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58110_59346480_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_840_59246680;
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

SignalI _58111_59465420_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_58111_59465420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58111_59465420_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_840_59246680;
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

SignalI ack__layer_59465380_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeack__layer_59465380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_59465380_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_840_59246680;
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

SignalI _58112_59465280_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_58112_59465280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58112_59465280_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_840_59246680;
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

SignalI _5876_59624620_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_5876_59624620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5876_59624620_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_840_59246680;
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

Block __58223920;

Block __58223640;

void code__58223640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56005500(),ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56005320(),ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56005260(),ack__add_50041060_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__58223640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58223640 = block;
   block->owner = (Object)__58223920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58223640;

   return block;
};

void code__58223920() {
   {
      Value cond = rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58223640();
   }
      }
   }
}

Block make__58223920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58223920 = block;
   block->owner = (Object)__58222440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58223920;

   return block;
};

Block __58222300;

Block __58221600;

Block __58221420;

void code__58221420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,value__z0_51442600_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56005040(),flag__z0_51595220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__58221420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58221420 = block;
   block->owner = (Object)__58221600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58221420;

   return block;
};

void code__58221600() {
 code__58221420();
}

Block make__58221600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58221600 = block;
   block->owner = (Object)__58222300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58221600;

   return block;
};

Block __58222080;

void code__58222080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56004980(),flag__z0_51595220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__58222080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58222080 = block;
   block->owner = (Object)__58222300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58222080;

   return block;
};

void code__58222300() {
   {
      Value cond = ack__add_50041060_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58221600();
   }
   else {
  code__58222080();
   }
      }
   }
}

Block make__58222300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58222300 = block;
   block->owner = (Object)__58604340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58222300;

   return block;
};

Block __58604220;

Block __58603960;

void code__58603960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56004820(),ack__a0_51595200_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__58603960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58603960 = block;
   block->owner = (Object)__58604220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58603960;

   return block;
};

Block __58603400;

Block __58603180;

void code__58603180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_51595280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,_5876_59624620_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56004600(),ack__a0_51595200_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__58603180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58603180 = block;
   block->owner = (Object)__58603400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58603180;

   return block;
};

void code__58603400() {
 code__58603180();
}

Block make__58603400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58603400 = block;
   block->owner = (Object)__58604220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58603400;

   return block;
};

void code__58604220() {
   {
      Value cond = rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58603960();
   }
   else if (value2integer(flag__z0_51595220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value)) {
  code__58603400();
   }
      }
   }
}

Block make__58604220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58604220 = block;
   block->owner = (Object)__59247000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58604220;

   return block;
};

Block __52008720;

void code__52008720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_59268840_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_50041280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52008720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52008720 = block;
   block->owner = (Object)__52008140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52008720;

   return block;
};

Block __52009060;

void code__52009060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,clk_51649740_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,ack_51649640_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,rst_51649580_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_51442600_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_51595200_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,ack__layer_59465380_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52009060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52009060 = block;
   block->owner = (Object)__52042820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52009060;

   return block;
};

Block __52009000;

void code__52009000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_51649320_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,_58317_51149820_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_57742580_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,value__a0_51595280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52009000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52009000 = block;
   block->owner = (Object)__52042560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52009000;

   return block;
};

Block __47125200;

void code__47125200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_61389140_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
            idx = value2integer(abus__r_60602280_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_60602360_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__47125200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47125200 = block;
   block->owner = (Object)__50136800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47125200;

   return block;
};

Block __52040460;

void code__52040460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_60602360_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,_58276_50392480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52040460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52040460 = block;
   block->owner = (Object)__52040180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52040460;

   return block;
};

Block __52040120;

void code__52040120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58276_50392480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,dbus__r_60602360_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52040120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52040120 = block;
   block->owner = (Object)__52039880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52040120;

   return block;
};

Block __52038940;

void code__52038940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_60434860_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,_58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52038940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52038940 = block;
   block->owner = (Object)__52038460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52038940;

   return block;
};

Block __52038100;

void code__52038100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,trig__r_60434860_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52038100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52038100 = block;
   block->owner = (Object)__52037880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52038100;

   return block;
};

Block __52037480;

void code__52037480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_60602280_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,_58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52037480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52037480 = block;
   block->owner = (Object)__52037260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52037480;

   return block;
};

Block __52037120;

void code__52037120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,abus__r_60602280_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52037120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52037120 = block;
   block->owner = (Object)__52036580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52037120;

   return block;
};

Block __52057860;

void code__52057860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50442700_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,_58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52057860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52057860 = block;
   block->owner = (Object)__52057520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52057860;

   return block;
};

Block __52057300;

void code__52057300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,reg__0_50442700_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52057300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52057300 = block;
   block->owner = (Object)__52056480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52057300;

   return block;
};

Block __51594020;

Block __51593660;

Block __51616460;

void code__51616460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52308000(),_58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51616460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51616460 = block;
   block->owner = (Object)__51593660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51616460;

   return block;
};

void code__51593660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52308180();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51616460();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52307840(),_58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51593660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51593660 = block;
   block->owner = (Object)__51594020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51593660;

   return block;
};

Block __51615320;

Block __51614640;

void code__51614640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52307380(),_58112_59465280_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51614640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51614640 = block;
   block->owner = (Object)__51615320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51614640;

   return block;
};

void code__51615320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52307620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51614640();
   }
      }
   }
}

Block make__51615320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51615320 = block;
   block->owner = (Object)__51594020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51615320;

   return block;
};

Block __51613100;

void code__51613100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52306560(),rvok_51594260_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52306360(),lvok0_51594300_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57270120(),wok0_51594240_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51613100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51613100 = block;
   block->owner = (Object)__51594020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51613100;

   return block;
};

Block __51746420;

Block __51745700;

Block __51745440;

Block __51744640;

Block __51743800;

void code__51743800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58110_59346480_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,rv_51594320_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51743800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51743800 = block;
   block->owner = (Object)__51744640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51743800;

   return block;
};

Block __52035700;

void code__52035700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58111_59465420_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,rv_51594320_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52035700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52035700 = block;
   block->owner = (Object)__51744640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52035700;

   return block;
};

void code__51744640() {
{
      Value value = _58112_59465280_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__57269440())) {
    code__51743800();
         }
         else if (value2integer(value) == value2integer(make__57269340())) {
    code__52035700();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57269200(),rvok_51594260_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
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
                  src0 = _58112_59465280_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
                  src1 = make__57269100();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57269060();
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
                        src0 = _58112_59465280_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__57268820();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__57268740();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58112_59465280_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51744640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51744640 = block;
   block->owner = (Object)__51745440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51744640;

   return block;
};

void code__51745440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57269560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51744640();
   }
      }
   }
}

Block make__51745440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51745440 = block;
   block->owner = (Object)__51745700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51745440;

   return block;
};

void code__51745700() {
 code__51745440();
}

Block make__51745700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51745700 = block;
   block->owner = (Object)__51746420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51745700;

   return block;
};

Block __57585880;

Block __57585680;

Block __57585360;

Block __57583360;

Block __57583200;

void code__57583200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58276_50392480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,lv0_51307760_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57267620(),lvok0_51594300_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__57583200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57583200 = block;
   block->owner = (Object)__57583360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57583200;

   return block;
};

void code__57583360() {
 code__57583200();
}

Block make__57583360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57583360 = block;
   block->owner = (Object)__57585360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57583360;

   return block;
};

Block __57585200;

void code__57585200() {
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
                  src0 = _58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
                  src1 = make__57267500();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57267460();
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
                        src0 = _58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__57267160();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__57267100();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57266980(),_58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__57585200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57585200 = block;
   block->owner = (Object)__57585360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57585200;

   return block;
};

void code__57585360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57267860();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57583360();
   }
   else {
  code__57585200();
   }
      }
   }
}

Block make__57585360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57585360 = block;
   block->owner = (Object)__57585680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57585360;

   return block;
};

void code__57585680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57268460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57585360();
   }
      }
   }
}

Block make__57585680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57585680 = block;
   block->owner = (Object)__57585880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57585680;

   return block;
};

void code__57585880() {
 code__57585680();
}

Block make__57585880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57585880 = block;
   block->owner = (Object)__51746420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57585880;

   return block;
};

Block __57888180;

Block __57887540;

Block __57887380;

void code__57887380() {
}

Block make__57887380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57887380 = block;
   block->owner = (Object)__57887540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57887380;

   return block;
};

Block __58395800;

void code__58395800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_51438160_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,_58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57266120(),wok0_51594240_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__58395800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58395800 = block;
   block->owner = (Object)__57887540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58395800;

   return block;
};

void code__57887540() {
 code__57887380();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_51438160_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
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
                              src0 = lv0_51307760_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_51594320_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57266360();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_51438160_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
 code__58395800();
}

Block make__57887540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57887540 = block;
   block->owner = (Object)__57888180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57887540;

   return block;
};

void code__57888180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57266740(),ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57266680(),run_51594220_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
 code__57887540();
}

Block make__57888180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57888180 = block;
   block->owner = (Object)__51746420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57888180;

   return block;
};

Block __58735100;

void code__58735100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57265980(),wok0_51594240_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57265800(),lvok0_51594300_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57265680(),rvok_51594260_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__58735100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58735100 = block;
   block->owner = (Object)__51746420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58735100;

   return block;
};

void code__51746420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57269700(),run_51594220_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_51594260_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51745700();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_51594300_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57585880();
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
               src0 = lvok0_51594300_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
               src1 = rvok_51594260_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_51594240_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57888180();
   }
      }
   }
   {
      Value cond = wok0_51594240_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58735100();
   }
      }
   }
}

Block make__51746420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51746420 = block;
   block->owner = (Object)__51594020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51746420;

   return block;
};

Block __51611400;

void code__51611400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57265520(),av0_51438160_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51611400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51611400 = block;
   block->owner = (Object)__51594020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51611400;

   return block;
};

void code__51594020() {
 code__51593660();
 code__51615320();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52307240(),ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52306720(),run_51594220_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_51594220_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51613100();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_50041280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
         src1 = run_51594220_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51746420();
   }
   else {
  code__51611400();
   }
      }
   }
}

Block make__51594020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51594020 = block;
   block->owner = (Object)__58733940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51594020;

   return block;
};

Block __59622760;

void code__59622760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_59382680_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
            idx = value2integer(abus__r_59027520_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_59027660_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__59622760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59622760 = block;
   block->owner = (Object)__60003500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59622760;

   return block;
};

Block __52052460;

void code__52052460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_59027660_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,_58316_51149840_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52052460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52052460 = block;
   block->owner = (Object)__52076240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52052460;

   return block;
};

Block __52076160;

void code__52076160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_51149840_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,dbus__r_59027660_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52076160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52076160 = block;
   block->owner = (Object)__52075740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52076160;

   return block;
};

Block __52074660;

void code__52074660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_58732100_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,_58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52074660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52074660 = block;
   block->owner = (Object)__52074240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52074660;

   return block;
};

Block __52073900;

void code__52073900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,trig__r_58732100_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52073900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52073900 = block;
   block->owner = (Object)__52073420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52073900;

   return block;
};

Block __52069980;

void code__52069980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_59027520_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,_58315_51149560_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52069980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52069980 = block;
   block->owner = (Object)__52069620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52069980;

   return block;
};

Block __52069420;

void code__52069420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_51149560_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,abus__r_59027520_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52069420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52069420 = block;
   block->owner = (Object)__52069020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52069420;

   return block;
};

Block __52089840;

void code__52089840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_60097600_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,_58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52089840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52089840 = block;
   block->owner = (Object)__52089500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52089840;

   return block;
};

Block __52089460;

void code__52089460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,reg__0_60097600_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__52089460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52089460 = block;
   block->owner = (Object)__52089200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52089460;

   return block;
};

Block __60857700;

Block __60857500;

void code__60857500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57263880(),_58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__60857500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60857500 = block;
   block->owner = (Object)__60857700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60857500;

   return block;
};

Block __60856140;

Block __60855820;

void code__60855820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,lv0_60601740_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57263260(),lvok0_60857900_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__60855820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60855820 = block;
   block->owner = (Object)__60856140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60855820;

   return block;
};

Block __61195380;

Block __61195060;

Block __61226720;

void code__61226720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_51149840_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,rv0_60857920_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57262740(),_58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57262580(),rvok0_60857860_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__61226720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61226720 = block;
   block->owner = (Object)__61195060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61226720;

   return block;
};

Block __61194900;

void code__61194900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57262340(),_58315_51149560_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56008520(),_58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__61194900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61194900 = block;
   block->owner = (Object)__61195060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61194900;

   return block;
};

void code__61195060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57263000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61226720();
   }
   else {
  code__61194900();
   }
      }
   }
}

Block make__61195060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61195060 = block;
   block->owner = (Object)__61195380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61195060;

   return block;
};

void code__61195380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58317_51149820_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57263160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61195060();
   }
      }
   }
}

Block make__61195380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61195380 = block;
   block->owner = (Object)__60856140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61195380;

   return block;
};

Block __61539880;

Block __61539300;

void code__61539300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_60601740_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
      src1 = rv0_60857920_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__61539300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61539300 = block;
   block->owner = (Object)__61539880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61539300;

   return block;
};

void code__61539880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56008080(),run_60857840_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56007980(),ack__add_50041060_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
 code__61539300();
}

Block make__61539880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61539880 = block;
   block->owner = (Object)__60856140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61539880;

   return block;
};

void code__60856140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57263480(),run_60857840_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
 code__60855820();
 code__61195380();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_60857900_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
         src1 = rvok0_60857860_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61539880();
   }
      }
   }
}

Block make__60856140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60856140 = block;
   block->owner = (Object)__60857700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60856140;

   return block;
};

Block __60856840;

void code__60856840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56007340(),lvok0_60857900_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56007280(),rvok0_60857860_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__60856840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60856840 = block;
   block->owner = (Object)__60857700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60856840;

   return block;
};

void code__60857700() {
 code__60857500();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57263740(),ack__add_50041060_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57263680(),run_60857840_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
         src1 = run_60857840_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60856140();
   }
   else {
  code__60856840();
   }
      }
   }
}

Block make__60857700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60857700 = block;
   block->owner = (Object)__50043240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60857700;

   return block;
};

Value make__52313040() {
   static unsigned long long data[] = { 20ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52313000() {
   static unsigned long long data[] = { 13ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57265460() {
   static unsigned long long data[] = { 4294967294ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__52308180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52308000() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52307840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52307620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52307380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52307240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52306720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52306560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52306360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57270120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57269700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57269560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57269440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57269340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57269200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57269100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57269060() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57268820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57268740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57268460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57267860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57267620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57267500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57267460() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57267160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57267100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57266980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57266740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57266680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57266360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57266120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57265980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57265800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57265680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57265520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57263880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57263740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57263680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57263480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57263260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57263160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57263000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57262740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57262580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57262340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56008520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56008080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56007980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56007340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56007280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56005500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56005320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56005260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56005040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56004980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56004820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56004600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_60436820;

SignalI req__mac_50041280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makereq__mac_50041280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_50041280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeack_50041220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeack__mac_50041140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI ack__add_50041060_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeack__add_50041060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_50041060_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI _58276_50392480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_58276_50392480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58276_50392480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI _58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_58274_50392460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI _58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_58275_50392380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI _58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_58284_50173480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI _58316_51149840_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_58316_51149840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58316_51149840_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI _58317_51149820_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_58317_51149820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58317_51149820_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI _58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_58314_51149760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI _58315_51149560_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_58315_51149560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_51149560_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI _58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI make_58329_51290320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI value__z0_51442600_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makevalue__z0_51442600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_51442600_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI value__a0_51595280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makevalue__a0_51595280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_51595280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI flag__z0_51595220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeflag__z0_51595220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_51595220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SignalI ack__a0_51595200_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeack__a0_51595200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_51595200_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)layer1_58_84_60436820;
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

SystemI counter_51648640;

SystemI makecounter_51648640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_51648640 = systemI;
   systemI->owner = (Object)layer1_58_84_60436820;
   systemI->name = "counter";
   systemI->system = counter_58_8400_51631140;

   return systemI;
};

SystemI func0_57742440;

SystemI makefunc0_57742440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_57742440 = systemI;
   systemI->owner = (Object)layer1_58_84_60436820;
   systemI->name = "func0";
   systemI->system = func0_58_8400_52073280;

   return systemI;
};

Scope channel__w0_58267_60436440;

SignalI trig__r_60434860_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI maketrig__r_60434860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_60434860_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)channel__w0_58267_60436440;
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

SignalI dbus__r_60602360_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makedbus__r_60602360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_60602360_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)channel__w0_58267_60436440;
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

SignalI abus__r_60602280_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeabus__r_60602280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_60602280_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)channel__w0_58267_60436440;
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

SignalI mem_61389140_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makemem_61389140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_61389140_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)channel__w0_58267_60436440;
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
         src0 = make__52313040();
         src1 = make__52313000();
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

Scope raddr_58268_60436140;

Scope makeraddr_58268_60436140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58268_60436140 = scope;
   scope->owner = (Object)channel__w0_58267_60436440;
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

Scope rinc_58273_60435720;

Scope makerinc_58273_60435720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_60435720 = scope;
   scope->owner = (Object)channel__w0_58267_60436440;
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

Scope rdec_58277_60435300;

Scope makerdec_58277_60435300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58277_60435300 = scope;
   scope->owner = (Object)channel__w0_58267_60436440;
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

Behavior __50136800;

Behavior make__50136800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50136800 = behavior;
   behavior->owner = (Object)channel__w0_58267_60436440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_neg += 1;
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->neg = realloc(clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->neg,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_neg*sizeof(Object));
clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->neg[clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_neg-1] = (Object)behavior;
   behavior->block = make__47125200();

   return behavior;
}

Behavior __52040180;

Behavior make__52040180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52040180 = behavior;
   behavior->owner = (Object)channel__w0_58267_60436440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_60602360_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   dbus__r_60602360_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   dbus__r_60602360_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(dbus__r_60602360_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,dbus__r_60602360_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
dbus__r_60602360_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[dbus__r_60602360_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52040460();

   return behavior;
}

Behavior __52039880;

Behavior make__52039880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52039880 = behavior;
   behavior->owner = (Object)channel__w0_58267_60436440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58276_50392480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   _58276_50392480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   _58276_50392480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(_58276_50392480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,_58276_50392480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
_58276_50392480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[_58276_50392480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52040120();

   return behavior;
}

Behavior __52038460;

Behavior make__52038460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52038460 = behavior;
   behavior->owner = (Object)channel__w0_58267_60436440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_60434860_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   trig__r_60434860_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   trig__r_60434860_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(trig__r_60434860_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,trig__r_60434860_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
trig__r_60434860_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[trig__r_60434860_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52038940();

   return behavior;
}

Behavior __52037880;

Behavior make__52037880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52037880 = behavior;
   behavior->owner = (Object)channel__w0_58267_60436440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   _58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   _58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(_58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,_58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
_58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[_58274_50392460_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52038100();

   return behavior;
}

Behavior __52037260;

Behavior make__52037260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52037260 = behavior;
   behavior->owner = (Object)channel__w0_58267_60436440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_60602280_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   abus__r_60602280_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   abus__r_60602280_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(abus__r_60602280_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,abus__r_60602280_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
abus__r_60602280_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[abus__r_60602280_channel__w0_58267_60436440_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52037480();

   return behavior;
}

Behavior __52036580;

Behavior make__52036580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52036580 = behavior;
   behavior->owner = (Object)channel__w0_58267_60436440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   _58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   _58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(_58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,_58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
_58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[_58275_50392380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52037120();

   return behavior;
}

Scope makechannel__w0_58267_60436440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58267_60436440 = scope;
   scope->owner = (Object)layer1_58_84_60436820;
   scope->name = "channel_w0:267";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_60434860();
   scope->inners[1] = makedbus__r_60602360();
   scope->inners[2] = makeabus__r_60602280();
   scope->inners[3] = makemem_61389140();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58268_60436140();
   scope->scopes[1] = makerinc_58273_60435720();
   scope->scopes[2] = makerdec_58277_60435300();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50136800();
   scope->behaviors[1] = make__52040180();
   scope->behaviors[2] = make__52039880();
   scope->behaviors[3] = make__52038460();
   scope->behaviors[4] = make__52037880();
   scope->behaviors[5] = make__52037260();
   scope->behaviors[6] = make__52036580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58282_50136280;

SignalI reg__0_50442700_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makereg__0_50442700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50442700_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)channel__accum_58282_50136280;
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

Scope anum_58283_50159400;

Scope makeanum_58283_50159400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58283_50159400 = scope;
   scope->owner = (Object)channel__accum_58282_50136280;
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

Scope raddr_58285_50198200;

Scope makeraddr_58285_50198200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58285_50198200 = scope;
   scope->owner = (Object)channel__accum_58282_50136280;
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

Scope waddr_58288_50197180;

Scope makewaddr_58288_50197180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58288_50197180 = scope;
   scope->owner = (Object)channel__accum_58282_50136280;
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

Scope rinc_58291_50195580;

SignalI abus__r_50194340_rinc_58291_50195580_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeabus__r_50194340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50194340_rinc_58291_50195580_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)rinc_58291_50195580;
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

Scope makerinc_58291_50195580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58291_50195580 = scope;
   scope->owner = (Object)channel__accum_58282_50136280;
   scope->name = "rinc:291";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50194340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58295_50194140;

SignalI abus__w_50193460_winc_58295_50194140_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeabus__w_50193460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50193460_winc_58295_50194140_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)winc_58295_50194140;
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

Scope makewinc_58295_50194140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58295_50194140 = scope;
   scope->owner = (Object)channel__accum_58282_50136280;
   scope->name = "winc:295";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50193460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58299_50193180;

SignalI abus__r_50215780_rdec_58299_50193180_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeabus__r_50215780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50215780_rdec_58299_50193180_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)rdec_58299_50193180;
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

Scope makerdec_58299_50193180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58299_50193180 = scope;
   scope->owner = (Object)channel__accum_58282_50136280;
   scope->name = "rdec:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50215780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58303_50215280;

SignalI abus__w_50212500_wdec_58303_50215280_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeabus__w_50212500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50212500_wdec_58303_50215280_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)wdec_58303_50215280;
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

Scope makewdec_58303_50215280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58303_50215280 = scope;
   scope->owner = (Object)channel__accum_58282_50136280;
   scope->name = "wdec:303";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50212500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52057520;

Behavior make__52057520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52057520 = behavior;
   behavior->owner = (Object)channel__accum_58282_50136280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50442700_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   reg__0_50442700_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   reg__0_50442700_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(reg__0_50442700_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,reg__0_50442700_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
reg__0_50442700_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[reg__0_50442700_channel__accum_58282_50136280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52057860();

   return behavior;
}

Behavior __52056480;

Behavior make__52056480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52056480 = behavior;
   behavior->owner = (Object)channel__accum_58282_50136280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   _58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   _58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(_58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,_58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
_58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[_58284_50173480_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52057300();

   return behavior;
}

Scope makechannel__accum_58282_50136280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58282_50136280 = scope;
   scope->owner = (Object)layer1_58_84_60436820;
   scope->name = "channel_accum:282";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50442700();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58283_50159400();
   scope->scopes[1] = makeraddr_58285_50198200();
   scope->scopes[2] = makewaddr_58288_50197180();
   scope->scopes[3] = makerinc_58291_50195580();
   scope->scopes[4] = makewinc_58295_50194140();
   scope->scopes[5] = makerdec_58299_50193180();
   scope->scopes[6] = makewdec_58303_50215280();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52057520();
   scope->behaviors[1] = make__52056480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58307_51163880;

SignalI lv0_51307760_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makelv0_51307760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51307760_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)mac__n1_58307_51163880;
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

SignalI av0_51438160_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeav0_51438160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_51438160_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)mac__n1_58307_51163880;
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

SignalI rv_51594320_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makerv_51594320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_51594320_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)mac__n1_58307_51163880;
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

SignalI lvok0_51594300_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makelvok0_51594300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_51594300_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)mac__n1_58307_51163880;
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

SignalI rvok_51594260_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makervok_51594260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_51594260_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)mac__n1_58307_51163880;
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

SignalI wok0_51594240_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makewok0_51594240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_51594240_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)mac__n1_58307_51163880;
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

SignalI run_51594220_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makerun_51594220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_51594220_mac__n1_58307_51163880_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)mac__n1_58307_51163880;
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

Behavior __58733940;

Behavior make__58733940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58733940 = behavior;
   behavior->owner = (Object)mac__n1_58307_51163880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos += 1;
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos = realloc(clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos*sizeof(Object));
clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos[clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos-1] = (Object)behavior;
   behavior->block = make__51594020();

   return behavior;
}

Scope makemac__n1_58307_51163880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58307_51163880 = scope;
   scope->owner = (Object)layer1_58_84_60436820;
   scope->name = "mac_n1:307";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51307760();
   scope->inners[1] = makeav0_51438160();
   scope->inners[2] = makerv_51594320();
   scope->inners[3] = makelvok0_51594300();
   scope->inners[4] = makervok_51594260();
   scope->inners[5] = makewok0_51594240();
   scope->inners[6] = makerun_51594220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58733940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58312_58733780;

SignalI trig__r_58732100_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI maketrig__r_58732100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_58732100_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)channel__b0_58312_58733780;
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

SignalI dbus__r_59027660_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makedbus__r_59027660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_59027660_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)channel__b0_58312_58733780;
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

SignalI abus__r_59027520_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeabus__r_59027520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59027520_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)channel__b0_58312_58733780;
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

SignalI mem_59382680_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makemem_59382680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_59382680_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)channel__b0_58312_58733780;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__57265460(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58313_58733480;

Scope makeraddr_58313_58733480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58313_58733480 = scope;
   scope->owner = (Object)channel__b0_58312_58733780;
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

Scope rinc_58318_58733060;

Scope makerinc_58318_58733060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58318_58733060 = scope;
   scope->owner = (Object)channel__b0_58312_58733780;
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

Scope rdec_58322_58732540;

Scope makerdec_58322_58732540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58322_58732540 = scope;
   scope->owner = (Object)channel__b0_58312_58733780;
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

Behavior __60003500;

Behavior make__60003500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60003500 = behavior;
   behavior->owner = (Object)channel__b0_58312_58733780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_neg += 1;
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->neg = realloc(clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->neg,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_neg*sizeof(Object));
clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->neg[clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_neg-1] = (Object)behavior;
   behavior->block = make__59622760();

   return behavior;
}

Behavior __52076240;

Behavior make__52076240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52076240 = behavior;
   behavior->owner = (Object)channel__b0_58312_58733780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_59027660_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   dbus__r_59027660_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   dbus__r_59027660_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(dbus__r_59027660_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,dbus__r_59027660_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
dbus__r_59027660_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[dbus__r_59027660_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52052460();

   return behavior;
}

Behavior __52075740;

Behavior make__52075740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52075740 = behavior;
   behavior->owner = (Object)channel__b0_58312_58733780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58316_51149840_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   _58316_51149840_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   _58316_51149840_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(_58316_51149840_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,_58316_51149840_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
_58316_51149840_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[_58316_51149840_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52076160();

   return behavior;
}

Behavior __52074240;

Behavior make__52074240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52074240 = behavior;
   behavior->owner = (Object)channel__b0_58312_58733780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_58732100_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   trig__r_58732100_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   trig__r_58732100_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(trig__r_58732100_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,trig__r_58732100_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
trig__r_58732100_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[trig__r_58732100_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52074660();

   return behavior;
}

Behavior __52073420;

Behavior make__52073420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52073420 = behavior;
   behavior->owner = (Object)channel__b0_58312_58733780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   _58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   _58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(_58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,_58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
_58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[_58314_51149760_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52073900();

   return behavior;
}

Behavior __52069620;

Behavior make__52069620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52069620 = behavior;
   behavior->owner = (Object)channel__b0_58312_58733780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_59027520_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   abus__r_59027520_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   abus__r_59027520_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(abus__r_59027520_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,abus__r_59027520_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
abus__r_59027520_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[abus__r_59027520_channel__b0_58312_58733780_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52069980();

   return behavior;
}

Behavior __52069020;

Behavior make__52069020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52069020 = behavior;
   behavior->owner = (Object)channel__b0_58312_58733780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_51149560_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   _58315_51149560_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   _58315_51149560_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(_58315_51149560_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,_58315_51149560_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
_58315_51149560_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[_58315_51149560_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52069420();

   return behavior;
}

Scope makechannel__b0_58312_58733780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58312_58733780 = scope;
   scope->owner = (Object)layer1_58_84_60436820;
   scope->name = "channel_b0:312";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_58732100();
   scope->inners[1] = makedbus__r_59027660();
   scope->inners[2] = makeabus__r_59027520();
   scope->inners[3] = makemem_59382680();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58313_58733480();
   scope->scopes[1] = makerinc_58318_58733060();
   scope->scopes[2] = makerdec_58322_58732540();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60003500();
   scope->behaviors[1] = make__52076240();
   scope->behaviors[2] = make__52075740();
   scope->behaviors[3] = make__52074240();
   scope->behaviors[4] = make__52073420();
   scope->behaviors[5] = make__52069620();
   scope->behaviors[6] = make__52069020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58327_60003380;

SignalI reg__0_60097600_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makereg__0_60097600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_60097600_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)channel__z_58327_60003380;
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

Scope anum_58328_60003080;

Scope makeanum_58328_60003080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58328_60003080 = scope;
   scope->owner = (Object)channel__z_58327_60003380;
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

Scope raddr_58330_60002660;

Scope makeraddr_58330_60002660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58330_60002660 = scope;
   scope->owner = (Object)channel__z_58327_60003380;
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

Scope waddr_58333_60001980;

Scope makewaddr_58333_60001980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58333_60001980 = scope;
   scope->owner = (Object)channel__z_58327_60003380;
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

Scope rinc_58336_60001460;

SignalI abus__r_60001080_rinc_58336_60001460_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeabus__r_60001080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_60001080_rinc_58336_60001460_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)rinc_58336_60001460;
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

Scope makerinc_58336_60001460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58336_60001460 = scope;
   scope->owner = (Object)channel__z_58327_60003380;
   scope->name = "rinc:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_60001080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58339_60000960;

SignalI abus__w_60000580_winc_58339_60000960_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeabus__w_60000580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_60000580_winc_58339_60000960_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)winc_58339_60000960;
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

Scope makewinc_58339_60000960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58339_60000960 = scope;
   scope->owner = (Object)channel__z_58327_60003380;
   scope->name = "winc:339";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_60000580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58342_60000460;

SignalI abus__r_59999980_rdec_58342_60000460_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeabus__r_59999980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59999980_rdec_58342_60000460_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)rdec_58342_60000460;
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

Scope makerdec_58342_60000460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58342_60000460 = scope;
   scope->owner = (Object)channel__z_58327_60003380;
   scope->name = "rdec:342";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59999980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58346_59999860;

SignalI abus__w_59999380_wdec_58346_59999860_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeabus__w_59999380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59999380_wdec_58346_59999860_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)wdec_58346_59999860;
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

Scope makewdec_58346_59999860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58346_59999860 = scope;
   scope->owner = (Object)channel__z_58327_60003380;
   scope->name = "wdec:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59999380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52089500;

Behavior make__52089500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52089500 = behavior;
   behavior->owner = (Object)channel__z_58327_60003380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_60097600_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   reg__0_60097600_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   reg__0_60097600_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(reg__0_60097600_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,reg__0_60097600_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
reg__0_60097600_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[reg__0_60097600_channel__z_58327_60003380_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52089840();

   return behavior;
}

Behavior __52089200;

Behavior make__52089200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52089200 = behavior;
   behavior->owner = (Object)channel__z_58327_60003380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   _58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   _58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(_58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,_58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
_58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[_58329_51290320_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52089460();

   return behavior;
}

Scope makechannel__z_58327_60003380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58327_60003380 = scope;
   scope->owner = (Object)layer1_58_84_60436820;
   scope->name = "channel_z:327";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_60097600();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58328_60003080();
   scope->scopes[1] = makeraddr_58330_60002660();
   scope->scopes[2] = makewaddr_58333_60001980();
   scope->scopes[3] = makerinc_58336_60001460();
   scope->scopes[4] = makewinc_58339_60000960();
   scope->scopes[5] = makerdec_58342_60000460();
   scope->scopes[6] = makewdec_58346_59999860();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52089500();
   scope->behaviors[1] = make__52089200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58350_60437640;

SignalI lv0_60601740_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makelv0_60601740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_60601740_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)add__n_58350_60437640;
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

SignalI rv0_60857920_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makerv0_60857920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_60857920_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)add__n_58350_60437640;
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

SignalI lvok0_60857900_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makelvok0_60857900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_60857900_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)add__n_58350_60437640;
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

SignalI rvok0_60857860_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makervok0_60857860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_60857860_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)add__n_58350_60437640;
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

SignalI run_60857840_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makerun_60857840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_60857840_add__n_58350_60437640_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)add__n_58350_60437640;
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

Behavior __50043240;

Behavior make__50043240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50043240 = behavior;
   behavior->owner = (Object)add__n_58350_60437640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos += 1;
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos = realloc(clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos*sizeof(Object));
clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos[clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos-1] = (Object)behavior;
   behavior->block = make__60857700();

   return behavior;
}

Scope makeadd__n_58350_60437640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58350_60437640 = scope;
   scope->owner = (Object)layer1_58_84_60436820;
   scope->name = "add_n:350";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_60601740();
   scope->inners[1] = makerv0_60857920();
   scope->inners[2] = makelvok0_60857900();
   scope->inners[3] = makervok0_60857860();
   scope->inners[4] = makerun_60857840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50043240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58222440;

Behavior make__58222440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58222440 = behavior;
   behavior->owner = (Object)layer1_58_84_60436820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos += 1;
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos = realloc(clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos*sizeof(Object));
clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos[clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos-1] = (Object)behavior;
   behavior->block = make__58223920();

   return behavior;
}

Behavior __58604340;

Behavior make__58604340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58604340 = behavior;
   behavior->owner = (Object)layer1_58_84_60436820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos += 1;
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos = realloc(clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos*sizeof(Object));
clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos[clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos-1] = (Object)behavior;
   behavior->block = make__58222300();

   return behavior;
}

Behavior __59247000;

Behavior make__59247000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59247000 = behavior;
   behavior->owner = (Object)layer1_58_84_60436820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos += 1;
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos = realloc(clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos*sizeof(Object));
clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->pos[clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_pos-1] = (Object)behavior;
   behavior->block = make__58604220();

   return behavior;
}

Behavior __52008140;

Behavior make__52008140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52008140 = behavior;
   behavior->owner = (Object)layer1_58_84_60436820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_59268840_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   req_59268840_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   req_59268840_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(req_59268840_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,req_59268840_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
req_59268840_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[req_59268840_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[ack__mac_50041140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52008720();

   return behavior;
}

Behavior __52042820;

Behavior make__52042820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52042820 = behavior;
   behavior->owner = (Object)layer1_58_84_60436820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[clk_59268880_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[ack_50041220_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_51442600_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   value__z0_51442600_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   value__z0_51442600_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(value__z0_51442600_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,value__z0_51442600_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
value__z0_51442600_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[value__z0_51442600_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_51595200_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   ack__a0_51595200_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   ack__a0_51595200_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(ack__a0_51595200_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,ack__a0_51595200_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
ack__a0_51595200_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[ack__a0_51595200_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52009060();

   return behavior;
}

Behavior __52042560;

Behavior make__52042560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52042560 = behavior;
   behavior->owner = (Object)layer1_58_84_60436820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_51649320_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   ack__mac_51649320_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   ack__mac_51649320_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(ack__mac_51649320_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,ack__mac_51649320_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
ack__mac_51649320_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[ack__mac_51649320_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[rst_59268860_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_57742580_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   a_57742580_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   a_57742580_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(a_57742580_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,a_57742580_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
a_57742580_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[a_57742580_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__52009000();

   return behavior;
}

Scope makelayer1_58_84_60436820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_60436820 = scope;
   scope->owner = (Object)layer1_58_840_59246680;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_51648640();
   scope->systemIs[1] = makefunc0_57742440();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_50041280();
   scope->inners[1] = makeack_50041220();
   scope->inners[2] = makeack__mac_50041140();
   scope->inners[3] = makeack__add_50041060();
   scope->inners[4] = make_58276_50392480();
   scope->inners[5] = make_58274_50392460();
   scope->inners[6] = make_58275_50392380();
   scope->inners[7] = make_58284_50173480();
   scope->inners[8] = make_58316_51149840();
   scope->inners[9] = make_58317_51149820();
   scope->inners[10] = make_58314_51149760();
   scope->inners[11] = make_58315_51149560();
   scope->inners[12] = make_58329_51290320();
   scope->inners[13] = makevalue__z0_51442600();
   scope->inners[14] = makevalue__a0_51595280();
   scope->inners[15] = makeflag__z0_51595220();
   scope->inners[16] = makeack__a0_51595200();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58267_60436440();
   scope->scopes[1] = makechannel__accum_58282_50136280();
   scope->scopes[2] = makemac__n1_58307_51163880();
   scope->scopes[3] = makechannel__b0_58312_58733780();
   scope->scopes[4] = makechannel__z_58327_60003380();
   scope->scopes[5] = makeadd__n_58350_60437640();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58222440();
   scope->behaviors[1] = make__58604340();
   scope->behaviors[2] = make__59247000();
   scope->behaviors[3] = make__52008140();
   scope->behaviors[4] = make__52042820();
   scope->behaviors[5] = make__52042560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_59246680() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_59246680 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59268880();
   systemT->inputs[1] = makerst_59268860();
   systemT->inputs[2] = makereq_59268840();
   systemT->inputs[3] = make_58110_59346480();
   systemT->inputs[4] = make_58111_59465420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_59465380();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58112_59465280();
   systemT->inouts[1] = make_5876_59624620();

   systemT->scope = makelayer1_58_84_60436820();

   return systemT;
}