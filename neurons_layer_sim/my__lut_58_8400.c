#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_47108660;

SignalI address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeaddress_47126780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)my__lut_58_8400_47108660;
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

SignalI base_47766840_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makebase_47766840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47766840_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)my__lut_58_8400_47108660;
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

SignalI next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makenext__data_48050680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)my__lut_58_8400_47108660;
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

Block __52620840;

Block __53727880;

void code__53727880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            idx = value2integer(make__61786460());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53727880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53727880 = block;
   block->owner = (Object)__52620840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53727880;

   return block;
};

Block __52620680;

Block __53181120;

void code__53181120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            idx = value2integer(address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53181120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53181120 = block;
   block->owner = (Object)__52620680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53181120;

   return block;
};

Block __52620520;

void code__52620520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__61785240();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52620520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52620520 = block;
   block->owner = (Object)__52620680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52620520;

   return block;
};

void code__52620680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__61786020();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__61785760();
                     src1 = make__61785740();
                     src2 = make__61785720();
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
    code__53181120();
   }
   else {
  code__52620520();
   }
      }
   }
}

Block make__52620680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52620680 = block;
   block->owner = (Object)__52620840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52620680;

   return block;
};

void code__52620840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61786580();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53727880();
   }
   else {
  code__52620680();
   }
      }
   }
}

Block make__52620840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52620840 = block;
   block->owner = (Object)__47109820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52620840;

   return block;
};

Block __61790520;

void code__61790520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            idx = value2integer(address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_47766840_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61790520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61790520 = block;
   block->owner = (Object)__61789480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61790520;

   return block;
};

Value make__61787500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787480() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787460() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787320() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787260() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787240() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787220() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787180() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787160() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787140() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787120() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61787100() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61786580() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61786460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61786020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61785760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61785740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61785720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61785240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_47122040;

SignalI lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makelut_52050300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)my__lut_58_840_47122040;
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
         src0 = make__61787500();
         src1 = make__61787480();
         src2 = make__61787460();
         src3 = make__61787440();
         src4 = make__61787420();
         src5 = make__61787400();
         src6 = make__61787380();
         src7 = make__61787320();
         src8 = make__61787260();
         src9 = make__61787240();
         src10 = make__61787220();
         src11 = make__61787180();
         src12 = make__61787160();
         src13 = make__61787140();
         src14 = make__61787120();
         src15 = make__61787100();
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

Behavior __47109820;

Behavior make__47109820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47109820 = behavior;
   behavior->owner = (Object)my__lut_58_840_47122040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__52620840();

   return behavior;
}

Behavior __61789480;

Behavior make__61789480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61789480 = behavior;
   behavior->owner = (Object)my__lut_58_840_47122040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[lut_52050300_my__lut_58_840_47122040_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61790520();

   return behavior;
}

Scope makemy__lut_58_840_47122040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_47122040 = scope;
   scope->owner = (Object)my__lut_58_8400_47108660;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_52050300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47109820();
   scope->behaviors[1] = make__61789480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_47108660() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_47108660 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_47126780();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_47766840();
   systemT->outputs[1] = makenext__data_48050680();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_47122040();

   return systemT;
}