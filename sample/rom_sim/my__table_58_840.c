#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__table_58_840_42486440;

SignalI addr_42591300_my__table_58_840_42486440___42346900______58_840_42662700;

SignalI makeaddr_42591300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_42591300_my__table_58_840_42486440___42346900______58_840_42662700 = signalI;
   signalI->owner = (Object)my__table_58_840_42486440;
   signalI->name = "addr";
   signalI->type = get_type_vector(get_type_bit(),2);
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

SignalI data_42614680_my__table_58_840_42486440___42346900______58_840_42662700;

SignalI makedata_42614680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   data_42614680_my__table_58_840_42486440___42346900______58_840_42662700 = signalI;
   signalI->owner = (Object)my__table_58_840_42486440;
   signalI->name = "data";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Block __43420240;

void code__43420240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = content_42434600___42366000_my__table_58_840_42486440___42346900______58_840_42662700->c_value;
            idx = value2integer(addr_42591300_my__table_58_840_42486440___42346900______58_840_42662700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),2),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),data_42614680_my__table_58_840_42486440___42346900______58_840_42662700);
      set_value_pos(pool_state);
   }
}

Block make__43420240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43420240 = block;
   block->owner = (Object)__43464720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43420240;

   return block;
};

Value make__43458580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__43507600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__43507040() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__43506860() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __42366000;

SignalI content_42434600___42366000_my__table_58_840_42486440___42346900______58_840_42662700;

SignalI makecontent_42434600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   content_42434600___42366000_my__table_58_840_42486440___42346900______58_840_42662700 = signalI;
   signalI->owner = (Object)__42366000;
   signalI->name = "content";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),2),4);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__43458580();
         src1 = make__43507600();
         src2 = make__43507040();
         src3 = make__43506860();
         concat_value(4,1,dst,src0,src1,src2,src3);
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

Behavior __43464720;

Behavior make__43464720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43464720 = behavior;
   behavior->owner = (Object)__42366000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_42591300_my__table_58_840_42486440___42346900______58_840_42662700);
   addr_42591300_my__table_58_840_42486440___42346900______58_840_42662700->num_any += 1;
   addr_42591300_my__table_58_840_42486440___42346900______58_840_42662700->any = realloc(addr_42591300_my__table_58_840_42486440___42346900______58_840_42662700->any,addr_42591300_my__table_58_840_42486440___42346900______58_840_42662700->num_any*sizeof(Object));
addr_42591300_my__table_58_840_42486440___42346900______58_840_42662700->any[addr_42591300_my__table_58_840_42486440___42346900______58_840_42662700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,content_42434600___42366000_my__table_58_840_42486440___42346900______58_840_42662700);
   content_42434600___42366000_my__table_58_840_42486440___42346900______58_840_42662700->num_any += 1;
   content_42434600___42366000_my__table_58_840_42486440___42346900______58_840_42662700->any = realloc(content_42434600___42366000_my__table_58_840_42486440___42346900______58_840_42662700->any,content_42434600___42366000_my__table_58_840_42486440___42346900______58_840_42662700->num_any*sizeof(Object));
content_42434600___42366000_my__table_58_840_42486440___42346900______58_840_42662700->any[content_42434600___42366000_my__table_58_840_42486440___42346900______58_840_42662700->num_any-1] = (Object)behavior;
   behavior->block = make__43420240();

   return behavior;
}

Scope make__42366000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42366000 = scope;
   scope->owner = (Object)my__table_58_840_42486440;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makecontent_42434600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__43464720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__table_58_840_42486440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__table_58_840_42486440 = systemT;
systemT->owner = NULL;
   systemT->name = "my_table:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_42591300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makedata_42614680();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__42366000();

   return systemT;
}