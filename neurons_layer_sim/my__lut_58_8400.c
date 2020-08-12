#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_53447960;

SignalI addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makeaddr_53445560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)my__lut_58_8400_53447960;
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

SignalI base_53563160_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makebase_53563160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53563160_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)my__lut_58_8400_53447960;
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

SignalI next__data_53731480_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makenext__data_53731480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53731480_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)my__lut_58_8400_53447960;
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

Block __52489260;

Block __52894840;

void code__52894840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value;
            idx = value2integer(make__49212920());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53731480_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__52894840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52894840 = block;
   block->owner = (Object)__52489260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52894840;

   return block;
};

Block __52489080;

void code__52489080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__49212520();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53731480_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__52489080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52489080 = block;
   block->owner = (Object)__52489260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52489080;

   return block;
};

void code__52489260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49213480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52894840();
   }
   else {
  code__52489080();
   }
      }
   }
}

Block make__52489260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52489260 = block;
   block->owner = (Object)__53448280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52489260;

   return block;
};

Block __49196280;

void code__49196280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value;
            idx = value2integer(addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_53563160_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__49196280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49196280 = block;
   block->owner = (Object)__49193580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49196280;

   return block;
};

Value make__49214680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214640() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214620() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214600() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214580() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214560() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214540() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214460() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214440() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214340() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214320() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214280() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214260() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214240() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49214220() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49213480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49212920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49212520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __54054640;

SignalI lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makelut_52107880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)__54054640;
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
         src0 = make__49214680();
         src1 = make__49214640();
         src2 = make__49214620();
         src3 = make__49214600();
         src4 = make__49214580();
         src5 = make__49214560();
         src6 = make__49214540();
         src7 = make__49214520();
         src8 = make__49214460();
         src9 = make__49214440();
         src10 = make__49214340();
         src11 = make__49214320();
         src12 = make__49214280();
         src13 = make__49214260();
         src14 = make__49214240();
         src15 = make__49214220();
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

Behavior __53448280;

Behavior make__53448280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53448280 = behavior;
   behavior->owner = (Object)__54054640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__52489260();

   return behavior;
}

Behavior __49193580;

Behavior make__49193580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49193580 = behavior;
   behavior->owner = (Object)__54054640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[lut_52107880___54054640_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__49196280();

   return behavior;
}

Scope make__54054640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __54054640 = scope;
   scope->owner = (Object)my__lut_58_8400_53447960;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_52107880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53448280();
   scope->behaviors[1] = make__49193580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_53447960() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_53447960 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_53445560();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_53563160();
   systemT->outputs[1] = makenext__data_53731480();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__54054640();

   return systemT;
}