#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_840_47770120;

SignalI addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makeaddr_47768100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)my__lut_58_840_47770120;
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

SignalI base_47906380_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makebase_47906380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47906380_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)my__lut_58_840_47770120;
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

SignalI next__data_48226880_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makenext__data_48226880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48226880_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)my__lut_58_840_47770120;
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

Block __44198600;

Block __46343180;

void code__46343180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
            idx = value2integer(make__47791840());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_48226880_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
}

Block make__46343180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46343180 = block;
   block->owner = (Object)__44198600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46343180;

   return block;
};

Block __44236040;

void code__44236040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__47791640();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_48226880_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
}

Block make__44236040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44236040 = block;
   block->owner = (Object)__44198600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44236040;

   return block;
};

void code__44198600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47792000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46343180();
   }
   else {
  code__44236040();
   }
      }
   }
}

Block make__44198600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44198600 = block;
   block->owner = (Object)__47770440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44198600;

   return block;
};

Block __47773140;

void code__47773140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
            idx = value2integer(addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_47906380_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
}

Block make__47773140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47773140 = block;
   block->owner = (Object)__47771760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47773140;

   return block;
};

Value make__47768300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47768280() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47768260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47768240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47768220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47768200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47768180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47768160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47768080() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47768060() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47767940() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47767880() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47767860() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47767840() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47767820() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47767800() {
   static unsigned long long data[] = { 4294967292ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47792000() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47791840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47791640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __48478000;

SignalI lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makelut_48521260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)__48478000;
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
         src0 = make__47768300();
         src1 = make__47768280();
         src2 = make__47768260();
         src3 = make__47768240();
         src4 = make__47768220();
         src5 = make__47768200();
         src6 = make__47768180();
         src7 = make__47768160();
         src8 = make__47768080();
         src9 = make__47768060();
         src10 = make__47767940();
         src11 = make__47767880();
         src12 = make__47767860();
         src13 = make__47767840();
         src14 = make__47767820();
         src15 = make__47767800();
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

Behavior __47770440;

Behavior make__47770440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47770440 = behavior;
   behavior->owner = (Object)__48478000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->block = make__44198600();

   return behavior;
}

Behavior __47771760;

Behavior make__47771760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47771760 = behavior;
   behavior->owner = (Object)__48478000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[lut_48521260___48478000_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->block = make__47773140();

   return behavior;
}

Scope make__48478000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48478000 = scope;
   scope->owner = (Object)my__lut_58_840_47770120;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_48521260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47770440();
   scope->behaviors[1] = make__47771760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_840_47770120() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_840_47770120 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_47768100();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_47906380();
   systemT->outputs[1] = makenext__data_48226880();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__48478000();

   return systemT;
}