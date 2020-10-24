#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_54799020;

SignalI clk_54796580_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeclk_54796580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_54796580_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)counter_58_8400_54799020;
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

SignalI ack_54796560_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeack_54796560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_54796560_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)counter_58_8400_54799020;
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

SignalI rst_54796540_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makerst_54796540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_54796540_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)counter_58_8400_54799020;
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

SignalI ack__mac_54796500_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeack__mac_54796500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54796500_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)counter_58_8400_54799020;
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

Block __54780080;

Block __54803900;

void code__54803900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54833560(),q_54780460_counter_58_840_54781700_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54833420(),ack__mac_54796500_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54803900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54803900 = block;
   block->owner = (Object)__54780080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54803900;

   return block;
};

Block __54802560;

Block __54801600;

Block __54800660;

void code__54800660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54832800(),q_54780460_counter_58_840_54781700_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54832720(),ack__mac_54796500_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54800660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54800660 = block;
   block->owner = (Object)__54801600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54800660;

   return block;
};

void code__54801600() {
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
                  src0 = q_54780460_counter_58_840_54781700_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__54833000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_54780460_counter_58_840_54781700_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_54780460_counter_58_840_54781700_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54832880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54800660();
   }
      }
   }
}

Block make__54801600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54801600 = block;
   block->owner = (Object)__54802560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54801600;

   return block;
};

void code__54802560() {
 code__54801600();
}

Block make__54802560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54802560 = block;
   block->owner = (Object)__54780080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54802560;

   return block;
};

void code__54780080() {
   {
      Value cond = rst_54796540_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54803900();
   }
   else if (value2integer(ack_54796560_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value)) {
  code__54802560();
   }
      }
   }
}

Block make__54780080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54780080 = block;
   block->owner = (Object)__54799400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54780080;

   return block;
};

Value make__54833560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__54833420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54833000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54832880() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54832800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__54832720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_54781700;

SignalI q_54780460_counter_58_840_54781700_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeq_54780460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_54780460_counter_58_840_54781700_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)counter_58_840_54781700;
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

Behavior __54799400;

Behavior make__54799400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54799400 = behavior;
   behavior->owner = (Object)counter_58_840_54781700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54796580_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   clk_54796580_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_neg += 1;
   clk_54796580_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->neg = realloc(clk_54796580_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->neg,clk_54796580_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_neg*sizeof(Object));
clk_54796580_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->neg[clk_54796580_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_neg-1] = (Object)behavior;
   behavior->block = make__54780080();

   return behavior;
}

Scope makecounter_58_840_54781700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_54781700 = scope;
   scope->owner = (Object)counter_58_8400_54799020;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_54780460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54799400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_54799020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_54799020 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_54796580();
   systemT->inputs[1] = makeack_54796560();
   systemT->inputs[2] = makerst_54796540();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_54796500();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_54781700();

   return systemT;
}