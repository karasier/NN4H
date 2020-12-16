#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8460_109400580;

SignalI address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makeaddress_109398280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_8460_109400580;
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

SignalI base_109675000_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makebase_109675000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_109675000_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_8460_109400580;
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

SignalI next__data_110132760_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makenext__data_110132760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_110132760_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_8460_109400580;
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

Block __106611760;

Block __108362180;

void code__108362180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(make__192369260());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_110132760_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__108362180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108362180 = block;
   block->owner = (Object)__106611760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108362180;

   return block;
};

Block __106611540;

Block __107490820;

void code__107490820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_110132760_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__107490820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107490820 = block;
   block->owner = (Object)__106611540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107490820;

   return block;
};

Block __106611280;

void code__106611280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__192367520();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_110132760_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__106611280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __106611280 = block;
   block->owner = (Object)__106611540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__106611280;

   return block;
};

void code__106611540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__192368620();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__192368260();
                     src1 = make__192368240();
                     src2 = make__192368180();
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
    code__107490820();
   }
   else {
  code__106611280();
   }
      }
   }
}

Block make__106611540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __106611540 = block;
   block->owner = (Object)__106611760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__106611540;

   return block;
};

void code__106611760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__192369420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__108362180();
   }
   else {
  code__106611540();
   }
      }
   }
}

Block make__106611760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __106611760 = block;
   block->owner = (Object)__109400900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__106611760;

   return block;
};

Block __203590000;

void code__203590000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_109675000_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__203590000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __203590000 = block;
   block->owner = (Object)__203588100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__203590000;

   return block;
};

Value make__192370360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192370320() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192370300() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192370220() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192370160() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192370140() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192370120() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192370080() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192370060() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192370040() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192370020() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192369960() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192369940() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192369920() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192369900() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192369840() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__192369420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__192369260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__192368620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__192368260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__192368240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__192368180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__192367520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_846_55932640;

SignalI lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makelut_105652540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_846_55932640;
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
         src0 = make__192370360();
         src1 = make__192370320();
         src2 = make__192370300();
         src3 = make__192370220();
         src4 = make__192370160();
         src5 = make__192370140();
         src6 = make__192370120();
         src7 = make__192370080();
         src8 = make__192370060();
         src9 = make__192370040();
         src10 = make__192370020();
         src11 = make__192369960();
         src12 = make__192369940();
         src13 = make__192369920();
         src14 = make__192369900();
         src15 = make__192369840();
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

Behavior __109400900;

Behavior make__109400900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __109400900 = behavior;
   behavior->owner = (Object)my__lut_58_846_55932640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__106611760();

   return behavior;
}

Behavior __203588100;

Behavior make__203588100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __203588100 = behavior;
   behavior->owner = (Object)my__lut_58_846_55932640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[address_109398280_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[lut_105652540_my__lut_58_846_55932640_my__lut_58_8460_109400580_func5_58_84_121415080_func5_58_843_120984280_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__203590000();

   return behavior;
}

Scope makemy__lut_58_846_55932640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_846_55932640 = scope;
   scope->owner = (Object)my__lut_58_8460_109400580;
   scope->name = "my_lut:T6";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_105652540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__109400900();
   scope->behaviors[1] = make__203588100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8460_109400580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8460_109400580 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T60";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_109398280();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_109675000();
   systemT->outputs[1] = makenext__data_110132760();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_846_55932640();

   return systemT;
}