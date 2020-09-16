#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter0_58_840_52680080;

SignalI clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeclk_52677860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)counter0_58_840_52680080;
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

SignalI ack_52677840_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeack_52677840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_52677840_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)counter0_58_840_52680080;
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

SignalI rst_52677820_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makerst_52677820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52677820_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)counter0_58_840_52680080;
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

SignalI ack__mac_52677780_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeack__mac_52677780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_52677780_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)counter0_58_840_52680080;
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

Block __52660520;

Block __52660300;

void code__52660300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52560280(),q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52560220(),ack__mac_52677780_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52660300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52660300 = block;
   block->owner = (Object)__52660520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52660300;

   return block;
};

Block __52659520;

void code__52659520() {
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
                  src0 = q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52559960();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52659520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52659520 = block;
   block->owner = (Object)__52660520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52659520;

   return block;
};

void code__52660520() {
   {
      Value cond = rst_52677820_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52660300();
   }
   else if (value2integer(ack_52677840_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value)) {
  code__52659520();
   }
      }
   }
}

Block make__52660520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52660520 = block;
   block->owner = (Object)__52658600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52660520;

   return block;
};

Block __52658480;

Block __52682640;

void code__52682640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52862780(),q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52682640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52682640 = block;
   block->owner = (Object)__52658480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52682640;

   return block;
};

void code__52658480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52862860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52682640();
   }
      }
   }
}

Block make__52658480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52658480 = block;
   block->owner = (Object)__52681580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52658480;

   return block;
};

Block __52681460;

Block __52681080;

void code__52681080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52862620(),ack__mac_52677780_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52681080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52681080 = block;
   block->owner = (Object)__52681460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52681080;

   return block;
};

void code__52681460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52862700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52681080();
   }
      }
   }
}

Block make__52681460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52681460 = block;
   block->owner = (Object)__52680400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52681460;

   return block;
};

Value make__52560280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52560220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52559960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52862860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52862780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52862700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52862620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter0_58_84_52661020;

SignalI q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeq_52660640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)counter0_58_84_52661020;
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

Behavior __52658600;

Behavior make__52658600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52658600 = behavior;
   behavior->owner = (Object)counter0_58_84_52661020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos = realloc(clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos,clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos[clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__52660520();

   return behavior;
}

Behavior __52681580;

Behavior make__52681580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52681580 = behavior;
   behavior->owner = (Object)counter0_58_84_52661020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_neg += 1;
   clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->neg = realloc(clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->neg,clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_neg*sizeof(Object));
clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->neg[clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_neg-1] = (Object)behavior;
   behavior->block = make__52658480();

   return behavior;
}

Behavior __52680400;

Behavior make__52680400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52680400 = behavior;
   behavior->owner = (Object)counter0_58_84_52661020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[q_52660640_counter0_58_84_52661020_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__52681460();

   return behavior;
}

Scope makecounter0_58_84_52661020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter0_58_84_52661020 = scope;
   scope->owner = (Object)counter0_58_840_52680080;
   scope->name = "counter0:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_52660640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52658600();
   scope->behaviors[1] = make__52681580();
   scope->behaviors[2] = make__52680400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter0_58_840_52680080() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter0_58_840_52680080 = systemT;
systemT->owner = NULL;
   systemT->name = "counter0:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52677860();
   systemT->inputs[1] = makeack_52677840();
   systemT->inputs[2] = makerst_52677820();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_52677780();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter0_58_84_52661020();

   return systemT;
}