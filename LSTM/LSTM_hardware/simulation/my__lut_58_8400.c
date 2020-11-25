#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_57013600;

SignalI address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeaddress_57010680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8400_57013600;
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

SignalI base_57309900_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makebase_57309900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57309900_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8400_57013600;
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

SignalI next__data_57452460_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makenext__data_57452460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57452460_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8400_57013600;
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

Block __55164260;

Block __56309880;

void code__56309880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(make__77346560());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_57452460_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56309880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56309880 = block;
   block->owner = (Object)__55164260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56309880;

   return block;
};

Block __55164040;

Block __55713520;

void code__55713520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_57452460_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55713520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55713520 = block;
   block->owner = (Object)__55164040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55713520;

   return block;
};

Block __55163800;

void code__55163800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77345380();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_57452460_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55163800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55163800 = block;
   block->owner = (Object)__55164040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55163800;

   return block;
};

void code__55164040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__77346120();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__77345840();
                     src1 = make__77345820();
                     src2 = make__77345800();
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
    code__55713520();
   }
   else {
  code__55163800();
   }
      }
   }
}

Block make__55164040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55164040 = block;
   block->owner = (Object)__55164260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55164040;

   return block;
};

void code__55164260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77346680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56309880();
   }
   else {
  code__55164040();
   }
      }
   }
}

Block make__55164260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55164260 = block;
   block->owner = (Object)__57014180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55164260;

   return block;
};

Block __77325740;

void code__77325740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_57309900_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77325740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77325740 = block;
   block->owner = (Object)__77324720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77325740;

   return block;
};

Value make__77347360() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347340() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347320() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347280() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77347020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77346680() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77346560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77346120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77345840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77345820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77345800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77345380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_52075680;

SignalI lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelut_54414200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_840_52075680;
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
         src0 = make__77347360();
         src1 = make__77347340();
         src2 = make__77347320();
         src3 = make__77347300();
         src4 = make__77347280();
         src5 = make__77347260();
         src6 = make__77347240();
         src7 = make__77347200();
         src8 = make__77347180();
         src9 = make__77347160();
         src10 = make__77347140();
         src11 = make__77347100();
         src12 = make__77347080();
         src13 = make__77347060();
         src14 = make__77347040();
         src15 = make__77347020();
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

Behavior __57014180;

Behavior make__57014180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57014180 = behavior;
   behavior->owner = (Object)my__lut_58_840_52075680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__55164260();

   return behavior;
}

Behavior __77324720;

Behavior make__77324720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77324720 = behavior;
   behavior->owner = (Object)my__lut_58_840_52075680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[address_57010680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[lut_54414200_my__lut_58_840_52075680_my__lut_58_8400_57013600_func1_58_84_51307380_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77325740();

   return behavior;
}

Scope makemy__lut_58_840_52075680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_52075680 = scope;
   scope->owner = (Object)my__lut_58_8400_57013600;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_54414200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57014180();
   scope->behaviors[1] = make__77324720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_57013600() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_57013600 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_57010680();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_57309900();
   systemT->outputs[1] = makenext__data_57452460();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_52075680();

   return systemT;
}