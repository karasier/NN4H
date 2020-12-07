#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8430_65485060;

SignalI address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeaddress_65482060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_8430_65485060;
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

SignalI base_65662040_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makebase_65662040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_65662040_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_8430_65485060;
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

SignalI next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makenext__data_65891260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_8430_65485060;
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

Block __63388140;

Block __64681500;

void code__64681500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(make__79693820());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__64681500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64681500 = block;
   block->owner = (Object)__63388140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64681500;

   return block;
};

Block __63387840;

Block __64032880;

void code__64032880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__64032880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64032880 = block;
   block->owner = (Object)__63387840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64032880;

   return block;
};

Block __63387660;

void code__63387660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79692540();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__63387660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63387660 = block;
   block->owner = (Object)__63387840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63387660;

   return block;
};

void code__63387840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__79693360();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__79693060();
                     src1 = make__79693040();
                     src2 = make__79693020();
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
    code__64032880();
   }
   else {
  code__63387660();
   }
      }
   }
}

Block make__63387840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63387840 = block;
   block->owner = (Object)__63388140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63387840;

   return block;
};

void code__63388140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79693940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64681500();
   }
   else {
  code__63387840();
   }
      }
   }
}

Block make__63388140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63388140 = block;
   block->owner = (Object)__65485600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63388140;

   return block;
};

Block __79697760;

void code__79697760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_65662040_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79697760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79697760 = block;
   block->owner = (Object)__79696580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79697760;

   return block;
};

Value make__79694600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694580() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694560() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694380() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694360() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694340() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694320() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694300() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694280() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694260() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79694240() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79693940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79693820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79693360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79693060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79693040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79693020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79692540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_843_63432260;

SignalI lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelut_62678540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_843_63432260;
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
         src0 = make__79694600();
         src1 = make__79694580();
         src2 = make__79694560();
         src3 = make__79694520();
         src4 = make__79694500();
         src5 = make__79694440();
         src6 = make__79694420();
         src7 = make__79694400();
         src8 = make__79694380();
         src9 = make__79694360();
         src10 = make__79694340();
         src11 = make__79694320();
         src12 = make__79694300();
         src13 = make__79694280();
         src14 = make__79694260();
         src15 = make__79694240();
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

Behavior __65485600;

Behavior make__65485600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65485600 = behavior;
   behavior->owner = (Object)my__lut_58_843_63432260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__63388140();

   return behavior;
}

Behavior __79696580;

Behavior make__79696580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79696580 = behavior;
   behavior->owner = (Object)my__lut_58_843_63432260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[lut_62678540_my__lut_58_843_63432260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79697760();

   return behavior;
}

Scope makemy__lut_58_843_63432260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_843_63432260 = scope;
   scope->owner = (Object)my__lut_58_8430_65485060;
   scope->name = "my_lut:T3";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_62678540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65485600();
   scope->behaviors[1] = make__79696580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8430_65485060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8430_65485060 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T30";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_65482060();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_65662040();
   systemT->outputs[1] = makenext__data_65891260();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_843_63432260();

   return systemT;
}