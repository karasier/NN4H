#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_49272420;

SignalI address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeaddress_49287460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)my__lut_58_842_49272420;
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

SignalI base_49536260_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makebase_49536260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49536260_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)my__lut_58_842_49272420;
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

SignalI next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makenext__data_49648620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)my__lut_58_842_49272420;
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

Block __53784560;

Block __47777700;

void code__47777700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
            idx = value2integer(make__60184500());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47777700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47777700 = block;
   block->owner = (Object)__53784560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47777700;

   return block;
};

Block __53784380;

Block __54241440;

void code__54241440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
            idx = value2integer(address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__54241440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54241440 = block;
   block->owner = (Object)__53784380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54241440;

   return block;
};

Block __53784200;

void code__53784200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__60183240();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53784200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53784200 = block;
   block->owner = (Object)__53784380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53784200;

   return block;
};

void code__53784380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__60184060();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__60183780();
                     src1 = make__60183740();
                     src2 = make__60183720();
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
    code__54241440();
   }
   else {
  code__53784200();
   }
      }
   }
}

Block make__53784380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53784380 = block;
   block->owner = (Object)__53784560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53784380;

   return block;
};

void code__53784560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60184620();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47777700();
   }
   else {
  code__53784380();
   }
      }
   }
}

Block make__53784560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53784560 = block;
   block->owner = (Object)__49274140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53784560;

   return block;
};

Block __60163840;

void code__60163840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
            idx = value2integer(address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_49536260_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60163840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60163840 = block;
   block->owner = (Object)__60162760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60163840;

   return block;
};

Value make__60185300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185280() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185140() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185120() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185100() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185060() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185040() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185020() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60185000() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60184960() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60184620() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60184500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60184060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60183780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60183740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60183720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60183240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_52753000;

SignalI lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makelut_53294640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)my__lut_58_84_52753000;
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
         src0 = make__60185300();
         src1 = make__60185280();
         src2 = make__60185260();
         src3 = make__60185240();
         src4 = make__60185220();
         src5 = make__60185200();
         src6 = make__60185180();
         src7 = make__60185160();
         src8 = make__60185140();
         src9 = make__60185120();
         src10 = make__60185100();
         src11 = make__60185060();
         src12 = make__60185040();
         src13 = make__60185020();
         src14 = make__60185000();
         src15 = make__60184960();
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

Behavior __49274140;

Behavior make__49274140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49274140 = behavior;
   behavior->owner = (Object)my__lut_58_84_52753000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__53784560();

   return behavior;
}

Behavior __60162760;

Behavior make__60162760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60162760 = behavior;
   behavior->owner = (Object)my__lut_58_84_52753000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[lut_53294640_my__lut_58_84_52753000_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60163840();

   return behavior;
}

Scope makemy__lut_58_84_52753000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_52753000 = scope;
   scope->owner = (Object)my__lut_58_842_49272420;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_53294640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49274140();
   scope->behaviors[1] = make__60162760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_49272420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_49272420 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_49287460();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_49536260();
   systemT->outputs[1] = makenext__data_49648620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_52753000();

   return systemT;
}