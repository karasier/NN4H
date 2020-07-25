#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__table_58_840_45166880;

SignalI addr_45163780_my__table_58_840_45166880___45170460______58_840_45216480;

SignalI makeaddr_45163780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_45163780_my__table_58_840_45166880___45170460______58_840_45216480 = signalI;
   signalI->owner = (Object)my__table_58_840_45166880;
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

SignalI data_45163620_my__table_58_840_45166880___45170460______58_840_45216480;

SignalI makedata_45163620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   data_45163620_my__table_58_840_45166880___45170460______58_840_45216480 = signalI;
   signalI->owner = (Object)my__table_58_840_45166880;
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

Block __45253280;

void code__45253280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = content_45167660___45169360_my__table_58_840_45166880___45170460______58_840_45216480->c_value;
            idx = value2integer(addr_45163780_my__table_58_840_45166880___45170460______58_840_45216480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),2),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),data_45163620_my__table_58_840_45166880___45170460______58_840_45216480);
      set_value_pos(pool_state);
   }
}

Block make__45253280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45253280 = block;
   block->owner = (Object)__45371100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45253280;

   return block;
};

Value make__44924120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44924100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44924080() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44923420() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __45169360;

SignalI content_45167660___45169360_my__table_58_840_45166880___45170460______58_840_45216480;

SignalI makecontent_45167660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   content_45167660___45169360_my__table_58_840_45166880___45170460______58_840_45216480 = signalI;
   signalI->owner = (Object)__45169360;
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
         src0 = make__44924120();
         src1 = make__44924100();
         src2 = make__44924080();
         src3 = make__44923420();
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

Behavior __45371100;

Behavior make__45371100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45371100 = behavior;
   behavior->owner = (Object)__45169360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_45163780_my__table_58_840_45166880___45170460______58_840_45216480);
   addr_45163780_my__table_58_840_45166880___45170460______58_840_45216480->num_any += 1;
   addr_45163780_my__table_58_840_45166880___45170460______58_840_45216480->any = realloc(addr_45163780_my__table_58_840_45166880___45170460______58_840_45216480->any,addr_45163780_my__table_58_840_45166880___45170460______58_840_45216480->num_any*sizeof(Object));
addr_45163780_my__table_58_840_45166880___45170460______58_840_45216480->any[addr_45163780_my__table_58_840_45166880___45170460______58_840_45216480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,content_45167660___45169360_my__table_58_840_45166880___45170460______58_840_45216480);
   content_45167660___45169360_my__table_58_840_45166880___45170460______58_840_45216480->num_any += 1;
   content_45167660___45169360_my__table_58_840_45166880___45170460______58_840_45216480->any = realloc(content_45167660___45169360_my__table_58_840_45166880___45170460______58_840_45216480->any,content_45167660___45169360_my__table_58_840_45166880___45170460______58_840_45216480->num_any*sizeof(Object));
content_45167660___45169360_my__table_58_840_45166880___45170460______58_840_45216480->any[content_45167660___45169360_my__table_58_840_45166880___45170460______58_840_45216480->num_any-1] = (Object)behavior;
   behavior->block = make__45253280();

   return behavior;
}

Scope make__45169360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45169360 = scope;
   scope->owner = (Object)my__table_58_840_45166880;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makecontent_45167660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45371100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__table_58_840_45166880() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__table_58_840_45166880 = systemT;
systemT->owner = NULL;
   systemT->name = "my_table:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_45163780();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makedata_45163620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__45169360();

   return systemT;
}