#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_47474100;

SignalI clk_47574980_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeclk_47574980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_47574980_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)counter_58_8400_47474100;
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

SignalI ack_47574900_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeack_47574900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_47574900_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)counter_58_8400_47474100;
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

SignalI rst_47574840_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makerst_47574840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_47574840_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)counter_58_8400_47474100;
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

SignalI ack__mac_47574680_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeack__mac_47574680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_47574680_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)counter_58_8400_47474100;
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

Block __47410980;

Block __47408720;

void code__47408720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58039120(),q_47394520_counter_58_840_47395380_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58039060(),ack__mac_47574680_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__47408720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47408720 = block;
   block->owner = (Object)__47410980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47408720;

   return block;
};

Block __47427640;

Block __47425040;

Block __47441300;

void code__47441300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__58038660(),q_47394520_counter_58_840_47395380_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__58038580(),ack__mac_47574680_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__47441300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47441300 = block;
   block->owner = (Object)__47425040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47441300;

   return block;
};

void code__47425040() {
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
                  src0 = q_47394520_counter_58_840_47395380_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58038860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_47394520_counter_58_840_47395380_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_47394520_counter_58_840_47395380_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58038740();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47441300();
   }
      }
   }
}

Block make__47425040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47425040 = block;
   block->owner = (Object)__47427640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47425040;

   return block;
};

void code__47427640() {
 code__47425040();
}

Block make__47427640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47427640 = block;
   block->owner = (Object)__47410980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47427640;

   return block;
};

void code__47410980() {
   {
      Value cond = rst_47574840_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47408720();
   }
   else if (value2integer(ack_47574900_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value)) {
  code__47427640();
   }
      }
   }
}

Block make__47410980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47410980 = block;
   block->owner = (Object)__47477240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47410980;

   return block;
};

Value make__58039120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58039060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58038860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58038740() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58038660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58038580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_47395380;

SignalI q_47394520_counter_58_840_47395380_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeq_47394520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_47394520_counter_58_840_47395380_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)counter_58_840_47395380;
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

Behavior __47477240;

Behavior make__47477240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47477240 = behavior;
   behavior->owner = (Object)counter_58_840_47395380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47574980_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   clk_47574980_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_neg += 1;
   clk_47574980_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->neg = realloc(clk_47574980_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->neg,clk_47574980_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_neg*sizeof(Object));
clk_47574980_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->neg[clk_47574980_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_neg-1] = (Object)behavior;
   behavior->block = make__47410980();

   return behavior;
}

Scope makecounter_58_840_47395380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_47395380 = scope;
   scope->owner = (Object)counter_58_8400_47474100;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_47394520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47477240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_47474100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_47474100 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_47574980();
   systemT->inputs[1] = makeack_47574900();
   systemT->inputs[2] = makerst_47574840();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_47574680();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_47395380();

   return systemT;
}