#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_47477760;

SignalI clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeclk_47507480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)counter_58_8400_47477760;
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

SignalI ack_47507460_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeack_47507460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_47507460_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)counter_58_8400_47477760;
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

SignalI rst_47507440_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makerst_47507440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_47507440_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)counter_58_8400_47477760;
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

SignalI ack__mac_47507380_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeack__mac_47507380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_47507380_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)counter_58_8400_47477760;
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

Block __47282580;

Block __47281360;

void code__47281360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58910220(),q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58910160(),ack__mac_47507380_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__47281360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47281360 = block;
   block->owner = (Object)__47282580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47281360;

   return block;
};

Block __47278440;

void code__47278440() {
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
                  src0 = q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58909920();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__47278440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47278440 = block;
   block->owner = (Object)__47282580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47278440;

   return block;
};

void code__47282580() {
   {
      Value cond = rst_47507440_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47281360();
   }
   else if (value2integer(ack_47507460_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value)) {
  code__47278440();
   }
      }
   }
}

Block make__47282580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47282580 = block;
   block->owner = (Object)__47316080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47282580;

   return block;
};

Block __47315580;

Block __47315100;

void code__47315100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58909380(),q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__47315100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47315100 = block;
   block->owner = (Object)__47315580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47315100;

   return block;
};

void code__47315580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58909500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47315100();
   }
      }
   }
}

Block make__47315580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47315580 = block;
   block->owner = (Object)__47309460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47315580;

   return block;
};

Block __47332180;

Block __47330900;

void code__47330900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58909060(),ack__mac_47507380_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__47330900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47330900 = block;
   block->owner = (Object)__47332180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47330900;

   return block;
};

void code__47332180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58909200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47330900();
   }
      }
   }
}

Block make__47332180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47332180 = block;
   block->owner = (Object)__47329500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47332180;

   return block;
};

Value make__58910220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58910160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58909920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58909500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58909380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58909200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58909060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_47410300;

SignalI q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeq_47282860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)counter_58_840_47410300;
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

Behavior __47316080;

Behavior make__47316080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47316080 = behavior;
   behavior->owner = (Object)counter_58_840_47410300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_pos += 1;
   clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->pos = realloc(clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->pos,clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_pos*sizeof(Object));
clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->pos[clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_pos-1] = (Object)behavior;
   behavior->block = make__47282580();

   return behavior;
}

Behavior __47309460;

Behavior make__47309460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47309460 = behavior;
   behavior->owner = (Object)counter_58_840_47410300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_neg += 1;
   clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->neg = realloc(clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->neg,clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_neg*sizeof(Object));
clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->neg[clk_47507480_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_neg-1] = (Object)behavior;
   behavior->block = make__47315580();

   return behavior;
}

Behavior __47329500;

Behavior make__47329500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47329500 = behavior;
   behavior->owner = (Object)counter_58_840_47410300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[q_47282860_counter_58_840_47410300_counter_58_8400_47477760_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__47332180();

   return behavior;
}

Scope makecounter_58_840_47410300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_47410300 = scope;
   scope->owner = (Object)counter_58_8400_47477760;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_47282860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47316080();
   scope->behaviors[1] = make__47309460();
   scope->behaviors[2] = make__47329500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_47477760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_47477760 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_47507480();
   systemT->inputs[1] = makeack_47507460();
   systemT->inputs[2] = makerst_47507440();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_47507380();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_47410300();

   return systemT;
}