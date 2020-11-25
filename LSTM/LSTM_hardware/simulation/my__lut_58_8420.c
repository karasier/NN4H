#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8420_57425680;

SignalI address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeaddress_57419180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8420_57425680;
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

SignalI base_57614620_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makebase_57614620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57614620_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8420_57425680;
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

SignalI next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makenext__data_55812280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8420_57425680;
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

Block __51522000;

Block __55799980;

void code__55799980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(make__78685360());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55799980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55799980 = block;
   block->owner = (Object)__51522000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55799980;

   return block;
};

Block __51519960;

Block __54490880;

void code__54490880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54490880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54490880 = block;
   block->owner = (Object)__51519960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54490880;

   return block;
};

Block __51543700;

void code__51543700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78725060();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__51543700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51543700 = block;
   block->owner = (Object)__51519960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51543700;

   return block;
};

void code__51519960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__78684900();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__78684640();
                     src1 = make__78684620();
                     src2 = make__78684600();
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
    code__54490880();
   }
   else {
  code__51543700();
   }
      }
   }
}

Block make__51519960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51519960 = block;
   block->owner = (Object)__51522000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51519960;

   return block;
};

void code__51522000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78685480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55799980();
   }
   else {
  code__51519960();
   }
      }
   }
}

Block make__51522000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51522000 = block;
   block->owner = (Object)__57336880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51522000;

   return block;
};

Block __78689060;

void code__78689060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_57614620_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78689060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78689060 = block;
   block->owner = (Object)__78687980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78689060;

   return block;
};

Value make__78686060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78686040() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78686020() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78686000() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685980() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685920() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685900() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685880() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685860() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685840() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685820() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685800() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685780() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685760() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78685480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78685360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78684900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78684640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78684620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78684600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78725060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_842_56341400;

SignalI lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelut_67254260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_842_56341400;
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
         src0 = make__78686060();
         src1 = make__78686040();
         src2 = make__78686020();
         src3 = make__78686000();
         src4 = make__78685980();
         src5 = make__78685960();
         src6 = make__78685940();
         src7 = make__78685920();
         src8 = make__78685900();
         src9 = make__78685880();
         src10 = make__78685860();
         src11 = make__78685840();
         src12 = make__78685820();
         src13 = make__78685800();
         src14 = make__78685780();
         src15 = make__78685760();
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

Behavior __57336880;

Behavior make__57336880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57336880 = behavior;
   behavior->owner = (Object)my__lut_58_842_56341400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__51522000();

   return behavior;
}

Behavior __78687980;

Behavior make__78687980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78687980 = behavior;
   behavior->owner = (Object)my__lut_58_842_56341400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[lut_67254260_my__lut_58_842_56341400_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78689060();

   return behavior;
}

Scope makemy__lut_58_842_56341400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_842_56341400 = scope;
   scope->owner = (Object)my__lut_58_8420_57425680;
   scope->name = "my_lut:T2";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_67254260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57336880();
   scope->behaviors[1] = make__78687980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8420_57425680() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8420_57425680 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_57419180();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_57614620();
   systemT->outputs[1] = makenext__data_55812280();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_842_56341400();

   return systemT;
}