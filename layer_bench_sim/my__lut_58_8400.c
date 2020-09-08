#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_49561640;

SignalI address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeaddress_49579740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)my__lut_58_8400_49561640;
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

SignalI base_51570020_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makebase_51570020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51570020_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)my__lut_58_8400_49561640;
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

SignalI next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makenext__data_51760480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)my__lut_58_8400_49561640;
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

Block __53448720;

Block __48752380;

void code__48752380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            idx = value2integer(make__44909020());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48752380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48752380 = block;
   block->owner = (Object)__53448720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48752380;

   return block;
};

Block __53448240;

Block __41926020;

void code__41926020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            idx = value2integer(address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__41926020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __41926020 = block;
   block->owner = (Object)__53448240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__41926020;

   return block;
};

Block __53448020;

void code__53448020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__45220100();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__53448020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53448020 = block;
   block->owner = (Object)__53448240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53448020;

   return block;
};

void code__53448240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__45066920();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__45087680();
                     src1 = make__45087540();
                     src2 = make__45087120();
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
    code__41926020();
   }
   else {
  code__53448020();
   }
      }
   }
}

Block make__53448240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53448240 = block;
   block->owner = (Object)__53448720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53448240;

   return block;
};

void code__53448720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__44899300();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48752380();
   }
   else {
  code__53448240();
   }
      }
   }
}

Block make__53448720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53448720 = block;
   block->owner = (Object)__49562340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53448720;

   return block;
};

Block __41865680;

void code__41865680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            idx = value2integer(address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_51570020_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__41865680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __41865680 = block;
   block->owner = (Object)__41198480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__41865680;

   return block;
};

Value make__43256600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43256200() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43254760() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43254720() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43253780() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43277520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43277280() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43277140() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43274040() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43272600() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43270640() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43357300() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43356400() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43948480() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43946100() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43945900() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__44899300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44909020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45066920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45087680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45087540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45087120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45220100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_48757000;

SignalI lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelut_52769060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)my__lut_58_840_48757000;
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
         src0 = make__43256600();
         src1 = make__43256200();
         src2 = make__43254760();
         src3 = make__43254720();
         src4 = make__43253780();
         src5 = make__43277520();
         src6 = make__43277280();
         src7 = make__43277140();
         src8 = make__43274040();
         src9 = make__43272600();
         src10 = make__43270640();
         src11 = make__43357300();
         src12 = make__43356400();
         src13 = make__43948480();
         src14 = make__43946100();
         src15 = make__43945900();
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

Behavior __49562340;

Behavior make__49562340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49562340 = behavior;
   behavior->owner = (Object)my__lut_58_840_48757000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__53448720();

   return behavior;
}

Behavior __41198480;

Behavior make__41198480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __41198480 = behavior;
   behavior->owner = (Object)my__lut_58_840_48757000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[lut_52769060_my__lut_58_840_48757000_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__41865680();

   return behavior;
}

Scope makemy__lut_58_840_48757000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_48757000 = scope;
   scope->owner = (Object)my__lut_58_8400_49561640;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_52769060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49562340();
   scope->behaviors[1] = make__41198480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_49561640() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_49561640 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_49579740();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_51570020();
   systemT->outputs[1] = makenext__data_51760480();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_48757000();

   return systemT;
}