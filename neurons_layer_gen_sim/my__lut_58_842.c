#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_52514920;

SignalI address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makeaddress_52512640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)my__lut_58_842_52514920;
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

SignalI base_52592720_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makebase_52592720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52592720_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)my__lut_58_842_52514920;
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

SignalI next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makenext__data_52771500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)my__lut_58_842_52514920;
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

Block __49402160;

Block __52063040;

void code__52063040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
            idx = value2integer(make__60503060());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__52063040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52063040 = block;
   block->owner = (Object)__49402160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52063040;

   return block;
};

Block __49401940;

Block __51481840;

void code__51481840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
            idx = value2integer(address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__51481840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51481840 = block;
   block->owner = (Object)__49401940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51481840;

   return block;
};

Block __49401740;

void code__49401740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__60501720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__49401740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49401740 = block;
   block->owner = (Object)__49401940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49401740;

   return block;
};

void code__49401940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__60502540();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__60502280();
                     src1 = make__60502260();
                     src2 = make__60502240();
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
    code__51481840();
   }
   else {
  code__49401740();
   }
      }
   }
}

Block make__49401940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49401940 = block;
   block->owner = (Object)__49402160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49401940;

   return block;
};

void code__49402160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60503200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52063040();
   }
   else {
  code__49401940();
   }
      }
   }
}

Block make__49402160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49402160 = block;
   block->owner = (Object)__52515360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49402160;

   return block;
};

Block __60465940;

void code__60465940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
            idx = value2integer(address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_52592720_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60465940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60465940 = block;
   block->owner = (Object)__60505780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60465940;

   return block;
};

Value make__60503780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503760() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503740() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503720() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503700() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503680() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503660() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503640() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503620() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503600() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503580() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503560() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503540() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503520() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503500() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503480() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60503200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60503060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60502540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60502280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60502260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60502240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60501720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_53947800;

SignalI lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makelut_48611600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)my__lut_58_84_53947800;
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
         src0 = make__60503780();
         src1 = make__60503760();
         src2 = make__60503740();
         src3 = make__60503720();
         src4 = make__60503700();
         src5 = make__60503680();
         src6 = make__60503660();
         src7 = make__60503640();
         src8 = make__60503620();
         src9 = make__60503600();
         src10 = make__60503580();
         src11 = make__60503560();
         src12 = make__60503540();
         src13 = make__60503520();
         src14 = make__60503500();
         src15 = make__60503480();
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

Behavior __52515360;

Behavior make__52515360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52515360 = behavior;
   behavior->owner = (Object)my__lut_58_84_53947800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__49402160();

   return behavior;
}

Behavior __60505780;

Behavior make__60505780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60505780 = behavior;
   behavior->owner = (Object)my__lut_58_84_53947800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[lut_48611600_my__lut_58_84_53947800_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60465940();

   return behavior;
}

Scope makemy__lut_58_84_53947800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_53947800 = scope;
   scope->owner = (Object)my__lut_58_842_52514920;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_48611600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52515360();
   scope->behaviors[1] = make__60505780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_52514920() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_52514920 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_52512640();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_52592720();
   systemT->outputs[1] = makenext__data_52771500();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_53947800();

   return systemT;
}