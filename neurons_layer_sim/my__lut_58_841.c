#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_841_52415480;

SignalI addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900;

SignalI makeaddr_52413380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)my__lut_58_841_52415480;
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

SignalI base_52505740_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900;

SignalI makebase_52505740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52505740_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)my__lut_58_841_52415480;
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

SignalI next__data_52614460_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900;

SignalI makenext__data_52614460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52614460_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)my__lut_58_841_52415480;
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

Block __49211000;

Block __52090640;

void code__52090640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value;
            idx = value2integer(make__49010020());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52614460_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__52090640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52090640 = block;
   block->owner = (Object)__49211000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52090640;

   return block;
};

Block __49210680;

void code__49210680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__49009420();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52614460_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__49210680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49210680 = block;
   block->owner = (Object)__49211000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49210680;

   return block;
};

void code__49211000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49010660();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52090640();
   }
   else {
  code__49210680();
   }
      }
   }
}

Block make__49211000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49211000 = block;
   block->owner = (Object)__52415900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49211000;

   return block;
};

Block __48971860;

void code__48971860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value;
            idx = value2integer(addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_52505740_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__48971860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48971860 = block;
   block->owner = (Object)__48992180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48971860;

   return block;
};

Value make__49012600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49012580() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49012560() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49012540() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49012460() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49012400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49012060() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49011860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49011840() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49011740() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49011720() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49011640() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49011620() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49011560() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49011540() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49011460() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49010660() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49010020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49009420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __42090320;

SignalI lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900;

SignalI makelut_48248940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)__42090320;
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
         src0 = make__49012600();
         src1 = make__49012580();
         src2 = make__49012560();
         src3 = make__49012540();
         src4 = make__49012460();
         src5 = make__49012400();
         src6 = make__49012060();
         src7 = make__49011860();
         src8 = make__49011840();
         src9 = make__49011740();
         src10 = make__49011720();
         src11 = make__49011640();
         src12 = make__49011620();
         src13 = make__49011560();
         src14 = make__49011540();
         src15 = make__49011460();
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

Behavior __52415900;

Behavior make__52415900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52415900 = behavior;
   behavior->owner = (Object)__42090320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__49211000();

   return behavior;
}

Behavior __48992180;

Behavior make__48992180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48992180 = behavior;
   behavior->owner = (Object)__42090320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[lut_48248940___42090320_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__48971860();

   return behavior;
}

Scope make__42090320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42090320 = scope;
   scope->owner = (Object)my__lut_58_841_52415480;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_48248940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52415900();
   scope->behaviors[1] = make__48992180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_841_52415480() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_841_52415480 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_52413380();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_52505740();
   systemT->outputs[1] = makenext__data_52614460();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__42090320();

   return systemT;
}