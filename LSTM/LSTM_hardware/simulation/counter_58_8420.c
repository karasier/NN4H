#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8420_73487920;

SignalI clk_73486080_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeclk_73486080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_73486080_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)counter_58_8420_73487920;
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

SignalI ack_73486060_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack_73486060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_73486060_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)counter_58_8420_73487920;
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

SignalI rst_73486040_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makerst_73486040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_73486040_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)counter_58_8420_73487920;
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

SignalI ack__mac_73486000_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack__mac_73486000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_73486000_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)counter_58_8420_73487920;
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

Block __73450040;

Block __73449820;

void code__73449820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79358900(),q_73450160_counter_58_842_73450540_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79358840(),ack__mac_73486000_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__73449820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73449820 = block;
   block->owner = (Object)__73450040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73449820;

   return block;
};

Block __73490060;

Block __73489900;

Block __73489100;

void code__73489100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79358440(),q_73450160_counter_58_842_73450540_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79358380(),ack__mac_73486000_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__73489100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73489100 = block;
   block->owner = (Object)__73489900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73489100;

   return block;
};

void code__73489900() {
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
                  src0 = q_73450160_counter_58_842_73450540_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79358640();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_73450160_counter_58_842_73450540_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_73450160_counter_58_842_73450540_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79358520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73489100();
   }
      }
   }
}

Block make__73489900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73489900 = block;
   block->owner = (Object)__73490060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73489900;

   return block;
};

void code__73490060() {
 code__73489900();
}

Block make__73490060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73490060 = block;
   block->owner = (Object)__73450040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73490060;

   return block;
};

void code__73450040() {
   {
      Value cond = rst_73486040_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73449820();
   }
   else if (value2integer(ack_73486060_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value)) {
  code__73490060();
   }
      }
   }
}

Block make__73450040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73450040 = block;
   block->owner = (Object)__73488240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73450040;

   return block;
};

Value make__79358900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__79358840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79358640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79358520() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79358440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__79358380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_842_73450540;

SignalI q_73450160_counter_58_842_73450540_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeq_73450160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_73450160_counter_58_842_73450540_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)counter_58_842_73450540;
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

Behavior __73488240;

Behavior make__73488240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73488240 = behavior;
   behavior->owner = (Object)counter_58_842_73450540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_73486080_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_73486080_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_73486080_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg = realloc(clk_73486080_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg,clk_73486080_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_73486080_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg[clk_73486080_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__73450040();

   return behavior;
}

Scope makecounter_58_842_73450540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_842_73450540 = scope;
   scope->owner = (Object)counter_58_8420_73487920;
   scope->name = "counter:T2";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_73450160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__73488240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8420_73487920() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8420_73487920 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T20";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_73486080();
   systemT->inputs[1] = makeack_73486060();
   systemT->inputs[2] = makerst_73486040();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_73486000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_842_73450540();

   return systemT;
}