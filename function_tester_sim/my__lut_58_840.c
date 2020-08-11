#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_840_46901700;

SignalI addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860;

SignalI makeaddr_46899660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860 = signalI;
   signalI->owner = (Object)my__lut_58_840_46901700;
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

SignalI base_47115900_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860;

SignalI makebase_47115900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47115900_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860 = signalI;
   signalI->owner = (Object)my__lut_58_840_46901700;
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

SignalI next__data_47367560_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860;

SignalI makenext__data_47367560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47367560_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860 = signalI;
   signalI->owner = (Object)my__lut_58_840_46901700;
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

Block __47560780;

Block __45223560;

void code__45223560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value;
            idx = value2integer(make__47544160());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47367560_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
}

Block make__45223560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45223560 = block;
   block->owner = (Object)__47560780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45223560;

   return block;
};

Block __47560520;

void code__47560520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__47543780();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47367560_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
}

Block make__47560520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47560520 = block;
   block->owner = (Object)__47560780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47560520;

   return block;
};

void code__47560780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47544300();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45223560();
   }
   else {
  code__47560520();
   }
      }
   }
}

Block make__47560780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47560780 = block;
   block->owner = (Object)__46902020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47560780;

   return block;
};

Block __47523680;

void code__47523680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value;
            idx = value2integer(addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_47115900_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
}

Block make__47523680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47523680 = block;
   block->owner = (Object)__47522440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47523680;

   return block;
};

Value make__47545180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47545120() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47545100() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47545060() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47545040() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47545000() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47544980() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47544960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47544940() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47544920() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47544900() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47544880() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47544820() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47544800() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47544680() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47544660() {
   static unsigned long long data[] = { 4294967292ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47544300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47544160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47543780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47294740;

SignalI lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860;

SignalI makelut_47028820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860 = signalI;
   signalI->owner = (Object)__47294740;
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
         src0 = make__47545180();
         src1 = make__47545120();
         src2 = make__47545100();
         src3 = make__47545060();
         src4 = make__47545040();
         src5 = make__47545000();
         src6 = make__47544980();
         src7 = make__47544960();
         src8 = make__47544940();
         src9 = make__47544920();
         src10 = make__47544900();
         src11 = make__47544880();
         src12 = make__47544820();
         src13 = make__47544800();
         src14 = make__47544680();
         src15 = make__47544660();
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

Behavior __46902020;

Behavior make__46902020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46902020 = behavior;
   behavior->owner = (Object)__47294740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->block = make__47560780();

   return behavior;
}

Behavior __47522440;

Behavior make__47522440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47522440 = behavior;
   behavior->owner = (Object)__47294740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[lut_47028820___47294740_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->block = make__47523680();

   return behavior;
}

Scope make__47294740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47294740 = scope;
   scope->owner = (Object)my__lut_58_840_46901700;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_47028820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46902020();
   scope->behaviors[1] = make__47522440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_840_46901700() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_840_46901700 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_46899660();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_47115900();
   systemT->outputs[1] = makenext__data_47367560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47294740();

   return systemT;
}