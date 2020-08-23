#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_841_48099860;

SignalI addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeaddr_48143160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)my__lut_58_841_48099860;
   signalI->name = "addr";
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

SignalI base_48367200_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makebase_48367200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48367200_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)my__lut_58_841_48099860;
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

SignalI next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makenext__data_47739860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)my__lut_58_841_48099860;
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

Block __52180100;

Block __47310280;

void code__47310280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
            idx = value2integer(make__45628760());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__47310280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47310280 = block;
   block->owner = (Object)__52180100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47310280;

   return block;
};

Block __52179940;

Block __43400420;

void code__43400420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
            idx = value2integer(addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__43400420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43400420 = block;
   block->owner = (Object)__52179940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43400420;

   return block;
};

Block __52179740;

void code__52179740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__45624920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52179740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52179740 = block;
   block->owner = (Object)__52179940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52179740;

   return block;
};

void code__52179940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__45627700();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__45626900();
                     src1 = make__45626880();
                     src2 = make__45626840();
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
    code__43400420();
   }
   else {
  code__52179740();
   }
      }
   }
}

Block make__52179940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52179940 = block;
   block->owner = (Object)__52180100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52179940;

   return block;
};

void code__52180100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__45629040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47310280();
   }
   else {
  code__52179940();
   }
      }
   }
}

Block make__52180100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52180100 = block;
   block->owner = (Object)__48100560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52180100;

   return block;
};

Block __44469680;

void code__44469680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
            idx = value2integer(addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_48367200_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__44469680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44469680 = block;
   block->owner = (Object)__44677320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44469680;

   return block;
};

Value make__45503200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45502820() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45501380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45499420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45499400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45499360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45499340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45499240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45499220() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45499200() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45499160() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45499140() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45499060() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45498940() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45498880() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45498860() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45629040() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45628760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45627700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45626900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45626880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45626840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45624920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_50875340;

SignalI lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makelut_51853500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)my__lut_58_84_50875340;
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
         src0 = make__45503200();
         src1 = make__45502820();
         src2 = make__45501380();
         src3 = make__45499420();
         src4 = make__45499400();
         src5 = make__45499360();
         src6 = make__45499340();
         src7 = make__45499240();
         src8 = make__45499220();
         src9 = make__45499200();
         src10 = make__45499160();
         src11 = make__45499140();
         src12 = make__45499060();
         src13 = make__45498940();
         src14 = make__45498880();
         src15 = make__45498860();
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

Behavior __48100560;

Behavior make__48100560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48100560 = behavior;
   behavior->owner = (Object)my__lut_58_84_50875340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52180100();

   return behavior;
}

Behavior __44677320;

Behavior make__44677320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44677320 = behavior;
   behavior->owner = (Object)my__lut_58_84_50875340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[lut_51853500_my__lut_58_84_50875340_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__44469680();

   return behavior;
}

Scope makemy__lut_58_84_50875340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_50875340 = scope;
   scope->owner = (Object)my__lut_58_841_48099860;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_51853500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48100560();
   scope->behaviors[1] = make__44677320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_841_48099860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_841_48099860 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_48143160();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_48367200();
   systemT->outputs[1] = makenext__data_47739860();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_50875340();

   return systemT;
}