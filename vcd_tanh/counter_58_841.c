#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_56060760;

SignalI clk_56058920_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeclk_56058920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_56058920_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)counter_58_841_56060760;
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

SignalI ack_56058900_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack_56058900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_56058900_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)counter_58_841_56060760;
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

SignalI rst_56058880_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerst_56058880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_56058880_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)counter_58_841_56060760;
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

SignalI ack__mac_56058840_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__mac_56058840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_56058840_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)counter_58_841_56060760;
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

Block __56063800;

Block __56063580;

void code__56063580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57408320(),q_56063920_counter_58_84_56064300_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57408140(),ack__mac_56058840_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56063580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56063580 = block;
   block->owner = (Object)__56063800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56063580;

   return block;
};

Block __56062900;

Block __56062740;

Block __56061940;

void code__56061940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57407120(),q_56063920_counter_58_84_56064300_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57407040(),ack__mac_56058840_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56061940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56061940 = block;
   block->owner = (Object)__56062740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56061940;

   return block;
};

void code__56062740() {
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
                  src0 = q_56063920_counter_58_84_56064300_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57407440();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_56063920_counter_58_84_56064300_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_56063920_counter_58_84_56064300_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57407280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56061940();
   }
      }
   }
}

Block make__56062740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56062740 = block;
   block->owner = (Object)__56062900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56062740;

   return block;
};

void code__56062900() {
 code__56062740();
}

Block make__56062900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56062900 = block;
   block->owner = (Object)__56063800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56062900;

   return block;
};

void code__56063800() {
   {
      Value cond = rst_56058880_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56063580();
   }
   else if (value2integer(ack_56058900_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value)) {
  code__56062900();
   }
      }
   }
}

Block make__56063800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56063800 = block;
   block->owner = (Object)__56061080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56063800;

   return block;
};

Value make__57408320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57408140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57407440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57407280() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57407120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57407040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_56064300;

SignalI q_56063920_counter_58_84_56064300_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeq_56063920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_56063920_counter_58_84_56064300_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)counter_58_84_56064300;
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

Behavior __56061080;

Behavior make__56061080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56061080 = behavior;
   behavior->owner = (Object)counter_58_84_56064300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56058920_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_56058920_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg += 1;
   clk_56058920_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg = realloc(clk_56058920_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg,clk_56058920_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg*sizeof(Object));
clk_56058920_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg[clk_56058920_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg-1] = (Object)behavior;
   behavior->block = make__56063800();

   return behavior;
}

Scope makecounter_58_84_56064300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_56064300 = scope;
   scope->owner = (Object)counter_58_841_56060760;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_56063920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56061080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_56060760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_56060760 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_56058920();
   systemT->inputs[1] = makeack_56058900();
   systemT->inputs[2] = makerst_56058880();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_56058840();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_56064300();

   return systemT;
}