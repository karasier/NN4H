#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_841_49106480;

SignalI addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380;

SignalI makeaddr_49127140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)my__lut_58_841_49106480;
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

SignalI base_49259860_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380;

SignalI makebase_49259860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49259860_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)my__lut_58_841_49106480;
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

SignalI next__data_49378740_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380;

SignalI makenext__data_49378740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49378740_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)my__lut_58_841_49106480;
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

Block __46323440;

Block __48633740;

void code__48633740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value;
            idx = value2integer(make__53741560());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49378740_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__48633740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48633740 = block;
   block->owner = (Object)__46323440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48633740;

   return block;
};

Block __46323140;

void code__46323140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__53741360();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49378740_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__46323140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46323140 = block;
   block->owner = (Object)__46323440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46323140;

   return block;
};

void code__46323440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53741680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48633740();
   }
   else {
  code__46323140();
   }
      }
   }
}

Block make__46323440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46323440 = block;
   block->owner = (Object)__49106920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46323440;

   return block;
};

Block __53745740;

void code__53745740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value;
            idx = value2integer(addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_49259860_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__53745740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53745740 = block;
   block->owner = (Object)__53744120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53745740;

   return block;
};

Value make__53742440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742420() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742320() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742280() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742260() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742240() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742220() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742180() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742160() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742080() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742060() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53742040() {
   static unsigned long long data[] = { 4294967292ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53741680() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53741560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53741360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __53745060;

SignalI lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380;

SignalI makelut_53870440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)__53745060;
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
         src0 = make__53742440();
         src1 = make__53742420();
         src2 = make__53742400();
         src3 = make__53742380();
         src4 = make__53742340();
         src5 = make__53742320();
         src6 = make__53742300();
         src7 = make__53742280();
         src8 = make__53742260();
         src9 = make__53742240();
         src10 = make__53742220();
         src11 = make__53742180();
         src12 = make__53742160();
         src13 = make__53742080();
         src14 = make__53742060();
         src15 = make__53742040();
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

Behavior __49106920;

Behavior make__49106920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49106920 = behavior;
   behavior->owner = (Object)__53745060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__46323440();

   return behavior;
}

Behavior __53744120;

Behavior make__53744120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53744120 = behavior;
   behavior->owner = (Object)__53745060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[lut_53870440___53745060_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53745740();

   return behavior;
}

Scope make__53745060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __53745060 = scope;
   scope->owner = (Object)my__lut_58_841_49106480;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_53870440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49106920();
   scope->behaviors[1] = make__53744120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_841_49106480() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_841_49106480 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_49127140();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_49259860();
   systemT->outputs[1] = makenext__data_49378740();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__53745060();

   return systemT;
}