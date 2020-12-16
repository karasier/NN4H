#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_84190_142822840;

SignalI address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeaddress_142820220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84190_142822840;
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

SignalI base_142969380_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makebase_142969380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_142969380_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84190_142822840;
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

SignalI next__data_143069360_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makenext__data_143069360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_143069360_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84190_142822840;
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

Block __141404240;

Block __142504320;

void code__142504320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(make__209376140());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_143069360_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__142504320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __142504320 = block;
   block->owner = (Object)__141404240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__142504320;

   return block;
};

Block __141404060;

Block __141949800;

void code__141949800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_143069360_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__141949800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __141949800 = block;
   block->owner = (Object)__141404060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__141949800;

   return block;
};

Block __141403840;

void code__141403840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__209374580();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_143069360_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__141403840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __141403840 = block;
   block->owner = (Object)__141404060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__141403840;

   return block;
};

void code__141404060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__209375480();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__209375100();
                     src1 = make__209375080();
                     src2 = make__209375060();
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
    code__141949800();
   }
   else {
  code__141403840();
   }
      }
   }
}

Block make__141404060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __141404060 = block;
   block->owner = (Object)__141404240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__141404060;

   return block;
};

void code__141404240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209376400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__142504320();
   }
   else {
  code__141404060();
   }
      }
   }
}

Block make__141404240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __141404240 = block;
   block->owner = (Object)__142823380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__141404240;

   return block;
};

Block __209356920;

void code__209356920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_142969380_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__209356920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __209356920 = block;
   block->owner = (Object)__209355600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__209356920;

   return block;
};

Value make__209377320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377300() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377280() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377160() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377140() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377120() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377100() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377080() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377060() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377040() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209377000() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209376400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209376140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209375480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__209375100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__209375080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__209375060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__209374580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_8419_110802900;

SignalI lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makelut_140842420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_8419_110802900;
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
         src0 = make__209377320();
         src1 = make__209377300();
         src2 = make__209377280();
         src3 = make__209377260();
         src4 = make__209377240();
         src5 = make__209377220();
         src6 = make__209377200();
         src7 = make__209377180();
         src8 = make__209377160();
         src9 = make__209377140();
         src10 = make__209377120();
         src11 = make__209377100();
         src12 = make__209377080();
         src13 = make__209377060();
         src14 = make__209377040();
         src15 = make__209377000();
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

Behavior __142823380;

Behavior make__142823380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __142823380 = behavior;
   behavior->owner = (Object)my__lut_58_8419_110802900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__141404240();

   return behavior;
}

Behavior __209355600;

Behavior make__209355600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __209355600 = behavior;
   behavior->owner = (Object)my__lut_58_8419_110802900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[address_142820220_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[lut_140842420_my__lut_58_8419_110802900_my__lut_58_84190_142822840_func0_58_843_108974920_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__209356920();

   return behavior;
}

Scope makemy__lut_58_8419_110802900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_8419_110802900 = scope;
   scope->owner = (Object)my__lut_58_84190_142822840;
   scope->name = "my_lut:T19";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_140842420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__142823380();
   scope->behaviors[1] = make__209355600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_84190_142822840() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_84190_142822840 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T190";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_142820220();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_142969380();
   systemT->outputs[1] = makenext__data_143069360();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_8419_110802900();

   return systemT;
}