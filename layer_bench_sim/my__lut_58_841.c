#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_841_50062040;

SignalI addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeaddr_50100240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)my__lut_58_841_50062040;
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

SignalI base_50302640_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makebase_50302640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50302640_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)my__lut_58_841_50062040;
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

SignalI next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makenext__data_50462980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)my__lut_58_841_50062040;
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

Block __51471160;

Block __49081300;

void code__49081300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
            idx = value2integer(make__55605200());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__49081300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49081300 = block;
   block->owner = (Object)__51471160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49081300;

   return block;
};

Block __51470860;

Block __47403920;

void code__47403920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
            idx = value2integer(addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__47403920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47403920 = block;
   block->owner = (Object)__51470860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47403920;

   return block;
};

Block __51470700;

void code__51470700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__55603840();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__51470700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51470700 = block;
   block->owner = (Object)__51470860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51470700;

   return block;
};

void code__51470860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__55604740();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__55604380();
                     src1 = make__55604340();
                     src2 = make__55604320();
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
    code__47403920();
   }
   else {
  code__51470700();
   }
      }
   }
}

Block make__51470860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51470860 = block;
   block->owner = (Object)__51471160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51470860;

   return block;
};

void code__51471160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55605320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49081300();
   }
   else {
  code__51470860();
   }
      }
   }
}

Block make__51471160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51471160 = block;
   block->owner = (Object)__50062740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51471160;

   return block;
};

Block __55584560;

void code__55584560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
            idx = value2integer(addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_50302640_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55584560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55584560 = block;
   block->owner = (Object)__55583280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55584560;

   return block;
};

Value make__55605900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605880() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605800() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605780() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605760() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605740() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605720() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605700() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605680() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605660() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605640() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605620() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605600() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55605320() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55605200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55604740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55604380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55604340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55604320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55603840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __51474600;

SignalI lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makelut_50966600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51474600;
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
         src0 = make__55605900();
         src1 = make__55605880();
         src2 = make__55605860();
         src3 = make__55605840();
         src4 = make__55605820();
         src5 = make__55605800();
         src6 = make__55605780();
         src7 = make__55605760();
         src8 = make__55605740();
         src9 = make__55605720();
         src10 = make__55605700();
         src11 = make__55605680();
         src12 = make__55605660();
         src13 = make__55605640();
         src14 = make__55605620();
         src15 = make__55605600();
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

Behavior __50062740;

Behavior make__50062740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50062740 = behavior;
   behavior->owner = (Object)__51474600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__51471160();

   return behavior;
}

Behavior __55583280;

Behavior make__55583280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55583280 = behavior;
   behavior->owner = (Object)__51474600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[lut_50966600___51474600_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55584560();

   return behavior;
}

Scope make__51474600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51474600 = scope;
   scope->owner = (Object)my__lut_58_841_50062040;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_50966600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50062740();
   scope->behaviors[1] = make__55583280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_841_50062040() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_841_50062040 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_50100240();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_50302640();
   systemT->outputs[1] = makenext__data_50462980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__51474600();

   return systemT;
}