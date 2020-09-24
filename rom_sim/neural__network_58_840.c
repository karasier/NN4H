#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT neural__network_58_840_47993620;

SignalI clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeclk_48009740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)neural__network_58_840_47993620;
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

SignalI rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makerst_48009720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)neural__network_58_840_47993620;
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

SignalI req_48009600_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makereq_48009600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_48009600_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)neural__network_58_840_47993620;
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

SignalI fill_48009580_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makefill_48009580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_48009580_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)neural__network_58_840_47993620;
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

SignalI ack__network_48009520_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeack__network_48009520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_48009520_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)neural__network_58_840_47993620;
   signalI->name = "ack_network";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __61199500;

Block __61199320;

Block __61198940;

void code__61198940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50245920(),_5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__61198940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61198940 = block;
   block->owner = (Object)__61199320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61198940;

   return block;
};

void code__61199320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50246220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61198940();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50245680(),_5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__61199320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61199320 = block;
   block->owner = (Object)__61199500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61199320;

   return block;
};

Block __61198260;

Block __61198100;

Block __61197620;

void code__61197620() {
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
                  src0 = _5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50245040();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50244860(),_5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50244760(),_5819_51309860_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__61197620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61197620 = block;
   block->owner = (Object)__61198100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61197620;

   return block;
};

void code__61198100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50245380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61197620();
   }
      }
   }
}

Block make__61198100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61198100 = block;
   block->owner = (Object)__61198260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61198100;

   return block;
};

void code__61198260() {
 code__61198100();
}

Block make__61198260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61198260 = block;
   block->owner = (Object)__61199500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61198260;

   return block;
};

void code__61199500() {
 code__61199320();
   {
      Value cond = fill_48009580_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61198260();
   }
      }
   }
}

Block make__61199500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61199500 = block;
   block->owner = (Object)__47994260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61199500;

   return block;
};

Block __49631040;

void code__49631040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_50184040_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,ack__network_48009520_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,clk_59257320_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,rst_59257300_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_48009580_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,fill_59257280_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_48009600_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,req_59257260_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_48009580_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,fill_60585100_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_50159620_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,req_60585080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49631040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49631040 = block;
   block->owner = (Object)__49764700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49631040;

   return block;
};

Block __49630960;

void code__49630960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_59369120_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,ack__0_50159620_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_60950040_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,ack__1_50184040_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49630960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49630960 = block;
   block->owner = (Object)__49763600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49630960;

   return block;
};

Block __49119100;

Block __49660980;

void code__49660980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47959840_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,make_ref_rangeS(mem_48056620_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640,value2integer(abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value),value2integer(abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49660980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49660980 = block;
   block->owner = (Object)__49119100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49660980;

   return block;
};

void code__49119100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48056620_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
            idx = value2integer(abus__r_47959760_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_46201180_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_43700560_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49660980();
   }
      }
   }
}

Block make__49119100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49119100 = block;
   block->owner = (Object)__50030260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49119100;

   return block;
};

Block __49759900;

void code__49759900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_43700560_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49759900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49759900 = block;
   block->owner = (Object)__49759460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49759900;

   return block;
};

Block __49758920;

void code__49758920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,trig__w_43700560_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49758920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49758920 = block;
   block->owner = (Object)__49779060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49758920;

   return block;
};

Block __49777960;

void code__49777960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49777960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49777960 = block;
   block->owner = (Object)__49777320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49777960;

   return block;
};

Block __49777260;

void code__49777260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49777260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49777260 = block;
   block->owner = (Object)__49776560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49777260;

   return block;
};

Block __49775000;

void code__49775000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47959840_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_5819_51309860_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49775000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49775000 = block;
   block->owner = (Object)__49798600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49775000;

   return block;
};

Block __49798320;

void code__49798320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_51309860_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,dbus__w_47959840_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49798320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49798320 = block;
   block->owner = (Object)__49796700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49798320;

   return block;
};

Block __49795160;

void code__49795160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_46201180_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_5815_59369160_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49795160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49795160 = block;
   block->owner = (Object)__49896420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49795160;

   return block;
};

Block __49794640;

void code__49794640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_59369100_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,trig__r_43700580_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_59369020_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,abus__r_47959760_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49794640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49794640 = block;
   block->owner = (Object)__49895080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49794640;

   return block;
};

Block __49928080;

void code__49928080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_46474200_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_5832_61202360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49928080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49928080 = block;
   block->owner = (Object)__49927840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49928080;

   return block;
};

Block __49927740;

void code__49927740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_61202360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,reg__0_46474200_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49927740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49927740 = block;
   block->owner = (Object)__49927340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49927740;

   return block;
};

Block __49944180;

void code__49944180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_5855_59456300_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49944180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49944180 = block;
   block->owner = (Object)__49942820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49944180;

   return block;
};

Block __49941440;

void code__49941440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5855_59456300_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49941440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49941440 = block;
   block->owner = (Object)__49940440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49941440;

   return block;
};

Block __49959820;

void code__49959820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_5856_59535420_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49959820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49959820 = block;
   block->owner = (Object)__49959000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49959820;

   return block;
};

Block __49958780;

void code__49958780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5856_59535420_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49958780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49958780 = block;
   block->owner = (Object)__49958360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49958780;

   return block;
};

Block __50033480;

void code__50033480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49316620_rinc_5865_49317180_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__50033480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50033480 = block;
   block->owner = (Object)__50031420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50033480;

   return block;
};

Block __50031220;

void code__50031220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,abus__r_49316620_rinc_5865_49317180_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__50031220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50031220 = block;
   block->owner = (Object)__50030420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50031220;

   return block;
};

Block __49957060;

void code__49957060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_5866_60804360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_5867_60950080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__49957060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49957060 = block;
   block->owner = (Object)__50029220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49957060;

   return block;
};

Value make__50246220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50245920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50245680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50245380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50245040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50244860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50244760() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope neural__network_58_84_49862240;

SignalI ack__0_50159620_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeack__0_50159620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_50159620_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)neural__network_58_84_49862240;
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

SignalI ack__1_50184040_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeack__1_50184040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_50184040_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)neural__network_58_84_49862240;
   signalI->name = "ack_1";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_5817_50183920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)neural__network_58_84_49862240;
   signalI->name = ":17";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_5818_50183060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)neural__network_58_84_49862240;
   signalI->name = ":18";
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

SignalI _5819_51309860_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_5819_51309860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_51309860_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)neural__network_58_84_49862240;
   signalI->name = ":19";
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

SystemI layer0_59535300;

SystemI makelayer0_59535300() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_59535300 = systemI;
   systemI->owner = (Object)neural__network_58_84_49862240;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_59259160;

   return systemI;
};

SystemI layer1_61202120;

SystemI makelayer1_61202120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_61202120 = systemI;
   systemI->owner = (Object)neural__network_58_84_49862240;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_60587520;

   return systemI;
};

Scope channel__input_581_49861940;

SignalI trig__r_43700580_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI maketrig__r_43700580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_43700580_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__input_581_49861940;
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

SignalI trig__w_43700560_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI maketrig__w_43700560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_43700560_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__input_581_49861940;
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

SignalI dbus__r_46201180_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makedbus__r_46201180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_46201180_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__input_581_49861940;
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

SignalI dbus__w_47959840_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makedbus__w_47959840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47959840_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__input_581_49861940;
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

SignalI abus__r_47959760_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__r_47959760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47959760_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__input_581_49861940;
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

SignalI abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__w_47959680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__input_581_49861940;
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

SignalI mem_48056620_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makemem_48056620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48056620_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__input_581_49861940;
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

Scope raddr_582_49861640;

Scope makeraddr_582_49861640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49861640 = scope;
   scope->owner = (Object)channel__input_581_49861940;
   scope->name = "raddr:2";
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

Scope waddr_587_49861220;

Scope makewaddr_587_49861220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49861220 = scope;
   scope->owner = (Object)channel__input_581_49861940;
   scope->name = "waddr:7";
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

Scope rinc_5812_49860800;

Behavior __49896420;

Behavior make__49896420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49896420 = behavior;
   behavior->owner = (Object)rinc_5812_49860800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_46201180_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   dbus__r_46201180_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   dbus__r_46201180_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(dbus__r_46201180_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,dbus__r_46201180_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
dbus__r_46201180_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[dbus__r_46201180_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49795160();

   return behavior;
}

Behavior __49895080;

Behavior make__49895080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49895080 = behavior;
   behavior->owner = (Object)rinc_5812_49860800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_59369100_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _5813_59369100_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _5813_59369100_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_5813_59369100_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_5813_59369100_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_5813_59369100_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_5813_59369100_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_59369020_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _5814_59369020_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _5814_59369020_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_5814_59369020_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_5814_59369020_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_5814_59369020_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_5814_59369020_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49794640();

   return behavior;
}

Scope makerinc_5812_49860800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49860800 = scope;
   scope->owner = (Object)channel__input_581_49861940;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49896420();
   scope->behaviors[1] = make__49895080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_43421300;

Scope makewinc_5816_43421300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_43421300 = scope;
   scope->owner = (Object)channel__input_581_49861940;
   scope->name = "winc:16";
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

Scope rdec_5820_43443040;

Scope makerdec_5820_43443040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_43443040 = scope;
   scope->owner = (Object)channel__input_581_49861940;
   scope->name = "rdec:20";
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

Scope wdec_5825_43701440;

Scope makewdec_5825_43701440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_43701440 = scope;
   scope->owner = (Object)channel__input_581_49861940;
   scope->name = "wdec:25";
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

Behavior __50030260;

Behavior make__50030260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50030260 = behavior;
   behavior->owner = (Object)channel__input_581_49861940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_neg += 1;
   clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->neg = realloc(clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->neg,clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_neg*sizeof(Object));
clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->neg[clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_neg-1] = (Object)behavior;
   behavior->block = make__49119100();

   return behavior;
}

Behavior __49759460;

Behavior make__49759460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49759460 = behavior;
   behavior->owner = (Object)channel__input_581_49861940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_43700560_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   trig__w_43700560_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   trig__w_43700560_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(trig__w_43700560_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,trig__w_43700560_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
trig__w_43700560_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[trig__w_43700560_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49759900();

   return behavior;
}

Behavior __49779060;

Behavior make__49779060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49779060 = behavior;
   behavior->owner = (Object)channel__input_581_49861940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_5817_50183920_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49758920();

   return behavior;
}

Behavior __49777320;

Behavior make__49777320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49777320 = behavior;
   behavior->owner = (Object)channel__input_581_49861940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[abus__w_47959680_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49777960();

   return behavior;
}

Behavior __49776560;

Behavior make__49776560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49776560 = behavior;
   behavior->owner = (Object)channel__input_581_49861940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_5818_50183060_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49777260();

   return behavior;
}

Behavior __49798600;

Behavior make__49798600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49798600 = behavior;
   behavior->owner = (Object)channel__input_581_49861940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47959840_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   dbus__w_47959840_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   dbus__w_47959840_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(dbus__w_47959840_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,dbus__w_47959840_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
dbus__w_47959840_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[dbus__w_47959840_channel__input_581_49861940_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49775000();

   return behavior;
}

Behavior __49796700;

Behavior make__49796700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49796700 = behavior;
   behavior->owner = (Object)channel__input_581_49861940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_51309860_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _5819_51309860_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _5819_51309860_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_5819_51309860_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_5819_51309860_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_5819_51309860_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_5819_51309860_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49798320();

   return behavior;
}

Scope makechannel__input_581_49861940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__input_581_49861940 = scope;
   scope->owner = (Object)neural__network_58_84_49862240;
   scope->name = "channel_input:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_43700580();
   scope->inners[1] = maketrig__w_43700560();
   scope->inners[2] = makedbus__r_46201180();
   scope->inners[3] = makedbus__w_47959840();
   scope->inners[4] = makeabus__r_47959760();
   scope->inners[5] = makeabus__w_47959680();
   scope->inners[6] = makemem_48056620();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49861640();
   scope->scopes[1] = makewaddr_587_49861220();
   scope->scopes[2] = makerinc_5812_49860800();
   scope->scopes[3] = makewinc_5816_43421300();
   scope->scopes[4] = makerdec_5820_43443040();
   scope->scopes[5] = makewdec_5825_43701440();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50030260();
   scope->behaviors[1] = make__49759460();
   scope->behaviors[2] = make__49779060();
   scope->behaviors[3] = make__49777320();
   scope->behaviors[4] = make__49776560();
   scope->behaviors[5] = make__49798600();
   scope->behaviors[6] = make__49796700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__output_5830_50030140;

SignalI reg__0_46474200_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makereg__0_46474200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_46474200_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__output_5830_50030140;
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

Scope anum_5831_50029840;

Behavior __49927840;

Behavior make__49927840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49927840 = behavior;
   behavior->owner = (Object)anum_5831_50029840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_46474200_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   reg__0_46474200_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   reg__0_46474200_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(reg__0_46474200_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,reg__0_46474200_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
reg__0_46474200_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[reg__0_46474200_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49928080();

   return behavior;
}

Behavior __49927340;

Behavior make__49927340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49927340 = behavior;
   behavior->owner = (Object)anum_5831_50029840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_61202360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _5832_61202360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _5832_61202360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_5832_61202360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_5832_61202360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_5832_61202360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_5832_61202360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49927740();

   return behavior;
}

Scope makeanum_5831_50029840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_50029840 = scope;
   scope->owner = (Object)channel__output_5830_50030140;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49927840();
   scope->behaviors[1] = make__49927340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5833_43681740;

Scope makeraddr_5833_43681740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5833_43681740 = scope;
   scope->owner = (Object)channel__output_5830_50030140;
   scope->name = "raddr:33";
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

Scope waddr_5836_43802200;

Scope makewaddr_5836_43802200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5836_43802200 = scope;
   scope->owner = (Object)channel__output_5830_50030140;
   scope->name = "waddr:36";
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

Scope rinc_5839_43974340;

SignalI abus__r_43973440_rinc_5839_43974340_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__r_43973440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_43973440_rinc_5839_43974340_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)rinc_5839_43974340;
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

Scope makerinc_5839_43974340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5839_43974340 = scope;
   scope->owner = (Object)channel__output_5830_50030140;
   scope->name = "rinc:39";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_43973440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5842_43973080;

SignalI abus__w_43972300_winc_5842_43973080_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__w_43972300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_43972300_winc_5842_43973080_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)winc_5842_43973080;
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

Scope makewinc_5842_43973080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5842_43973080 = scope;
   scope->owner = (Object)channel__output_5830_50030140;
   scope->name = "winc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_43972300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5845_43971960;

SignalI abus__r_45604720_rdec_5845_43971960_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__r_45604720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45604720_rdec_5845_43971960_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)rdec_5845_43971960;
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

Scope makerdec_5845_43971960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5845_43971960 = scope;
   scope->owner = (Object)channel__output_5830_50030140;
   scope->name = "rdec:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45604720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5849_45598040;

SignalI abus__w_45502960_wdec_5849_45598040_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__w_45502960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45502960_wdec_5849_45598040_channel__output_5830_50030140_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)wdec_5849_45598040;
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

Scope makewdec_5849_45598040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5849_45598040 = scope;
   scope->owner = (Object)channel__output_5830_50030140;
   scope->name = "wdec:49";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45502960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__output_5830_50030140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__output_5830_50030140 = scope;
   scope->owner = (Object)neural__network_58_84_49862240;
   scope->name = "channel_output:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_46474200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_50029840();
   scope->scopes[1] = makeraddr_5833_43681740();
   scope->scopes[2] = makewaddr_5836_43802200();
   scope->scopes[3] = makerinc_5839_43974340();
   scope->scopes[4] = makewinc_5842_43973080();
   scope->scopes[5] = makerdec_5845_43971960();
   scope->scopes[6] = makewdec_5849_45598040();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5853_47461300;

SignalI reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makereg__0_50035480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__a0_5853_47461300;
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

SignalI reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makereg__1_50160800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__a0_5853_47461300;
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

Scope anum_5854_47457380;

Behavior __49942820;

Behavior make__49942820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49942820 = behavior;
   behavior->owner = (Object)anum_5854_47457380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49944180();

   return behavior;
}

Behavior __49940440;

Behavior make__49940440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49940440 = behavior;
   behavior->owner = (Object)anum_5854_47457380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5855_59456300_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _5855_59456300_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _5855_59456300_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_5855_59456300_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_5855_59456300_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_5855_59456300_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_5855_59456300_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49941440();

   return behavior;
}

Behavior __49959000;

Behavior make__49959000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49959000 = behavior;
   behavior->owner = (Object)anum_5854_47457380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49959820();

   return behavior;
}

Behavior __49958360;

Behavior make__49958360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49958360 = behavior;
   behavior->owner = (Object)anum_5854_47457380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5856_59535420_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _5856_59535420_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _5856_59535420_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_5856_59535420_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_5856_59535420_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_5856_59535420_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_5856_59535420_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49958780();

   return behavior;
}

Scope makeanum_5854_47457380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5854_47457380 = scope;
   scope->owner = (Object)channel__a0_5853_47461300;
   scope->name = "anum:54";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49942820();
   scope->behaviors[1] = make__49940440();
   scope->behaviors[2] = make__49959000();
   scope->behaviors[3] = make__49958360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5857_49318160;

Scope makeraddr_5857_49318160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5857_49318160 = scope;
   scope->owner = (Object)channel__a0_5853_47461300;
   scope->name = "raddr:57";
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

Scope waddr_5861_49317640;

Scope makewaddr_5861_49317640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5861_49317640 = scope;
   scope->owner = (Object)channel__a0_5853_47461300;
   scope->name = "waddr:61";
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

Scope rinc_5865_49317180;

SignalI abus__r_49316620_rinc_5865_49317180_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__r_49316620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49316620_rinc_5865_49317180_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)rinc_5865_49317180;
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

Behavior __50031420;

Behavior make__50031420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50031420 = behavior;
   behavior->owner = (Object)rinc_5865_49317180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49316620_rinc_5865_49317180_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   abus__r_49316620_rinc_5865_49317180_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   abus__r_49316620_rinc_5865_49317180_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(abus__r_49316620_rinc_5865_49317180_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,abus__r_49316620_rinc_5865_49317180_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
abus__r_49316620_rinc_5865_49317180_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[abus__r_49316620_rinc_5865_49317180_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__50033480();

   return behavior;
}

Behavior __50030420;

Behavior make__50030420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50030420 = behavior;
   behavior->owner = (Object)rinc_5865_49317180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__50031220();

   return behavior;
}

Behavior __50029220;

Behavior make__50029220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50029220 = behavior;
   behavior->owner = (Object)rinc_5865_49317180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[reg__0_50035480_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[reg__1_50160800_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49957060();

   return behavior;
}

Scope makerinc_5865_49317180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5865_49317180 = scope;
   scope->owner = (Object)channel__a0_5853_47461300;
   scope->name = "rinc:65";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49316620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50031420();
   scope->behaviors[1] = make__50030420();
   scope->behaviors[2] = make__50029220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5869_49889580;

SignalI abus__w_49913440_winc_5869_49889580_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__w_49913440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49913440_winc_5869_49889580_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)winc_5869_49889580;
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

Scope makewinc_5869_49889580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5869_49889580 = scope;
   scope->owner = (Object)channel__a0_5853_47461300;
   scope->name = "winc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49913440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5873_49913320;

SignalI abus__r_49912940_rdec_5873_49913320_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__r_49912940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49912940_rdec_5873_49913320_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)rdec_5873_49913320;
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

Scope makerdec_5873_49913320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5873_49913320 = scope;
   scope->owner = (Object)channel__a0_5853_47461300;
   scope->name = "rdec:73";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49912940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5878_49912820;

SignalI abus__w_49911980_wdec_5878_49912820_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__w_49911980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49911980_wdec_5878_49912820_channel__a0_5853_47461300_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)wdec_5878_49912820;
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

Scope makewdec_5878_49912820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5878_49912820 = scope;
   scope->owner = (Object)channel__a0_5853_47461300;
   scope->name = "wdec:78";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49911980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5853_47461300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5853_47461300 = scope;
   scope->owner = (Object)neural__network_58_84_49862240;
   scope->name = "channel_a0:53";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50035480();
   scope->inners[1] = makereg__1_50160800();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5854_47457380();
   scope->scopes[1] = makeraddr_5857_49318160();
   scope->scopes[2] = makewaddr_5861_49317640();
   scope->scopes[3] = makerinc_5865_49317180();
   scope->scopes[4] = makewinc_5869_49889580();
   scope->scopes[5] = makerdec_5873_49913320();
   scope->scopes[6] = makewdec_5878_49912820();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47994260;

Behavior make__47994260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47994260 = behavior;
   behavior->owner = (Object)neural__network_58_84_49862240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos += 1;
   clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos = realloc(clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos,clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos*sizeof(Object));
clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos[clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos-1] = (Object)behavior;
   behavior->block = make__61199500();

   return behavior;
}

Behavior __49764700;

Behavior make__49764700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49764700 = behavior;
   behavior->owner = (Object)neural__network_58_84_49862240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_50184040_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   ack__1_50184040_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   ack__1_50184040_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(ack__1_50184040_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,ack__1_50184040_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
ack__1_50184040_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[ack__1_50184040_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[clk_48009740_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[rst_48009720_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_48009580_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   fill_48009580_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   fill_48009580_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(fill_48009580_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,fill_48009580_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
fill_48009580_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[fill_48009580_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,req_48009600_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   req_48009600_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   req_48009600_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(req_48009600_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,req_48009600_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
req_48009600_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[req_48009600_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__0_50159620_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   ack__0_50159620_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   ack__0_50159620_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(ack__0_50159620_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,ack__0_50159620_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
ack__0_50159620_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[ack__0_50159620_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49631040();

   return behavior;
}

Behavior __49763600;

Behavior make__49763600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49763600 = behavior;
   behavior->owner = (Object)neural__network_58_84_49862240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_59369120_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   ack__layer_59369120_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   ack__layer_59369120_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(ack__layer_59369120_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,ack__layer_59369120_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
ack__layer_59369120_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[ack__layer_59369120_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_60950040_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   ack__layer_60950040_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   ack__layer_60950040_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(ack__layer_60950040_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,ack__layer_60950040_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
ack__layer_60950040_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[ack__layer_60950040_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__49630960();

   return behavior;
}

Scope makeneural__network_58_84_49862240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   neural__network_58_84_49862240 = scope;
   scope->owner = (Object)neural__network_58_840_47993620;
   scope->name = "neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_59535300();
   scope->systemIs[1] = makelayer1_61202120();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_50159620();
   scope->inners[1] = makeack__1_50184040();
   scope->inners[2] = make_5817_50183920();
   scope->inners[3] = make_5818_50183060();
   scope->inners[4] = make_5819_51309860();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__input_581_49861940();
   scope->scopes[1] = makechannel__output_5830_50030140();
   scope->scopes[2] = makechannel__a0_5853_47461300();
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47994260();
   scope->behaviors[1] = make__49764700();
   scope->behaviors[2] = make__49763600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makeneural__network_58_840_47993620() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   neural__network_58_840_47993620 = systemT;
systemT->owner = NULL;
   systemT->name = "neural_network:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_48009740();
   systemT->inputs[1] = makerst_48009720();
   systemT->inputs[2] = makereq_48009600();
   systemT->inputs[3] = makefill_48009580();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__network_48009520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makeneural__network_58_84_49862240();

   return systemT;
}