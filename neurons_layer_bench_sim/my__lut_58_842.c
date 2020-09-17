#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_51688180;

SignalI address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeaddress_51685660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)my__lut_58_842_51688180;
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

SignalI base_51839660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makebase_51839660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51839660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)my__lut_58_842_51688180;
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

SignalI next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makenext__data_52001880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)my__lut_58_842_51688180;
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

Block __46905260;

Block __49498200;

void code__49498200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
            idx = value2integer(make__60999840());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49498200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49498200 = block;
   block->owner = (Object)__46905260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49498200;

   return block;
};

Block __46904420;

Block __48981120;

void code__48981120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
            idx = value2integer(address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__48981120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48981120 = block;
   block->owner = (Object)__46904420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48981120;

   return block;
};

Block __46904100;

void code__46904100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__60998360();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__46904100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46904100 = block;
   block->owner = (Object)__46904420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46904100;

   return block;
};

void code__46904420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__60999080();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__60998820();
                     src1 = make__60998800();
                     src2 = make__60998780();
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
    code__48981120();
   }
   else {
  code__46904100();
   }
      }
   }
}

Block make__46904420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46904420 = block;
   block->owner = (Object)__46905260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46904420;

   return block;
};

void code__46905260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60999960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49498200();
   }
   else {
  code__46904420();
   }
      }
   }
}

Block make__46905260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46905260 = block;
   block->owner = (Object)__51688500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46905260;

   return block;
};

Block __61003560;

void code__61003560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
            idx = value2integer(address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_51839660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61003560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61003560 = block;
   block->owner = (Object)__61002580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61003560;

   return block;
};

Value make__61000580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000560() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000540() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000460() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000420() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000400() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000380() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000360() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000340() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000320() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000300() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61000280() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60999960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60999840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60999080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60998820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60998800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60998780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60998360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_53067860;

SignalI lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makelut_53917780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)my__lut_58_84_53067860;
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
         src0 = make__61000580();
         src1 = make__61000560();
         src2 = make__61000540();
         src3 = make__61000520();
         src4 = make__61000500();
         src5 = make__61000480();
         src6 = make__61000460();
         src7 = make__61000440();
         src8 = make__61000420();
         src9 = make__61000400();
         src10 = make__61000380();
         src11 = make__61000360();
         src12 = make__61000340();
         src13 = make__61000320();
         src14 = make__61000300();
         src15 = make__61000280();
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

Behavior __51688500;

Behavior make__51688500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51688500 = behavior;
   behavior->owner = (Object)my__lut_58_84_53067860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__46905260();

   return behavior;
}

Behavior __61002580;

Behavior make__61002580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61002580 = behavior;
   behavior->owner = (Object)my__lut_58_84_53067860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[lut_53917780_my__lut_58_84_53067860_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61003560();

   return behavior;
}

Scope makemy__lut_58_84_53067860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_53067860 = scope;
   scope->owner = (Object)my__lut_58_842_51688180;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_53917780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51688500();
   scope->behaviors[1] = make__61002580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_51688180() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_51688180 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_51685660();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_51839660();
   systemT->outputs[1] = makenext__data_52001880();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_53067860();

   return systemT;
}