#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8420_72250100;

SignalI address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeaddress_72248200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_8420_72250100;
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

SignalI base_72368300_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makebase_72368300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_72368300_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_8420_72250100;
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

SignalI next__data_72496560_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makenext__data_72496560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_72496560_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_8420_72250100;
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

Block __71124340;

Block __71858020;

void code__71858020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(make__73550400());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_72496560_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71858020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71858020 = block;
   block->owner = (Object)__71124340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71858020;

   return block;
};

Block __71124180;

Block __71523060;

void code__71523060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_72496560_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71523060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71523060 = block;
   block->owner = (Object)__71124180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71523060;

   return block;
};

Block __71124020;

void code__71124020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__73548700();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_72496560_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71124020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71124020 = block;
   block->owner = (Object)__71124180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71124020;

   return block;
};

void code__71124180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__73549860();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__73549400();
                     src1 = make__73549380();
                     src2 = make__73549340();
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
    code__71523060();
   }
   else {
  code__71124020();
   }
      }
   }
}

Block make__71124180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71124180 = block;
   block->owner = (Object)__71124340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71124180;

   return block;
};

void code__71124340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73550540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__71858020();
   }
   else {
  code__71124180();
   }
      }
   }
}

Block make__71124340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71124340 = block;
   block->owner = (Object)__72250420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71124340;

   return block;
};

Block __73555480;

void code__73555480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_72368300_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73555480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73555480 = block;
   block->owner = (Object)__73553620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73555480;

   return block;
};

Value make__73551180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73551160() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73551140() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73551120() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73551100() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73551080() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73551060() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73551040() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73551020() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73551000() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73550980() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73550960() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73550940() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73550900() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73550880() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73550840() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73550540() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73550400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73549860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73549400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73549380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73549340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73548700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_842_60533980;

SignalI lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelut_70862800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_842_60533980;
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
         src0 = make__73551180();
         src1 = make__73551160();
         src2 = make__73551140();
         src3 = make__73551120();
         src4 = make__73551100();
         src5 = make__73551080();
         src6 = make__73551060();
         src7 = make__73551040();
         src8 = make__73551020();
         src9 = make__73551000();
         src10 = make__73550980();
         src11 = make__73550960();
         src12 = make__73550940();
         src13 = make__73550900();
         src14 = make__73550880();
         src15 = make__73550840();
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

Behavior __72250420;

Behavior make__72250420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72250420 = behavior;
   behavior->owner = (Object)my__lut_58_842_60533980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71124340();

   return behavior;
}

Behavior __73553620;

Behavior make__73553620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73553620 = behavior;
   behavior->owner = (Object)my__lut_58_842_60533980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[address_72248200_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[lut_70862800_my__lut_58_842_60533980_my__lut_58_8420_72250100_func0_58_841_59350740_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73555480();

   return behavior;
}

Scope makemy__lut_58_842_60533980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_842_60533980 = scope;
   scope->owner = (Object)my__lut_58_8420_72250100;
   scope->name = "my_lut:T2";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_70862800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__72250420();
   scope->behaviors[1] = make__73553620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8420_72250100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8420_72250100 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_72248200();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_72368300();
   systemT->outputs[1] = makenext__data_72496560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_842_60533980();

   return systemT;
}