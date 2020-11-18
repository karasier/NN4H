#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8420_71278040;

SignalI clk_71275620_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeclk_71275620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_71275620_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)counter_58_8420_71278040;
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

SignalI ack_71275600_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack_71275600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_71275600_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)counter_58_8420_71278040;
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

SignalI rst_71275580_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerst_71275580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_71275580_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)counter_58_8420_71278040;
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

SignalI ack__mac_71275540_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack__mac_71275540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_71275540_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)counter_58_8420_71278040;
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

Block __71257140;

Block __71256900;

void code__71256900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74046760(),q_71257320_counter_58_842_71257760_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74046600(),ack__mac_71275540_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71256900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71256900 = block;
   block->owner = (Object)__71257140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71256900;

   return block;
};

Block __71256060;

Block __71255840;

Block __71254900;

void code__71254900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__74045480(),q_71257320_counter_58_842_71257760_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__74045400(),ack__mac_71275540_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71254900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71254900 = block;
   block->owner = (Object)__71255840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71254900;

   return block;
};

void code__71255840() {
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
                  src0 = q_71257320_counter_58_842_71257760_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__74045820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_71257320_counter_58_842_71257760_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_71257320_counter_58_842_71257760_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__74045700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__71254900();
   }
      }
   }
}

Block make__71255840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71255840 = block;
   block->owner = (Object)__71256060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71255840;

   return block;
};

void code__71256060() {
 code__71255840();
}

Block make__71256060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71256060 = block;
   block->owner = (Object)__71257140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71256060;

   return block;
};

void code__71257140() {
   {
      Value cond = rst_71275580_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__71256900();
   }
   else if (value2integer(ack_71275600_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value)) {
  code__71256060();
   }
      }
   }
}

Block make__71257140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71257140 = block;
   block->owner = (Object)__71278460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71257140;

   return block;
};

Value make__74046760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__74046600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74045820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74045700() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74045480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__74045400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_842_71257760;

SignalI q_71257320_counter_58_842_71257760_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeq_71257320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_71257320_counter_58_842_71257760_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)counter_58_842_71257760;
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

Behavior __71278460;

Behavior make__71278460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71278460 = behavior;
   behavior->owner = (Object)counter_58_842_71257760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_71275620_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_71275620_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_71275620_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg = realloc(clk_71275620_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg,clk_71275620_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_71275620_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg[clk_71275620_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__71257140();

   return behavior;
}

Scope makecounter_58_842_71257760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_842_71257760 = scope;
   scope->owner = (Object)counter_58_8420_71278040;
   scope->name = "counter:T2";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_71257320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__71278460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8420_71278040() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8420_71278040 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T20";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_71275620();
   systemT->inputs[1] = makeack_71275600();
   systemT->inputs[2] = makerst_71275580();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_71275540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_842_71257760();

   return systemT;
}