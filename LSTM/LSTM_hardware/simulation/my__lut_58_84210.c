#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_84210_158927740;

SignalI address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeaddress_158948960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84210_158927740;
   signalI->name = "address";
   signalI->type = get_type_vector(get_type_bit(),4);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI base_159157780_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makebase_159157780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_159157780_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84210_158927740;
   signalI->name = "base";
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

SignalI next__data_159429640_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makenext__data_159429640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_159429640_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84210_158927740;
   signalI->name = "next_data";
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

Block __156837500;

Block __158398680;

void code__158398680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(make__211599900());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_159429640_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__158398680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158398680 = block;
   block->owner = (Object)__156837500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158398680;

   return block;
};

Block __156837180;

Block __157762140;

void code__157762140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_159429640_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__157762140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __157762140 = block;
   block->owner = (Object)__156837180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__157762140;

   return block;
};

Block __156836900;

void code__156836900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__211769800();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_159429640_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__156836900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __156836900 = block;
   block->owner = (Object)__156837180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__156836900;

   return block;
};

void code__156837180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__211771300();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__211770940();
                     src1 = make__211770900();
                     src2 = make__211770840();
                     concat_value(3,1,dst,src0,src1,src2);
                     set_value_pos(pool_state);
                  dst; });
               concat_value(2,1,dst,src0,src1);
               set_value_pos(pool_state);
            dst; });
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__157762140();
   }
   else {
  code__156836900();
   }
      }
   }
}

Block make__156837180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __156837180 = block;
   block->owner = (Object)__156837500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__156837180;

   return block;
};

void code__156837500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__211600080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__158398680();
   }
   else {
  code__156837180();
   }
      }
   }
}

Block make__156837500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __156837500 = block;
   block->owner = (Object)__158928180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__156837500;

   return block;
};

Block __211606040;

void code__211606040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_159157780_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__211606040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __211606040 = block;
   block->owner = (Object)__211604400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__211606040;

   return block;
};

Value make__211601440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211601360() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211601300() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211601220() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211601160() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211601080() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211601000() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211600920() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211600820() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211600740() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211600720() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211600700() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211600680() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211600480() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211600460() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211600440() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__211600080() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__211599900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__211771300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__211770940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__211770900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__211770840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__211769800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_8421_147402040;

SignalI lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makelut_156195080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_8421_147402040;
   signalI->name = "lut";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__211601440();
         src1 = make__211601360();
         src2 = make__211601300();
         src3 = make__211601220();
         src4 = make__211601160();
         src5 = make__211601080();
         src6 = make__211601000();
         src7 = make__211600920();
         src8 = make__211600820();
         src9 = make__211600740();
         src10 = make__211600720();
         src11 = make__211600700();
         src12 = make__211600680();
         src13 = make__211600480();
         src14 = make__211600460();
         src15 = make__211600440();
         concat_value(16,0,dst,src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15);
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

Behavior __158928180;

Behavior make__158928180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __158928180 = behavior;
   behavior->owner = (Object)my__lut_58_8421_147402040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__156837500();

   return behavior;
}

Behavior __211604400;

Behavior make__211604400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __211604400 = behavior;
   behavior->owner = (Object)my__lut_58_8421_147402040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[address_158948960_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[lut_156195080_my__lut_58_8421_147402040_my__lut_58_84210_158927740_func0_58_844_146568240_func0_58_8440_61781760_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__211606040();

   return behavior;
}

Scope makemy__lut_58_8421_147402040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_8421_147402040 = scope;
   scope->owner = (Object)my__lut_58_84210_158927740;
   scope->name = "my_lut:T21";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_156195080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__158928180();
   scope->behaviors[1] = make__211604400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_84210_158927740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_84210_158927740 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T210";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_158948960();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_159157780();
   systemT->outputs[1] = makenext__data_159429640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_8421_147402040();

   return systemT;
}