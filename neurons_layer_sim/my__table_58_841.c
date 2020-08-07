#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__table_58_841_48115280;

SignalI addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700;

SignalI makeaddr_48113380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)my__table_58_841_48115280;
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

SignalI base_48113280_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700;

SignalI makebase_48113280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48113280_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)my__table_58_841_48115280;
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

SignalI next__data_48113200_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700;

SignalI makenext__data_48113200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48113200_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)my__table_58_841_48115280;
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

Block __48095260;

Block __48118580;

void code__48118580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value;
            idx = value2integer(addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_48113200_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
}

Block make__48118580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48118580 = block;
   block->owner = (Object)__48095260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48118580;

   return block;
};

Block __48119640;

void code__48119640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__41948240();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_48113200_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
}

Block make__48119640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48119640 = block;
   block->owner = (Object)__48095260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48119640;

   return block;
};

void code__48095260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__41933260();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48118580();
   }
   else {
  code__48119640();
   }
      }
   }
}

Block make__48095260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48095260 = block;
   block->owner = (Object)__48115600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48095260;

   return block;
};

Block __48893360;

void code__48893360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value;
            idx = value2integer(addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_48113280_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
}

Block make__48893360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48893360 = block;
   block->owner = (Object)__48892120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48893360;

   return block;
};

Value make__41868280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41867900() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41867120() {
   static unsigned long long data[] = { 5ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41866280() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41866220() {
   static unsigned long long data[] = { 10ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41866180() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41866120() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41865780() {
   static unsigned long long data[] = { 13ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41865680() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41865660() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41865580() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41861500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41893380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41893320() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41893220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41893120() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__41933260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__41948240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __48079160;

SignalI lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700;

SignalI makelut_48096020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)__48079160;
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
         src0 = make__41868280();
         src1 = make__41867900();
         src2 = make__41867120();
         src3 = make__41866280();
         src4 = make__41866220();
         src5 = make__41866180();
         src6 = make__41866120();
         src7 = make__41865780();
         src8 = make__41865680();
         src9 = make__41865660();
         src10 = make__41865580();
         src11 = make__41861500();
         src12 = make__41893380();
         src13 = make__41893320();
         src14 = make__41893220();
         src15 = make__41893120();
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

Behavior __48115600;

Behavior make__48115600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48115600 = behavior;
   behavior->owner = (Object)__48079160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->block = make__48095260();

   return behavior;
}

Behavior __48892120;

Behavior make__48892120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48892120 = behavior;
   behavior->owner = (Object)__48079160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[lut_48096020___48079160_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->block = make__48893360();

   return behavior;
}

Scope make__48079160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48079160 = scope;
   scope->owner = (Object)my__table_58_841_48115280;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_48096020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48115600();
   scope->behaviors[1] = make__48892120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__table_58_841_48115280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__table_58_841_48115280 = systemT;
systemT->owner = NULL;
   systemT->name = "my_table:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_48113380();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_48113280();
   systemT->outputs[1] = makenext__data_48113200();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__48079160();

   return systemT;
}