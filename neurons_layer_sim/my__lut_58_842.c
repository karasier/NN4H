#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_52679380;

SignalI address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeaddress_52677080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)my__lut_58_842_52679380;
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

SignalI base_52798400_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makebase_52798400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52798400_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)my__lut_58_842_52679380;
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

SignalI next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makenext__data_52911480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)my__lut_58_842_52679380;
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

Block __49620580;

Block __52162120;

void code__52162120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            idx = value2integer(make__61702740());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52162120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52162120 = block;
   block->owner = (Object)__49620580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52162120;

   return block;
};

Block __49620240;

Block __51777560;

void code__51777560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            idx = value2integer(address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__51777560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51777560 = block;
   block->owner = (Object)__49620240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51777560;

   return block;
};

Block __49618960;

void code__49618960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__61725960();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__49618960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49618960 = block;
   block->owner = (Object)__49620240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49618960;

   return block;
};

void code__49620240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__61702240();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__61726460();
                     src1 = make__61726400();
                     src2 = make__61726380();
                     concat_value(3,1,dst,src0,src1,src2);
                     set_value_pos(pool_state);
                  dst; });
               concat_value(2,1,dst,src0,src1);
               set_value_pos(pool_state);
            dst; });
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51777560();
   }
   else {
  code__49618960();
   }
      }
   }
}

Block make__49620240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49620240 = block;
   block->owner = (Object)__49620580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49620240;

   return block;
};

void code__49620580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61702880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52162120();
   }
   else {
  code__49620240();
   }
      }
   }
}

Block make__49620580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49620580 = block;
   block->owner = (Object)__52679700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49620580;

   return block;
};

Block __61706560;

void code__61706560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            idx = value2integer(address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_52798400_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61706560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61706560 = block;
   block->owner = (Object)__61705480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61706560;

   return block;
};

Value make__61703480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703460() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703320() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703300() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703280() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703260() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703240() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703220() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703200() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61703180() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61702880() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61702740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61702240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61726460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61726400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61726380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61725960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_54245320;

SignalI lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makelut_49112280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)my__lut_58_84_54245320;
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
         src0 = make__61703480();
         src1 = make__61703460();
         src2 = make__61703440();
         src3 = make__61703420();
         src4 = make__61703400();
         src5 = make__61703380();
         src6 = make__61703360();
         src7 = make__61703340();
         src8 = make__61703320();
         src9 = make__61703300();
         src10 = make__61703280();
         src11 = make__61703260();
         src12 = make__61703240();
         src13 = make__61703220();
         src14 = make__61703200();
         src15 = make__61703180();
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

Behavior __52679700;

Behavior make__52679700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52679700 = behavior;
   behavior->owner = (Object)my__lut_58_84_54245320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__49620580();

   return behavior;
}

Behavior __61705480;

Behavior make__61705480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61705480 = behavior;
   behavior->owner = (Object)my__lut_58_84_54245320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[lut_49112280_my__lut_58_84_54245320_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61706560();

   return behavior;
}

Scope makemy__lut_58_84_54245320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_54245320 = scope;
   scope->owner = (Object)my__lut_58_842_52679380;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_49112280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52679700();
   scope->behaviors[1] = make__61705480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_52679380() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_52679380 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_52677080();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_52798400();
   systemT->outputs[1] = makenext__data_52911480();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_54245320();

   return systemT;
}