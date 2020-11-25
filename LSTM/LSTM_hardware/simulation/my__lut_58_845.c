#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_845_50262560;

SignalI address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeaddress_50281780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_845_50262560;
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

SignalI base_50530000_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makebase_50530000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50530000_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_845_50262560;
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

SignalI next__data_51178860_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makenext__data_51178860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51178860_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_845_50262560;
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

Block __56847320;

Block __57824280;

void code__57824280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(make__77232280());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51178860_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57824280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57824280 = block;
   block->owner = (Object)__56847320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57824280;

   return block;
};

Block __56847160;

Block __57429680;

void code__57429680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51178860_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57429680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57429680 = block;
   block->owner = (Object)__56847160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57429680;

   return block;
};

Block __56846960;

void code__56846960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77231060();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51178860_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56846960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56846960 = block;
   block->owner = (Object)__56847160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56846960;

   return block;
};

void code__56847160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__77231820();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__77231560();
                     src1 = make__77231540();
                     src2 = make__77231520();
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
    code__57429680();
   }
   else {
  code__56846960();
   }
      }
   }
}

Block make__56847160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56847160 = block;
   block->owner = (Object)__56847320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56847160;

   return block;
};

void code__56847320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77232400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57824280();
   }
   else {
  code__56847160();
   }
      }
   }
}

Block make__56847320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56847320 = block;
   block->owner = (Object)__50263240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56847320;

   return block;
};

Block __77211460;

void code__77211460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_50530000_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77211460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77211460 = block;
   block->owner = (Object)__77210380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77211460;

   return block;
};

Value make__77233020() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77233000() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232940() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232920() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232900() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232880() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232680() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77232400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77232280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77231820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77231560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77231540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77231520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77231060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_56554240;

SignalI lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelut_56289460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_84_56554240;
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
         src0 = make__77233020();
         src1 = make__77233000();
         src2 = make__77232940();
         src3 = make__77232920();
         src4 = make__77232900();
         src5 = make__77232880();
         src6 = make__77232860();
         src7 = make__77232840();
         src8 = make__77232820();
         src9 = make__77232800();
         src10 = make__77232780();
         src11 = make__77232760();
         src12 = make__77232740();
         src13 = make__77232720();
         src14 = make__77232700();
         src15 = make__77232680();
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

Behavior __50263240;

Behavior make__50263240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50263240 = behavior;
   behavior->owner = (Object)my__lut_58_84_56554240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__56847320();

   return behavior;
}

Behavior __77210380;

Behavior make__77210380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77210380 = behavior;
   behavior->owner = (Object)my__lut_58_84_56554240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[address_50281780_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[lut_56289460_my__lut_58_84_56554240_my__lut_58_845_50262560_func0_58_84_55916440_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77211460();

   return behavior;
}

Scope makemy__lut_58_84_56554240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_56554240 = scope;
   scope->owner = (Object)my__lut_58_845_50262560;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_56289460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50263240();
   scope->behaviors[1] = make__77210380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_845_50262560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_845_50262560 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T5";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_50281780();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_50530000();
   systemT->outputs[1] = makenext__data_51178860();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_56554240();

   return systemT;
}