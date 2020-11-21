#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8430_63696780;

SignalI address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeaddress_63822380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_8430_63696780;
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

SignalI base_63948820_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makebase_63948820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_63948820_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_8430_63696780;
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

SignalI next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makenext__data_64367100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_8430_63696780;
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

Block __57460220;

Block __63107780;

void code__63107780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(make__79130760());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63107780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63107780 = block;
   block->owner = (Object)__57460220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63107780;

   return block;
};

Block __57459880;

Block __62472820;

void code__62472820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__62472820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62472820 = block;
   block->owner = (Object)__57459880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62472820;

   return block;
};

Block __57459160;

void code__57459160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79129500();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__57459160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57459160 = block;
   block->owner = (Object)__57459880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57459160;

   return block;
};

void code__57459880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__79130280();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__79129960();
                     src1 = make__79129940();
                     src2 = make__79129920();
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
    code__62472820();
   }
   else {
  code__57459160();
   }
      }
   }
}

Block make__57459880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57459880 = block;
   block->owner = (Object)__57460220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57459880;

   return block;
};

void code__57460220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79130880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63107780();
   }
   else {
  code__57459880();
   }
      }
   }
}

Block make__57460220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57460220 = block;
   block->owner = (Object)__63697440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57460220;

   return block;
};

Block __79134440;

void code__79134440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_63948820_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79134440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79134440 = block;
   block->owner = (Object)__79133400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79134440;

   return block;
};

Value make__79131480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131460() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131320() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131300() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131280() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131260() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131240() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131200() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131180() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79131160() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79130880() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79130760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79130280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79129960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79129940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79129920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79129500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_843_59757980;

SignalI lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelut_55963140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_843_59757980;
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
         src0 = make__79131480();
         src1 = make__79131460();
         src2 = make__79131440();
         src3 = make__79131420();
         src4 = make__79131400();
         src5 = make__79131380();
         src6 = make__79131360();
         src7 = make__79131340();
         src8 = make__79131320();
         src9 = make__79131300();
         src10 = make__79131280();
         src11 = make__79131260();
         src12 = make__79131240();
         src13 = make__79131200();
         src14 = make__79131180();
         src15 = make__79131160();
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

Behavior __63697440;

Behavior make__63697440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63697440 = behavior;
   behavior->owner = (Object)my__lut_58_843_59757980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__57460220();

   return behavior;
}

Behavior __79133400;

Behavior make__79133400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79133400 = behavior;
   behavior->owner = (Object)my__lut_58_843_59757980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[lut_55963140_my__lut_58_843_59757980_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79134440();

   return behavior;
}

Scope makemy__lut_58_843_59757980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_843_59757980 = scope;
   scope->owner = (Object)my__lut_58_8430_63696780;
   scope->name = "my_lut:T3";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_55963140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63697440();
   scope->behaviors[1] = make__79133400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8430_63696780() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8430_63696780 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T30";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_63822380();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_63948820();
   systemT->outputs[1] = makenext__data_64367100();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_843_59757980();

   return systemT;
}