#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_841_51777100;

SignalI addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makeaddr_51773600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)my__lut_58_841_51777100;
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

SignalI base_46060540_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makebase_46060540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_46060540_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)my__lut_58_841_51777100;
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

SignalI next__data_47659160_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makenext__data_47659160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47659160_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)my__lut_58_841_51777100;
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

Block __50611640;

Block __51077900;

void code__51077900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value;
            idx = value2integer(make__51812540());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47659160_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51077900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51077900 = block;
   block->owner = (Object)__50611640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51077900;

   return block;
};

Block __50611400;

void code__50611400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51811100();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47659160_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50611400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50611400 = block;
   block->owner = (Object)__50611640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50611400;

   return block;
};

void code__50611640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51812940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51077900();
   }
   else {
  code__50611400();
   }
      }
   }
}

Block make__50611640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50611640 = block;
   block->owner = (Object)__51777480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50611640;

   return block;
};

Block __51781220;

void code__51781220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value;
            idx = value2integer(addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_46060540_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51781220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51781220 = block;
   block->owner = (Object)__51778680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51781220;

   return block;
};

Value make__51773940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51773920() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51773900() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51773860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51773840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51773820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51773800() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51773720() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51773700() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51773580() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51773560() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51813900() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51813760() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51813700() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51813680() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51813620() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51812940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51812540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51811100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __50580600;

SignalI lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makelut_50198040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__50580600;
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
         src0 = make__51773940();
         src1 = make__51773920();
         src2 = make__51773900();
         src3 = make__51773860();
         src4 = make__51773840();
         src5 = make__51773820();
         src6 = make__51773800();
         src7 = make__51773720();
         src8 = make__51773700();
         src9 = make__51773580();
         src10 = make__51773560();
         src11 = make__51813900();
         src12 = make__51813760();
         src13 = make__51813700();
         src14 = make__51813680();
         src15 = make__51813620();
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

Behavior __51777480;

Behavior make__51777480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51777480 = behavior;
   behavior->owner = (Object)__50580600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__50611640();

   return behavior;
}

Behavior __51778680;

Behavior make__51778680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51778680 = behavior;
   behavior->owner = (Object)__50580600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[lut_50198040___50580600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__51781220();

   return behavior;
}

Scope make__50580600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50580600 = scope;
   scope->owner = (Object)my__lut_58_841_51777100;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_50198040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51777480();
   scope->behaviors[1] = make__51778680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_841_51777100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_841_51777100 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_51773600();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_46060540();
   systemT->outputs[1] = makenext__data_47659160();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__50580600();

   return systemT;
}