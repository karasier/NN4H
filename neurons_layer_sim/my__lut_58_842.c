#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_53102540;

SignalI address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeaddress_53165640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)my__lut_58_842_53102540;
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

SignalI base_53280140_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makebase_53280140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53280140_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)my__lut_58_842_53102540;
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

SignalI next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makenext__data_53382960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)my__lut_58_842_53102540;
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

Block __51598320;

Block __52486480;

void code__52486480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
            idx = value2integer(make__51046500());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52486480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52486480 = block;
   block->owner = (Object)__51598320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52486480;

   return block;
};

Block __51598100;

Block __52181720;

void code__52181720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
            idx = value2integer(address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52181720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52181720 = block;
   block->owner = (Object)__51598100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52181720;

   return block;
};

Block __51597940;

void code__51597940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51099780();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51597940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51597940 = block;
   block->owner = (Object)__51598100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51597940;

   return block;
};

void code__51598100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__51044980();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__51044520();
                     src1 = make__51044500();
                     src2 = make__51044460();
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
    code__52181720();
   }
   else {
  code__51597940();
   }
      }
   }
}

Block make__51598100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51598100 = block;
   block->owner = (Object)__51598320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51598100;

   return block;
};

void code__51598320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51046700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52486480();
   }
   else {
  code__51598100();
   }
      }
   }
}

Block make__51598320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51598320 = block;
   block->owner = (Object)__53102940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51598320;

   return block;
};

Block __51014900;

void code__51014900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
            idx = value2integer(address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_53280140_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51014900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51014900 = block;
   block->owner = (Object)__51052260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51014900;

   return block;
};

Value make__51047920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047680() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047640() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047620() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047580() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047540() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047480() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047400() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047340() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047280() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047260() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047220() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047200() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51047120() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51046700() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51046500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51044980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51044520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51044500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51044460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51099780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_47268660;

SignalI lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makelut_50981340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)my__lut_58_84_47268660;
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
         src0 = make__51047920();
         src1 = make__51047680();
         src2 = make__51047640();
         src3 = make__51047620();
         src4 = make__51047580();
         src5 = make__51047540();
         src6 = make__51047520();
         src7 = make__51047500();
         src8 = make__51047480();
         src9 = make__51047400();
         src10 = make__51047340();
         src11 = make__51047280();
         src12 = make__51047260();
         src13 = make__51047220();
         src14 = make__51047200();
         src15 = make__51047120();
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

Behavior __53102940;

Behavior make__53102940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53102940 = behavior;
   behavior->owner = (Object)my__lut_58_84_47268660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51598320();

   return behavior;
}

Behavior __51052260;

Behavior make__51052260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51052260 = behavior;
   behavior->owner = (Object)my__lut_58_84_47268660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[lut_50981340_my__lut_58_84_47268660_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51014900();

   return behavior;
}

Scope makemy__lut_58_84_47268660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_47268660 = scope;
   scope->owner = (Object)my__lut_58_842_53102540;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_50981340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53102940();
   scope->behaviors[1] = make__51052260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_53102540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_53102540 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_53165640();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_53280140();
   systemT->outputs[1] = makenext__data_53382960();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_47268660();

   return systemT;
}