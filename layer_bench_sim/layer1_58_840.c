#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_59550200;

SignalI clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeclk_59548000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_840_59550200;
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

SignalI rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makerst_59547980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_840_59550200;
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

SignalI fill_59547940_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makefill_59547940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_59547940_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_840_59550200;
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

SignalI req_59547920_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makereq_59547920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_59547920_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_840_59550200;
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

SignalI ack__1_59547880_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeack__1_59547880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_59547880_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_840_59550200;
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

Block __58799400;

Block __58798860;

Block __58798700;

void code__58798700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,value__z0_58800160_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60866620(),flag__z0_58879260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__58798700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58798700 = block;
   block->owner = (Object)__58798860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58798700;

   return block;
};

void code__58798860() {
 code__58798700();
}

Block make__58798860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58798860 = block;
   block->owner = (Object)__58799400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58798860;

   return block;
};

Block __58799240;

void code__58799240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60940240(),flag__z0_58879260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__58799240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58799240 = block;
   block->owner = (Object)__58799400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58799240;

   return block;
};

void code__58799400() {
   {
      Value cond = ack__add_54431260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58798860();
   }
   else {
  code__58799240();
   }
      }
   }
}

Block make__58799400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58799400 = block;
   block->owner = (Object)__59006920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58799400;

   return block;
};

Block __59006800;

Block __59006580;

Block __59006420;

void code__59006420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a10_58879280_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_5862_49878920______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60940060(),ack__a10_58879240_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59006420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59006420 = block;
   block->owner = (Object)__59006580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59006420;

   return block;
};

void code__59006580() {
 code__59006420();
}

Block make__59006580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59006580 = block;
   block->owner = (Object)__59006800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59006580;

   return block;
};

void code__59006800() {
   {
      Value cond = flag__z0_58879260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59006580();
   }
      }
   }
}

Block make__59006800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59006800 = block;
   block->owner = (Object)__59275640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59006800;

   return block;
};

Block __59275520;

Block __59275360;

Block __59275040;

void code__59275040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60939860(),_58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59275040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59275040 = block;
   block->owner = (Object)__59275360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59275040;

   return block;
};

void code__59275360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60939960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59275040();
   }
      }
   }
}

Block make__59275360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59275360 = block;
   block->owner = (Object)__59275520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59275360;

   return block;
};

Block __59274540;

Block __59274120;

void code__59274120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60939680(),_58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59274120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59274120 = block;
   block->owner = (Object)__59274540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59274120;

   return block;
};

void code__59274540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60939780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59274120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60939580(),_58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59274540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59274540 = block;
   block->owner = (Object)__59275520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59274540;

   return block;
};

Block __59273380;

Block __59273220;

Block __59272900;

void code__59272900() {
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
                  src0 = _58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60939320();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60939220(),_58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60939160(),_58253_58966460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59272900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59272900 = block;
   block->owner = (Object)__59273220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59272900;

   return block;
};

void code__59273220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60939460();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59272900();
   }
      }
   }
}

Block make__59273220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59273220 = block;
   block->owner = (Object)__59273380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59273220;

   return block;
};

Block __59478780;

Block __59478380;

Block __59477860;

void code__59477860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60938900(),_58303_59102880_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59477860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59477860 = block;
   block->owner = (Object)__59478380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59477860;

   return block;
};

void code__59478380() {
{
      Value value = _58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60938960())) {
    code__59477860();
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
                  src0 = _58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60938780();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59478380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59478380 = block;
   block->owner = (Object)__59478780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59478380;

   return block;
};

void code__59478780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60939080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59478380();
   }
      }
   }
}

Block make__59478780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59478780 = block;
   block->owner = (Object)__59273380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59478780;

   return block;
};

void code__59273380() {
 code__59273220();
 code__59478780();
}

Block make__59273380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59273380 = block;
   block->owner = (Object)__59275520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59273380;

   return block;
};

void code__59275520() {
 code__59275360();
 code__59274540();
   {
      Value cond = fill_59547940_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59273380();
   }
      }
   }
}

Block make__59275520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59275520 = block;
   block->owner = (Object)__59550600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59275520;

   return block;
};

Block __60585800;

void code__60585800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,clk_59120420_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_54431320_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,ack_59120400_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,rst_59120380_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_58800160_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a10_58879240_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,ack__1_59547880_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60585800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60585800 = block;
   block->owner = (Object)__60580080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60585800;

   return block;
};

Block __60585720;

void code__60585720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,ack__mac_54431280_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_54649520_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,value__a10_58879280_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60585720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60585720 = block;
   block->owner = (Object)__60579920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60585720;

   return block;
};

Block __45633200;

Block __49485440;

void code__49485440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_53315740_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,make_ref_rangeS(mem_53558640_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700,value2integer(abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value),value2integer(abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49485440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49485440 = block;
   block->owner = (Object)__45633200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49485440;

   return block;
};

void code__45633200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_53558640_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
            idx = value2integer(abus__r_53315580_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53185540_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_53039300_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49485440();
   }
      }
   }
}

Block make__45633200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45633200 = block;
   block->owner = (Object)__51989260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45633200;

   return block;
};

Block __60619920;

void code__60619920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53185540_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_58249_57066560_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60619920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60619920 = block;
   block->owner = (Object)__60619760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60619920;

   return block;
};

Block __60619720;

void code__60619720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_57066560_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,dbus__r_53185540_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60619720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60619720 = block;
   block->owner = (Object)__60619560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60619720;

   return block;
};

Block __60619260;

void code__60619260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53039320_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60619260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60619260 = block;
   block->owner = (Object)__60619100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60619260;

   return block;
};

Block __60619060;

void code__60619060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,trig__r_53039320_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60619060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60619060 = block;
   block->owner = (Object)__60618900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60619060;

   return block;
};

Block __60618600;

void code__60618600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53315580_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60618600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60618600 = block;
   block->owner = (Object)__60618400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60618600;

   return block;
};

Block __60618320;

void code__60618320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,abus__r_53315580_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60618320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60618320 = block;
   block->owner = (Object)__60618040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60618320;

   return block;
};

Block __60617740;

void code__60617740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_53039300_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60617740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60617740 = block;
   block->owner = (Object)__60617580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60617740;

   return block;
};

Block __60617540;

void code__60617540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,trig__w_53039300_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60617540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60617540 = block;
   block->owner = (Object)__60617380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60617540;

   return block;
};

Block __60617080;

void code__60617080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60617080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60617080 = block;
   block->owner = (Object)__60616920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60617080;

   return block;
};

Block __60616880;

void code__60616880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60616880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60616880 = block;
   block->owner = (Object)__60616720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60616880;

   return block;
};

Block __60616420;

void code__60616420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_53315740_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_58253_58966460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60616420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60616420 = block;
   block->owner = (Object)__60616200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60616420;

   return block;
};

Block __60616120;

void code__60616120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58253_58966460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,dbus__w_53315740_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60616120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60616120 = block;
   block->owner = (Object)__60615860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60616120;

   return block;
};

Block __60614340;

void code__60614340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52199300_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60614340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60614340 = block;
   block->owner = (Object)__60614140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60614340;

   return block;
};

Block __60614080;

void code__60614080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,reg__0_52199300_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60614080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60614080 = block;
   block->owner = (Object)__60613840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60614080;

   return block;
};

Block __53317980;

Block __53317160;

Block __53316500;

void code__53316500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60874520(),_58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53316500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53316500 = block;
   block->owner = (Object)__53317160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53316500;

   return block;
};

void code__53317160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60874600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53316500();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60874460(),_58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53317160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53317160 = block;
   block->owner = (Object)__53317980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53317160;

   return block;
};

Block __53315180;

Block __53314620;

void code__53314620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60874300(),_5845_49794220______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53314620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53314620 = block;
   block->owner = (Object)__53315180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53314620;

   return block;
};

void code__53315180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60874380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53314620();
   }
      }
   }
}

Block make__53315180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53315180 = block;
   block->owner = (Object)__53317980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53315180;

   return block;
};

Block __53571540;

Block __53570840;

Block __53569780;

Block __53569120;

void code__53569120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49678880______58_84_49481440______58_840_59916700->c_value,rv_53318260_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53569120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53569120 = block;
   block->owner = (Object)__53569780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53569120;

   return block;
};

Block __54314840;

void code__54314840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_49794400______58_84_49481440______58_840_59916700->c_value,rv_53318260_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__54314840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54314840 = block;
   block->owner = (Object)__53569780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54314840;

   return block;
};

void code__53569780() {
{
      Value value = _5845_49794220______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60873820())) {
    code__53569120();
         }
         else if (value2integer(value) == value2integer(make__60873720())) {
    code__54314840();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60873580(),rvok_53318180_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
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
                  src0 = _5845_49794220______58_84_49481440______58_840_59916700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60873420();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_49794220______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53569780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53569780 = block;
   block->owner = (Object)__53570840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53569780;

   return block;
};

void code__53570840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60873940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53569780();
   }
      }
   }
}

Block make__53570840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53570840 = block;
   block->owner = (Object)__53571540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53570840;

   return block;
};

Block __47857560;

Block __47856980;

Block __47855900;

void code__47855900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_57066560_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,lv0_52963900_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60872880(),lvok0_53318220_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__47855900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47855900 = block;
   block->owner = (Object)__47856980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47855900;

   return block;
};

void code__47856980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60873080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47855900();
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
                  src0 = _58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60872760();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60872660(),_58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__47856980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47856980 = block;
   block->owner = (Object)__47857560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47856980;

   return block;
};

void code__47857560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60873260();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47856980();
   }
      }
   }
}

Block make__47857560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47857560 = block;
   block->owner = (Object)__53571540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47857560;

   return block;
};

Block __50015600;

Block __50014460;

Block __50014160;

void code__50014160() {
}

Block make__50014160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50014160 = block;
   block->owner = (Object)__50014460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50014160;

   return block;
};

Block __49813600;

void code__49813600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_53190080_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__49813600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49813600 = block;
   block->owner = (Object)__50014460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49813600;

   return block;
};

void code__50014460() {
 code__50014160();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_53190080_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
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
                              src0 = lv0_52963900_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_53318260_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60872100();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_53190080_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__49813600();
}

Block make__50014460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50014460 = block;
   block->owner = (Object)__50015600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50014460;

   return block;
};

void code__50015600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60872500(),ack_54431320_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60872440(),run_53318160_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__50014460();
}

Block make__50015600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50015600 = block;
   block->owner = (Object)__53571540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50015600;

   return block;
};

void code__53571540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60874020(),run_53318160_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__53570840();
 code__47857560();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53318220_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
         src1 = rvok_53318180_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50015600();
   }
      }
   }
}

Block make__53571540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53571540 = block;
   block->owner = (Object)__53317980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53571540;

   return block;
};

Block __53386980;

void code__53386980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60871920(),rvok_53318180_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60871860(),lvok0_53318220_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60871800(),av0_53190080_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53386980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53386980 = block;
   block->owner = (Object)__53317980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53386980;

   return block;
};

void code__53317980() {
 code__53317160();
 code__53315180();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60874240(),ack_54431320_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60874180(),run_53318160_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_59547920_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
         src1 = run_53318160_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53571540();
   }
   else {
  code__53386980();
   }
      }
   }
}

Block make__53317980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53317980 = block;
   block->owner = (Object)__52768640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53317980;

   return block;
};

Block __60775820;

void code__60775820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_58292_58625540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60775820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60775820 = block;
   block->owner = (Object)__60775580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60775820;

   return block;
};

Block __60775520;

void code__60775520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_58625540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60775520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60775520 = block;
   block->owner = (Object)__60775300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60775520;

   return block;
};

Block __60775000;

void code__60775000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_58303_59102880_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60775000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60775000 = block;
   block->owner = (Object)__60774840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60775000;

   return block;
};

Block __60774800;

void code__60774800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58303_59102880_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60774800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60774800 = block;
   block->owner = (Object)__60774640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60774800;

   return block;
};

Block __60772860;

void code__60772860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_52640760_winc_58302_52641360_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60772860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60772860 = block;
   block->owner = (Object)__60772700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60772860;

   return block;
};

Block __60772660;

void code__60772660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,abus__w_52640760_winc_58302_52641360_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60772660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60772660 = block;
   block->owner = (Object)__60772500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60772660;

   return block;
};

Block __60771260;

void code__60771260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48386260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,_58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60771260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60771260 = block;
   block->owner = (Object)__60771080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60771260;

   return block;
};

Block __60771020;

void code__60771020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,reg__0_48386260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60771020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60771020 = block;
   block->owner = (Object)__60770820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60771020;

   return block;
};

Block __52141020;

Block __52138900;

Block __52138300;

void code__52138300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,lv0_50019420_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60868380(),lvok0_52141180_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52138300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52138300 = block;
   block->owner = (Object)__52138900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52138300;

   return block;
};

Block __52786400;

void code__52786400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_58625540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,rv0_52141200_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60868100(),rvok0_52141160_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52786400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52786400 = block;
   block->owner = (Object)__52138900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52786400;

   return block;
};

Block __53184720;

Block __53183540;

void code__53183540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_50019420_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
      src1 = rv0_52141200_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53183540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53183540 = block;
   block->owner = (Object)__53184720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53183540;

   return block;
};

void code__53184720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60867940(),run_52141140_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60867880(),ack__add_54431260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__53183540();
}

Block make__53184720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53184720 = block;
   block->owner = (Object)__52138900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53184720;

   return block;
};

void code__52138900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60868920(),run_52141140_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__52138300();
 code__52786400();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52141180_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
         src1 = rvok0_52141160_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53184720();
   }
      }
   }
}

Block make__52138900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52138900 = block;
   block->owner = (Object)__52141020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52138900;

   return block;
};

Block __52140380;

void code__52140380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60867640(),lvok0_52141180_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60867580(),rvok0_52141160_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52140380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52140380 = block;
   block->owner = (Object)__52141020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52140380;

   return block;
};

void code__52141020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60870260(),ack__add_54431260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60869920(),run_52141140_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_54431280_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
         src1 = run_52141140_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52138900();
   }
   else {
  code__52140380();
   }
      }
   }
}

Block make__52141020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52141020 = block;
   block->owner = (Object)__54431700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52141020;

   return block;
};

Value make__60874600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60874520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60874460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60874380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60874300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60874240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60874180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60874020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60873940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60873820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60873720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60873580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60873420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60873260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60873080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60872880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60872760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60872660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60872500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60872440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60872100() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60871920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60871860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60871800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60870260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60869920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60868920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60868380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60868100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60867940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60867880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60867640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60867580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60866620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60940240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60940060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60939960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60939860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60939780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60939680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60939580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60939460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60939320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60939220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60939160() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60939080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60938960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60938900() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60938780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer1_58_84_52987540;

SignalI ack_54431320_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeack_54431320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_54431320_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
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

SignalI ack__mac_54431280_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeack__mac_54431280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54431280_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
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

SignalI ack__add_54431260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeack__add_54431260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_54431260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
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

SignalI _58249_57066560_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI make_58249_57066560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58249_57066560_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
   signalI->name = ":249";
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

SignalI _58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI make_58247_57066540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
   signalI->name = ":247";
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

SignalI _58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI make_58248_57066460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
   signalI->name = ":248";
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

SignalI _58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI make_58266_52009180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
   signalI->name = ":266";
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

SignalI _58292_58625540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI make_58292_58625540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58292_58625540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
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

SignalI _58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI make_58315_58729260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
   signalI->name = ":315";
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

SignalI value__z0_58800160_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makevalue__z0_58800160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_58800160_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
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

SignalI value__a10_58879280_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makevalue__a10_58879280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a10_58879280_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
   signalI->name = "value_a10";
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

SignalI flag__z0_58879260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeflag__z0_58879260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_58879260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
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

SignalI ack__a10_58879240_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeack__a10_58879240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a10_58879240_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
   signalI->name = "ack_a10";
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

SignalI _58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI make_58251_58879220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
   signalI->name = ":251";
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

SignalI _58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI make_58252_58879140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
   signalI->name = ":252";
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

SignalI _58253_58966460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI make_58253_58966460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58253_58966460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
   signalI->name = ":253";
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

SignalI _58303_59102880_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI make_58303_59102880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58303_59102880_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
   signalI->name = ":303";
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

SignalI _58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI make_58304_59102800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer1_58_84_52987540;
   signalI->name = ":304";
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

SystemI counter1_59120200;

SystemI makecounter1_59120200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter1_59120200 = systemI;
   systemI->owner = (Object)layer1_58_84_52987540;
   systemI->name = "counter1";
   systemI->system = counter1_58_840_59097720;

   return systemI;
};

SystemI func0_54649180;

SystemI makefunc0_54649180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_54649180 = systemI;
   systemI->owner = (Object)layer1_58_84_52987540;
   systemI->name = "func0";
   systemI->system = func0_58_8400_53788120;

   return systemI;
};

Scope channel__w0_58235_52987100;

SignalI trig__r_53039320_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI maketrig__r_53039320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53039320_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_58235_52987100;
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

SignalI trig__w_53039300_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI maketrig__w_53039300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_53039300_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_58235_52987100;
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

SignalI dbus__r_53185540_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makedbus__r_53185540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53185540_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_58235_52987100;
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

SignalI dbus__w_53315740_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makedbus__w_53315740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_53315740_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_58235_52987100;
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

SignalI abus__r_53315580_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__r_53315580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53315580_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_58235_52987100;
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

SignalI abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__w_53315480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_58235_52987100;
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

SignalI mem_53558640_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makemem_53558640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_53558640_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_58235_52987100;
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

Scope raddr_58236_52986800;

Scope makeraddr_58236_52986800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58236_52986800 = scope;
   scope->owner = (Object)channel__w0_58235_52987100;
   scope->name = "raddr:236";
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

Scope waddr_58241_53042980;

Scope makewaddr_58241_53042980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58241_53042980 = scope;
   scope->owner = (Object)channel__w0_58235_52987100;
   scope->name = "waddr:241";
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

Scope rinc_58246_53042080;

Scope makerinc_58246_53042080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_53042080 = scope;
   scope->owner = (Object)channel__w0_58235_52987100;
   scope->name = "rinc:246";
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

Scope winc_58250_53041660;

Scope makewinc_58250_53041660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58250_53041660 = scope;
   scope->owner = (Object)channel__w0_58235_52987100;
   scope->name = "winc:250";
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

Scope rdec_58254_53041140;

Scope makerdec_58254_53041140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58254_53041140 = scope;
   scope->owner = (Object)channel__w0_58235_52987100;
   scope->name = "rdec:254";
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

Scope wdec_58259_53040360;

Scope makewdec_58259_53040360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58259_53040360 = scope;
   scope->owner = (Object)channel__w0_58235_52987100;
   scope->name = "wdec:259";
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

Behavior __51989260;

Behavior make__51989260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51989260 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_neg += 1;
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->neg = realloc(clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->neg,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_neg*sizeof(Object));
clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->neg[clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_neg-1] = (Object)behavior;
   behavior->block = make__45633200();

   return behavior;
}

Behavior __60619760;

Behavior make__60619760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60619760 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53185540_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   dbus__r_53185540_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   dbus__r_53185540_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(dbus__r_53185540_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,dbus__r_53185540_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
dbus__r_53185540_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[dbus__r_53185540_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60619920();

   return behavior;
}

Behavior __60619560;

Behavior make__60619560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60619560 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58249_57066560_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   _58249_57066560_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   _58249_57066560_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(_58249_57066560_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,_58249_57066560_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58249_57066560_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[_58249_57066560_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60619720();

   return behavior;
}

Behavior __60619100;

Behavior make__60619100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60619100 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53039320_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   trig__r_53039320_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   trig__r_53039320_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(trig__r_53039320_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,trig__r_53039320_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
trig__r_53039320_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[trig__r_53039320_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60619260();

   return behavior;
}

Behavior __60618900;

Behavior make__60618900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60618900 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   _58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   _58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(_58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,_58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[_58247_57066540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60619060();

   return behavior;
}

Behavior __60618400;

Behavior make__60618400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60618400 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53315580_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   abus__r_53315580_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   abus__r_53315580_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(abus__r_53315580_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,abus__r_53315580_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
abus__r_53315580_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[abus__r_53315580_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60618600();

   return behavior;
}

Behavior __60618040;

Behavior make__60618040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60618040 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   _58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   _58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(_58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,_58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[_58248_57066460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60618320();

   return behavior;
}

Behavior __60617580;

Behavior make__60617580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60617580 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_53039300_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   trig__w_53039300_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   trig__w_53039300_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(trig__w_53039300_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,trig__w_53039300_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
trig__w_53039300_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[trig__w_53039300_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60617740();

   return behavior;
}

Behavior __60617380;

Behavior make__60617380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60617380 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   _58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   _58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(_58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,_58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[_58251_58879220_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60617540();

   return behavior;
}

Behavior __60616920;

Behavior make__60616920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60616920 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[abus__w_53315480_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60617080();

   return behavior;
}

Behavior __60616720;

Behavior make__60616720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60616720 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   _58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   _58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(_58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,_58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[_58252_58879140_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60616880();

   return behavior;
}

Behavior __60616200;

Behavior make__60616200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60616200 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_53315740_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   dbus__w_53315740_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   dbus__w_53315740_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(dbus__w_53315740_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,dbus__w_53315740_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
dbus__w_53315740_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[dbus__w_53315740_channel__w0_58235_52987100_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60616420();

   return behavior;
}

Behavior __60615860;

Behavior make__60615860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60615860 = behavior;
   behavior->owner = (Object)channel__w0_58235_52987100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58253_58966460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   _58253_58966460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   _58253_58966460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(_58253_58966460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,_58253_58966460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58253_58966460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[_58253_58966460_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60616120();

   return behavior;
}

Scope makechannel__w0_58235_52987100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58235_52987100 = scope;
   scope->owner = (Object)layer1_58_84_52987540;
   scope->name = "channel_w0:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53039320();
   scope->inners[1] = maketrig__w_53039300();
   scope->inners[2] = makedbus__r_53185540();
   scope->inners[3] = makedbus__w_53315740();
   scope->inners[4] = makeabus__r_53315580();
   scope->inners[5] = makeabus__w_53315480();
   scope->inners[6] = makemem_53558640();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58236_52986800();
   scope->scopes[1] = makewaddr_58241_53042980();
   scope->scopes[2] = makerinc_58246_53042080();
   scope->scopes[3] = makewinc_58250_53041660();
   scope->scopes[4] = makerdec_58254_53041140();
   scope->scopes[5] = makewdec_58259_53040360();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51989260();
   scope->behaviors[1] = make__60619760();
   scope->behaviors[2] = make__60619560();
   scope->behaviors[3] = make__60619100();
   scope->behaviors[4] = make__60618900();
   scope->behaviors[5] = make__60618400();
   scope->behaviors[6] = make__60618040();
   scope->behaviors[7] = make__60617580();
   scope->behaviors[8] = make__60617380();
   scope->behaviors[9] = make__60616920();
   scope->behaviors[10] = make__60616720();
   scope->behaviors[11] = make__60616200();
   scope->behaviors[12] = make__60615860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58264_51989080;

SignalI reg__0_52199300_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makereg__0_52199300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52199300_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__accum_58264_51989080;
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

Scope anum_58265_51988700;

Scope makeanum_58265_51988700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58265_51988700 = scope;
   scope->owner = (Object)channel__accum_58264_51989080;
   scope->name = "anum:265";
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

Scope raddr_58267_51988240;

Scope makeraddr_58267_51988240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58267_51988240 = scope;
   scope->owner = (Object)channel__accum_58264_51989080;
   scope->name = "raddr:267";
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

Scope waddr_58270_51987400;

Scope makewaddr_58270_51987400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58270_51987400 = scope;
   scope->owner = (Object)channel__accum_58264_51989080;
   scope->name = "waddr:270";
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

Scope rinc_58273_52027260;

SignalI abus__r_52026720_rinc_58273_52027260_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__r_52026720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52026720_rinc_58273_52027260_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rinc_58273_52027260;
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

Scope makerinc_58273_52027260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_52027260 = scope;
   scope->owner = (Object)channel__accum_58264_51989080;
   scope->name = "rinc:273";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52026720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58277_52026580;

SignalI abus__w_52025800_winc_58277_52026580_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__w_52025800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52025800_winc_58277_52026580_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)winc_58277_52026580;
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

Scope makewinc_58277_52026580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58277_52026580 = scope;
   scope->owner = (Object)channel__accum_58264_51989080;
   scope->name = "winc:277";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52025800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58281_52025640;

SignalI abus__r_52025060_rdec_58281_52025640_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__r_52025060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52025060_rdec_58281_52025640_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rdec_58281_52025640;
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

Scope makerdec_58281_52025640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58281_52025640 = scope;
   scope->owner = (Object)channel__accum_58264_51989080;
   scope->name = "rdec:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52025060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58285_52024740;

SignalI abus__w_52023540_wdec_58285_52024740_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__w_52023540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52023540_wdec_58285_52024740_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)wdec_58285_52024740;
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

Scope makewdec_58285_52024740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58285_52024740 = scope;
   scope->owner = (Object)channel__accum_58264_51989080;
   scope->name = "wdec:285";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52023540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60614140;

Behavior make__60614140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60614140 = behavior;
   behavior->owner = (Object)channel__accum_58264_51989080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52199300_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   reg__0_52199300_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   reg__0_52199300_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(reg__0_52199300_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,reg__0_52199300_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__0_52199300_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[reg__0_52199300_channel__accum_58264_51989080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60614340();

   return behavior;
}

Behavior __60613840;

Behavior make__60613840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60613840 = behavior;
   behavior->owner = (Object)channel__accum_58264_51989080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   _58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   _58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(_58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,_58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[_58266_52009180_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60614080();

   return behavior;
}

Scope makechannel__accum_58264_51989080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58264_51989080 = scope;
   scope->owner = (Object)layer1_58_84_52987540;
   scope->name = "channel_accum:264";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52199300();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58265_51988700();
   scope->scopes[1] = makeraddr_58267_51988240();
   scope->scopes[2] = makewaddr_58270_51987400();
   scope->scopes[3] = makerinc_58273_52027260();
   scope->scopes[4] = makewinc_58277_52026580();
   scope->scopes[5] = makerdec_58281_52025640();
   scope->scopes[6] = makewdec_58285_52024740();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60614140();
   scope->behaviors[1] = make__60613840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58289_52851080;

SignalI lv0_52963900_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makelv0_52963900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52963900_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58289_52851080;
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

SignalI av0_53190080_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeav0_53190080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_53190080_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58289_52851080;
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

SignalI rv_53318260_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makerv_53318260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_53318260_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58289_52851080;
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

SignalI lvok0_53318220_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makelvok0_53318220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53318220_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58289_52851080;
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

SignalI rvok_53318180_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makervok_53318180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_53318180_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58289_52851080;
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

SignalI run_53318160_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makerun_53318160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53318160_mac__n1_58289_52851080_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58289_52851080;
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

Behavior __52768640;

Behavior make__52768640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52768640 = behavior;
   behavior->owner = (Object)mac__n1_58289_52851080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos = realloc(clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos[clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__53317980();

   return behavior;
}

Scope makemac__n1_58289_52851080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58289_52851080 = scope;
   scope->owner = (Object)layer1_58_84_52987540;
   scope->name = "mac_n1:289";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52963900();
   scope->inners[1] = makeav0_53190080();
   scope->inners[2] = makerv_53318260();
   scope->inners[3] = makelvok0_53318220();
   scope->inners[4] = makervok_53318180();
   scope->inners[5] = makerun_53318160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52768640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58290_52768480;

SignalI reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makereg__0_53072580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__bias_58290_52768480;
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

Scope anum_58291_52767980;

Scope makeanum_58291_52767980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58291_52767980 = scope;
   scope->owner = (Object)channel__bias_58290_52768480;
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

Scope raddr_58293_52767260;

Scope makeraddr_58293_52767260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58293_52767260 = scope;
   scope->owner = (Object)channel__bias_58290_52768480;
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

Scope waddr_58296_52765800;

Scope makewaddr_58296_52765800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58296_52765800 = scope;
   scope->owner = (Object)channel__bias_58290_52768480;
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

Scope rinc_58299_52765240;

SignalI abus__r_52641580_rinc_58299_52765240_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__r_52641580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52641580_rinc_58299_52765240_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rinc_58299_52765240;
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

Scope makerinc_58299_52765240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58299_52765240 = scope;
   scope->owner = (Object)channel__bias_58290_52768480;
   scope->name = "rinc:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52641580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58302_52641360;

SignalI abus__w_52640760_winc_58302_52641360_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__w_52640760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52640760_winc_58302_52641360_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)winc_58302_52641360;
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

Behavior __60772700;

Behavior make__60772700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60772700 = behavior;
   behavior->owner = (Object)winc_58302_52641360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_52640760_winc_58302_52641360_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   abus__w_52640760_winc_58302_52641360_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   abus__w_52640760_winc_58302_52641360_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(abus__w_52640760_winc_58302_52641360_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,abus__w_52640760_winc_58302_52641360_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
abus__w_52640760_winc_58302_52641360_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[abus__w_52640760_winc_58302_52641360_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60772860();

   return behavior;
}

Behavior __60772500;

Behavior make__60772500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60772500 = behavior;
   behavior->owner = (Object)winc_58302_52641360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   _58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   _58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(_58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,_58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[_58304_59102800_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60772660();

   return behavior;
}

Scope makewinc_58302_52641360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58302_52641360 = scope;
   scope->owner = (Object)channel__bias_58290_52768480;
   scope->name = "winc:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52640760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60772700();
   scope->behaviors[1] = make__60772500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58305_52640060;

SignalI abus__r_52639220_rdec_58305_52640060_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__r_52639220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52639220_rdec_58305_52640060_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rdec_58305_52640060;
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

Scope makerdec_58305_52640060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58305_52640060 = scope;
   scope->owner = (Object)channel__bias_58290_52768480;
   scope->name = "rdec:305";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52639220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58309_52639100;

SignalI abus__w_52638100_wdec_58309_52639100_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__w_52638100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52638100_wdec_58309_52639100_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)wdec_58309_52639100;
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

Scope makewdec_58309_52639100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58309_52639100 = scope;
   scope->owner = (Object)channel__bias_58290_52768480;
   scope->name = "wdec:309";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52638100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60775580;

Behavior make__60775580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60775580 = behavior;
   behavior->owner = (Object)channel__bias_58290_52768480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60775820();

   return behavior;
}

Behavior __60775300;

Behavior make__60775300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60775300 = behavior;
   behavior->owner = (Object)channel__bias_58290_52768480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58292_58625540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   _58292_58625540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   _58292_58625540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(_58292_58625540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,_58292_58625540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58292_58625540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[_58292_58625540_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60775520();

   return behavior;
}

Behavior __60774840;

Behavior make__60774840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60774840 = behavior;
   behavior->owner = (Object)channel__bias_58290_52768480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[reg__0_53072580_channel__bias_58290_52768480_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60775000();

   return behavior;
}

Behavior __60774640;

Behavior make__60774640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60774640 = behavior;
   behavior->owner = (Object)channel__bias_58290_52768480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58303_59102880_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   _58303_59102880_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   _58303_59102880_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(_58303_59102880_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,_58303_59102880_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58303_59102880_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[_58303_59102880_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60774800();

   return behavior;
}

Scope makechannel__bias_58290_52768480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58290_52768480 = scope;
   scope->owner = (Object)layer1_58_84_52987540;
   scope->name = "channel_bias:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53072580();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58291_52767980();
   scope->scopes[1] = makeraddr_58293_52767260();
   scope->scopes[2] = makewaddr_58296_52765800();
   scope->scopes[3] = makerinc_58299_52765240();
   scope->scopes[4] = makewinc_58302_52641360();
   scope->scopes[5] = makerdec_58305_52640060();
   scope->scopes[6] = makewdec_58309_52639100();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60775580();
   scope->behaviors[1] = make__60775300();
   scope->behaviors[2] = make__60774840();
   scope->behaviors[3] = make__60774640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58313_47722720;

SignalI reg__0_48386260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makereg__0_48386260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48386260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__z_58313_47722720;
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

Scope anum_58314_47722120;

Scope makeanum_58314_47722120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58314_47722120 = scope;
   scope->owner = (Object)channel__z_58313_47722720;
   scope->name = "anum:314";
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

Scope raddr_58316_47720440;

Scope makeraddr_58316_47720440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58316_47720440 = scope;
   scope->owner = (Object)channel__z_58313_47722720;
   scope->name = "raddr:316";
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

Scope waddr_58319_47719560;

Scope makewaddr_58319_47719560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58319_47719560 = scope;
   scope->owner = (Object)channel__z_58313_47722720;
   scope->name = "waddr:319";
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

Scope rinc_58322_47742700;

SignalI abus__r_47741260_rinc_58322_47742700_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__r_47741260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47741260_rinc_58322_47742700_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rinc_58322_47742700;
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

Scope makerinc_58322_47742700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58322_47742700 = scope;
   scope->owner = (Object)channel__z_58313_47722720;
   scope->name = "rinc:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47741260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58325_47741080;

SignalI abus__w_47754640_winc_58325_47741080_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__w_47754640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47754640_winc_58325_47741080_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)winc_58325_47741080;
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

Scope makewinc_58325_47741080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58325_47741080 = scope;
   scope->owner = (Object)channel__z_58313_47722720;
   scope->name = "winc:325";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47754640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58328_47754260;

SignalI abus__r_47791040_rdec_58328_47754260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__r_47791040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47791040_rdec_58328_47754260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rdec_58328_47754260;
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

Scope makerdec_58328_47754260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58328_47754260 = scope;
   scope->owner = (Object)channel__z_58313_47722720;
   scope->name = "rdec:328";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47791040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58332_47790640;

SignalI abus__w_47788840_wdec_58332_47790640_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeabus__w_47788840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47788840_wdec_58332_47790640_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)wdec_58332_47790640;
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

Scope makewdec_58332_47790640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58332_47790640 = scope;
   scope->owner = (Object)channel__z_58313_47722720;
   scope->name = "wdec:332";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47788840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60771080;

Behavior make__60771080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60771080 = behavior;
   behavior->owner = (Object)channel__z_58313_47722720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48386260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   reg__0_48386260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   reg__0_48386260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(reg__0_48386260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,reg__0_48386260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__0_48386260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[reg__0_48386260_channel__z_58313_47722720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60771260();

   return behavior;
}

Behavior __60770820;

Behavior make__60770820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60770820 = behavior;
   behavior->owner = (Object)channel__z_58313_47722720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   _58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   _58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(_58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,_58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[_58315_58729260_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60771020();

   return behavior;
}

Scope makechannel__z_58313_47722720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58313_47722720 = scope;
   scope->owner = (Object)layer1_58_84_52987540;
   scope->name = "channel_z:313";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48386260();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58314_47722120();
   scope->scopes[1] = makeraddr_58316_47720440();
   scope->scopes[2] = makewaddr_58319_47719560();
   scope->scopes[3] = makerinc_58322_47742700();
   scope->scopes[4] = makewinc_58325_47741080();
   scope->scopes[5] = makerdec_58328_47754260();
   scope->scopes[6] = makewdec_58332_47790640();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60771080();
   scope->behaviors[1] = make__60770820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58336_49778920;

SignalI lv0_50019420_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makelv0_50019420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_50019420_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58336_49778920;
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

SignalI rv0_52141200_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makerv0_52141200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_52141200_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58336_49778920;
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

SignalI lvok0_52141180_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makelvok0_52141180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52141180_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58336_49778920;
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

SignalI rvok0_52141160_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makervok0_52141160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52141160_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58336_49778920;
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

SignalI run_52141140_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makerun_52141140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52141140_add__n_58336_49778920_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58336_49778920;
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

Behavior __54431700;

Behavior make__54431700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54431700 = behavior;
   behavior->owner = (Object)add__n_58336_49778920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos = realloc(clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos[clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__52141020();

   return behavior;
}

Scope makeadd__n_58336_49778920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58336_49778920 = scope;
   scope->owner = (Object)layer1_58_84_52987540;
   scope->name = "add_n:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_50019420();
   scope->inners[1] = makerv0_52141200();
   scope->inners[2] = makelvok0_52141180();
   scope->inners[3] = makervok0_52141160();
   scope->inners[4] = makerun_52141140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54431700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59006920;

Behavior make__59006920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59006920 = behavior;
   behavior->owner = (Object)layer1_58_84_52987540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos = realloc(clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos[clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__58799400();

   return behavior;
}

Behavior __59275640;

Behavior make__59275640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59275640 = behavior;
   behavior->owner = (Object)layer1_58_84_52987540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos = realloc(clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos[clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__59006800();

   return behavior;
}

Behavior __59550600;

Behavior make__59550600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59550600 = behavior;
   behavior->owner = (Object)layer1_58_84_52987540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos = realloc(clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos[clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__59275520();

   return behavior;
}

Behavior __60580080;

Behavior make__60580080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60580080 = behavior;
   behavior->owner = (Object)layer1_58_84_52987540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_54431320_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   ack_54431320_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   ack_54431320_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(ack_54431320_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,ack_54431320_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
ack_54431320_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[ack_54431320_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_58800160_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   value__z0_58800160_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   value__z0_58800160_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(value__z0_58800160_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,value__z0_58800160_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
value__z0_58800160_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[value__z0_58800160_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a10_58879240_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   ack__a10_58879240_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   ack__a10_58879240_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(ack__a10_58879240_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,ack__a10_58879240_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
ack__a10_58879240_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[ack__a10_58879240_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60585800();

   return behavior;
}

Behavior __60579920;

Behavior make__60579920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60579920 = behavior;
   behavior->owner = (Object)layer1_58_84_52987540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_54649520_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   a_54649520_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   a_54649520_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(a_54649520_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,a_54649520_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
a_54649520_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[a_54649520_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60585720();

   return behavior;
}

Scope makelayer1_58_84_52987540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_52987540 = scope;
   scope->owner = (Object)layer1_58_840_59550200;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter1_59120200();
   scope->systemIs[1] = makefunc0_54649180();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack_54431320();
   scope->inners[1] = makeack__mac_54431280();
   scope->inners[2] = makeack__add_54431260();
   scope->inners[3] = make_58249_57066560();
   scope->inners[4] = make_58247_57066540();
   scope->inners[5] = make_58248_57066460();
   scope->inners[6] = make_58266_52009180();
   scope->inners[7] = make_58292_58625540();
   scope->inners[8] = make_58315_58729260();
   scope->inners[9] = makevalue__z0_58800160();
   scope->inners[10] = makevalue__a10_58879280();
   scope->inners[11] = makeflag__z0_58879260();
   scope->inners[12] = makeack__a10_58879240();
   scope->inners[13] = make_58251_58879220();
   scope->inners[14] = make_58252_58879140();
   scope->inners[15] = make_58253_58966460();
   scope->inners[16] = make_58303_59102880();
   scope->inners[17] = make_58304_59102800();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58235_52987100();
   scope->scopes[1] = makechannel__accum_58264_51989080();
   scope->scopes[2] = makemac__n1_58289_52851080();
   scope->scopes[3] = makechannel__bias_58290_52768480();
   scope->scopes[4] = makechannel__z_58313_47722720();
   scope->scopes[5] = makeadd__n_58336_49778920();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59006920();
   scope->behaviors[1] = make__59275640();
   scope->behaviors[2] = make__59550600();
   scope->behaviors[3] = make__60580080();
   scope->behaviors[4] = make__60579920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_59550200() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_59550200 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59548000();
   systemT->inputs[1] = makerst_59547980();
   systemT->inputs[2] = makefill_59547940();
   systemT->inputs[3] = makereq_59547920();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__1_59547880();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer1_58_84_52987540();

   return systemT;
}