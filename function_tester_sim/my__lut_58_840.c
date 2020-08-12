#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_840_47597180;

SignalI addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makeaddr_47619460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)my__lut_58_840_47597180;
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

SignalI base_47330920_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makebase_47330920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47330920_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)my__lut_58_840_47597180;
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

SignalI next__data_47554280_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makenext__data_47554280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47554280_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)my__lut_58_840_47597180;
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

Block __48031720;

Block __45202540;

void code__45202540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
            idx = value2integer(make__50463340());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47554280_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
}

Block make__45202540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45202540 = block;
   block->owner = (Object)__48031720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45202540;

   return block;
};

Block __48031440;

void code__48031440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__50463140();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47554280_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
}

Block make__48031440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48031440 = block;
   block->owner = (Object)__48031720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48031440;

   return block;
};

void code__48031720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50463460();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45202540();
   }
   else {
  code__48031440();
   }
      }
   }
}

Block make__48031720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48031720 = block;
   block->owner = (Object)__47597660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48031720;

   return block;
};

Block __50466260;

void code__50466260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
            idx = value2integer(addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_47330920_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
}

Block make__50466260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50466260 = block;
   block->owner = (Object)__50465340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50466260;

   return block;
};

Value make__50464040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50464020() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50464000() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463980() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463920() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463900() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463880() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463860() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463840() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463820() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463800() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463780() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463760() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463740() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50463460() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50463340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50463140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47534560;

SignalI lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makelut_47329980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)__47534560;
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
         src0 = make__50464040();
         src1 = make__50464020();
         src2 = make__50464000();
         src3 = make__50463980();
         src4 = make__50463960();
         src5 = make__50463940();
         src6 = make__50463920();
         src7 = make__50463900();
         src8 = make__50463880();
         src9 = make__50463860();
         src10 = make__50463840();
         src11 = make__50463820();
         src12 = make__50463800();
         src13 = make__50463780();
         src14 = make__50463760();
         src15 = make__50463740();
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

Behavior __47597660;

Behavior make__47597660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47597660 = behavior;
   behavior->owner = (Object)__47534560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->block = make__48031720();

   return behavior;
}

Behavior __50465340;

Behavior make__50465340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50465340 = behavior;
   behavior->owner = (Object)__47534560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[lut_47329980___47534560_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->block = make__50466260();

   return behavior;
}

Scope make__47534560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47534560 = scope;
   scope->owner = (Object)my__lut_58_840_47597180;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_47329980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47597660();
   scope->behaviors[1] = make__50465340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_840_47597180() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_840_47597180 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_47619460();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_47330920();
   systemT->outputs[1] = makenext__data_47554280();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47534560();

   return systemT;
}