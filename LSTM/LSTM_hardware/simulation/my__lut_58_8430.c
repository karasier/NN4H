#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8430_63367980;

SignalI address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeaddress_63389400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8430_63367980;
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

SignalI base_63482520_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makebase_63482520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_63482520_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8430_63367980;
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

SignalI next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makenext__data_63645060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8430_63367980;
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

Block __55696460;

Block __62691380;

void code__62691380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(make__78750560());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__62691380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62691380 = block;
   block->owner = (Object)__55696460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62691380;

   return block;
};

Block __55695720;

Block __57343120;

void code__57343120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57343120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57343120 = block;
   block->owner = (Object)__55695720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57343120;

   return block;
};

Block __55695240;

void code__55695240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78773920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55695240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55695240 = block;
   block->owner = (Object)__55695720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55695240;

   return block;
};

void code__55695720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__78750120();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__78749840();
                     src1 = make__78749820();
                     src2 = make__78749800();
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
    code__57343120();
   }
   else {
  code__55695240();
   }
      }
   }
}

Block make__55695720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55695720 = block;
   block->owner = (Object)__55696460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55695720;

   return block;
};

void code__55696460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78750680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62691380();
   }
   else {
  code__55695720();
   }
      }
   }
}

Block make__55696460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55696460 = block;
   block->owner = (Object)__63368520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55696460;

   return block;
};

Block __78754280;

void code__78754280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_63482520_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78754280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78754280 = block;
   block->owner = (Object)__78753240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78754280;

   return block;
};

Value make__78751360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751340() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751320() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751280() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751160() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751140() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751120() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751100() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751080() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751060() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751020() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78751000() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78750680() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78750560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78750120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78749840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78749820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78749800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78773920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_843_56357560;

SignalI lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelut_53821780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_843_56357560;
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
         src0 = make__78751360();
         src1 = make__78751340();
         src2 = make__78751320();
         src3 = make__78751280();
         src4 = make__78751260();
         src5 = make__78751240();
         src6 = make__78751220();
         src7 = make__78751180();
         src8 = make__78751160();
         src9 = make__78751140();
         src10 = make__78751120();
         src11 = make__78751100();
         src12 = make__78751080();
         src13 = make__78751060();
         src14 = make__78751020();
         src15 = make__78751000();
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

Behavior __63368520;

Behavior make__63368520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63368520 = behavior;
   behavior->owner = (Object)my__lut_58_843_56357560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__55696460();

   return behavior;
}

Behavior __78753240;

Behavior make__78753240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78753240 = behavior;
   behavior->owner = (Object)my__lut_58_843_56357560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[lut_53821780_my__lut_58_843_56357560_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78754280();

   return behavior;
}

Scope makemy__lut_58_843_56357560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_843_56357560 = scope;
   scope->owner = (Object)my__lut_58_8430_63367980;
   scope->name = "my_lut:T3";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_53821780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63368520();
   scope->behaviors[1] = make__78753240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8430_63367980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8430_63367980 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T30";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_63389400();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_63482520();
   systemT->outputs[1] = makenext__data_63645060();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_843_56357560();

   return systemT;
}