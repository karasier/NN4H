#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8420_51367720;

SignalI address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeaddress_51385760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8420_51367720;
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

SignalI base_53667000_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makebase_53667000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53667000_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8420_51367720;
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

SignalI next__data_54123760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makenext__data_54123760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54123760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8420_51367720;
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

Block __65713440;

Block __49103220;

void code__49103220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(make__77369880());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_54123760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__49103220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49103220 = block;
   block->owner = (Object)__65713440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49103220;

   return block;
};

Block __65713240;

Block __66309420;

void code__66309420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_54123760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__66309420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66309420 = block;
   block->owner = (Object)__65713240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66309420;

   return block;
};

Block __65713060;

void code__65713060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77368600();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_54123760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65713060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65713060 = block;
   block->owner = (Object)__65713240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65713060;

   return block;
};

void code__65713240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__77369420();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__77369160();
                     src1 = make__77369140();
                     src2 = make__77369120();
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
    code__66309420();
   }
   else {
  code__65713060();
   }
      }
   }
}

Block make__65713240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65713240 = block;
   block->owner = (Object)__65713440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65713240;

   return block;
};

void code__65713440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77370000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49103220();
   }
   else {
  code__65713240();
   }
      }
   }
}

Block make__65713440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65713440 = block;
   block->owner = (Object)__51368460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65713440;

   return block;
};

Block __77349040;

void code__77349040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_53667000_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77349040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77349040 = block;
   block->owner = (Object)__77372500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77349040;

   return block;
};

Value make__77370580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370560() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370540() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370460() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370420() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370400() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370380() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370360() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370340() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370320() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370300() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370280() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77370000() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77369880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77369420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77369160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77369140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77369120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77368600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_842_50302980;

SignalI lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelut_65290860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_842_50302980;
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
         src0 = make__77370580();
         src1 = make__77370560();
         src2 = make__77370540();
         src3 = make__77370520();
         src4 = make__77370500();
         src5 = make__77370480();
         src6 = make__77370460();
         src7 = make__77370440();
         src8 = make__77370420();
         src9 = make__77370400();
         src10 = make__77370380();
         src11 = make__77370360();
         src12 = make__77370340();
         src13 = make__77370320();
         src14 = make__77370300();
         src15 = make__77370280();
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

Behavior __51368460;

Behavior make__51368460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51368460 = behavior;
   behavior->owner = (Object)my__lut_58_842_50302980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__65713440();

   return behavior;
}

Behavior __77372500;

Behavior make__77372500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77372500 = behavior;
   behavior->owner = (Object)my__lut_58_842_50302980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[address_51385760_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[lut_65290860_my__lut_58_842_50302980_my__lut_58_8420_51367720_func0_58_841_66357220_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77349040();

   return behavior;
}

Scope makemy__lut_58_842_50302980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_842_50302980 = scope;
   scope->owner = (Object)my__lut_58_8420_51367720;
   scope->name = "my_lut:T2";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_65290860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51368460();
   scope->behaviors[1] = make__77372500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8420_51367720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8420_51367720 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_51385760();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_53667000();
   systemT->outputs[1] = makenext__data_54123760();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_842_50302980();

   return systemT;
}