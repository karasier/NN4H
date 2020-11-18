#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_845_47885220;

SignalI address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeaddress_48681700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_845_47885220;
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

SignalI base_49056560_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makebase_49056560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49056560_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_845_47885220;
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

SignalI next__data_49540720_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makenext__data_49540720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49540720_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_845_47885220;
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

Block __50107700;

Block __52922260;

void code__52922260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(make__71794620());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49540720_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52922260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52922260 = block;
   block->owner = (Object)__50107700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52922260;

   return block;
};

Block __50107360;

Block __52181400;

void code__52181400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49540720_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52181400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52181400 = block;
   block->owner = (Object)__50107360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52181400;

   return block;
};

Block __50107000;

void code__50107000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__71792800();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49540720_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50107000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50107000 = block;
   block->owner = (Object)__50107360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50107000;

   return block;
};

void code__50107360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__71793740();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__71793380();
                     src1 = make__71793360();
                     src2 = make__71793340();
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
    code__52181400();
   }
   else {
  code__50107000();
   }
      }
   }
}

Block make__50107360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50107360 = block;
   block->owner = (Object)__50107700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50107360;

   return block;
};

void code__50107700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71770220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52922260();
   }
   else {
  code__50107360();
   }
      }
   }
}

Block make__50107700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50107700 = block;
   block->owner = (Object)__47866140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50107700;

   return block;
};

Block __71774780;

void code__71774780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_49056560_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71774780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71774780 = block;
   block->owner = (Object)__71773560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71774780;

   return block;
};

Value make__71770920() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770900() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770880() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770800() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770780() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770560() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71770220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71794620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71793740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71793380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71793360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71793340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71792800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_53149200;

SignalI lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelut_53093560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_84_53149200;
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
         src0 = make__71770920();
         src1 = make__71770900();
         src2 = make__71770880();
         src3 = make__71770860();
         src4 = make__71770840();
         src5 = make__71770820();
         src6 = make__71770800();
         src7 = make__71770780();
         src8 = make__71770720();
         src9 = make__71770700();
         src10 = make__71770680();
         src11 = make__71770640();
         src12 = make__71770620();
         src13 = make__71770600();
         src14 = make__71770580();
         src15 = make__71770560();
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

Behavior __47866140;

Behavior make__47866140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47866140 = behavior;
   behavior->owner = (Object)my__lut_58_84_53149200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__50107700();

   return behavior;
}

Behavior __71773560;

Behavior make__71773560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71773560 = behavior;
   behavior->owner = (Object)my__lut_58_84_53149200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[address_48681700_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[lut_53093560_my__lut_58_84_53149200_my__lut_58_845_47885220_func0_58_84_52710780_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71774780();

   return behavior;
}

Scope makemy__lut_58_84_53149200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_53149200 = scope;
   scope->owner = (Object)my__lut_58_845_47885220;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_53093560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47866140();
   scope->behaviors[1] = make__71773560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_845_47885220() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_845_47885220 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T5";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_48681700();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_49056560();
   systemT->outputs[1] = makenext__data_49540720();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_53149200();

   return systemT;
}