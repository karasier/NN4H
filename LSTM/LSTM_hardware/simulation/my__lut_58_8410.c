#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8410_53619100;

SignalI address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeaddress_53617080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8410_53619100;
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

SignalI base_56373100_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makebase_56373100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56373100_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8410_53619100;
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

SignalI next__data_62659000_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makenext__data_62659000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_62659000_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8410_53619100;
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

Block __55367780;

Block __57307320;

void code__57307320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(make__77669080());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_62659000_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57307320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57307320 = block;
   block->owner = (Object)__55367780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57307320;

   return block;
};

Block __55367400;

Block __56236280;

void code__56236280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_62659000_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56236280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56236280 = block;
   block->owner = (Object)__55367400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56236280;

   return block;
};

Block __55367000;

void code__55367000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77692360();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_62659000_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55367000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55367000 = block;
   block->owner = (Object)__55367400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55367000;

   return block;
};

void code__55367400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__77668640();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__77668380();
                     src1 = make__77668360();
                     src2 = make__77692860();
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
    code__56236280();
   }
   else {
  code__55367000();
   }
      }
   }
}

Block make__55367400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55367400 = block;
   block->owner = (Object)__55367780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55367400;

   return block;
};

void code__55367780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77669220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57307320();
   }
   else {
  code__55367400();
   }
      }
   }
}

Block make__55367780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55367780 = block;
   block->owner = (Object)__53619420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55367780;

   return block;
};

Block __77672800;

void code__77672800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_56373100_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77672800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77672800 = block;
   block->owner = (Object)__77671720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77672800;

   return block;
};

Value make__77669800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669780() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669760() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669740() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669720() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669700() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669680() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669660() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669640() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669620() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669600() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669580() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669560() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669540() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669520() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669500() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77669220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77669080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77668640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77668380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77668360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77692860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77692360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_841_64319800;

SignalI lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelut_54396660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_841_64319800;
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
         src0 = make__77669800();
         src1 = make__77669780();
         src2 = make__77669760();
         src3 = make__77669740();
         src4 = make__77669720();
         src5 = make__77669700();
         src6 = make__77669680();
         src7 = make__77669660();
         src8 = make__77669640();
         src9 = make__77669620();
         src10 = make__77669600();
         src11 = make__77669580();
         src12 = make__77669560();
         src13 = make__77669540();
         src14 = make__77669520();
         src15 = make__77669500();
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

Behavior __53619420;

Behavior make__53619420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53619420 = behavior;
   behavior->owner = (Object)my__lut_58_841_64319800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__55367780();

   return behavior;
}

Behavior __77671720;

Behavior make__77671720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77671720 = behavior;
   behavior->owner = (Object)my__lut_58_841_64319800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[address_53617080_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[lut_54396660_my__lut_58_841_64319800_my__lut_58_8410_53619100_func0_58_840_63889280_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77672800();

   return behavior;
}

Scope makemy__lut_58_841_64319800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_841_64319800 = scope;
   scope->owner = (Object)my__lut_58_8410_53619100;
   scope->name = "my_lut:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_54396660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53619420();
   scope->behaviors[1] = make__77671720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8410_53619100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8410_53619100 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_53617080();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_56373100();
   systemT->outputs[1] = makenext__data_62659000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_841_64319800();

   return systemT;
}