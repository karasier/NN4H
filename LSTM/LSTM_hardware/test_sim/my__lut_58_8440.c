#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8440_77989020;

SignalI address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeaddress_78077180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8440_77989020;
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

SignalI base_78123520_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makebase_78123520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_78123520_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8440_77989020;
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

SignalI next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makenext__data_78243620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8440_77989020;
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

Block __76986180;

Block __77793560;

void code__77793560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(make__77829960());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77793560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77793560 = block;
   block->owner = (Object)__76986180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77793560;

   return block;
};

Block __76986020;

Block __77401280;

void code__77401280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77401280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77401280 = block;
   block->owner = (Object)__76986020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77401280;

   return block;
};

Block __76985860;

void code__76985860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77828720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76985860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76985860 = block;
   block->owner = (Object)__76986020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76985860;

   return block;
};

void code__76986020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__77829460();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__77829200();
                     src1 = make__77829180();
                     src2 = make__77829160();
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
    code__77401280();
   }
   else {
  code__76985860();
   }
      }
   }
}

Block make__76986020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76986020 = block;
   block->owner = (Object)__76986180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76986020;

   return block;
};

void code__76986180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77830100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__77793560();
   }
   else {
  code__76986020();
   }
      }
   }
}

Block make__76986180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76986180 = block;
   block->owner = (Object)__77989340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76986180;

   return block;
};

Block __77809080;

void code__77809080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_78123520_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77809080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77809080 = block;
   block->owner = (Object)__77808080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77809080;

   return block;
};

Value make__77830700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830680() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830660() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830640() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830620() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830600() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830580() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830560() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830540() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830520() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830500() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830480() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830460() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830440() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830420() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830400() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77830100() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77829960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77829460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77829200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77829180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77829160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77828720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_844_54757480;

SignalI lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelut_76642680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_844_54757480;
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
         src0 = make__77830700();
         src1 = make__77830680();
         src2 = make__77830660();
         src3 = make__77830640();
         src4 = make__77830620();
         src5 = make__77830600();
         src6 = make__77830580();
         src7 = make__77830560();
         src8 = make__77830540();
         src9 = make__77830520();
         src10 = make__77830500();
         src11 = make__77830480();
         src12 = make__77830460();
         src13 = make__77830440();
         src14 = make__77830420();
         src15 = make__77830400();
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

Behavior __77989340;

Behavior make__77989340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77989340 = behavior;
   behavior->owner = (Object)my__lut_58_844_54757480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76986180();

   return behavior;
}

Behavior __77808080;

Behavior make__77808080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77808080 = behavior;
   behavior->owner = (Object)my__lut_58_844_54757480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[lut_76642680_my__lut_58_844_54757480_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77809080();

   return behavior;
}

Scope makemy__lut_58_844_54757480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_844_54757480 = scope;
   scope->owner = (Object)my__lut_58_8440_77989020;
   scope->name = "my_lut:T4";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_76642680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77989340();
   scope->behaviors[1] = make__77808080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8440_77989020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8440_77989020 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T40";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_78077180();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_78123520();
   systemT->outputs[1] = makenext__data_78243620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_844_54757480();

   return systemT;
}