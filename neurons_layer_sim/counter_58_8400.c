#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_59327720;

SignalI clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeclk_59350420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)counter_58_8400_59327720;
   signalI->name = "clk";
   signalI->type = get_type_bit();
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

SignalI ack_59350400_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeack_59350400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_59350400_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)counter_58_8400_59327720;
   signalI->name = "ack";
   signalI->type = get_type_bit();
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

SignalI rst_59350380_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makerst_59350380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59350380_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)counter_58_8400_59327720;
   signalI->name = "rst";
   signalI->type = get_type_bit();
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

SignalI ack__mac_59350340_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeack__mac_59350340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_59350340_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)counter_58_8400_59327720;
   signalI->name = "ack_mac";
   signalI->type = get_type_bit();
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

Block __59332120;

Block __59331900;

void code__59331900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47778380(),q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47777460(),ack__mac_59350340_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59331900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59331900 = block;
   block->owner = (Object)__59332120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59331900;

   return block;
};

Block __59331220;

void code__59331220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47776460();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59331220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59331220 = block;
   block->owner = (Object)__59332120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59331220;

   return block;
};

void code__59332120() {
   {
      Value cond = rst_59350380_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59331900();
   }
   else if (value2integer(ack_59350400_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value)) {
  code__59331220();
   }
      }
   }
}

Block make__59332120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59332120 = block;
   block->owner = (Object)__59330400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59332120;

   return block;
};

Block __59330280;

Block __59329900;

void code__59329900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47798720(),q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59329900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59329900 = block;
   block->owner = (Object)__59330280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59329900;

   return block;
};

void code__59330280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47799480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59329900();
   }
      }
   }
}

Block make__59330280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59330280 = block;
   block->owner = (Object)__59329220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59330280;

   return block;
};

Block __59329100;

Block __59328720;

void code__59328720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47797380(),ack__mac_59350340_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59328720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59328720 = block;
   block->owner = (Object)__59329100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59328720;

   return block;
};

void code__59329100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47798280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59328720();
   }
      }
   }
}

Block make__59329100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59329100 = block;
   block->owner = (Object)__59328040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59329100;

   return block;
};

Value make__47778380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__47777460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47776460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47799480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47798720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__47798280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47797380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_59332620;

SignalI q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeq_59332240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)counter_58_840_59332620;
   signalI->name = "q";
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

Behavior __59330400;

Behavior make__59330400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59330400 = behavior;
   behavior->owner = (Object)counter_58_840_59332620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos = realloc(clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos,clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos[clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__59332120();

   return behavior;
}

Behavior __59329220;

Behavior make__59329220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59329220 = behavior;
   behavior->owner = (Object)counter_58_840_59332620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_neg += 1;
   clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->neg = realloc(clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->neg,clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_neg*sizeof(Object));
clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->neg[clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_neg-1] = (Object)behavior;
   behavior->block = make__59330280();

   return behavior;
}

Behavior __59328040;

Behavior make__59328040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59328040 = behavior;
   behavior->owner = (Object)counter_58_840_59332620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[q_59332240_counter_58_840_59332620_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__59329100();

   return behavior;
}

Scope makecounter_58_840_59332620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_59332620 = scope;
   scope->owner = (Object)counter_58_8400_59327720;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_59332240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59330400();
   scope->behaviors[1] = make__59329220();
   scope->behaviors[2] = make__59328040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_59327720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_59327720 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59350420();
   systemT->inputs[1] = makeack_59350400();
   systemT->inputs[2] = makerst_59350380();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_59350340();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_59332620();

   return systemT;
}