#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_51087980;

SignalI clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeclk_51085500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)counter_58_841_51087980;
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

SignalI ack_51085480_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeack_51085480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_51085480_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)counter_58_841_51087980;
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

SignalI rst_51085460_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makerst_51085460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51085460_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)counter_58_841_51087980;
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

SignalI ack__mac_51085420_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeack__mac_51085420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51085420_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)counter_58_841_51087980;
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

Block __51069580;

Block __51069320;

void code__51069320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58190320(),q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58190180(),ack__mac_51085420_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__51069320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51069320 = block;
   block->owner = (Object)__51069580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51069320;

   return block;
};

Block __51092980;

void code__51092980() {
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
                  src0 = q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58189920();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__51092980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51092980 = block;
   block->owner = (Object)__51069580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51092980;

   return block;
};

void code__51069580() {
   {
      Value cond = rst_51085460_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51069320();
   }
   else if (value2integer(ack_51085480_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value)) {
  code__51092980();
   }
      }
   }
}

Block make__51069580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51069580 = block;
   block->owner = (Object)__51091880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51069580;

   return block;
};

Block __51091700;

Block __51091180;

void code__51091180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58189680(),q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__51091180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51091180 = block;
   block->owner = (Object)__51091700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51091180;

   return block;
};

void code__51091700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58189760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51091180();
   }
      }
   }
}

Block make__51091700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51091700 = block;
   block->owner = (Object)__51090240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51091700;

   return block;
};

Block __51090120;

Block __51089680;

void code__51089680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58189520(),ack__mac_51085420_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__51089680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51089680 = block;
   block->owner = (Object)__51090120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51089680;

   return block;
};

void code__51090120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58189600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51089680();
   }
      }
   }
}

Block make__51090120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51090120 = block;
   block->owner = (Object)__51088540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51090120;

   return block;
};

Value make__58190320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58190180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58189920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58189760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58189680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58189600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58189520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_51070240;

SignalI q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeq_51069780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)counter_58_84_51070240;
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

Behavior __51091880;

Behavior make__51091880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51091880 = behavior;
   behavior->owner = (Object)counter_58_84_51070240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_pos += 1;
   clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->pos = realloc(clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->pos,clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_pos*sizeof(Object));
clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->pos[clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_pos-1] = (Object)behavior;
   behavior->block = make__51069580();

   return behavior;
}

Behavior __51090240;

Behavior make__51090240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51090240 = behavior;
   behavior->owner = (Object)counter_58_84_51070240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_neg += 1;
   clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->neg = realloc(clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->neg,clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_neg*sizeof(Object));
clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->neg[clk_51085500_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_neg-1] = (Object)behavior;
   behavior->block = make__51091700();

   return behavior;
}

Behavior __51088540;

Behavior make__51088540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51088540 = behavior;
   behavior->owner = (Object)counter_58_84_51070240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[q_51069780_counter_58_84_51070240_counter_58_841_51087980_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__51090120();

   return behavior;
}

Scope makecounter_58_84_51070240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_51070240 = scope;
   scope->owner = (Object)counter_58_841_51087980;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_51069780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51091880();
   scope->behaviors[1] = make__51090240();
   scope->behaviors[2] = make__51088540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_51087980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_51087980 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51085500();
   systemT->inputs[1] = makeack_51085480();
   systemT->inputs[2] = makerst_51085460();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_51085420();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_51070240();

   return systemT;
}