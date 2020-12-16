#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_84250_84467400;

SignalI address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeaddress_85005940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84250_84467400;
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

SignalI base_86361420_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makebase_86361420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_86361420_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84250_84467400;
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

SignalI next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makenext__data_88062360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84250_84467400;
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

Block __158294140;

Block __80823060;

void code__80823060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(make__216134640());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__80823060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80823060 = block;
   block->owner = (Object)__158294140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80823060;

   return block;
};

Block __45666160;

Block __65689520;

void code__65689520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__65689520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65689520 = block;
   block->owner = (Object)__45666160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65689520;

   return block;
};

Block __47098740;

void code__47098740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__216132740();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__47098740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47098740 = block;
   block->owner = (Object)__45666160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47098740;

   return block;
};

void code__45666160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__216133740();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__216133220();
                     src1 = make__216133200();
                     src2 = make__216133180();
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
    code__65689520();
   }
   else {
  code__47098740();
   }
      }
   }
}

Block make__45666160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45666160 = block;
   block->owner = (Object)__158294140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45666160;

   return block;
};

void code__158294140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__216134800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__80823060();
   }
   else {
  code__45666160();
   }
      }
   }
}

Block make__158294140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158294140 = block;
   block->owner = (Object)__84448540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158294140;

   return block;
};

Block __216115060;

void code__216115060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_86361420_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__216115060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __216115060 = block;
   block->owner = (Object)__216113680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__216115060;

   return block;
};

Value make__216135540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135520() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135500() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135480() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135460() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135440() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135400() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135380() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135360() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135340() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135300() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135280() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135260() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135240() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135200() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216135180() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216134800() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__216134640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__216133740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216133220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216133200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216133180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216132740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_8425_146152260;

SignalI lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makelut_166174760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_8425_146152260;
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
         src0 = make__216135540();
         src1 = make__216135520();
         src2 = make__216135500();
         src3 = make__216135480();
         src4 = make__216135460();
         src5 = make__216135440();
         src6 = make__216135400();
         src7 = make__216135380();
         src8 = make__216135360();
         src9 = make__216135340();
         src10 = make__216135300();
         src11 = make__216135280();
         src12 = make__216135260();
         src13 = make__216135240();
         src14 = make__216135200();
         src15 = make__216135180();
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

Behavior __84448540;

Behavior make__84448540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __84448540 = behavior;
   behavior->owner = (Object)my__lut_58_8425_146152260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__158294140();

   return behavior;
}

Behavior __216113680;

Behavior make__216113680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __216113680 = behavior;
   behavior->owner = (Object)my__lut_58_8425_146152260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[lut_166174760_my__lut_58_8425_146152260_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__216115060();

   return behavior;
}

Scope makemy__lut_58_8425_146152260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_8425_146152260 = scope;
   scope->owner = (Object)my__lut_58_84250_84467400;
   scope->name = "my_lut:T25";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_166174760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__84448540();
   scope->behaviors[1] = make__216113680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_84250_84467400() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_84250_84467400 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T250";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_85005940();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_86361420();
   systemT->outputs[1] = makenext__data_88062360();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_8425_146152260();

   return systemT;
}