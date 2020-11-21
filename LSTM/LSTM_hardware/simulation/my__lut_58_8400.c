#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_55988400;

SignalI address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeaddress_55985360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_8400_55988400;
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

SignalI base_56325860_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makebase_56325860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56325860_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_8400_55988400;
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

SignalI next__data_56499740_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makenext__data_56499740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_56499740_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_8400_55988400;
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

Block __54163540;

Block __55371680;

void code__55371680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(make__77842320());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_56499740_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55371680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55371680 = block;
   block->owner = (Object)__54163540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55371680;

   return block;
};

Block __54163340;

Block __54917720;

void code__54917720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_56499740_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__54917720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54917720 = block;
   block->owner = (Object)__54163340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54917720;

   return block;
};

Block __54163020;

void code__54163020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77841140();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_56499740_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__54163020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54163020 = block;
   block->owner = (Object)__54163340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54163020;

   return block;
};

void code__54163340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__77841880();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__77841600();
                     src1 = make__77841580();
                     src2 = make__77841560();
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
    code__54917720();
   }
   else {
  code__54163020();
   }
      }
   }
}

Block make__54163340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54163340 = block;
   block->owner = (Object)__54163540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54163340;

   return block;
};

void code__54163540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77842440();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55371680();
   }
   else {
  code__54163340();
   }
      }
   }
}

Block make__54163540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54163540 = block;
   block->owner = (Object)__55988740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54163540;

   return block;
};

Block __77846260;

void code__77846260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_56325860_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77846260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77846260 = block;
   block->owner = (Object)__77845220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77846260;

   return block;
};

Value make__77843120() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77843100() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77843080() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77843060() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77843020() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77843000() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77842980() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77842960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77842920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77842900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77842880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77842860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77842840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77842820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77842800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77842760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77842440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77842320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77841880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77841600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77841580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77841560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77841140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_50844420;

SignalI lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelut_51698220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_840_50844420;
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
         src0 = make__77843120();
         src1 = make__77843100();
         src2 = make__77843080();
         src3 = make__77843060();
         src4 = make__77843020();
         src5 = make__77843000();
         src6 = make__77842980();
         src7 = make__77842960();
         src8 = make__77842920();
         src9 = make__77842900();
         src10 = make__77842880();
         src11 = make__77842860();
         src12 = make__77842840();
         src13 = make__77842820();
         src14 = make__77842800();
         src15 = make__77842760();
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

Behavior __55988740;

Behavior make__55988740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55988740 = behavior;
   behavior->owner = (Object)my__lut_58_840_50844420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__54163540();

   return behavior;
}

Behavior __77845220;

Behavior make__77845220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77845220 = behavior;
   behavior->owner = (Object)my__lut_58_840_50844420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[address_55985360_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[lut_51698220_my__lut_58_840_50844420_my__lut_58_8400_55988400_func1_58_84_47900280_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77846260();

   return behavior;
}

Scope makemy__lut_58_840_50844420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_50844420 = scope;
   scope->owner = (Object)my__lut_58_8400_55988400;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_51698220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55988740();
   scope->behaviors[1] = make__77845220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_55988400() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_55988400 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_55985360();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_56325860();
   systemT->outputs[1] = makenext__data_56499740();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_50844420();

   return systemT;
}