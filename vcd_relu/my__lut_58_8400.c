#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_56160720;

SignalI address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeaddress_56158520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)my__lut_58_8400_56160720;
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

SignalI base_56271140_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makebase_56271140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56271140_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)my__lut_58_8400_56160720;
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

SignalI next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makenext__data_56441200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)my__lut_58_8400_56160720;
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

Block __50382780;

Block __55497720;

void code__55497720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            idx = value2integer(make__56698380());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__55497720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55497720 = block;
   block->owner = (Object)__50382780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55497720;

   return block;
};

Block __50382580;

Block __51224360;

void code__51224360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            idx = value2integer(address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__51224360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51224360 = block;
   block->owner = (Object)__50382580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51224360;

   return block;
};

Block __50382280;

void code__50382280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__56770200();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__50382280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50382280 = block;
   block->owner = (Object)__50382580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50382280;

   return block;
};

void code__50382580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__56697680();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__56697220();
                     src1 = make__56697200();
                     src2 = make__56697180();
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
    code__51224360();
   }
   else {
  code__50382280();
   }
      }
   }
}

Block make__50382580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50382580 = block;
   block->owner = (Object)__50382780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50382580;

   return block;
};

void code__50382780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56698600();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55497720();
   }
   else {
  code__50382580();
   }
      }
   }
}

Block make__50382780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50382780 = block;
   block->owner = (Object)__56161040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50382780;

   return block;
};

Block __56673440;

void code__56673440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            idx = value2integer(address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_56271140_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56673440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56673440 = block;
   block->owner = (Object)__56704440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56673440;

   return block;
};

Value make__56699720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699700() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699680() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699660() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699640() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699620() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699580() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699500() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56699260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56698600() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56698380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56697680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56697220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56697200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56697180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56770200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_49440340;

SignalI lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makelut_49509500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)my__lut_58_840_49440340;
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
         src0 = make__56699720();
         src1 = make__56699700();
         src2 = make__56699680();
         src3 = make__56699660();
         src4 = make__56699640();
         src5 = make__56699620();
         src6 = make__56699580();
         src7 = make__56699500();
         src8 = make__56699480();
         src9 = make__56699460();
         src10 = make__56699440();
         src11 = make__56699400();
         src12 = make__56699380();
         src13 = make__56699360();
         src14 = make__56699300();
         src15 = make__56699260();
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

Behavior __56161040;

Behavior make__56161040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56161040 = behavior;
   behavior->owner = (Object)my__lut_58_840_49440340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__50382780();

   return behavior;
}

Behavior __56704440;

Behavior make__56704440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56704440 = behavior;
   behavior->owner = (Object)my__lut_58_840_49440340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[lut_49509500_my__lut_58_840_49440340_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56673440();

   return behavior;
}

Scope makemy__lut_58_840_49440340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_49440340 = scope;
   scope->owner = (Object)my__lut_58_8400_56160720;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_49509500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56161040();
   scope->behaviors[1] = make__56704440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_56160720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_56160720 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_56158520();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_56271140();
   systemT->outputs[1] = makenext__data_56441200();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_49440340();

   return systemT;
}