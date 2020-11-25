#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_51808680;

SignalI address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeaddress_51828380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8400_51808680;
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

SignalI base_53704260_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makebase_53704260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53704260_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8400_51808680;
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

SignalI next__data_53830500_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makenext__data_53830500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53830500_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8400_51808680;
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

Block __42147880;

Block __51066100;

void code__51066100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(make__75989980());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53830500_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__51066100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51066100 = block;
   block->owner = (Object)__42147880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51066100;

   return block;
};

Block __42433420;

Block __50008980;

void code__50008980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53830500_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__50008980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50008980 = block;
   block->owner = (Object)__42433420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50008980;

   return block;
};

Block __42550420;

void code__42550420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76013340();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53830500_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__42550420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42550420 = block;
   block->owner = (Object)__42433420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42550420;

   return block;
};

void code__42433420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__75989540();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__75989260();
                     src1 = make__75989240();
                     src2 = make__75989220();
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
    code__50008980();
   }
   else {
  code__42550420();
   }
      }
   }
}

Block make__42433420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42433420 = block;
   block->owner = (Object)__42147880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42433420;

   return block;
};

void code__42147880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75990100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51066100();
   }
   else {
  code__42433420();
   }
      }
   }
}

Block make__42147880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42147880 = block;
   block->owner = (Object)__51809240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42147880;

   return block;
};

Block __75993700;

void code__75993700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_53704260_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75993700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75993700 = block;
   block->owner = (Object)__75992660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75993700;

   return block;
};

Value make__75990780() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990760() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990740() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990720() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990680() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990660() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990640() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990620() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990420() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75990100() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75989980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75989540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75989260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75989240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75989220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76013340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_56097540;

SignalI lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelut_56763180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_840_56097540;
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
         src0 = make__75990780();
         src1 = make__75990760();
         src2 = make__75990740();
         src3 = make__75990720();
         src4 = make__75990680();
         src5 = make__75990660();
         src6 = make__75990640();
         src7 = make__75990620();
         src8 = make__75990580();
         src9 = make__75990560();
         src10 = make__75990540();
         src11 = make__75990520();
         src12 = make__75990500();
         src13 = make__75990480();
         src14 = make__75990460();
         src15 = make__75990420();
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

Behavior __51809240;

Behavior make__51809240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51809240 = behavior;
   behavior->owner = (Object)my__lut_58_840_56097540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__42147880();

   return behavior;
}

Behavior __75992660;

Behavior make__75992660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75992660 = behavior;
   behavior->owner = (Object)my__lut_58_840_56097540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[address_51828380_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[lut_56763180_my__lut_58_840_56097540_my__lut_58_8400_51808680_func1_58_84_55483700_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75993700();

   return behavior;
}

Scope makemy__lut_58_840_56097540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_56097540 = scope;
   scope->owner = (Object)my__lut_58_8400_51808680;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_56763180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51809240();
   scope->behaviors[1] = make__75992660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_51808680() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_51808680 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_51828380();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_53704260();
   systemT->outputs[1] = makenext__data_53830500();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_56097540();

   return systemT;
}