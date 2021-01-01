#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_51013760;

SignalI clk_51032020_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeclk_51032020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51032020_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)counter_58_8400_51013760;
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

SignalI ack_51031980_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack_51031980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_51031980_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)counter_58_8400_51013760;
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

SignalI rst_51031900_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makerst_51031900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51031900_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)counter_58_8400_51013760;
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

SignalI ack__mac_51031860_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack__mac_51031860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51031860_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)counter_58_8400_51013760;
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

Block __51001840;

Block __51000680;

void code__51000680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57800380(),q_51002620_counter_58_840_50979040_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57800260(),ack__mac_51031860_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__51000680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51000680 = block;
   block->owner = (Object)__51001840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51000680;

   return block;
};

Block __51019180;

Block __51018960;

Block __51017140;

void code__51017140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57799640(),q_51002620_counter_58_840_50979040_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57799580(),ack__mac_51031860_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__51017140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51017140 = block;
   block->owner = (Object)__51018960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51017140;

   return block;
};

void code__51018960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = q_51002620_counter_58_840_50979040_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57800000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_51002620_counter_58_840_50979040_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51002620_counter_58_840_50979040_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57799780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51017140();
   }
      }
   }
}

Block make__51018960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51018960 = block;
   block->owner = (Object)__51019180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51018960;

   return block;
};

void code__51019180() {
 code__51018960();
}

Block make__51019180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51019180 = block;
   block->owner = (Object)__51001840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51019180;

   return block;
};

void code__51001840() {
   {
      Value cond = rst_51031900_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51000680();
   }
   else if (value2integer(ack_51031980_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value)) {
  code__51019180();
   }
      }
   }
}

Block make__51001840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51001840 = block;
   block->owner = (Object)__51014300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51001840;

   return block;
};

Value make__57800380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57800260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57800000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57799780() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57799640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57799580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_50979040;

SignalI q_51002620_counter_58_840_50979040_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeq_51002620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_51002620_counter_58_840_50979040_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)counter_58_840_50979040;
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

Behavior __51014300;

Behavior make__51014300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51014300 = behavior;
   behavior->owner = (Object)counter_58_840_50979040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51032020_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_51032020_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg += 1;
   clk_51032020_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg = realloc(clk_51032020_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg,clk_51032020_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg*sizeof(Object));
clk_51032020_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg[clk_51032020_counter_58_8400_51013760_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg-1] = (Object)behavior;
   behavior->block = make__51001840();

   return behavior;
}

Scope makecounter_58_840_50979040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_50979040 = scope;
   scope->owner = (Object)counter_58_8400_51013760;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_51002620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51014300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_51013760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_51013760 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51032020();
   systemT->inputs[1] = makeack_51031980();
   systemT->inputs[2] = makerst_51031900();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_51031860();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_50979040();

   return systemT;
}