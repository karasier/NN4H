#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8410_55245300;

SignalI address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeaddress_55243280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_8410_55245300;
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

SignalI base_50494620_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makebase_50494620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50494620_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_8410_55245300;
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

SignalI next__data_59681460_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makenext__data_59681460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_59681460_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_8410_55245300;
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

Block __54939180;

Block __56665860;

void code__56665860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(make__78107760());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_59681460_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__56665860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56665860 = block;
   block->owner = (Object)__54939180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56665860;

   return block;
};

Block __54938860;

Block __55630400;

void code__55630400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_59681460_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55630400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55630400 = block;
   block->owner = (Object)__54938860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55630400;

   return block;
};

Block __54938320;

void code__54938320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78106220();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_59681460_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__54938320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54938320 = block;
   block->owner = (Object)__54938860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54938320;

   return block;
};

void code__54938860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__78107320();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__78107020();
                     src1 = make__78107000();
                     src2 = make__78106980();
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
    code__55630400();
   }
   else {
  code__54938320();
   }
      }
   }
}

Block make__54938860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54938860 = block;
   block->owner = (Object)__54939180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54938860;

   return block;
};

void code__54939180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78107880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56665860();
   }
   else {
  code__54938860();
   }
      }
   }
}

Block make__54939180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54939180 = block;
   block->owner = (Object)__55245620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54939180;

   return block;
};

Block __78086940;

void code__78086940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_50494620_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78086940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78086940 = block;
   block->owner = (Object)__78110400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78086940;

   return block;
};

Value make__78108480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108460() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108440() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108420() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108400() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108380() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108360() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108340() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108320() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108300() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108280() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108260() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108240() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108220() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108200() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78108180() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78107880() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78107760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78107320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78107020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78107000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78106980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78106220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_841_63871580;

SignalI lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelut_53916100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_841_63871580;
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
         src0 = make__78108480();
         src1 = make__78108460();
         src2 = make__78108440();
         src3 = make__78108420();
         src4 = make__78108400();
         src5 = make__78108380();
         src6 = make__78108360();
         src7 = make__78108340();
         src8 = make__78108320();
         src9 = make__78108300();
         src10 = make__78108280();
         src11 = make__78108260();
         src12 = make__78108240();
         src13 = make__78108220();
         src14 = make__78108200();
         src15 = make__78108180();
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

Behavior __55245620;

Behavior make__55245620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55245620 = behavior;
   behavior->owner = (Object)my__lut_58_841_63871580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__54939180();

   return behavior;
}

Behavior __78110400;

Behavior make__78110400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78110400 = behavior;
   behavior->owner = (Object)my__lut_58_841_63871580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[address_55243280_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[lut_53916100_my__lut_58_841_63871580_my__lut_58_8410_55245300_func0_58_840_63457500_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78086940();

   return behavior;
}

Scope makemy__lut_58_841_63871580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_841_63871580 = scope;
   scope->owner = (Object)my__lut_58_8410_55245300;
   scope->name = "my_lut:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_53916100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55245620();
   scope->behaviors[1] = make__78110400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8410_55245300() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8410_55245300 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_55243280();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_50494620();
   systemT->outputs[1] = makenext__data_59681460();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_841_63871580();

   return systemT;
}