#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__table_58_841_45914960;

SignalI addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020;

SignalI makeaddr_45912320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)my__table_58_841_45914960;
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

SignalI base_45912220_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020;

SignalI makebase_45912220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_45912220_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)my__table_58_841_45914960;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI next__data_45912140_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020;

SignalI makenext__data_45912140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_45912140_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)my__table_58_841_45914960;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_bit(),8);
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

Block __45895060;

Block __45892320;

void code__45892320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->c_value;
            idx = value2integer(addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_45912140_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020);
      set_value_pos(pool_state);
   }
}

Block make__45892320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45892320 = block;
   block->owner = (Object)__45895060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45892320;

   return block;
};

Block __45894480;

void code__45894480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__48980640();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_45912140_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020);
      set_value_pos(pool_state);
   }
}

Block make__45894480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45894480 = block;
   block->owner = (Object)__45895060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45894480;

   return block;
};

void code__45895060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48980980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45892320();
   }
   else {
  code__45894480();
   }
      }
   }
}

Block make__45895060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45895060 = block;
   block->owner = (Object)__45915400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45895060;

   return block;
};

Block __48983780;

void code__48983780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->c_value;
            idx = value2integer(addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_45912220_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020);
      set_value_pos(pool_state);
   }
}

Block make__48983780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48983780 = block;
   block->owner = (Object)__48982860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48983780;

   return block;
};

Value make__48981560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981540() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981520() {
   static unsigned long long data[] = { 5ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981500() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981480() {
   static unsigned long long data[] = { 10ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981460() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981440() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981420() {
   static unsigned long long data[] = { 13ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981400() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981380() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981320() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981280() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48981260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48980980() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48980640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __45882580;

SignalI lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020;

SignalI makelut_45896680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)__45882580;
   signalI->name = "lut";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),8),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__48981560();
         src1 = make__48981540();
         src2 = make__48981520();
         src3 = make__48981500();
         src4 = make__48981480();
         src5 = make__48981460();
         src6 = make__48981440();
         src7 = make__48981420();
         src8 = make__48981400();
         src9 = make__48981380();
         src10 = make__48981360();
         src11 = make__48981340();
         src12 = make__48981320();
         src13 = make__48981300();
         src14 = make__48981280();
         src15 = make__48981260();
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

Behavior __45915400;

Behavior make__45915400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45915400 = behavior;
   behavior->owner = (Object)__45882580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020);
   addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any += 1;
   addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->any = realloc(addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->any,addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any*sizeof(Object));
addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->any[addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020);
   lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any += 1;
   lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->any = realloc(lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->any,lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any*sizeof(Object));
lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->any[lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any-1] = (Object)behavior;
   behavior->block = make__45895060();

   return behavior;
}

Behavior __48982860;

Behavior make__48982860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48982860 = behavior;
   behavior->owner = (Object)__45882580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020);
   addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any += 1;
   addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->any = realloc(addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->any,addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any*sizeof(Object));
addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->any[addr_45912320_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020);
   lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any += 1;
   lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->any = realloc(lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->any,lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any*sizeof(Object));
lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->any[lut_45896680___45882580_my__table_58_841_45914960___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any-1] = (Object)behavior;
   behavior->block = make__48983780();

   return behavior;
}

Scope make__45882580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45882580 = scope;
   scope->owner = (Object)my__table_58_841_45914960;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_45896680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45915400();
   scope->behaviors[1] = make__48982860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__table_58_841_45914960() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__table_58_841_45914960 = systemT;
systemT->owner = NULL;
   systemT->name = "my_table:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_45912320();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_45912220();
   systemT->outputs[1] = makenext__data_45912140();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__45882580();

   return systemT;
}