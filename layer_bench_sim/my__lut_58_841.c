#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_841_51002160;

SignalI addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeaddr_50999120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)my__lut_58_841_51002160;
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

SignalI base_51144600_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makebase_51144600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51144600_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)my__lut_58_841_51002160;
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

SignalI next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makenext__data_51319180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)my__lut_58_841_51002160;
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

Block __47737740;

Block __50495220;

void code__50495220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
            idx = value2integer(make__55956680());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50495220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50495220 = block;
   block->owner = (Object)__47737740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50495220;

   return block;
};

Block __47737580;

Block __49363300;

void code__49363300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
            idx = value2integer(addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__49363300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49363300 = block;
   block->owner = (Object)__47737580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49363300;

   return block;
};

Block __47737400;

void code__47737400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__55955420();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__47737400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47737400 = block;
   block->owner = (Object)__47737580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47737400;

   return block;
};

void code__47737580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__55956240();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__55955940();
                     src1 = make__55955920();
                     src2 = make__55955900();
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
    code__49363300();
   }
   else {
  code__47737400();
   }
      }
   }
}

Block make__47737580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47737580 = block;
   block->owner = (Object)__47737740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47737580;

   return block;
};

void code__47737740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55956860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50495220();
   }
   else {
  code__47737580();
   }
      }
   }
}

Block make__47737740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47737740 = block;
   block->owner = (Object)__51002600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47737740;

   return block;
};

Block __55935860;

void code__55935860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
            idx = value2integer(addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_51144600_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55935860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55935860 = block;
   block->owner = (Object)__55959380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55935860;

   return block;
};

Value make__55957480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957460() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957320() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957300() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957280() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957260() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957240() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957220() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957200() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55957180() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55956860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55956680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55956240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55955940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55955920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55955900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55955420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_46510040;

SignalI lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makelut_51700600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)my__lut_58_84_46510040;
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
         src0 = make__55957480();
         src1 = make__55957460();
         src2 = make__55957440();
         src3 = make__55957420();
         src4 = make__55957400();
         src5 = make__55957380();
         src6 = make__55957360();
         src7 = make__55957340();
         src8 = make__55957320();
         src9 = make__55957300();
         src10 = make__55957280();
         src11 = make__55957260();
         src12 = make__55957240();
         src13 = make__55957220();
         src14 = make__55957200();
         src15 = make__55957180();
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

Behavior __51002600;

Behavior make__51002600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51002600 = behavior;
   behavior->owner = (Object)my__lut_58_84_46510040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__47737740();

   return behavior;
}

Behavior __55959380;

Behavior make__55959380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55959380 = behavior;
   behavior->owner = (Object)my__lut_58_84_46510040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[lut_51700600_my__lut_58_84_46510040_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55935860();

   return behavior;
}

Scope makemy__lut_58_84_46510040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_46510040 = scope;
   scope->owner = (Object)my__lut_58_841_51002160;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_51700600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51002600();
   scope->behaviors[1] = make__55959380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_841_51002160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_841_51002160 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_50999120();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_51144600();
   systemT->outputs[1] = makenext__data_51319180();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_46510040();

   return systemT;
}